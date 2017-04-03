YouTube vid of basic run-through: https://www.youtube.com/watch?v=ScE22hMHyJo&feature=youtu.be

I've created a basic user interface of the popular boardgame Monopoly with C++ and Qt. It's not perfect, and probably spent too much time writing the backend C++ code in XCode while translating it to Qt, software which I'm very new to, swallows up days at a time. However, I have the basic framework down & there are many different ways I'm able to expand. For example, I could set player personalities, which would determine their willingness to buy property or pass it up. I could also add functions that give players the option to sell their properties. However, implementing the million different intracacies and openendness of Monopoly (less of a simple board game than it seems) is something I could do in XCode or Visual Studio but is a bit beyond my proficiency in Qt at the moment. I will continue improving it until it does have these functionalities, but for now I think the Qt user interface and the C++ concepts used behind the scenes satisfy the scope of this course. 

The PIC 10C concepts implemented include but are not limitied to:

--------------------------------------Concept 1: Iterators------------------------------------------------------

----------------Example 1------------------: 

When a player object is constructed, the player class constructor inserts a pair into std::map<int,player*> playerMap with the playerTag (int that signifies that order in which this object was constructed with respect to the other player objects) as the std::map key and the a pointer of type player, which points to the specific player object being constructed as the std::map value. I use iterators of type std::map<int, player*>::iterator to go through the playerMap, and, when referenced and pointed to second (the std::map value), retreive a specific player object. 

From gamescreen.cpp:

    player("P1",1,1500); 
    player("P2",1,1500);
    
    std::map<int, player*>::iterator itBegin;
    itBegin = playerMap.begin();
    player p1 = *itBegin -> second;
    ++itBegin;
    player p2 = *itBegin -> second;
  
--------------Example 2----------------------:

I use iterators to shuffle the chance and community card decks, by passing in a range (defined by iterators) to be sorted into the std::sort algorithm. Then I deference an iterator pointing to the shuffle deck's first element to define the card that was drawn.

From player.cpp:

void player::communityDraw(){
    std::vector<communityCard> myCommunityDeck(communityDeck);
    //Example of generic algorithm use, and a templated class that handles the "comparisons" (not really comparing any two objects, totally random) for sorting (aka shuffling the deck!)
    std::sort(myCommunityDeck.begin(), myCommunityDeck.end(), RandomOrder<communityCard>());
    communityCard cardDrawn = *myCommunityDeck.begin();
    //rest of communityDraw function
}

--------------------------------------Concept 2: Generic algorithms---------------------------------------------

 I used the generic algorithm std::sort, along with a custom comparator RandomOrder<T> to shuffle the community and chance card decks. 
 
 ----------------Example 1------------------: 
 From player.cpp:
 
 void player::communityDraw(){
 /*
 ..
 */
 std::sort(myCommunityDeck.begin(), myCommunityDeck.end(), RandomOrder<communityCard>());
  /*
 ..
 */
 }

--------------Example 2----------------------:
 From player.cpp:
 
 void player::chanceDraw(){
 /*
 ..
 */
std::sort(myChanceDeck.begin(), myChanceDeck.end(), RandomOrder<chanceCard>());
  /*
 ..
 */
 }
 
--------------------------------------Concept 3: Templates---------------------------------------------

----------------Example 1------------------: 

I used a templated class to act as custom comparator for std::sort algorithms.

From player.h:

//templated comparison class, will be used for sorting (shuffling) the chance and community card decks.
template <typename T>
class RandomOrder{
public:
    bool operator()( const T& a, const T& b) const{

        return ( rand() % 2 ) == 0 ? true : false ;
    }
};

Then, in player.cpp, as seen above:

 std::sort(myChanceDeck.begin(), myChanceDeck.end(), RandomOrder<chanceCard>());
 std::sort(myCommunityDeck.begin(), myCommunityDeck.end(), RandomOrder<communityCard>());

--------------------------------------Concept 4: Copy Swap Idiom, Move Semantics----------------------------


Used iterators for playerMap
Used generic algorithms, passing in iterators not containers, for shuffling of decks
Used copy swap and move constructor for chance and community card decks
Used templated comparison class to sort decks in random order (aka shuffle them)
Used version control software to keep track of and organize my commits
Used Qt to create a user interface for my game



