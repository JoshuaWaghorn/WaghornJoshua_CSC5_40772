/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/1/2020 1000
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;
float f(float x, int n); 


int main(){
    int n; 
    float x; 
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+.......\n";
    cout<<"Input x and the number of terms, output f(x)\n";
    cin>>x>>n; 
    
    cout<<fixed<<showpoint<<setprecision(6);
    cout<<f(x, n)<<endl;
    return 0;
}


float f(float x, int n) 
{
    float power,i,exp=0; 
    int count=0,fact; 
    power = x; 
    
    for (int i = 1; count<n; i=i+2) 
    {
        fact=1; 
        count++; 
        for(int j=1;j<=i;j++)
            fact*=j; 
        if(count%2==1) 
            exp=exp+(power/fact); 
        else
            exp=exp-(power/fact); 
        power = power*x*x; 
    }
    return exp; 
}