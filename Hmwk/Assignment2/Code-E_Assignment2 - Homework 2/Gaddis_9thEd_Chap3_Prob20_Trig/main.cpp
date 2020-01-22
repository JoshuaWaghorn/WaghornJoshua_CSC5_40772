/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 15, 2020, 13:00
 * Purpose:  Sin,Cos,Tan Calculations
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float angle, cnvrangle;
    
    //Initialize Variables
    cout<<"Calculate trig functions\n"<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Process or map Inputs to Outputs
    cnvrangle = angle;
    cnvrangle*=CNVRAD;
    
    //Display Outputs
    cout<<fixed;
    cout<<setprecision(0)<<"sin("<<angle<<") = "<<setprecision(4)<<sin(cnvrangle)<<endl;
    cout<<setprecision(0)<<"cos("<<angle<<") = "<<setprecision(4)<<cos(cnvrangle)<<endl;
    cout<<setprecision(0)<<"tan("<<angle<<") = "<<setprecision(4)<<tan(cnvrangle)<<setprecision(4);

    //Exit stage right!
    return 0;
}