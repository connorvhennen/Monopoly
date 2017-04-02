#include <time.h>
#include <functional>
#include <vector>
#include <ctime>
#include <iostream>
#include <vector>




#ifndef chanceDeck_hpp
#define chanceDeck_hpp

class chanceCard{

public:
    //defaut constructor
    chanceCard()
        : name(""),tag(0),price(0),transfer(0),type(0)
    {

    }

    //copy constructor
    chanceCard(const chanceCard& other):name(other.name),tag(other.tag),price(other.price),transfer(other.transfer),type(other.type)
    {

    }

    //swap function
    void swap(chanceCard& other){
        std::swap(name,other.name);
        std::swap(price,other.price);
        std::swap(tag,other.tag);
        std::swap(transfer,other.transfer);
        std::swap(type,other.type);
    }

    //assignment operator
    chanceCard& operator=(chanceCard other)
    {
        swap(other);
        return *this;
    }

    //move constructor
    chanceCard(chanceCard&& other)
        : chanceCard()
    {
        swap(other);
    }


    chanceCard(std::string n, int t, int ty, int p = 0, int tr = 0){
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

const extern std::vector<chanceCard> wholeChanceDeck;
extern std::vector<chanceCard> chanceDeck;

#endif
