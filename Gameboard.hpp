//
//  Gameboard.hpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//




#ifndef Gameboard_hpp
#define Gameboard_hpp

//#include "Property.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <string>

//std::vector<space> board = space(1,"ZBT",1), space(1,"Strathmore Plaza Tunnel", 2, "brown"), space(2,"Education Legislation", 3), space(1,"Luskin Center", 4, "brown"), space(4,"Enrollment Fee", 5), space(5,"Uber Credit", 6),
//    space(1,"Ackerman", 7, "blue"),
//    space(3,"USAC Initiative", 8),
//    space(1,"Kerckhoff", 9, "blue"),
//    space(1,"Math Science Building", 10, "blue"),
//    space(7,"Academic Probation", 11),
//    space(1,"Powell Library", 12, "pink"),
//    space(6,"Powell Study Room", 13),
//    space(1,"Royce Hall", 14, "pink"),
//    space(1,"Young Research Library", 15, "pink"),
//    space(5,"Lyft Credit", 16),
//    space(1,"Northern Lights", 17, "orange"),
//    space(2,"Education Legislation", 18),
//    space(1,"Intramural Fields", 19, "orange"),
//    space(1,"Sunset Rec", 21, "orange"),
//    space(9,"Parking Structure 7", 21),
//    space(1,"Hedrick Hall", 22,"red"),
//    space(3,"USAC Inititative", 23),
//    space(1,"Rendevous", 24, "red"),
//    space(1,"Bruin Plate", 25, "red"),
//    space(5,"LAX Flyaway", 26),
//    space(1,"Bruin Fitness Center", 27, "yellow"),
//    space(1,"Tennis Courts", 28, "yellow"),
//    space(6,"YRL Power Outlet", 29),
//    space(1,"Inverted Fountain", 30, "yellow"),
//    space(8,"You got all F's", 31),
//    space(1,"Sculpture Garden", 32, "green"),
//    space(1,"Jann's Steps", 33, "green"),
//    space(2,"Education Legislation", 34),
//    space(1,"Wooden Center", 35, "green"),
//    space(5,"Taxi", 36),
//    space(3,"USAC Initiative", 37),
//    space(1,"In 'N Out", 38, "dark blue"),
//    space(4,"Textbook Fees", 39),
//    space(1,"Bruinwalk", 40, "dark blue")};
//
//class Gameboard{
//    friend class player;
//    friend class space;
//private:
////    std::vector<space> ucla = {space::space(1,"ZBT",1), space(1,"Strathmore Plaza Tunnel", 2, "brown"), space(2,"Education Legislation", 3), space(1,"Luskin Center", 4, "brown"), space(4,"Enrollment Fee", 5), space(5,"Uber Credit", 6), space(1,"Ackerman", 7, "blue"),
////        space(3,"USAC Initiative", 8),
////        space(1,"Kerckhoff", 9, "blue"),
////        space(1,"Math Science Building", 10, "blue"),
////        space(7,"Academic Probation", 11),
////        space(1,"Powell Library", 12, "pink"),
////        space(6,"Powell Study Room", 13),
////        space(1,"Royce Hall", 14, "pink"),
////        space(1,"Young Research Library", 15, "pink"),
////        space(5,"Lyft Credit", 16),
////        space(1,"Northern Lights", 17, "orange"),
////        space(2,"Education Legislation", 18),
////        space(1,"Intramural Fields", 19, "orange"),
////        space(1,"Sunset Rec", 21, "orange"),
////        space(9,"Parking Structure 7", 21),
////        space(1,"Hedrick Hall", 22,"red"),
////        space(3,"USAC Inititative", 23),
////        space(1,"Rendevous", 24, "red"),
////        space(1,"Bruin Plate", 25, "red"),
////        space(5,"LAX Flyaway", 26),
////        space(1,"Bruin Fitness Center", 27, "yellow"),
////        space(1,"Tennis Courts", 28, "yellow"),
////        space(6,"YRL Power Outlet", 29),
////        space(1,"Inverted Fountain", 30, "yellow"),
////        space(8,"You got all F's", 31),
////        space(1,"Sculpture Garden", 32, "green"),
////        space(1,"Jann's Steps", 33, "green"),
////        space(2,"Education Legislation", 34),
////        space(1,"Wooden Center", 35, "green"),
////        space(5,"Taxi", 36),
////        space(3,"USAC Initiative", 37),
////        space(1,"In 'N Out", 38, "dark blue"),
////        space(4,"Textbook Fees", 39),
////        space(1,"Bruinwalk", 40, "dark blue")};
//public:
//
//    Gameboard();
//    
//    //Property strath(std::string n = "Strathmore Plaza Tunnel", int pos = 2, int c = 1, int p = 0, bool f = true);
//    
//    
//};
class space;
extern std::vector<space> board;
class space{
    friend class player;
    friend class Gameboard;
private:
    int type;
    std::string name;
    int location;
    std::string color;
    int price;
    int owner;
    int rent;


public:

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
    space operator[](int x) {
        return board[x];
    }

    void purchased(int buyer){
        owner = buyer;
    }

    int get_rent(){
        return rent;
    }


    //std::string owner;
    //player playerOnSpace(player p1);

};




//    class Derived1 : public BaseClass { 
//    public: 
//        Derived1( int a ){
//            cout << "Derived1 constr: int param\n\n"; 
//        }
//    };
//    
//    // Derived2 DOES inherit the default constructor
//    // but it does not use it.
//    class Derived2 : public BaseClass { 
//    public: 
//        Derived2( int a ) : BaseClass( a ) {
//            cout << "Derived2 constr: int param\n\n"; 
//        }
//    };







#endif /* Gameboard_hpp */
