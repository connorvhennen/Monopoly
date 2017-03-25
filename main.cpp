//
//  main.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#include <iostream>
#include <map>
#include "Gameboard.hpp"
#include "player.hpp"

int main(){
 
    player Bob = player("Bob");
    
    Bob.turn();
    std::cout << "Bob's tag " << Bob.getTag() << "\n";
    std::cout << playerTag << "\n";
    player Bill = player("Bill");

    std::cout << "Bill's tag " << Bill.getTag() << "\n";
    std::cout << playerTag;

  
}
