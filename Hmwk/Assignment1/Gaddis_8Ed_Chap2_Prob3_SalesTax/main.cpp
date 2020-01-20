/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 20:30
 * Purpose: Sales Tax
 * 
 * 3. Write a program that will compute 
 * the total sales tax on a $95 purchase. 
 * Assume the state sales tax is 4 percent 
 * and the county sales tax is 2 percent. 
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
    const int statetax = .04, countytax = .02;
    float totaltax, itemprice, totalprice; 
    
    //Initialize Variables
    itemprice = 95;
    totaltax = 0.06 * itemprice;
    totalprice = itemprice * totaltax;
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout << "Item Price: $" << itemprice << endl; 
    cout << "Sales Tax: $" << totaltax << endl;
    //Exit stage right!
    return 0;
}