/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 1/30/2020 1615
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

#include <iostream> 
using namespace std; 
  

string one[] = { "", "One ", "Two ", "Three ", "Four ", 
                 "Five ", "Six ", "Seven ", "Eight ", 
                 "Nine ", "Ten ", "Eleven ", "Twelve ", 
                 "Thirteen ", "Fourteen ", "Fifteen ", 
                 "Sixteen ", "Seventeen ", "Eighteen ", 
                 "Nineteen "
               }; 
  
string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ", 
                 "Fifty ", "Sixty ", "Seventy ", "Eighty ", 
                 "Ninety "
               }; 
  
string numtoword(int input, string s) 
{ 
    string str = ""; 
    
    if (input > 19) 
        str += ten[input / 10] + one[input % 10]; 
    else
        str += one[input]; 
  
    
    if (input) 
        str += s; 
  
    return str; 
} 
  
string numtoword(long input) 
{ 
    
    string out;
    
    out += numtoword(((input / 1000) % 100), "Thousand ");
    
    out += numtoword(((input / 100) % 10), "Hundred ");
    
    out += numtoword((input % 100), ""); 
  
    return out;
} 
  
 
int main() 
{ 
    
    long input; 
    
    cout << "Input an integer [1-3000] convert to an English Check value.\n";
    cin>>input;
    
    cout << numtoword(input) << "and no/100's Dollars" << endl; 
  
    return 0; 
} 