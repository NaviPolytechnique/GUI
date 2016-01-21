//
//  serial_exception.h
//  Serial
//
//  Created by Louis Faury on 14/06/2015.
//  Copyright (c) 2015 Louis Faury. All rights reserved.
//

#ifndef __Serial__serial_exception__
#define __Serial__serial_exception__

#include <stdio.h>
#include <iostream>
#include <exception>


class serial_exception : public std::exception {
public:
    
    
    serial_exception(int number, std::string const& phrase, int level) throw() : m_number(number), m_phrase(phrase), m_level(level)
    {}
    
    
    const char* what() const throw()
    {
        return m_phrase.c_str();
    }
    
    int getLevel() const throw()
    {
        return m_level;
    }
    
    ~serial_exception() throw()
    {
    }
    
private:
    int m_number;
    std::string m_phrase;
    int m_level;
};








#endif /* defined(__Serial__serial_exception__) */
