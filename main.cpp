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
#include "communityChest.hpp"
#include <algorithm>
#include <cstdlib>
#include <ctime>


//int myrandom (int i) { return std::rand()%i;}

int main(){
    std::srand(unsigned (std::time(0)));

//    std::random_shuffle(communityDeck.begin(),communityDeck.end(),myrandom);

    player Bob = player("Bob");
    
    Bob.turn();
    std::cout << "Bob's tag " << Bob.getTag() << "\n";
    std::cout << playerTag << "\n";
    player Bill = player("Bill");

    std::cout << "Bill's tag " << Bill.getTag() << "\n";
    std::cout << playerTag;

  
}
