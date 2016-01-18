#ifndef ComException_HEADER_H
#define ComException_HEADER_H

#include<exception>
#include<string>

class ComException: public std::exception{
  
public:
    ComException(std::string content_, int level_) throw(): content(content_), level(level_){
      id = 0;
    }
    ~ComException() throw(){}
    
    std::string what() throw(){
      return content;
    }
    
    int getId() throw() {
      return id;
    }
    
    int getLevel() throw() {
      return level;
    }
    
    void setId(int i){
      id = i;
    }
    
private:
    int id;
    std::string content;
    int level;
};

#endif