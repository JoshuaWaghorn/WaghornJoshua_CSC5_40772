/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/10/2020 1000
 * Purpose:  Blackjack Game
 * Version: V4, Added Switch Statement
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


//Function Prototypes
void deal(int,int&);
//Deals 2 cards
void deal(int,int&,int&);
//Deals 2 cards and resolves aces
int getbet(int);
//Gets the player's bet
void choice1();
void choice2();
void Menu();
int main(){
    int dtotal,ptotal;
    //Dealer card total and player card total
    float money, 
            //Money the player has available for betting
            bet; 
    //Money the player wants to bet on the hand
    int aces;
    //Number of aces in the hand
    char yesno='Y'; 
    //answer for hit
    char yn;
    //answer for playing the game
    bool again;
    //Play again? 
    char choice;
    srand(time(0));
    while(yn!='y'||yn!='Y'||yn!='n'||yn!='N'){
        //While there isn't an answer for playing Blackjack
        cout<<"Would you like to play Blackjack? (Y/N)\n";
        cin>>yn;
        if(yn=='y'||yn=='Y'){
            //If the player wants to play Blackjack
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
            }
                
            }while(yn=='y'||yn=='Y');
            
    
    }
        else if(yn=='n'||yn=='N'){cout<<"Maybe next time!\n"; return 0;}
        //If the user does not want to play Blackjack
        //Outputs a message and ends the program
        else cout<<"Invalid input try again.\n";
        //If the user enters a value that is not n,N,y, or Y 
        //asks for a different input
    }
    
    return 0;
    }


    void deal(int num,int& tot)
    {int i,n;
    for(i=0;i<num;i++)
         {n=rand()%13+1;    
          if(n==1)
              tot+=11;
          else if(n>=10)
              tot+=10;
          else
              tot+=n;
           }

    }
    void deal(int num,int& aces,int &tot)
    {int i,n;
    for(i=0;i<num;i++)
         {n=rand()%13+1;
          if(n==1)
             {aces++;
              tot+=11;
              }
          else if(n>=10)
              tot+=10;
          else
              tot+=n;
              }
    if(tot>21)
        if(aces==0)
             return;
        else
            {aces--;
            tot-=10;
            }
    }
    int getbet(int money)
    {int bet;
    cout<<"You have $"<<money<<endl<<"Enter your bet:\n";
    cin>>bet;
    while(bet>money)
        {cout<<"You do not have enough money!\n";
         cout<<"You have $"<<money<<endl<<"Enter your bet:\n";
         cin>>bet;
         }
    while(bet<0)
        {cout<<"You can not enter a negative value.\nWe're not giving you free money!\n";
         cout<<"You have $"<<money<<endl<<"Enter your bet:\n";
         cin>>bet;
         }
    return bet;
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
            "Source: Bicycle Cards official website: www.bicyclecards.com/how-to-play/blackjack/\n";
            
}
    
    void choice2(){
        int dtotal,ptotal;
    //Dealer card total and player card total
    float money, 
            //Money the player has available for betting
            bet; 
    //Money the player wants to bet on the hand
    int aces;
    //Number of aces in the hand
    char yesno='Y'; 
    //answer for hit
    char yn;
    //answer for playing the game
    bool again;
    //Play again? 
    char choice;
    srand(time(0));
        
        
        
            while(money<=0){
                //Gets the user's bet and validates that the bet is more than 0.
                cout<<"How much money do you have?\n";
                cin>>money;
            }
    while(money>0&&yesno=='Y'||yesno=='y'){
        //While the player wants to play again
        //While the player's money is greater than 0
        //Loops another game
        bet=getbet(money);
        //void function for getting the player's bet
        dtotal=0;
        //Initializes the dealer total as 0
        deal(2,dtotal);
        //deals the dealer's cards and gets the total
        aces=0;
        //Initializes the number of aces as 0
        ptotal=0;
        //Initializes the player's total as 0
        deal(2,aces,ptotal);
        //deals the player's cards and the number of aces and gets the total
        cout<<"Your total is: "<<ptotal<<endl;
        //Outputs player's total
        cout<<"You have "<<aces<<" aces"<<endl;
        //Outputs the player's aces
        again=false;
        //if the player does not want to play again
        while(dtotal<21&&ptotal<21&&!again){
            //Loops while the dealer's and player's totals are less than 21
            cout<<"\nHit for another card? (Y/N)\n";
            cin>>yesno;
            //Asks the player if they want to hit for another card
            if(yesno=='Y'||yesno=='y'){
                //If the player wants another card, this adds their new card
                //Then shows the total and aces
                deal(1,aces,ptotal);
                cout<<"Your total is "<<ptotal<<endl;
                cout<<"You have "<<aces<<" aces"<<endl;
               }
         else
             again=true;
            //Else loops back to line 65
         }
    cout<<"Dealer total: \n"<<dtotal<<endl;
    cout<<"Your total: \n"<<ptotal<<endl;
    //Outputs the dealer's and player's totals
    if(dtotal>ptotal||ptotal>21)
          money-=bet;
    //If the dealer's total is greater than the player total
    //Or the player's total is greater than 21
    //The player loses the bet and the bet is subtracted from their money total
    else if(dtotal<ptotal&&ptotal<=21)
          money+=bet;
    //Else if the dealer total is less than the player total
    //And the player total is less than or equal to 21
    //The bet is doubled and added to the player's money total
    if(ptotal>dtotal&&ptotal<=21){
        cout<<"You won!\n";
        cout<<"You won "<<bet<<" dollars!\n";
        //If the player's total is greater than the dealer's total
        //And the player's total is less than or equal to 21 
        //Output a congratulations message and how much money the player won
    }
    if(dtotal>ptotal&&dtotal<=21){
        cout<<"You lost. :(\n";
        cout<<"You lost "<<bet<<" dollars.\n";
        //If the dealer's total is greater than the player's total
        //And the dealer's total is less than or equal to 21
        //Output a message that the player lost and how much money they lost
    }
    if(dtotal==ptotal){
        cout<<"You have tied the dealer.\nNobody wins.\n";
        cout<<"You kept "<<bet<<" dollars.\n";
        //If the player and the dealer have the same card value
        //Outputs a message that they tied and the money they kept
    }
    cout<<"You now have $"<<money<<" left\n";
    //Outputs the player's new total money
    
    if(money>0)
         {cout<<"\nPlay again? (Y/N)\n";
         cin>>yesno;
         //Asks the player if they want to play another hand
         }
    if(yesno=='n'||yesno=='N'){
        cout<<"Thanks for playing!\n\n";
        //If the player does not want to play again
        //Output a thank you message and return to menu
    }
    }
    }