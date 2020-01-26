/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 *
 * Created on January 25, 2020, 5:02 PM
 */

    #include <iostream>
    #include <iomanip>
    using namespace std;

    // =============================================================

    int main(){
        
        // Definitions
        float increase = 0;
        
        
        cout << "Enter how many millimeters the ocean is rising per year:\n";
        cin>>increase;
        cout << "Year\tRise(mm)\n";
        for(int year=1; year<=30; year++){
            if(year*increase<=9.9){
                cout << setfill('0') << year << "\t" << showpoint << setprecision(2) << year*increase << endl;
            }
            if(year*increase>=10&&year*increase<=99.9){
                cout << setfill('0') << year << "\t" << showpoint << setprecision(3) << year*increase << endl;
            }
            if(year*increase>=99.9){
                cout << setfill('0') << year << "\t" << showpoint << setprecision(4) << year*increase << endl;
            }
        }
        return 0;
    }