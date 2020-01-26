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
        double min, calmin;
        
        
        cout << "Enter how many calories are burned per minute:\n";
        cin>>calmin;
        cout << "Min\tCalories burned\n";
        
        
        while(calmin){
            for(min=5; min<=30; min+=5){
                if(min*calmin>=0&&min*calmin<=99.9) {
                    cout << setfill('0') << min << "\t" << showpoint << setprecision(3) << min*calmin << endl;
                }
                if(min*calmin>=100&&min*calmin<=999.9) {
                    cout << setfill('0') << setprecision (0) << min << "\t" << showpoint << setprecision(4) << min*calmin << endl;
                }
            }
            if(min=30){
                return 0;
            }
        }
        
        
        /*
        for(int min=5; min<=30; min+=5){
            
            cout << setfill('0') << setw(2) << min << "\t" << min*calmin << endl;
        }
         */
        
        return 0;
    }