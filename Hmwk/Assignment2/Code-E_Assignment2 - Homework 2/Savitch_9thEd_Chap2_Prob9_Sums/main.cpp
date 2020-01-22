/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on: 1/16/2020
 * Purpose:  Sum of inputs
 *     
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float var;//10 inputs
    float tot,neg,pos;//total, negative, positive
    
    //Initialize Variables
    tot=neg=pos=0;
    
    //Process or map Inputs to Outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>var;
    var>0?pos+=var:neg+=var;
    
    cin>>var;
    var>0?pos+=var:neg+=var;
    
    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;

    cin>>var;
    var>0?pos+=var:neg+=var;
    
    //Sum total simply sum of both positive and negative
    tot=pos+neg;

    //Display Outputs
    cout << fixed << setprecision(0);
    cout << "Negative sum =" << setw(4) << neg << endl;
    cout << "Positive sum =" << setw(4) << pos << endl;
    cout << "Total sum    =" << setw(4) << tot;
    
    
    //Exit stage right!
    return 0;
}