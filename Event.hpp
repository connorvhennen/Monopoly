//
//  Event.hpp
//  Monopoly
//
//  Created by Connor Hennen on 1/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#ifndef Event_hpp
#define Event_hpp

class Event{
    
public: 
    Event(int position1 = 0, int position2 = 0, int position3 = 0);
    
private:
    int address1;
    int address2;
    int address3;
    
};

#endif /* Event_hpp */
