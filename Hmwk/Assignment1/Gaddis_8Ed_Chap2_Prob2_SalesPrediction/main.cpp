/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 20:15
 * Purpose: Sales Prediction
 * 
 * 2. The East Coast sales division of a company generates 
 * 58 percent of total sales. Based on that percentage, 
 * write a program that will predict how much the 
 * East Coast division will generate if the company has 
 * $8.6 million in sales this year. 
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
    const int cnvprc = 100; 
    float prcecsales, totalsales; 
    
    //Initialize Variables
    totalsales = 8.6e6;
    prcecsales = .58;
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout << "The East Coast Division will generate "; 
    cout << prcecsales * totalsales << " percent of the total sales.";
    //Exit stage right!
    return 0;
}