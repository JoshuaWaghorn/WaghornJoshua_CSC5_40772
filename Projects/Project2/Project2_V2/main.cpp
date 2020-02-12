/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/10/2020 1000
 * Purpose:  Blackjack Game
 * Version: V2, Reinvented
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void deal(int,int&);
void deal(int,int&,int&);
int getbet(int);
int main(){
    int dtotal,ptotal;
    int money,bet,aces;
    char yesno='Y';
    bool again;
    srand(time(0));
    cout<<"How much money do you have?\n";
    cin>>money;
    while(money>0&&yesno=='Y'||yesno=='y'){
        bet=getbet(money);
        dtotal=0;
        deal(2,dtotal);
        aces=0;
        ptotal=0;
        deal(2,aces,ptotal);
        cout<<"Your total is: "<<ptotal<<endl;
        cout<<"You have "<<aces<<" aces"<<endl;
        again=false;
        while(dtotal<21&&ptotal<21&&!again){
            cout<<"\nHit for another card?(Y/N)\n";
            cin>>yesno;
            if(yesno=='Y'||yesno=='y'){
                deal(1,aces,ptotal);
                cout<<"Your total is "<<ptotal<<endl;
                cout<<"You have "<<aces<<" aces"<<endl;
               }
         else
             again=true;
         }
    cout<<"Dealer total: \n"<<dtotal<<endl;
    cout<<"Your total: \n"<<ptotal<<endl;
    if(dtotal>ptotal||ptotal>21)
          money-=bet;
    else if(dtotal<ptotal&&ptotal<=21)
          money+=bet;
    if(ptotal>dtotal&&ptotal<=21){
        cout<<"You won!\n";
    }
    if(dtotal>ptotal){
        cout<<"You lost. :(\n";
    }
    if(dtotal==ptotal){
        cout<<"You have tied the dealer.\nNobody wins.\n";
    }
    cout<<"You now have $"<<money<<" left\n";
    if(money>0)
         {cout<<"\nPlay again (Y/N)?\n";
         cin>>yesno;
         }
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