/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 20:45
 * Purpose:  
 * 4. Write a program that computes the tax 
 * and tip on a restaurant bill for a patron 
 * with a $88.67 meal charge. The tax should be 
 * 6.75 percent of the meal cost. The tip should 
 * be 20 percent of the total after adding the tax. 
 * Display the meal cost, tax amount, tip amount, and 
 * total bill on the screen. 
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
    
    float total, meal, tip, tax; 
    //Initialize Variables
    meal = 88.67; 
    tip = 0.2;
    tax = 0.0675; 
    total =  total = meal * tip + meal * tax + meal;
    //Process or map Inputs to Outputs
    //Display Outputs
    cout << "The total price is: $" << total;
    
    //Exit stage right!
    return 0;
}