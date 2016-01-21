//
//  System_Exception.cpp
//  Navi_Exception
//
//  Created by Louis Faury on 29/12/2015.
//  Copyright © 2015 Louis Faury. All rights reserved.
//

#include "System_Exception.hpp"


System_Exception::System_Exception(){
}

System_Exception::System_Exception(ERROR_TYPE error_type,std::string msg) : _msg(msg), _error_type(error_type){
}


const char * System_Exception::what() const throw() {
    
    std::string foo = "System Exception --> ";
    switch (_error_type) {
            
        case timing : {
            foo += "Timing Error : ";
            break;
        }
        default : {
            foo += "Unknown Error : ";
        }
    }
    
    foo += _msg;
    foo += '\n';
    const char * result = foo.c_str();
    return result;
}


System_Exception::~System_Exception() _NOEXCEPT {
}
