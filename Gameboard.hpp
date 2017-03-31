//
//  gameboard.hpp
//  Monopoly
//
//  Created by Connor Hennen on 1/13/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//
#include <vector>
#include "Property.hpp"
#include "Event.hpp"
#include "Utility.hpp"

#ifndef Gameboard_hpp
#define Gameboard_hpp

class Gameboard{

private:
    
    
    Property Go(int address = 1,std::string color = "red");
    Property MediterraneanAvenue(2,"red");
    Event CommunityChest(3,17,34);
    Property BalticAvenue(4,"blue");
    Event IncomeTax(5);
    Transportation ReadingRailroad(6);
    Property OrientalAvenue(7,"blue");
    Event Chance(8,23,37);
    Property VermontAvenue(9, "blue");
    Property ConnecticutAvenue(10, "pink");
    Property Jail(11);
    Property StCharlesPlace(12,"pink");
    Utility ElectricCompany(13);
    Property StatesAvenue(14,"pink");
    Property VirginaAvenue(15);
    Transportation PennsylvaniaRailroad(16);
    Property StJamesPlace(17);
    Property CommunityChest(18);
    Property TennesseeAvenue(19);
    Property NewYorkAvenue(20);
    Property FreeParking(21);
    Property KentuckyAvenue(22);
    Property Chance(24);
    Property IndianaAvenue(25);
    Property IllinoisAvenue(26);
    Property BandOrailroad(27);
    Property AtlanticAvenue(28);
    Property WaterWorks(29);
    Property MarvinGardens(30);
    Property GoToJail(31);
    Property PacificAvenue(32);
    Property NorthCarolinaAvenue(32);
    Property CommunityChest(33);
    Property PennsylvaniaAvenue(35);
    Property ShortLineRailroad(36);
    Property Chance(37);
    Property ParkPlace(38, "blue");
    Tax LuxuryTax(39);
    Property Boardwalk(40,"blue")
}
    int GayleyAve = 1;
    int StrathmorePlazaTunnel= 2;
    std::vector<int> NewEducationLegislation = {3,17,34};
    int LuskinCenter = 4;
    int EnrollmentFee = 5;
    int AckermanBookstore = 6;
    int Kerchoff = 7;
    std::vector<int> Midterm = {8,23,37};
    int MathScienceBuilding = 9;
    int PowellLibrary = 10;
    std::vector<int> Waitlisted = {11};
    int MurphyHall = 12;
    int RoyceHall = 13;
    int YoungResearchLab = 14;
    int Uber = 15;
    int NorthernLights = 16;
    int IMfield = 18;
    int ParkingStructure7 = 19;
    int SunsetRec = 20;
    int HedrickHall = 21;
    int Rendevous = 22;
    int BruinPlate = 24;
    int BruinFitnessCenter = 25;
    int Lyft = 26;
    int TennisCourts = 27;
    int EndlessConstruction = 28;
    int InvertedFountain = 29;
    int SculptureGarden = 30;
    int MissedEnrollmentPass = 31;
    int JannsSteps = 31;
    int Wooden = 32;
    int InNOut = 33;
    int HedrickHallSteps = 35;
    int UndergroundTunnel = 36;
    int PowellHill = 38;
    int StudyAbroadFee = 39;
    int Bruinwalk = 40;
    
    bool sold();
    bool forSale();
    
    
public: 
    
    void payRent();
    void findSpareChangeInCouchCushions();
    void payFee();
    void getOnWaitlist();
    
};

#endif /* gameboard_hpp */
