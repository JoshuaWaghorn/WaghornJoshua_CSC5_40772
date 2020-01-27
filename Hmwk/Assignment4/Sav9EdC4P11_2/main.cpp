/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 *
 * Created on January 25, 2020, 20:43
 */


#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double hsize(double weight, double height);
double calc_Jacket_Size(double weight, double height, int age);
double calc_Waist(double weight, int age);

int main(){
	double height;
	double weight;
	int age, repeat;

	double hatSize;
	double jacketSize;
	double waist;

        while(repeat='y'){
	cout<<"Enter height(inches):\n\n";
	cin>>height;
	cout<<"Enter Weight(pounds):\n\n";
	cin>>weight;
	cout<<"Enter age:\n\n";
	cin>>age;

	hatSize = hsize(weight,height);
	jacketSize = calc_Jacket_Size(weight,height,age);
	waist = calc_Waist(weight,age);
	
	cout<<"Hat size = "<<hatSize<<endl;
	cout<<"Jacket size = "<<jacketSize<<endl;
	cout<<"Waist size = "<<waist<<endl<<endl;
        cout<<"Run again:\n\n";
        cin>>repeat;
        }
        
	return 0;
}

double hsize(double weight, double height){
	return (weight/height) * 2.9;
}

double calc_Jacket_Size(double weight, double height, int age){
	double result = (height * weight) / 288;
	/*now for every 10 years past 30 add (1/8) to the result*/
	if((age - 30) > 0){
		int temp = (age - 30) / 10; //truncation is our friend 
		result = result + (temp * .125);
		cout<<"result is: "<<result<<endl;
	}
	return result;
}

double calc_Waist(double weight, int age){
	double result = weight / 5.7;
	/*now for every 2 years past 28 we add (1/10) to the result*/
	if((age - 28) > 0){
		int temp = (age - 28) / 2; //truncation is our friend 
		result = result + (temp * .1);
	}
	return result;
}