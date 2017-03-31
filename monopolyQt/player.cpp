//
//  player.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/18/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
#include <map>
#include "player.h"





int playerTag = 1;

std::map<int,player*> playerMap;


void player::buyProperty(int cost, space mine){
    money = money - cost;
    landOwned.push_back(mine);
    netWorth = money + (cost/2);
}

space player::getSpaceInfo(space a){
    space cur = a;
    return cur;
}

int player::getTag(){
    return tag;
}

void player::payRent(int rentLoss){
    money = money - rentLoss;
}

void player::winRent(player& winner, int rentWin){
    winner.money = winner.money + rentWin;
}

void player::communityDraw(){

    communityCard cardDrawn = *communityDeck.begin();
    communityDeck.pop_back();

    if (communityDeck.size() == 0) {
        communityDeck = wholeCommunityDeck;
        std::random_shuffle(communityDeck.begin(),communityDeck.end());
    }

    switch (1) {
        case 1: if(cardDrawn.type == 1){
            money = money + cardDrawn.price;
            //std::cout << "You drew  ";
            break;
        }
        case 2: if(cardDrawn.type == 2){
            money = money - cardDrawn.price;
            break;
        }
        case 3: if(cardDrawn.type == 3){
            money = money + cardDrawn.price;
            location = 1;
            break;

        case 4: if(cardDrawn.type == 4){
            location = 11;
            academicProbation = 3;
            break;
        }
        case 5: if(cardDrawn.type == 5){
            dropLowestMidterm = true;
            break;
        }
    }
    }
}

//    type 1 = win money, type 2 = lose money, type 3 = win money and move, type 4 = Go to Jail, type 6 = get out of jail free card, type 7 = move to 13 or 29, type 8 move to 6, 16, 26 or 36, type 9 = go back 3 spaces, type 10 = move

void player::chanceDraw(){

        chanceCard cardDrawn = *chanceDeck.begin();
        chanceDeck.pop_back();

        if (chanceDeck.size() == 0) {
            chanceDeck = wholeChanceDeck;
            std::random_shuffle(chanceDeck.begin(),chanceDeck.end());
        }

        switch (1) {
            case 1: if(cardDrawn.type == 1){
                money = money + cardDrawn.price;
                break;
            }
            case 2: if(cardDrawn.type == 2){
                money = money - cardDrawn.price;
                break;
            }
            case 3: if(cardDrawn.type == 3){
                money = money + cardDrawn.price;
                location = cardDrawn.transfer;
                break;
            }
            case 4: if(cardDrawn.type == 4){
                location = 11;
                academicProbation = 3;
                break;
            }
            case 5: if(cardDrawn.type == 6){
                dropLowestMidterm = true;
                break;
            }
            case 6: if(cardDrawn.type == 7){
                    if (location >= 1 && location < 13) {
                        location = 13;
                    }
                    //6, 16, 26 or 36
                    else if(location >= 13 && location < 29) location = 29;
                    else if(location >= 29){
                        location = 13;
                        money = money + 200;
                    }
                break;
            }
            case 7: if(cardDrawn.type == 8){
                if (location >= 1 && location < 6) {
                    location = 6;
                }
                 //6, 16, 26 or 36
                else if(location >= 6 && location < 16) location = 16;
                else if(location >= 16 && location < 26) location = 26;
                else if(location >= 26 && location < 36) location = 36;
                else if(location >= 36){
                    location = 6;
                    money = money + 200;
                }
                break;
            }
            case 8: if(cardDrawn.type == 9){
                location = location - 3;
                break;
            }
            case 9: if(cardDrawn.type == 10){
                location = cardDrawn.transfer;
                break;
            }
            default: break;
    }

    }


void player::turn(){
    if (eliminated == true) {
        return;
    }
    doubles = 0;
    if (academicProbation == 0) {
        rollDice();
    }
    space curSpace = board[location];

    //find out the space type (property, tax, community chest, etc
    int curType = curSpace.get_type();
    if (curType == 1) {
    switch (1) {
    case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
            std::string choice;
            //std::cout << "Do you want to buy the " << curSpace.get_name() << " for $" <<curSpace.get_price() << "? (y/n)";
            //std::cin >> choice;
            if(choice == "y"){
                curSpace.purchased(getTag());
                buyProperty(curSpace.get_price(), curSpace);
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
        communityDraw();
    }
    if (curType == 3) {
        chanceDraw();
    }
    if (curType == 4) {
        money -= 200;
    }
    if (curType == 5) {
        switch (1) {

            case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
                std::string choice;
                //std::cout << "Do you want to buy the " << curSpace.get_name() << " for $" <<curSpace.get_price() << "? (y/n)";
                //std::cin >> choice;
                if(choice == "y"){
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
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
    if (curType == 6) {
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
                //std::cout << "Do you want to buy the " << curSpace.get_name() << " for $" <<curSpace.get_price() << "? (y/n)";
                //std::cin >> choice;
                if(choice == "y"){
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                break;
            }

            case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
                payRent(4*movement);
                winRent(*playerMap[curSpace.find_owner()], 4*movement);
                break;
            }
            case 3: break;
        }
    }
    if (netWorth < 0) {
        eliminated = true;
        //std::cout << name << "has been eliminated!" << std::endl;
    }
    if (doubles == 1){
            turn();
}
            if(doubles == 2){
                turn();
            }
               if(doubles == 3){
                   location = 11;
                   academicProbation = 3;
                   return;
               }
            return;
    }




void player::rollDice(){
    //if player rolls doubles 3 times in a row
    if (dropLowestMidterm == true && academicProbation > 0) {
        academicProbation = 0;
        dropLowestMidterm = false;
    }
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

std:: string player::get_playerName(){
    return name;
}

int player::get_location(){
    return location;
}



