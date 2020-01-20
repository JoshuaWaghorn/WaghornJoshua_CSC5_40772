/* 
 * File: A2 More Test Output Format
 * Author: Joshua Waghorn
 * Date: 1/14/2020
 * Purpose: Use iomap
 * Version:
 */

//System Libraries - Post Here
#include <iostream> 
#include <iomanip>
#include <string>
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
    float input,inputtwo, inputthree, inputfour;
    
    //Initialize or input data here
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cin>>input; 
    cin>>inputtwo;
    cin>>inputthree;
    cin>>inputfour;
    //Format and display outputs here
    cout << "" << setw(8) << input << "" << setw(8) << setprecision(2) << fixed << input << "" << setw(8) << setprecision(3) << fixed << endl;
    cout << setprecision(4) << fixed << inputtwo << endl;
    cout<<setw(9)<<setprecision(0)<<input<<setw(10)<<setprecision(1)<<input<<setprecision(2)<<setw(10)<<input<<endl;
    /*cout<<setw(9)<<setprecision(0)<<b<<setw(10)<<setprecision(1)<<b<<setprecision(2)<<setw(10)<<b<<endl;
    cout<<setw(9)<<setprecision(0)<<c<<setw(10)<<setprecision(1)<<c<<setprecision(2)<<setw(10)<<c<<endl;
    cout<<setw(9)<<setprecision(0)<<d<<setw(10)<<setprecision(1)<<d<<setprecision(2)<<setw(10)<<d;
    //Clean up allocated memory here*/
    
    //Exit stage left
    return 0;
}