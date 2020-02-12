/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/10/2020 1000
 * Purpose:  Blackjack Game
 * Version: V3, Added Input Validation and Comments
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
    srand(time(0));
    while(yn!='y'||yn!='Y'||yn!='n'||yn!='N'){
        //While there isn't an answer for playing Blackjack
        cout<<"Would you like to play Blackjack? (Y/N)\n";
        cin>>yn;
        if(yn=='y'||yn=='Y'){
            //If the player wants to play Blackjack
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
        cout<<"Thanks for playing!\n"; return 0;
        //If the player does not want to play again
        //Output a thank you message and end the program
    }
    }
    
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