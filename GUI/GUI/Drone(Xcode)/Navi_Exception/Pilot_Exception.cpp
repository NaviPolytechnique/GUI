//
//  Pilot_Exception.cpp
//  Auto_Pilot
//
//  Created by Louis Faury on 29/12/2015.
//  Copyright © 2015 Louis Faury. All rights reserved.
//

#include "Pilot_Exception.hpp"


Pilot_Exception::Pilot_Exception() {
}


Pilot_Exception::Pilot_Exception(ERROR_TYPE error_type,std::string msg) : _msg(msg), _error_type(error_type){
}


const char * Pilot_Exception::what() const throw() {
    
    std::string foo = "Autopilot Exception --> ";
    switch (_error_type) {
            
        case timing : {
            foo += "Timing Error : ";
            break;
        }
        case target : {
            foo += "Calibration Error : ";
            break;
        }
        default : {
            foo += "System Error : ";
        }
    }
    
    foo += _msg;
    foo += '\n';
    const char * result = foo.c_str();
    return result;
}


Pilot_Exception::~Pilot_Exception() _NOEXCEPT {
}
