//
//  communityChest.hpp
//  BruteForceMonopolyCode
//
//  Created by Connor Hennen on 3/25/17.
//  Copyright © 2017 Connor Hennen. All rights reserved.
//



#ifndef communityChest_hpp
#define communityChest_hpp

#include <time.h>
#include <functional>
#include <vector>
#include <ctime>
#include <iostream>
#include <deque>

class player;
//template <typename T>
//class RandomOrder{
//  public:
//      bool operator()( const T& a, const T& b) const{
//         return (rand() % 2 ) == 0 ? true : false ;
//      }
//};

class communityCard;

const extern std::deque<communityCard> wholeCommunityDeck;
extern std::deque<communityCard> communityDeck;
class communityCard{
private:


public:
//    void payRent(int rentLoss){
//        money = money - rentLoss;
//    }
//
//    void winRent(player& winner, int rentWin){
//        winner.money = winner.money + rentWin;
//    }
    //type 1 = win money, type 2 = lose money, type 3 = win money and move, type 4 = collect money from each player, type 5 = lose money per house you own
    std::string name;
    int tag;
    int price;
    int transfer;
    int type;

    communityCard(std::string n, int t, int ty, int p = 0, int tr = 0){
        name = n;
        tag = t;
        type = ty;
        price = p;
        transfer = tr;
    }



};



//class communityDeck{
//    friend class player;
//
//private:
//    std::deque<communityCard> comDeck;
//
//public:
//    communityDeck(){
//        *communityDeck = new wholeCommunityDeck;
//        std::random_shuffle(comDeck.begin(),comDeck.end(),myrandom);
//    };
//
//};
//template <typename T, typename CMP = std::less<T>>
//class communityChest {
//private:
//    std::vector<T> communityDeck;
//    int
//
//public:


//// "Add another parameter". They said!
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
//
//
//// Output to ostream object
//template <typename T,typename CMP>
//ostream& operator<<( ostream& out, const SimplePair<T,CMP>& rhs ){
//   out << "[" << rhs.first() << "," << rhs.second() << "]";
//   return out;
//}
//
//
///**
//    We want to incorporate this principle into our
//    SimplePair class
//
//// custom min function
//template <typename T, typename CMP>
//T custom_min( const T& lhs , const T& rhs, CMP cmp ) {
//   if ( cmp(lhs,rhs) )
//      return lhs;
//   return rhs;
//}
//*/
//
//
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


#endif /* communityChest_hpp */
