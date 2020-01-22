/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 15, 2019, 10:35 AM
 * Purpose:  Insurance Calculator
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float worth, pay; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Insurance Calculator" << endl << "How much is your house worth?" << endl;\
    cin>>worth;
    pay = worth - (worth*.2);
    cout << "You need $" << pay << " of insurance.";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}