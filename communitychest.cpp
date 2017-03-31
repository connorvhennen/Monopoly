//
//  communityChest.cpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/25/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//

#include "communityChest.h"
//#include <functional>   // std::less<T>
//#include <ctime>
//#include <iostream>
//#include <vector>


//template <typename T>
//class RandomOrder{
//   public:
//      bool operator()( const T& a, const T& b) const{
//         return ( rand() % 2 ) == 0 ? true : false ;
//      }
//};


/**
    One of the neat things we can do with templates and
    user defined classes is to specify different ways
    to 'order' elements.

    Here we add a Template to a simple Pair Fraction class
    so that a callback-style function-object can be used
    to determine how to keep these pairs sorted.
 */

// "Add another parameter". They said!
//template <typename T, typename CMP = std::less<T> >
//class SimplePair{
//   private:
//      static const int SIZE = 2;
//      std::vector<T> thePair;
//
//      CMP is_less;    // This is the one that will change the order
//
//   public:
//      // Constructor. Keeps entries sorted.
//      SimplePair( T first = T(), T second = T() ){
//         thePair.resize(SIZE);
//
//	 // Works if is_less can compare type T
//	 if ( is_less(first,second) ){
//	    thePair[0] = first;
//	    thePair[1] = second;
//	 }
//	 else{
//	    thePair[0] = second;
//	    thePair[1] = first;
//	 }
//      }
//
//      const T& first() const { return thePair[0]; }
//      const T& second() const { return thePair[1]; }
//};


// Output to ostream object
//template <typename T,typename CMP>
//ostream& operator<<( ostream& out, const SimplePair<T,CMP>& rhs ){
//   out << "[" << rhs.first() << "," << rhs.second() << "]";
//   return out;
//}


/**
    We want to incorporate this principle into our
    SimplePair class

// custom min function
template <typename T, typename CMP>
T custom_min( const T& lhs , const T& rhs, CMP cmp ) {
   if ( cmp(lhs,rhs) )
      return lhs;
   return rhs;
}
*/


//int main(){
//   srand( static_cast<time_t>( time(0) ) );
//
//   /**
//      "It will make your life easier". They said!
//   */
//
//   SimplePair< int, ReverseOrder<int> > p1(1,2);
//   SimplePair< int, ReverseOrder<int> > p2(2,1);
//   cout << "p1 = " << p1 << "\n";
//   cout << "p2 = " << p2 << "\n";
//
//   SimplePair< double, RandomOrder<double> > q1(1.23,3.1416);
//   SimplePair< double, RandomOrder<double> > q2(3.1416,1.23);
//   cout << "q1 = " << q1 << "\n";
//   cout << "q2 = " << q2 << "\n";
//
//
//   // If no ordering is specified, defaults to operator<
//   SimplePair<string> s1("Hola","Mundo");
//   SimplePair<string> s2("mundo","hola");
//   cout << "s1 = " << s1 << "\n";
//   cout << "s2 = " << s2 << "\n";
//
//   return 0;
//
//}

    //type 1 = win money, type 2 = lose money, type 3 = win money and move, type 4 = Go to Jail, type 6 = get out of jail free card
//communityCard(std::string n, int t, int ty, int p = 0, int tr = 0){
//    name = n;
//    tag = t;
//    type = ty;
//    price = p;
//    transfer = tr;
//}

communityCard myCards[] = {communityCard("ZBT has been converted to 24-Hour Open Study!", 1, 3, 200, 1), communityCard("FAFSA error in your favor", 2, 1, 200), communityCard("Ashe Fee", 3, 2, 50, 1), communityCard("Textbook Resale", 4, 1, 50), communityCard("Drop lowest midterm", 5, 5), communityCard("FAILED MIDTERM", 6, 4, 0, 11), communityCard("Collect donations on Bruinwalk", 7, 1, 50), communityCard("Sold TV", 8, 1, 100), communityCard("UCSHIP Payment", 9, 2, 100), communityCard("Tuition Payment", 10, 2, 150),communityCard("Tutor a student", 11, 1, 25), communityCard("Parking Ticket", 12, 2, 60),communityCard("Win a Survey", 13, 1, 10),communityCard("Holiday Present", 14, 1, 150),communityCard("Gene Block pays your tuition", 15, 1, 100),communityCard("MacBook Breaks", 16, 2, 50)};
const std::deque<communityCard> wholeCommunityDeck(myCards, myCards + sizeof(myCards)/sizeof(communityCard));

//int myrandom (int i) { return std::rand()%i;}
//int myrandom (int i) { return std::rand()%i;}
//std::deque<communityCard> communityDeck(myCards, myCards + sizeof(myCards)/sizeof(communityCard));
std::deque<communityCard> communityDeck = wholeCommunityDeck;

