//
//  INS_Exception.hpp
//  Navi_Exception
//
//  Created by Louis Faury on 29/12/2015.
//  Copyright © 2015 Louis Faury. All rights reserved.
//

#ifndef INS_Exception_hpp
#define INS_Exception_hpp

#include <stdio.h>
#include <exception>
#include <string>

class INS_Exception : public std::exception {
    
public:
    
    enum ERROR_TYPE {
        timing=1,
        calib=2,
        other=3
    };
    
    INS_Exception();
    
    INS_Exception(ERROR_TYPE,std::string);
    
    virtual char const * what() const throw();
    
    ~INS_Exception() _NOEXCEPT;
    
private:
    
    ERROR_TYPE _error_type;
    std::string _msg;
    
};


#endif
