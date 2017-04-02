//
//  communityChest.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/25/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#include "communityChest.h"



communityCard myCards[] = {communityCard("ZBT has been converted to 24-Hour Open Study!", 1, 3, 200, 1), communityCard("FAFSA error in your favor", 2, 1, 100), communityCard("Ashe Fee", 3, 2, 50, 300), communityCard("Textbook Resale", 4, 1, 50), communityCard("Drop lowest midterm", 5, 5), communityCard("FAILED MIDTERM", 6, 4, 0, 11), communityCard("Collect donations on Bruinwalk", 7, 1, 50), communityCard("Sold TV", 8, 1, 100), communityCard("UCSHIP Payment", 9, 2, 300), communityCard("Tuition Payment", 10, 2, 500),communityCard("Tutor a student", 11, 1, 25), communityCard("Parking Ticket", 12, 2, 300),communityCard("Win a Survey", 13, 1, 10),communityCard("Holiday Present", 14, 1, 50),communityCard("Gene Block pays your tuition", 15, 1, 100),communityCard("MacBook Breaks", 16, 2, 500)};
const std::vector<communityCard> wholeCommunityDeck(myCards, myCards + sizeof(myCards)/sizeof(communityCard));

std::vector<communityCard> communityDeck = wholeCommunityDeck;

