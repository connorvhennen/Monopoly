//
//  player.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/18/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
#include <map>
#include "player.hpp"


//player(int start = 1, int inheritance = 1500);
//
//void turn();
//void buyProperty();
//std::string get_playerName();
//int get_location();
//space get_space(Gameboard ucla, int loc);

int playerTag = 1;
std::map<int,player*> playerMap;
player::player(std::string title, int start, int inheritance){
    name = title;
    location = start;
    money = inheritance;
    academicProbation = 0;
    acedMidterms = false;
    dormArrest = false;
    doubles = 0;
    tag = playerTag;
    playerMap.insert(std::pair<int,player*>(playerTag,this));
    playerTag = playerTag + 1;
}


void player::turn(){

    doubles = 0;
    if (academicProbation == 0) {
        rollDice();
    }
    space curSpace = board[location];

    //find out the space type (property, tax, community chest, etc
    int curType = curSpace.get_type();
    if (curType == 1) {
    switch (1) {
//            case <#constant#>:
//                <#statements#>
//                break;
//                
//            default:
//                break;
//        }
    case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
            std::string choice;
            std::cout << "Do you want to buy the " << curSpace.get_name() << " for $" <<curSpace.get_price() << "? (y/n)";
            std::cin >> choice;
            if(choice == "y"){
                curSpace.purchased(getTag());
                buyProperty(curSpace.get_price());
            }
        break;
    }

    case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
            payRent(curSpace.get_rent());
            winRent(*playerMap[curSpace.find_owner()], curSpace.get_rent());
        break;
        }
        case 3: break;
    }
    }
        //Properties are type 1, Community Chest are type 2, Chance Deck are type 3, Fines are Type 4, Transportation is type 5, Utility is type 6
    if (curType == 2) {
        
    }
}


void player::rollDice(){
    //if player rolls doubles 3 times in a row
    if (doubles == 3) {
        academicProbation = 3;
        location = 11;
        return;
    }

    srand(time(NULL));

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;

    int diceTotal = dice1 + dice2;

    if (dice1 == dice2) {
        doubles = doubles + 1;
    }
    if (academicProbation > 0) {
        if(doubles == 0){
            return;
        }
        else if(doubles == 1){
            location = location + diceTotal;
            doubles = 0;
            return;
        }
    }
    location = location + diceTotal;
    if (location > 40) {
        money += 200;
        location = location - 40;
    }
}

std::string player::get_playerName(){
    return name;
}

int player::get_location(){
    return location;
}

//can use this type of function to get info about gameboard & spaces
//space player::get_space(Gameboard ucla, int loc){
//    loc = location;
//    return ucla.get_space(loc);
//}

