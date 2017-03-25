//
//  player.hpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/18/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
//class Gameboard;
class space;
#include <map>

#include "Gameboard.hpp"


#ifndef player_hpp
#define player_hpp


#include <string>
#include <time.h>

extern int playerTag;

class player;
//extern std::vector<player*> playerList;
extern std::map<int, player*> playerMap;


class player{

public:
    
    player(std::string title, int start = 1, int inheritance = 1500);
    
    void turn();
    void buyProperty(int cost){
        money = money - cost;
    }
    
    std::string get_playerName();

    int get_location();

    void rollDice();

    space getSpaceInfo(space a){
        space cur = a;
        return cur;
    }

    int getTag(){
        return tag;
    }

    void payRent(int rentLoss){
        money = money - rentLoss;
    }

    void winRent(player& winner, int rentWin){
        winner.money = winner.money + rentWin;
    }


public:
    
    std::string name;
    int tag;
    int location;
    int movement;
    int academicProbation;
    bool acedMidterms;
    bool dormArrest;
    int money;
    int doubles;
};

#endif /* player_hpp */
