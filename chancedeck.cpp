//
//  chanceChest.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/25/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#include "chanceDeck.h"


//chanceCard::chanceCard(std::string n, int t, int ty, int p = 0, int tr = 0){
//    name = n;
//    tag = t;
//    type = ty;
//    price = p;
//    transfer = tr;
//}

//template <typename T>
//class RandomOrder{
//public: bool operator()( const T& a, const T& b) const{
//        return ( rand() % 2 ) == 0 ? true : false ; }
//};

//template <typename T>
//class RandomOrder{
//public:
//    bool operator()( const T& a, const T& b) const{
//        return ( rand() % 2 ) == 0 ? true : false ;
//    }
//};

chanceCard myChanceCards[] = {chanceCard("ZBT has been converted to 24-Hour Open Study!", 1, 3, 200, 1), chanceCard("Get swiped in a BPlate", 2, 3, 50,25), chanceCard("Tutor a student at Powell", 3, 3, 50, 12), chanceCard("Get a good study spot", 4, 7), chanceCard("Walking is for plebians", 5, 8), chanceCard("Get free discount with points on your Bruincard!", 6, 1, 50), chanceCard("Drop Lowest Midterm", 7, 6), chanceCard("You dropped your wallet! Better go back.", 8, 9), chanceCard("You failed all your classes. Academic probation!", 9, 4, 0,11), chanceCard("You have to catch up on basic human needs.", 10, 2, 300),chanceCard("USAC initiative needs some of your money to do stuff!", 11, 2, 100), chanceCard("Take a walk down Bruinwalk", 12, 10, 0, 40),chanceCard("You got elected to student gov, but you bribed everyone.", 13, 2, 200),chanceCard("Holiday Present", 14, 1, 150),chanceCard("Your sell your TI-89 calculator to some poor soul.", 15, 1, 150),chanceCard("You've o won a drawing competition!", 16, 1, 400)};
    const std::vector<chanceCard> wholeChanceDeck(myChanceCards, myChanceCards + sizeof(myChanceCards)/sizeof(chanceCard));

std::vector<chanceCard> chanceDeck = wholeChanceDeck;


//std::vector<chanceCard> chanceCard::shuffleChanceDeck(){
//        srand( static_cast<time_t>(time(0)));
//        std::vector<chanceCard> myChanceDeck = wholeChanceDeck;

//        std::sort(myChanceDeck.begin(), myChanceDeck.end(), RandomOrder<chanceCard>());

//        return myChanceDeck;
//}



