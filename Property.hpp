//
//  Property.hpp
//  Monopoly
//
//  Created by Connor Hennen on 1/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
#include <string>

#ifndef Property_hpp
#define Property_hpp

class Property{
    
public: 
    Property(int pos, std::string color);
    
private:
    int address;
    std::string colorType;
    
};

#endif /* Property_hpp */
