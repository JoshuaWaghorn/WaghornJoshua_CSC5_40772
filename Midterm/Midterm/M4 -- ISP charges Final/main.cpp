/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 1/31/2020 2215
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries Here
int main(int argc, char **argv){
//Declare all Variables Here
    char package;
    unsigned short hours;
    
//Input or initialize values Here
    cout << "ISP charges for service delivered." << endl;
    cout << "Input package A,B,C then hours used for the month" << endl;
    cin >> package >> hours;
    
    //Basic Charges
    double chargea = 16.99;
    if(hours<=10)
        chargea += 0;
    else if(hours<=20)
        chargea += (hours-10)*0.95;
    else
        chargea += (10*0.95)+((hours-20)*0.85);
    double chargeb = 26.99;
    if(hours<=20)
        chargeb += 0;
    else if(hours<=30)
        chargeb += (hours-20)*0.74;
    else
        chargeb += (10*0.74)+((hours-30)*0.64);
    double chargec = 36.99;
    cout<<setprecision(2)<<fixed;
    
    if(package=='a'){
        cout<<"$"<<chargea;
        if(chargec < chargeb && chargec < chargeb){
            cout<<" C $"<<(chargea - chargec)<<endl;
        }
        else if(chargeb < chargea){
            cout<<" B $"<<(chargeb- chargea)<<endl;
        }
        else{
            cout<<" A $"<<(chargea- chargea)<<endl;
        }
    }
    
    else if(package=='b'){
        cout<<"$"<<chargeb;
        if(chargec < chargea && chargec < chargeb){
            cout<<" C $"<<(chargeb- chargec)<<endl;
        }
        else if(chargea < chargeb){
            cout<<" A $"<<(chargeb- chargea)<<endl;
        }
        else{
            cout<<" B $"<<(chargeb- chargeb)<<endl;
        }
    }
    else{
        cout<<"$"<<chargec;
        if(chargec > chargea && chargec > chargeb){
            cout<<" B $"<<(chargec- chargeb)<<endl;
        }
        else if(chargec>chargea){
            cout<<" A $"<<(chargec- chargea)<<endl;
        }
        else{
            cout<<" C $"<<(chargec- chargec)<<endl;
        }
    }
    
    //Exit
    return 0;
}