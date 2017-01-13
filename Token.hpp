//
//  TokenTracker.hpp
//  Monopoly
//
//  Created by Connor Hennen on 1/12/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#ifndef Token_hpp
#define Token_hpp

class Token{
private:
    
    Token(int spot = 1, int inheritance = 1500);
    
    int location;
    
    int dice1;
    int dice2;
    
    int diceSum;
    
    int prisonSentence;
    
    bool jailBreak;
    
    bool doubles;
    
    bool houseArrest;
    
    bool bankAccount;
    
    

public:
    void walk();
    
    void roll();
    
    void restart();
    void payRent();
    
    void getRent();
    
    void buyProperty();
    
    void passGo();
    
    void goToJail();
    
    void escapeJail();
    
};

#endif /* TokenTracker_hpp */
