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
        double calmin = 0;
        
        
        cout << "Enter how many calories are burned per minute:\n";
        cin>>calmin;
        cout << "Min\tCalories burned\n";
        for(int min=5; min<=30; min+=5){
            if(min*calmin<=9.9&&min*calmin>=0&&min<=30){
                cout << setfill('0') << min << "\t" << showpoint << setprecision(2) << min*calmin << endl;
            }
            if(min*calmin>=10&&min*calmin<=99.9&&min<=30){
                cout << setfill('0') << min << "\t" << showpoint << setprecision(3) << min*calmin << endl;
            }
            if(min*calmin>=100&&min*calmin<=999.9&&min<=30){
                cout << setfill('0') << min << "\t" << showpoint << setprecision(4) << min*calmin << endl;
            }
            if(min*calmin>=1000&&min<=30){
                cout << setfill('0') << min << "\t" << showpoint << setprecision(5) << min*calmin << endl;
            }
        }
        return 0;
    }
    
    