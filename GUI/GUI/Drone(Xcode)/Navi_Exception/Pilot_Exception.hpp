//
//  Pilot_Exception.hpp
//  Auto_Pilot
//
//  Created by Louis Faury on 29/12/2015.
//  Copyright © 2015 Louis Faury. All rights reserved.
//

#ifndef Pilot_Exception_hpp
#define Pilot_Exception_hpp

#include <stdio.h>
#include <exception>
#include <string>

class Pilot_Exception : public std::exception {
    
public:
    
    enum ERROR_TYPE {
        timing=1,
        target=2,
        other=3
    };
    
    Pilot_Exception();
    
    Pilot_Exception(ERROR_TYPE,std::string);
    
    virtual char const * what() const throw();
    
    ~Pilot_Exception() _NOEXCEPT;
    
private:
    
    ERROR_TYPE _error_type;
    std::string _msg;
    
};


#endif
