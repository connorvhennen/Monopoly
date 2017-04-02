//
//  Gameboard.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//


#include "Gameboard.h"



int space::get_type(){
    return type;
}

std::string space::get_name(){
    return name;
}

int space::space_location(){
    return location;
}

std::string space::get_color(){
    return color;
}

int space::get_price(){
    return price;
}

int space::find_owner(){
    return owner;
}

space space::operator[](int x) {
    return board[x];
}

void space::purchased(int buyer){
    owner = buyer;
}

int space::get_rent(){
    return rent;
}

std::vector<space> board = {space::space(1,"ZBT",1), space(1,"Spaulding Field", 2, "brown", 60, 10), space(2,"Education Legislation", 3), space(1,"Luskin Center", 4, "brown", 60, 20),
    space(4,"Enrollment Fee", 5), space(5,"Uber Credit", 6, "n/a", 200, 50), space(1,"Ackerman", 7, "blue", 100, 30),
    space(3,"USAC Initiative", 8),
    space(1,"Kerckhoff", 9, "blue", 100, 30),
    space(1,"Math Science Building", 10, "blue",120,40),
    space(7,"Academic Probation", 11),
    space(1,"Powell Library", 12, "pink",140,50),
    space(6,"Powell Study Room", 13, "n/a", 150,30),
    space(1,"Royce Hall", 14, "pink",140,50),
    space(1,"Young Research Library", 15, "pink",160,60),
    space(5,"Lyft Credit", 16, "n/a", 200, 50),
    space(1,"Northern Lights", 17, "orange", 180,70),
    space(2,"Education Legislation", 18),
    space(1,"Intramural Fields", 19, "orange",180,70),
    space(1,"Sunset Rec", 20, "orange",200,80),
    space(9,"Parking Structure 7", 21),
    space(1,"Hedrick Hall", 22,"red",220,90),
    space(3,"USAC Inititative", 23),
    space(1,"Rendevous", 24, "red",220,90),
    space(1,"Bruin Plate", 25, "red",240,100),
    space(5,"LAX Flyaway", 26, "n/a",200,125),
    space(1,"Bruin Fitness Center", 27, "yellow",260,110),
    space(1,"Tennis Courts", 28, "yellow",260,110),
    space(6,"YRL Power Outlet", 29,"n/a", 150,30),
    space(1,"Inverted Fountain", 30, "yellow",280,120),
    space(8,"You got all F's", 31),
    space(1,"Sculpture Garden", 32, "green",300,130),
    space(1,"Jann's Steps", 33, "green",300,130),
    space(2,"Education Legislation", 34),
    space(1,"Wooden Center", 35, "green",320,140),
    space(5,"Taxi", 36, "n/a", 200, 50),
    space(3,"USAC Initiative", 37),
    space(1,"In 'N Out", 38, "dark blue",350,175),
    space(4,"Textbook Fees", 39),
    space(1,"Bruinwalk", 40, "dark blue",400,250)
};



