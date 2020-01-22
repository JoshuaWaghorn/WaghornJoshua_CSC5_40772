/* 
 * File: Savitch_9thEd_Chap2_Prob5_Room
 * Author: Joshua Waghorn
 * Date: 1/16/2020
 * Purpose: Determining fire law regulation violations
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float max, current, difference, reduced; 
    //Initialize or input data here
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin>>max;
    cin>>current;
    difference = max-current;
    reduced = current-max;
    if (current <= max)
        cout << "Meeting can be held.\n" << "Increase number of people by " << difference << " will be allowed without violation.";
    
    if (current >= max)
    cout << "Meeting cannot be held.\n" << "Reduce number of people by " << reduced << " to avoid fire violation.";
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}