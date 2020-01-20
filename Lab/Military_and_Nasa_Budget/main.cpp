/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on January 7, 2020, 12:20 PM
 * Purpose:  Military and NASA Budget
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variable Data Types and Constants
    const int CNVPERC=100;//Conversion to Percentage
    float fedBudg,milBudg,nasaBudg;//Budgets in Dollars 2020
    float percMil,prcNasa;//Percentage compared to total federal budget
    
     //Initialize Variables
    //All budgets googled in class
    fedBudg=4.1e12f;//Federal Budget 4.1 trillion dollars
    milBudg=686e9f; //Military Budget = 686 Billion
    nasaBudg=21.5e9f;//Nasa Budget = 21.5 Billion
    
    //Process or map Inputs to Outputs
    cout<<"Federal Budget  = $"<<fedBudg<<endl;
    cout<<"Military Budget = $"<<milBudg<<endl;
    cout<<"NASA Budget     = $"<<nasaBudg<<endl;
    cout<<"Military Budget =  "<<milBudg/fedBudg*CNVPERC<<"%"<<endl;
    cout<<"NASA Budget     =  "<<nasaBudg/fedBudg*CNVPERC<<"%"<<endl;
    
    
    
    return 0;
}

