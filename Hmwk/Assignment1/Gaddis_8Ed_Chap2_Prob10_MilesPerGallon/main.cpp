/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 22:10
 * Purpose:  
 * 10. A car holds 15 gallons of gasoline 
 * and can travel 375 miles before refueling. 
 * Write a program that calculates the number of miles 
 * per gallon the car gets. Display the result on the screen. 
 * Hint:  Use the following formula to calculate miles 
 * per gallon (MPG): MPG = Miles Driven/Gallons of Gas Used  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float gas, totalmiles, mpg;
    //Initialize Variables
    gas = 15;
    totalmiles = 375;
    mpg = totalmiles/gas;
    //Process or map Inputs to Outputs
    //Display Outputs
    cout << "The miles per gallon the car gets is " << mpg << " MPG.";
    
    //Exit stage right!
    return 0;
}