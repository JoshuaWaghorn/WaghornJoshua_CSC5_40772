/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 21:15
 * Purpose:  
 * 6. Suppose an employee gets paid every two weeks 
 * and earns $2,200 each pay period. In a year the 
 * employee gets paid 26 times. Write a program that 
 * defines the following variables: 
 * payAmount:   This variable will hold the amount of 
 *              pay the employee earns each pay period. 
 *              Initialize the variable with 2200.0. 
 * payPeriods:   This variable will hold the number of 
 *      pay periods in a year. Initialize the variable with 26. 
 * annualPay:   This variable will hold the employee’s 
 *              total annual pay, which will be calculated. 
 * The program should calculate the employee’s total annual pay by 
 * multiplying the employee’s pay amount by the number of pay periods 
 * in a year and store the result in the  annualPay  variable. 
 * Display the total annual pay on the screen. 
 
 
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
    float payAmount, payPeriods, annualPay; 
    //Initialize Variables
    payAmount = 2200.0;
    payPeriods = 26; 
    annualPay = payAmount * payPeriods;
    //Process or map Inputs to Outputs
    //Display Outputs
    cout << "The annual pay of the employee is $" << annualPay;
    
    //Exit stage right!
    return 0;
}