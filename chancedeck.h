#include <time.h>
#include <functional>
#include <vector>
#include <ctime>
#include <iostream>
#include <vector>


class player;

#ifndef chanceDeck_hpp
#define chanceDeck_hpp




class chanceCard;

const extern std::vector<chanceCard> wholeChanceDeck;
extern std::vector<chanceCard> chanceDeck;

class chanceCard{

private:


public:

    //std::vector<chanceCard> shuffleChanceDeck();

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
