/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 15, 2019, 10:45 AM
 * Purpose:  Converts Celsius to Fahrenheit
 *          
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float C, F;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Temperature Converter\n" << "Input Degrees Fahrenheit" << endl;
    cin>>F; 
    C=(F-32)*5/9;
    cout << fixed;
    cout << setprecision(1) << F << " Degrees Fahrenheit = " << C << " Degrees Centigrade";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}