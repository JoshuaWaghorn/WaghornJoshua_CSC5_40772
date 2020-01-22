/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on: 1/16/2020, 1533
 * Purpose:  Calculate retroactive pay and new salaries
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float rate = 0.076;//Grams/lb

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float prvsal, //previous salary
            retropay, //retroactive pay due
            nwann, //new annual salary
            nwmnth; //new monthly salary

    cout << "Input previous annual salary." << endl;
    cin>>prvsal;
    
    retropay = prvsal/2.0*rate;
    nwann = prvsal*rate+prvsal;
    nwmnth = nwann/12.0;
    cout << fixed;
    cout << setprecision(2) << "Retroactive pay" << setw(7) << "= $" << setw(7) << retropay << endl;
    cout << setprecision(2) << "New annual salary" << setw(5) << "= $" << setw(6) << nwann << endl;
    cout << setprecision(2) << "New monthly salary" << setw(4) << "= $" << setw (7) << nwmnth; 
    //Exit stage right!
    return 0;
}