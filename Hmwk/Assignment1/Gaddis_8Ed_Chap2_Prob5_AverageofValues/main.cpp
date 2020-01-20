/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 9, 2020, 21:00
 * Purpose:  
 * 5. To get the average of a series of 
 * values, you add the values up and then 
 * divide the sum by the number of values. 
 * Write a program that stores the following 
 * values in five different variables: 
 * 28, 32, 37, 24, and 33. 
 * The program should first calculate the 
 * sum of these five variables and store the 
 * result in a separate variable named  sum. 
 * Then, the program should divide the  sum  
 * variable by 5 to get the average. 
 * Display the average on the screen. 
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
    float a, b, c, d, e, total, average; 
    //Initialize Variables
    a = 28;
    b = 32; 
    c = 37; 
    d = 24;
    e = 33;
    total = a + b + c + d + e;
    average = total/5;
    //Process or map Inputs to Outputs
    //Display Outputs
    cout << "The average is " << average;
    
    //Exit stage right!
    return 0;
}