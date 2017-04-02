//
//  player.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/18/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
#include <map>
#include "player.h"
#include "Gameboard.h"
#include "communityChest.h"
#include "chanceDeck.h"
#include "gamescreen.h"
#include "mainwindow.h"
#include <QMap>
#include <QString>
#include <QWidget>
#include <string>
#include <algorithm>
#include <vector>


int playerTag = 1;

std::map<int,player*> playerMap;


void player::buyProperty(int cost, space mine){
    money = money - cost;
    landOwned.push_back(mine);
    netWorth = netWorth - 0.3*cost;
    board[location - 1].owner = 1;
}

int player::getTag(){
    return tag;
}

void player::payRent(int rentLoss){
    money = money - rentLoss;
    netWorth = netWorth - rentLoss;


}

void player::communityDraw(){

    std::vector<communityCard> myCommunityDeck(communityDeck);

    //Example of generic algorithm use, and a templated class that handles the "comparisons" (not really comparing any two objects, totally random) for sorting (aka shuffling the deck!)
    std::sort(myCommunityDeck.begin(), myCommunityDeck.end(), RandomOrder<communityCard>());


    communityCard cardDrawn = *myCommunityDeck.begin();


        switch (1) {

        case 1: if(cardDrawn.type == 1){
            money = money + cardDrawn.price;
            netWorth = netWorth + cardDrawn.price;

            //std::cout << "You drew  ";
            break;
        }
        case 2: if(cardDrawn.type == 2){
            money = money - cardDrawn.price;
            netWorth = netWorth - cardDrawn.price;
            break;
        }
        case 3: if(cardDrawn.type == 3){
            money = money + cardDrawn.price;
            netWorth = netWorth + cardDrawn.price;
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


        std::vector<chanceCard> myChanceDeck = chanceDeck;

        //Another example of generic algorithm use, and a templated class that handles the "comparisons" (not really comparing any two objects, totally random) for sorting (aka shuffling the deck!)
        std::sort(myChanceDeck.begin(), myChanceDeck.end(), RandomOrder<chanceCard>());


        chanceCard cardDrawn = *myChanceDeck.begin();

        switch (1) {
            case 1: if(cardDrawn.type == 1){
                money = money + cardDrawn.price;
                netWorth= netWorth + cardDrawn.price;
                break;
            }
            case 2: if(cardDrawn.type == 2){
                money = money - cardDrawn.price;
                netWorth = netWorth - cardDrawn.price;
                break;
            }
            case 3: if(cardDrawn.type == 3){
                money = money + cardDrawn.price;
                netWorth = netWorth+ cardDrawn.price;
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
                        netWorth= netWorth + 200;
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
                    netWorth = netWorth + 200;
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
    space curSpace = board[location - 1];

    //find out the space type (property, tax, community chest, etc
    int curType = curSpace.get_type();
    if (curType == 1) {
    switch (1) {
    case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
            std::string choice;

            if(choice == "y"){
                curSpace.purchased(getTag());
                buyProperty(curSpace.get_price(), curSpace);
            }
            /* we will assume for now that everyone buys open property, but it would be possible
            to program in different personalities (frugal vs gung-ho) or give the user a choice*/
            else{
                curSpace.purchased(getTag());
                buyProperty(curSpace.get_price(), curSpace);
            }
        break;
    }

    case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
            payRent(curSpace.get_rent());

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
        netWorth -= 200;
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
                else{
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                break;
            }

            case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
                payRent(curSpace.get_rent());

                break;
            }
            case 3: break;
        }
    }
    if (curType == 6) {
        switch (1) {

            case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
                std::string choice;
                //std::cout << "Do you want to buy the " << curSpace.get_name() << " for $" <<curSpace.get_price() << "? (y/n)";
                //std::cin >> choice;
                if(choice == "y"){
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                else{
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                break;
            }

            case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
                payRent(4*movement);

                break;
            }
            case 3: break;
        }
    }
    if (netWorth < 0) {
        eliminated = true;

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

               }

    if(money < 0){
        netWorth = netWorth + money*.5;

}
    }




void player::rollDice(){

    if (dropLowestMidterm == true && academicProbation > 0) {
        academicProbation = 0;
        dropLowestMidterm = false;
    }
    if (doubles == 3) {
        academicProbation = 3;
        location = 11;
        return;
    }

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;


    movement = dice1 + dice2;

    if (dice1 == dice2) {
        doubles = doubles + 1;
    }
    if (academicProbation > 0) {
        if(doubles == 0){
            return;
        }
        else if(doubles == 1){
            location = location + movement;
            doubles = 0;
            return;
        }
    }

    location = location + movement;
    if (location > 40) {
        money += 200;
        netWorth +=200;
        location = location - 40;
    }
    else location = location + movement;


}



void player::turn2(){

    if (eliminated == true) {
        return;
    }
    doubles = 0;
    if (academicProbation == 0) {
        roll2Dice();
    }
    space curSpace = board[location - 1];

    //find out the space type (property, tax, community chest, etc
    int curType = curSpace.get_type();
    if (curType == 1) {
    switch (1) {
    case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
            std::string choice;
            QString ok = "Do you want to buy the " + QString::fromStdString(curSpace.get_name()) + " for $" + QString::number(curSpace.get_price()) + "? (y/n)";

            if(choice == "y"){
                curSpace.purchased(getTag());
                buyProperty(curSpace.get_price(), curSpace);
            }

            else{
                curSpace.purchased(getTag());
                buyProperty(curSpace.get_price(), curSpace);
            }
        break;
    }

    case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
            payRent(curSpace.get_rent());
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
        netWorth -=200;
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
                else{
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                break;
            }

            case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
                payRent(curSpace.get_rent());

                break;
            }
            case 3: break;
        }
    }
    if (curType == 6) {
        switch (1) {
            case 1: if (curSpace.find_owner() == 0 && curSpace.get_price() <= money) {
                std::string choice;
                //std::cout << "Do you want to buy the " << curSpace.get_name() << " for $" <<curSpace.get_price() << "? (y/n)";
                //std::cin >> choice;
                if(choice == "y"){
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                else{
                    curSpace.purchased(getTag());
                    buyProperty(curSpace.get_price(),curSpace);
                }
                break;
            }

            case 2: if (curSpace.find_owner() > 0 && curSpace.find_owner() != getTag()){
                payRent(4*movement);
                break;
            }
            case 3: break;
        }
    }
    if (netWorth < 0) {
        eliminated = true;

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

               }
     //if a player has negative cash, but still has non-liquidated assets in the form of property, their net worth goes down through interest.
     if(money < 0){
         netWorth = netWorth + money*.7; //money is negative so adding it will decrease net worth. The 0.7 coefficient was chosen relatively arbitrarily
      }
    }

void player::roll2Dice(){

    //dropLowestMidterm is equalivent to a get out of jail free card, where academic probation is equivalent to jail
    if (dropLowestMidterm == true && academicProbation > 0) {
        academicProbation = 0;
        dropLowestMidterm = false;
    }
    if (doubles == 3) {
        academicProbation = 3;
        location = 11;
        return;
    }

    rand();
    rand();

    int dice3 = (rand() % 6) + 1;
    int dice4 = (rand() % 6) + 1;


    movement = dice3 + dice4;

    if (dice3 == dice4) {
        doubles = doubles + 1;
    }
    if (academicProbation > 0) {
        if(doubles == 0){
            return;
        }
        else if(doubles == 1){
            location = location + movement;
            doubles = 0;
            return;
        }
    }

    if (location + movement >= 40) {
        money += 200;
        netWorth +=200;
        location = location + movement;
        location = location - 40;
    }
    location = location + movement;
}

std::string player::get_playerName(){
    return name;
}

int player::get_location(){
    return location;
}
