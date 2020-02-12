/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/10/2020 1000
 * Purpose:  Blackjack Game
 * Version: V1, Project 1
 */

#include <iostream> //I/O Library
#include <iomanip> //Formatting Library
#include <fstream> //File Library
#include <string> //String Library
using namespace std;

//User Libraries
//None

//Global Constants - No Global Variables
int deck = 52;

//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
//None

//Function Prototypes
void Menu(); //Function for the Menu
void randomcard(); //Generates the random cards
void choice1(); //Function for the first Menu choice
void choice2(); //Function for the second Menu choice


//Enter the Main
int main(int argc, char** argv) {
    char yesno; //Input for entering the game
    char choice; //Input for the Menu option chosen
    unsigned short card1,card2,card3,card4; //Holds the values of the cards
    unsigned char deck; //The deck of cards, 52
    float bet; //Holds the player's bet
    fstream input; //Opens the card file
    string fileName; //Name of the card file
    
    //Initialize file parameters
    fileName="card.dat";
    input.open(fileName.c_str(),ios::in);
    
    //Initialize Variables
    deck=52; //52 cards in the deck
    
    
    
    //Input validation for entering the game
    while(yesno!='y'||yesno!='Y'||yesno!='n'||yesno!='N'){ 
        cout<<"Would you like to play Blackjack? (Y/N)\n";
        cin>>yesno;
        if(yesno=='n'||yesno=='N'){cout<<"Maybe next time!"; return 0;} //Ends the program if the user does not want to play Blackjack
        if(yesno=='y'||yesno=='Y'){ //Enters the Menu
            do{
                while (choice!='1'||choice!='2'||choice!='3'){ //Input validation for the Menu
                Menu(); //Void function for showing the Menu options
                cin>>choice; //Void function for getting the menu option input
                switch(choice){
                    case '1': //Rules
                        choice1();break;
                    case '2': //Play the Game
                        choice2();break;
                    case '3': //Quit the Program
                        cout<<"Thanks for playing Blackjack!\n";
                        return 0;
                    default: choice;
                }
            }}while(yesno=='y'||yesno=='Y'); //Loops for while the user wants to play Blackjack
        }
    }
    
    //Exit Main
    return 0;
}

void Menu(){ //Menu with 3 choices
    cout<<"1 Read the Rules\n";
    cout<<"2 Play the Game\n";
    cout<<"3 Quit\n";
}

void choice1(){ //Show the rules of the game
    cout<<"Here are the Rules:\n"
            "Object of the Game:\n"
            "Each participant attempts to beat the dealer by getting a count\n"
            "as close to 21 as possible, without going over 21.\n"
            "Card Values/Scoring:\n"
            "It is up to each individual player if an ace is worth 1 or 11.\n"
            "Face cards are 10 and any other card is its pip value.\n"
            "Betting:\n"
            "Before the deal begins, each player places a bet,\n"
            "in chips, in front of them in the designated area.\n"
            "Minimum and maximum limits are established on the betting,\n"
            "and the general limits are from $2 to $500.\n"
            "The Shuffle and Cut:\n"
            "The dealer thoroughly shuffles portions of the pack until all the cards have been mixed and combined.\n"
            "The dealer designates one of the players to cut, and the plastic insert card\n"
            "is placed so that the last 60 to 75 cards or so will not be used.\n"
            "(Not dealing to the bottom of all the cards makes it more difficult for professional card counters to operate effectively.)\n"
            "[In the case of this program, the numbers 1-52 are always randomized\nfor each pull and have assigned card values.\n"
            "The Deal:\n"
            "When all the players have placed their bets,\n"
            "the dealer gives one card face up to each player in rotation clockwise, and then one card face up to themselves.\n"
            "Another round of cards is then dealt face up to each player, but the dealer takes the second card face down.\n"
            "Thus, each player except the dealer receives two cards face up, and the dealer receives one card face up and one card face down.\n"
            "(In some games, played with only one deck, the players' cards are dealt face down and they get to hold them.\n"
            "Today, however, virtually all Blackjack games feature the players' cards dealt face up on the condition that no player may touch any cards.)\n"
            "[In the case of this program,\n"
            "only two cards are dealt to both the player and the dealer]\n"
            "Source: Bicycle Cards official website: www.bicyclecards.com/how-to-play/blackjack/\n";
            
}

void choice2(){
    unsigned short card1,card2,card3,card4, //Holds the four cards values
            playertotal, //Player's total
            dealertotal; //Dealer's total
    unsigned char deck; //The deck of cards, 52
    int bet; //Holds the player's bet
    fstream input; //Opening the File for Card Names
    string name1,name2,name3,name4; //Names of each card (ex. AS=Ace of Spades)
    string fileName; //Name of the file being opened
    
    //Initialize file parameters
    fileName="card.dat";
    input.open(fileName.c_str(),ios::in);
    
    //Initialize Variables
    deck=52; //52 cards in the deck
    card1=rand()%deck+1; //Randomize the first card
    
    //Generates a unique value for the second card
    do{
        card2=rand()%deck+1;
    }while(card1==card2);
    
    //Generates a unique value for the third card
    do{
        card3=rand()%deck+1;
    }while(card1==card3||card2==card3);
    
    //Generates a unique value for the fourth card
    do{
        card4=rand()%deck+1;
    }while(card1==card4||card2==card4||card3==card4);
    
    //Calculates the totals of the player and dealer
    playertotal=card1+card2;
    dealertotal=card3+card4;
    
    
    //Pulls cards from the file and names each of them (ex. card1==1, 1 is AS or Ace of Spades)
    string cardIn;
    for(int card=1;card<=deck;card++){
        input>>cardIn; //Input from the file
        if(card1==card)name1=cardIn; 
        if(card2==card)name2=cardIn;
        if(card3==card)name3=cardIn;
        if(card4==card)name4=cardIn;
    }
    
    //Enter the player's bet and show the dealer's and player's hands.
    cout<<"How much would you like to bet?\n";
    cin>>bet;
    cout<<"Your bet:\n$"<<bet<<endl;
    cout<<"Your Hand:\n"<<card1<<" "<<card2<<endl;
    cout<<name1<<" "<<name2<<endl;
    cout<<"Dealer's Hand:\n"<<card3<<" "<<card4<<endl;
    cout<<name3<<" "<<name4<<endl;
}
