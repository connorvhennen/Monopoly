//
//  player.hpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/18/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
//class Gameboard;
class space;
#include "ui_gamescreen.h"
#include <map>

#include "Gameboard.h"
#include "communityChest.h"
#include "chanceDeck.h"
#include "gamescreen.h"
#include "mainwindow.h"
#include <QMap>
#include <QString>
#include <QWidget>
#include <string>



#ifndef player_hpp
#define player_hpp

class player;
extern std::map<int, player*> playerMap;

#include <string>
#include <time.h>


extern int playerTag;
//extern std::vector<player*> playerList;
//struct playerCount{
//        int playerTag;
//} thisGame

class player{
    friend class gamescreen;
    friend class communityCards;
    friend class chanceCard;
    friend class mainwindow;
public:


    player(std::string title, int start=1, int inheritance=1500){
        name = title;
        location = start;
        money = inheritance;
        academicProbation = 0;
        acedMidterms = false;
        dormArrest = false;
        doubles = 0;
        dropLowestMidterm = false;

        playerMap.insert(std::pair<int,player*>(playerTag,this));
        playerTag = playerTag + 1;
        eliminated = false;
        netWorth = 1500;
    }

    void turn();
    void buyProperty(int cost, space mine);

    std::string get_playerName();

    int get_location();

    void rollDice();

    space getSpaceInfo(space a);

    int getTag();

    void payRent(int rentLoss);

    void winRent(player& winner, int rentWin);

    void communityDraw();

    void chanceDraw();




private:

    std::string name;
    int tag;
    int location;
    int movement;
    int academicProbation;
    bool acedMidterms;
    bool dormArrest;
    bool dropLowestMidterm;
    int money;
    int doubles;
    bool eliminated;
    int netWorth;
    std::vector<space> landOwned;
};


#endif /* player_hpp */
