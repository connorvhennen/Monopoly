//
//  Gameboard.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#include "Gameboard.hpp"

Gameboard::Gameboard(){
    board.push_back(space::space(1,"ZBT",1));
    board.push_back(space::space(1,"Strathmore Plaza Tunnel", 2, "brown"));
    board.push_back(space::space(2,"Education Legislation", 3));
    board.push_back(space::space(1,"Luskin Center", 4, "brown"));
    board.push_back(space::space(4,"Enrollment Fee", 5));
    board.push_back(space::space(5,"Uber Credit", 6));
    board.push_back(space::space(1,"Ackerman", 7, "blue"));
    board.push_back(space::space(3,"USAC Initiative", 8));
    board.push_back(space::space(1,"Kerckhoff", 9, "blue"));
    board.push_back(space::space(1,"Math Science Building", 10, "blue"));
    board.push_back(space::space(7,"Academic Probation", 11));
    board.push_back(space::space(1,"Powell Library", 12, "pink"));
    board.push_back(space::space(6,"Powell Study Room", 13));
    board.push_back(space::space(1,"Royce Hall", 14, "pink"));
    board.push_back(space::space(1,"Young Research Library", 15, "pink"));
    board.push_back(space::space(5,"Lyft Credit", 16));
    board.push_back(space::space(1,"Northern Lights", 17, "orange"));
    board.push_back(space::space(2,"Education Legislation", 18));
    board.push_back(space::space(1,"Intramural Fields", 19, "orange"));
    board.push_back(space::space(1,"Sunset Rec", 21, "orange"));
    board.push_back(space::space(9,"Parking Structure 7", 21));
    board.push_back(space::space(1,"Hedrick Hall", 22,"red"));
    board.push_back(space::space(3,"USAC Inititative", 23));
    board.push_back(space::space(1,"Rendevous", 24, "red"));
    board.push_back(space::space(1,"Bruin Plate", 25, "red"));
    board.push_back(space::space(5,"LAX Flyaway", 26));
    board.push_back(space::space(1,"Bruin Fitness Center", 27, "yellow"));
    board.push_back(space::space(1,"Tennis Courts", 28, "yellow"));
    board.push_back(space::space(6,"YRL Power Outlet", 29));
    board.push_back(space::space(1,"Inverted Fountain", 30, "yellow"));
    board.push_back(space::space(8,"You got all F's", 31));
    board.push_back(space::space(1,"Sculpture Garden", 32, "green"));
    board.push_back(space::space(1,"Jann's Steps", 33, "green"));
    board.push_back(space::space(2,"Education Legislation", 34));
    board.push_back(space::space(1,"Wooden Center", 35, "green"));
    board.push_back(space::space(5,"Taxi", 36));
    board.push_back(space::space(3,"USAC Initiative", 37));
    board.push_back(space::space(1,"In 'N Out", 38, "dark blue"));
    board.push_back(space::space(4,"Textbook Fees", 39));
    board.push_back(space::space(1,"Bruinwalk", 40, "dark blue"));
//the eight colors will be encoded as int types: (1-8 as they appear on the board)
    
//Properties are type 1, Community Chest are type 2, Chance Deck are type 3, Fines are Type 4, Transportation is type 5, Utility is type 6, Jail is type 7, Go to Jail is Type 8, Free Parking is type 9

//    Property ZBT(int address = 1,std::string color = "red");
//    Property StrathmorePlazaTunnel(int address = 2, std::string color = "red");
//    Event NewEducationLegislation(3,17,34);
//    Property LuskinCenter(4,"blue");
//    Event EnrollmentFee(5);
//    Transportation Uber(6);
//    Property AckermanBookstore(7,"blue");
//    Event Midterm(8,23,37);
//    Property Kerchoff(9, "blue");
//    Property MathScienceBuilding(10, "pink");
//    Property Waitlisted(11);
//    Property PowellLibrary(12,"pink");
//    Utility YRLPowerOutlet(13);
//    Property Murphy Hall(14,"pink");
//    Property YoungResearchLab(15);
//    Transportation Lyft(16);
//    Property NorthernLights(17);
//    Property IMfield(18);
//    Property ParkingStructure7(19);
//    Property SunsetRec(20);
//    Property HedrickHall(21);
//    Property Rendevous(22);
//    Property BruinPlate(24);
//    Property BruinFitnessCenter(25);
//    Property Lyft(26);
//    Property TennisCourts(27);
//    Property EndlessConstruction(28);
//    Property InvertedFountain(29);
//    Property SculptureGarden(30);
//    Property MissedEnrollmentPass(31);
//    Property JannsSteps(31);
//    Property Wooden(32);
//    Property InNOut(33);
//    Property HedrickHallSteps(35);
//    Property UndergroundTunnel(36);
//    Property PowellHill(38);
//    Property StudyAbroadFee(39);
//    Property Bruinwalk(40);

    
    
}
space Gameboard::get_board(int t){
    return board[t];
}

int space::get_type(){
    return type;    
};

std::string space::get_name(){
    return name;
};

int space::get_location(){
    return location;
};

std::string space::get_color(){
    return color;
};

int space::get_price(){
    return price;
}; 

void space::ownership(){
    if (upForSale == true) {
        std::cout << "Do you want to buy " << get_name() << "for" << get_price() << "?" << std::endl;
    }
};

