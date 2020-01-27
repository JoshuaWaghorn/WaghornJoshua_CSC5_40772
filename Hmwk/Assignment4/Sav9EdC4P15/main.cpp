/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: destr
 *
 * Created on January 26, 2020, 12:56 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    float cost, owed, payed, dollar, quarter, dime, nickel;
    int coin;
    
    cost = 3.50;
    dollar = 1.00;
    quarter = 0.25;
    dime = 0.10;
    nickel = 0.05;
    payed = 0;
    
    owed = cost;
    
    
    do {
        
        cout << "List of coins:\n";
        cout << "1. Nickel\n";
        cout << "2. Dime\n";
        cout << "3. Quarter\n";
        cout << "4. Dollar\n";
        cout << "Enter a number for coin:\n\n";
        
        cin>>coin;
        
        switch(coin){
            case '1':{
                //payed = 0;
                //coin = nickel;
                //owed = owed - nickel;
                //payed = payed + nickel;
                cout << "Current amount: " << payed << endl;
                break;
            }
            case '2':{
            coin = dime;
            owed = owed - dime;
            payed = + dime;
            cout << "Current amount: " << payed << endl;
            break;
        }
            case '3':{
            coin = quarter;
            owed = owed - quarter;
            payed = payed + quarter;
            cout << "Current amount: " << payed << endl;
            break;
        }
            case '4':{
            coin = dollar;
            owed = owed - dollar;
            payed = payed + dollar;
            cout << "Current amount: " << payed << endl;
            break;
        }
        }
    }while(owed<=0);
    
    
    

    return 0;
}

