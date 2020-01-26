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

using namespace std;

int main()
{

    int input, total = 0, minval = 1;


    cout << "Enter a positive integer number:\n";
    cin >> input;

    //validate input
    while(input <= 0){
        cout << "Only positive integers accepted! ";
        cout << "Try again: ";
        cin >> input;
    }

    //add numbers
    for(int i = 1; i <= input; i++){
        total += i;
    }

    //display result
    cout << "The sum of all the integers from " << minval << " to " << input << " is " << total;

    //End
    return 0;
}
