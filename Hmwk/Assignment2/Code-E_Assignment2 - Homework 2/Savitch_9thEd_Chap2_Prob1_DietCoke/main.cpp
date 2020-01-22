/* 
 * File: Savitch_9thEd_Chap2_Prob1_DietCoke
 * Author: Joshua Waghorn
 * Date: 1/15/2020
 * Purpose: Calculate the lethal dose of an artifical sweetener
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
const float cnvgrams=453.592;//Grams/lb
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float dsrdweight, //Desired Weight in lbs
          massmouse,//Mass of the mouse in grams
          masschem, //Mass of chemicals that result in termination
          masssoda, //Mass of Liquid in Soda Can
          concentration;//Concentration of Chemical in Soda Can
    int nCans;//The limit of the number of cans of coke to drink
    
    //Initialize Variables
    cout<<"Program to calculate the limit of Soda Pop Consumption."<< endl;
    cout<<"Input the desired dieters weight in lbs." <<endl;
    cin>>dsrdweight;//200 lbs.
    massmouse=35;//35 grams
    masschem=5;//5 grams
    masssoda=350;//350 grams
    concentration=1e-3f;//.001 Concentration
    
    //Process or map Inputs to Outputs
    nCans=dsrdweight*cnvgrams*masschem/(massmouse*masssoda*concentration);
    
    //Display Outputs
    cout<<"The maximum number of soda pop cans" << endl << "which can be consumed is " << nCans << " cans";

    //Exit stage left
    return 0;
}