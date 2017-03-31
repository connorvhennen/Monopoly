


#ifndef chanceDeck_hpp
#define chanceDeck_hpp

#include <time.h>
#include <functional>
#include <vector>
#include <ctime>
#include <iostream>
#include <deque>

class player;

class chanceCard;

const extern std::deque<chanceCard> wholeChanceDeck;
extern std::deque<chanceCard> chanceDeck;

class chanceCard{

private:


public:

    std::string name;
    int tag;
    int price;
    int transfer;
    int type;

    chanceCard(std::string n, int t, int ty, int p = 0, int tr = 0){
        name = n;
        tag = t;
        type = ty;
        price = p;
        transfer = tr;
    }


};

#endif
