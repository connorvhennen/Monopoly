#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsView>
//#include <QObject>
#include <QGraphicsPixmapItem>


#include <iostream>
#include <vector>
#include <list>
#include <string>

class space;
extern std::vector<space> board;
class space{
    friend class player;
    friend class Gameboard;
private:



public:

    int type;
    std::string name;
    int location;
    std::string color;
    int price;
    int owner;
    int rent;

    space(int t, std::string n, int l, std::string c = "", int p = 0, int r = 0){
        //Properties are type 1, Community Chest are type 2, Chance Deck are type 3, Fines are Type 4, Transportation is type 5, Utility is type 6
        type = t;
        name = n;
        location = l;
        color = c;
        owner = 0;
        price = p;
        rent = r;

    }

    int get_type();
    std::string get_name();
    int space_location();
    std::string get_color();
    int get_price();
    int find_owner();
    space operator[](int x);
    void purchased(int buyer);

    int get_rent();
};

#endif /* Gameboard_hpp */
