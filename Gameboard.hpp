//
//  Gameboard.hpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#ifndef Gameboard_hpp
#define Gameboard_hpp

#include "Property.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <string>

class space{
public:
    
    space(int t, std::string n, int l, std::string c = ""){
        //Properties are type 1, Community Chest are type 2, Chance Deck are type 3, Fines are Type 4, Transportation is type 5, Utility is type 6
        type = t;
        name = n;
        location = l;
        color = c;
    }
    
    int get_type();
    std::string get_name();
    int get_location();
    std::string get_color();
    int get_price();
    void ownership();
    
private:
    int type;
    std::string name;
    int location;
    std::string color;
    int price;
    bool upForSale;
    

};


class Gameboard{
    
public: 
   
    Gameboard();

    space get_board(int t);
private:
    std::vector<space> board;
    
    //Property strath(std::string n = "Strathmore Plaza Tunnel", int pos = 2, int c = 1, int p = 0, bool f = true);
    
    
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
