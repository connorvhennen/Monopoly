//
//  TokenTracker.cpp
//  Monopoly
//
//  Created by Connor Hennen on 1/12/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#include "Token.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Token::Token(int spot, int inheritance){
    
    location = spot;
    prisonSentence = 0;
    jailBreak = false;
    houseArrest = false;
    bankAccount = inheritance;
    
    diceSum = 0;
    dice1 = 0;
    dice2 = 0;
    doubles = false;
}


void Token::roll(){
    
    srand (time(NULL));
    
    dice1 = rand() %  6 + 1;
    dice2 = rand() % 6 + 1;
    
    diceSum = dice1 + dice2;
    
    if (dice1 == dice2) {
        doubles = true;
    }
    else doubles = false;
}


void Token::walk(){
    
    //first roll
    roll();

    //movement from first roll
    if (location + diceSum < 40) {
        location = location + diceSum - 40;
    }
    else location = location + diceSum;
    
    //second roll (first doubles)
    if (doubles == true) {
        roll();
        
        if (location + diceSum < 40) {
            location = location + diceSum - 40;
        }
        else location = location + diceSum;
    }
    
    //third roll (second doubles)
    if (doubles == true) {
        roll();
        
        if (location + diceSum < 40) {
            location = location + diceSum - 40;
        }
        else location = location + diceSum;
    }
    
    //third doubles = jail
    if (doubles == true) {
        location = 11;
        prisonSentence = 3;
        doubles = false;
    }

}




