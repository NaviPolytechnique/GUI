//
//  System_Exception.hpp
//  Navi_Exception
//
//  Created by Louis Faury on 29/12/2015.
//  Copyright © 2015 Louis Faury. All rights reserved.
//

#ifndef System_Exception_hpp
#define System_Exception_hpp

#include <stdio.h>
#include <exception>
#include <string>

class System_Exception : public std::exception {
    
public:
    
    enum ERROR_TYPE {
        timing=1, // Non-reachable / Non-coherent time rates
        // add some more 
        other=3
    };
    
    System_Exception();
    
    System_Exception(ERROR_TYPE,std::string);
    
    virtual char const * what() const throw();
    
    ~System_Exception() _NOEXCEPT;
    
private:
    
    ERROR_TYPE _error_type;
    std::string _msg;
    
};


#endif
