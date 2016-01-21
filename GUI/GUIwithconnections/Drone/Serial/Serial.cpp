//
//  serial_port.cpp
//  serial_port
//
//  Created by Louis Faury on 09/06/2015.
//  Copyright (c) 2015 Louis Faury. All rights reserved.
//

#include "Serial.h"





//-----------------------------------------------------------------------------------------------------------------//

Serial::Serial() : file(0)
{
}


Serial::Serial(const char* port_name, long unsigned int baud_rate){


    port_name = port_name;

    struct termios options;

    // Open device
    file = open(port_name, O_RDWR | O_NOCTTY | O_NDELAY);       // Open port
    if (file == -1) throw serial_exception(1,"Failed to open port",0);
    fcntl(file, F_SETFL, FNDELAY);                              // Open in in non-blocking mod

    //Set parameter
    tcgetattr(file, &options);                                  // Get the current options of the port
    bzero(&options, sizeof(options));
    speed_t Speed;
    switch(baud_rate)
    {
        case 4800   : Speed=B4800;   break;
        case 9600   : Speed=B9600;   break;
        case 19200  : Speed=B19200;  break;
        case 115200 : Speed=B115200; break;
        default : throw std::invalid_argument("Unvalid baud rate for the device !");
    }

    cfsetispeed(&options, Speed);                               // Set the baud rate
    cfsetospeed(&options, Speed);
    options.c_cflag |= ( CLOCAL | CREAD | CS8);                 // Configuring the device : 8 bits, no parity, no control !
    options.c_iflag |= (IGNPAR | IGNBRK);
    options.c_cc[VTIME]=0;                                      // Timer unused
    options.c_cc[VMIN]=0;                                       // At least on character before satisfy reading
    tcsetattr(file, TCSANOW, &options);                         // Activate the settings

    sleep(2);                                                   //required to make flush work, for some reason (couldn't find why !)
    tcflush(file,TCIOFLUSH);

    std::cout << "Succeeded connecting " << port_name << " and setting options !" << std::endl;
    //Telling the user the connection was made succesfully

}



const std::string Serial::getPortName() const
{
    std::string str(port_name);
    return str;

}


void Serial::Close()
{
    close(file);
}


bool Serial::isOpen()
{
    if (file == -1) return false;
    return true;
}

Serial::~Serial(){
    close(file);
}




//-----------------------------------------------------------------------------------------------------------------//



                            // ------------------------------------- //
                            // ::: Read/Write operation on bytes ::: //
                            // ------------------------------------- //







int Serial::write_bytes(const void *buffer, const unsigned int nbBytes)
{
    if (write (file,buffer,nbBytes)!=(ssize_t)nbBytes)                        // Write data
        return -1;                                                            // Error while writing
    return 1;
}




int Serial::read_bytes(void *buffer, unsigned int maxNbBytes)
{

    unsigned int     NbByteRead=0;
    while (1) {
        unsigned char* Ptr=(unsigned char*)buffer+NbByteRead;           // Compute the position of the current byte
        int Ret=read(file,(void*)Ptr,maxNbBytes-NbByteRead);            // Try to read a byte on the device
        if (Ret==-1) return -1;                                         // Error while reading
        if (Ret>0) {                                                    // One or several byte(s) has been read on the device
            NbByteRead+=Ret;                                            // Increase the number of read bytes
                if (NbByteRead>=maxNbBytes) return 1;                             // Success : bytes has been read
                }
    }
    return 0;
}



//-----------------------------------------------------------------------------------------------------------------//



                            // ------------------------------------- //
                            // ::: Read/Write operation on char. ::: //
                            // ------------------------------------- //





int Serial::readChar(char* buffer)
{
    switch (read(file,buffer,1)) {
        case -1  : return  -1;
        case  1  :  return  1;
    }
    return 0;
}




int Serial::readLine(char* string_buffer){

    return this->readString(string_buffer, '\n', 128);

}



int Serial::writeString(const char *String)
{
    int length=strlen(String);                                  // Length of the string
    if (write(file,String,length)!=length) return -1;             // Write the string and returns -1 if error
    return 1;
}




int Serial::readString(char *String,char FinalChar,unsigned int MaxNbBytes)
{
    unsigned int    NbBytes=0;                                          // Number of bytes read
    char            ret;                                                // Returned value from Read
    while (NbBytes<MaxNbBytes)                                          // While the buffer is not full
    {                                                                   // Read a byte with the restant time
        ret=readChar(&String[NbBytes]);
        if (ret==1)                                                     // If a byte has been read
        {
            if (String[NbBytes]==FinalChar)                             // Check if it is the final char
            {
                String  [++NbBytes]=0;                                  // Yes : add the end character 0
                return NbBytes;                                         // Return the number of bytes read
            }
            NbBytes++;                                                  // If not, just increase the number of bytes read
        }
        if(ret==0){
	  usleep(5000);
	}
        if (ret<0) return ret;                                          // Error while reading : return the error number
    }
    return -3;                                                          // Buffer is full : return -3
}
