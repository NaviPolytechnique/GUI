//
//  Header.h
//  serial_port
//
//  Created by Louis Faury on 09/06/2015.
//  Copyright (c) 2015 Louis Faury. All rights reserved.
//

#ifndef Serial_Header_h
#define Serial_Header_h


#include <stdlib.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <termios.h>
#include <string.h>
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <stdexcept>
#include "../serial_exception/serial_exception.hpp"

#include "pthread.h"
#include "assert.h"
#include "../Utils/BlockingQueue.h"
#include <unistd.h>




class Serial{

public:


    /**------------------------------------------------------------------------------------------------
     * \brief Creates an instance of serial port without opening any
     **/

    Serial();

    //-------------------------------------------------------------------------------------------------//




    /**------------------------------------------------------------------------------------------------
     * \brief Get the port name and return a string
     **/

    const std::string getPortName() const;

    //-------------------------------------------------------------------------------------------------//





    /**------------------------------------------------------------------------------------------------
     * \brief Creates an instance of serial port, given the name of the port ("\dev\ttyS0" or "\dev\ttyUSB0") in the form of a string and its baudrate
     * \param string name of the port
     * \param baudrate of the device
     * WARNING : Baudrate must be acceptable :
     * B4800, B9600, B19200, B115200 for now
     * By default, daud_rate is set to 9600
     **/

    Serial(const char*, long unsigned int baud_rate = 9600);

    //-------------------------------------------------------------------------------------------------//



    /** \brief Checks if the device is open
     * Returns true if it is, false eitherwise
     **/

    bool isOpen();

    //-------------------------------------------------------------------------------------------------//




//-----------------------------------------------------------------------------------------------------------------//


                            // ------------------------------------- //
                            // ::: Read/Write operation on bytes ::: //
                            // ------------------------------------- //




    /** ------------------------------------------------------------------------------------------------
     * \brief Writes an array of bytes
     * \param Pointeur to a buffer containing the byte to write
     * \param Number of bytes written
     * Will return 1 if success, -1 if not
     **/

    int write_bytes(const void *buffer, const unsigned int nbBytes);

    //-------------------------------------------------------------------------------------------------//



    /** ------------------------------------------------------------------------------------------------
     * \brief reads an array of bytes without timeout /!\ Couldn't instanciate Timer type !
     * \param Buffer of bytes read from the serial port
     * \param Maximum allowed number of bytes to be read
     * Return 1 if success
     *       -1 if error during reading the bytes
     **/

    int read_bytes(void *buffer,unsigned int maxNbBytes);

    //-------------------------------------------------------------------------------------------------//




                            // --------------------------------------- //
                            // ::: Read/Write operation on strings ::: //
                            // --------------------------------------- //







    /** ------------------------------------------------------------------------------------------------
     * \brief Write a string to the serial port
     * \param The const char you're willing to write on the serial port
     **/

    int writeString(const char *String);

    //-------------------------------------------------------------------------------------------------//



    /** ------------------------------------------------------------------------------------------------
     * \brief Read a line from the serial port
     * \brief No timeout (will wait for a line to come.. kind of shitty but will be eventually be change
     * \param : no parameters, will return the string of the line
     * Line must end with '\n' tag (back to line) or std::endl (this also flush the device)
     **/

    int readLine(char* string_buffer);

    //-------------------------------------------------------------------------------------------------//


    /** ------------------------------------------------------------------------------------------------
     * \brief Read a char from the serial port without Timeout
     * \brief Returns 1 if succeed, -1 if failed, and 0 if something odd happens (shit happens)
     * \param ptr to a char (buffer of the char)
     **/

    int readChar(char*);

    //-------------------------------------------------------------------------------------------------//



    /** ------------------------------------------------------------------------------------------------
     \brief Read a string from the serial device (without TimeOut)
     \param String : string read on the serial device
     \param FinalChar : final char of the string
     \param MaxNbBytes : maximum allowed number of bytes read
     \return >0 success, return the number of bytes read
     \return -1 error while setting the Timeout
     \return -2 error while reading the byte
     \return -3 MaxNbBytes is reached
     */
    int readString(char *String,char FinalChar,unsigned int MaxNbBytes);

    //-------------------------------------------------------------------------------------------------//






/****************************************** Closing and Destructor ************************************************/





    /** ------------------------------------------------------------------------------------------------
     * Close the serial port
     **/

    void Close();

    //-------------------------------------------------------------------------------------------------//


    /** Destructor of the class **/

    ~Serial();

    //-------------------------------------------------------------------------------------------------//



private:

    int file;
    const std::string port_name;


};





#endif
