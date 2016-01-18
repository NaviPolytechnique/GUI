//
//  INS_Exception.cpp
//  Navi_Exception
//
//  Created by Louis Faury on 29/12/2015.
//  Copyright © 2015 Louis Faury. All rights reserved.
//

#include "INS_Exception.hpp"


INS_Exception::INS_Exception(){
}

INS_Exception::INS_Exception(ERROR_TYPE error_type,std::string msg) : _msg(msg), _error_type(error_type){
}


const char * INS_Exception::what() const throw() {
    
    std::string foo = "Inertial Navigation System Exception --> ";
    switch (_error_type) {
            
        case timing : {
            foo += "Timing Error : ";
            break;
        }
        case calib : {
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


INS_Exception::~INS_Exception() _NOEXCEPT {
}
