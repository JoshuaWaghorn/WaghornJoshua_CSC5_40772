/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 21:30
 * Purpose:  
 * 7.Assuming the ocean’s level is currently rising at about 
 * 1.5 millimeters per year, write a program that displays: 
 • The number of millimeters higher than the current level 
 * that the ocean’s level will be in 5 years 
 • The number of millimeters higher than the current level 
 * that the ocean’s level will be in 7 years 
 • The number of millimeters higher than the current level 
 * that the ocean’s level will be in 10 years 
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
    float rate, fiveyrs, sevenyrs, tenyrs; 
    //Initialize Variables
    rate = 1.5;
    fiveyrs = rate * 5;
    sevenyrs = rate * 7;
    tenyrs = rate *10;
    //Process or map Inputs to Outputs
    //Display Outputs
    cout << "The ocean levels will be " << fiveyrs << " millimeters higher in five years." << endl;
    cout << "The ocean levels will be " << sevenyrs << " millimeters higher in seven years." << endl;
    cout << "The ocean levels will be " << tenyrs << " millimeters higher in ten years.";
    
    //Exit stage right!
    return 0;
}