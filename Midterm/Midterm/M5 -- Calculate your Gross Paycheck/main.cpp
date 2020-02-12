/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 1/30/2020 2200
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float grossPay, time, timehalf, timedouble, adjustedtime;
    
    //Input or initialize values Here
    cout << fixed << showpoint << setprecision(2);
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    if(hrsWrkd<=20){
        time=payRate*hrsWrkd;
        grossPay=time;
        cout << "$" << grossPay << endl;
    }
    
    if(hrsWrkd>20&&hrsWrkd<=40){
        time=payRate*20; //200@10/hour
        adjustedtime = hrsWrkd-20;
        timehalf=adjustedtime*payRate*1.5;
        grossPay=time+timehalf;
        cout << "$" << grossPay << endl;
    }
    
    if(hrsWrkd>40){
        time=payRate*20; //200@10/hour
        timehalf=payRate*20*1.5; //300@10/hour*1.5
        adjustedtime = hrsWrkd-40;
        timedouble=adjustedtime*payRate*2.0; //200@10/hour*2.0
        grossPay=time+timehalf+timedouble;
        cout << "$" << grossPay << endl;
    }
    
    //Calculate Paycheck

    
    //Output the check
    
    
    //Exit
    return 0;
}