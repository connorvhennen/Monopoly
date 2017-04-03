//
//  communityChest.hpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/25/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
#include <time.h>
#include <functional>
#include <vector>
#include <ctime>
#include <iostream>
#include <vector>
#include "chancedeck.h"

#ifndef communityChest_hpp
#define communityChest_hpp

class communityCard:public chanceCard{
public:

//    //defaut constructor
    communityCard():chanceCard(){}
//        : name(""),tag(0),price(0),transfer(0),type(0)
//    {

//    }

//    //copy constructor
    communityCard(const communityCard& other):name(other.name),tag(other.tag),price(other.price),transfer(other.transfer),type(other.type)
    {

}

    //swap function
    void swap(communityCard& other){
        std::swap(name,other.name);
        std::swap(price,other.price);
        std::swap(tag,other.tag);
        std::swap(transfer,other.transfer);
        std::swap(type,other.type);
    }

    //assignment operator
    communityCard& operator=(communityCard other)
    {
        swap(other);
        return *this;
    }

    //move constructor
    communityCard(communityCard&& other)
        : communityCard()
    {
        swap(other);
    }

    communityCard(std::string n, int t, int ty, int p = 0, int tr = 0){
        name = n;
        tag = t;
        type = ty;
        price = p;
        transfer = tr;
    }

    std::string name;
    int tag;
    int price;
    int transfer;
    int type;

private:

};

const extern std::vector<communityCard> wholeCommunityDeck;
extern std::vector<communityCard> communityDeck;

#endif /* communityChest_hpp */
