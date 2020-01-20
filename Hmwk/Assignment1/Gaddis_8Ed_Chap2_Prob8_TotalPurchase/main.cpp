/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 21:45
 * Purpose:  
 * 8. A customer in a store is purchasing five items. 
 * The prices of the five items are: 
 * Price of item 1 = $15.95 
 * Price of item 2 = $24.95 
 * Price of item 3 = $6.95 
 * Price of item 4 = $12.95 
 * Price of item 5 = $3.95 
 * Write a program that holds the prices of the five 
 * items in five variables. 
 * Display each item’s price, the subtotal of the sale, 
 * the amount of sales tax, and the total. 
 * Assume the sales tax is 7%. 
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
    float itone, ittwo, itthree, itfour, itfive, tax, subtotal, total; 
    //Initialize Variables
    itone = 15.95;
    ittwo = 24.95;
    itthree = 6.95;
    itfour = 12.95;
    itfive = 3.95;
    subtotal = itone + ittwo + itthree +itfour + itfive;
    tax = subtotal * 0.07;
    total = subtotal + tax;
    //Process or map Inputs to Outputs
    //Display Outputs
    cout << "Price of item 1: $" << itone << endl;
    cout << "Price of item 2: $" << ittwo << endl;
    cout << "Price of item 3: $" << itthree << endl;
    cout << "Price of item 4: $" << itfour << endl;
    cout << "Price of item 5: $" << itfive << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;
    
    //Exit stage right!
    return 0;
}