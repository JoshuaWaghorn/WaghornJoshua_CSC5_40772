/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 *
 * Created on January 23, 2020, 1430
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string.h>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned char nProbs;
    unsigned char choose;
    
    nProbs='10';
    
    do {
        cout<<endl;
        cout<<"Choose the Homework Problem to Display"<<endl;
        cout<<"1. Which number is larger"<<endl;
        cout<<"2. Convert to Roman numerals"<<endl;
        cout<<"3. Is the date magic?"<<endl;
        cout<<"4. Which rectangle has the bigger area?"<<endl;
        cout<<"5. Calculate the Newtons of an object"<<endl;
        cout<<"6. Calculate your book rewards points"<<endl;
        cout<<"7. How fast will sound travel through a certain medium"<<endl;
        cout<<"8. Temperatures of boiling and freezing"<<endl;
        cout<<"9. Geometry Calculator"<<endl;
        cout<<"10. Calculate the charge of a call"<<endl;
        cin>>choose;
        
        switch(choose){
            
            case '1':{
                float numa, numb;
                cout << "Enter a number:" << endl;
                cin>>numa;
                cout << "Enter a number:" << endl;
                cin>>numb;
                numa >= numb? cout << numa << " is larger" : cout << numb << " is larger";  
                break;
            }
            case '2':{
                unsigned short convert;
                cout<<"Enter a number between 1 and 10:"<<endl;
                while (convert<1||convert>10){
                    cin >>convert;
                    if(convert>=1&&convert<=10){
                        unsigned char tens, ones;
                        tens = convert/10;
                        ones = convert%10;
                        switch (convert){
                            case 1:
                                cout << convert << " is I in Roman numerals";
                                break;
                            case 2:
                                cout << convert << " is II in Roman numerals";
                                break;
                            case 3:
                                cout << convert << " is III in Roman numerals";
                                break;
                            case 4:
                                cout << convert << " is IV in Roman numerals";
                                break;
                            case 5:
                                cout << convert << " is V in Roman numerals";
                                break;
                            case 6:
                                cout << convert << " is VI in Roman numerals";
                                break;
                            case 7:
                                cout << convert << " is VII in Roman numerals";
                                break;
                            case 8:
                                cout << convert << " is VIII in Roman numerals";
                                break;
                            case 9:
                                cout << convert << " is IX in Roman numerals";
                                break;
                            case 10:
                                cout << convert << " is X in Roman numerals";
                                break;
                        }
                    }else{cout << "Entered number is not valid, reenter number:" << endl;}
                }
                break;
            }
            case '3':{
                unsigned int day, mnth, yr;
                cout << "Enter a month:\n";
                cin>>mnth;
                cout << "Enter a day:\n";
                cin>>day;
                cout << "Enter a year:\n";
                cin>>yr;
                if (mnth*day==yr)cout << "The date is magic";
                else cout << "The date is not magic";
                break;
            }
            case '4':{
                int rct1w, rct1h, rct1a, rct2w, rct2h, rct2a;
                cout << "Enter the width of rectangle 1:\n";
                cin>>rct1w;
                cout << "Enter the height of rectangle 1:\n";
                cin>>rct1h;
                cout << "Enter the width of rectangle 2:\n";
                cin>>rct2w;
                cout << "Enter the height of rectangle 2:\n";
                cin>>rct2h;
                rct1a=rct1w*rct1h;
                rct2a=rct2w*rct2h;
                if (rct1a>rct2a)cout << "Rectangle 1 has the greater area";
                if (rct1a==rct2a)cout << "The rectangles have the same area";
                if (rct1a<rct2a)cout << "Rectangle 2 has the greater area";
                break;
            }
            case '5':{
                float weight, mass;
                cout << "Enter the mass of an object:\n";
                cin>>mass;
                weight=mass*9.8;
                cout << fixed;
                if (weight<10)cout << "The object is too light";
                if (weight>1000)cout << "The object is too heavy";
                if (10<=weight&&weight<=1000)cout << "The object weighs " << setprecision (1) << weight << " newtons";
                break;
            }
            case '6':{
                float bksprchsd, mnth, pnts;
                cout << "Enter how many books you purchased this month:\n";
                cin>>bksprchsd;
                if (bksprchsd==0)cout<<"You earned 0 points.";
                if (bksprchsd==1)cout<<"You earned 5 points.";
                if (bksprchsd==2)cout<<"You earned 15 points.";
                if (bksprchsd==3)cout<<"You earned 30 points.";
                if (bksprchsd>=4)cout<<"You earned 60 points.";
                break;
            }
            case '7':{
                char material;
                double distance, time;
                cout << "Choose which medium the sound wave will travel in.\n";
                cout << "1.Air\n2.Water\n3.Steel\n";
                cin >> material;
                cout << "Enter the distance the wave will travel:\n";
                cin >> distance;
                if(distance >= 0){
                    switch (material){
                        case '1':
                            time = (distance / 1100);
                            break;
                        case '2':
                            time = (distance / 4900);
                            break;
                        case '3':
                            time = (distance / 16400);
                            break;
                        default:
                            cout << "Please enter an available environment!\n";
                            break;
                    }
                }
                else{
                    cout << "Distances less than 0 are not accepted!\n";
                }
                cout << fixed;
                cout << "The wave will take " << setprecision(4) << time << " seconds";
                break;
            }
            case '8':{
                float input, ethbp, ethfp, merbp, merfp, oxybp, oxyfp, waterbp, waterfp;
                ethfp = -173;
                ethbp = 172;
                merfp = -38;
                merbp = 676;
                oxyfp = -362;
                oxybp = -306;
                waterfp = 32;
                waterbp = 212;
                cout << "Enter a temperature:" << endl;
                cin>>input;
                if (input <= ethfp){cout << "Ethyl alcohol will freeze\n";}
                if (input <= merfp){cout << "Mercury will freeze\n";}
                if (input <= oxyfp){cout << "Oxygen will freeze\n";}
                if (input <= waterfp){cout << "Water will freeze\n";}
                if (input >= ethbp){cout << "Ethyl alcohol will boil\n";}
                if (input >= merbp){cout << "Mercury will boil\n";}
                if (input >= oxybp){cout << "Oxygen will boil\n";}
                if (input >= waterbp){cout << "Water will boil\n";}
                break;
            }
            case '9':{
                int choice;
                cout << "Geometry Calculator\n";
                cout << "1. Calculate the Area of a Circle\n";
                cout << "2. Calculate the Area of a Rectangle\n";
                cout << "3. Calculate the Area of a Triangle\n";
                cout << "4. Quit\n";
                cin>>choice;
                if (choice<1||choice>4){cout << "Invalid entry, Reenter:\n";
                cin>>choice;}
                else if (choice == 1){float r, pi = 3.14159, carea;
                cout << "Enter the radius of the circle:\n";
                cin>>r;
                if (r < 0){cout << "Invalid entry, Reenter:\n";
                cin>>r;}
                else{}
                carea = pi*r*r;
                cout << "The area of the circle is " << fixed << setprecision (1) << carea;
                }
                else if (choice ==2){float rheight, rlength, rarea;
                cout << "Enter the length of the rectangle:\n";
                cin>>rlength;
                if (rlength < 0){cout << "Invalid entry, Reenter:\n";
                cin>>rlength;}
                cout << "Enter the height of the rectangle:\n";
                cin>>rheight;
                if (rheight < 0){cout << "Invalid entry, Reenter:\n";
                cin>>rheight;}
                else {}
                rarea = rlength*rheight;
                cout << "The area of the rectangle is " << fixed << setprecision(1) << rarea;
                }
                else if (choice ==3){float base, theight, tarea; 
                cout << "Enter the base of the triangle:\n";
                cin>>base;
                if (base < 0){cout << "Invalid entry, Reenter:\n";
                cin>>base;}
                cout << "Enter the height of the triangle:\n";
                cin>>base;
                if (base < 0)
                {cout << "Invalid entry, Reenter:\n";
                cin>>base;}
                cout << "Enter the height of the triangle:\n";
                cin>>theight;
                if (theight < 0){cout << "Invalid entry, Reenter:\n";
                    cin>>theight;}
                else {}
                tarea = base*theight*0.5;
                cout << "The area of the triangle is " << fixed << setprecision(1) << tarea;
                }
                else if (choice ==4) {}
                break;
            }
            case '10':{
                float under7, under19, under24;
                float inputtime, minutes, amountowed;
                int copytime;
                bool valid;
                under7 <=06.59;
                under19 <=19.00;
                under24 <=23.59;
                cout << "I could not get this to quite work" << "Enter the starting time:\n";
                cin>>inputtime;
                valid=(inputtime<=23.59);
                if (!valid)cout<<"Error";
                while (valid){
                    cout << "Enter the minutes of the call:\n";
                    cin>>minutes;
                    copytime=minutes/10+inputtime;
                    if (copytime<=under7){cout<<"The charges are " << copytime*0.05;}
                    if (copytime<=under19)
                    {cout<<"The charges are " << copytime*0.45;}
                    if (copytime<=under24){cout<<"The charges are " << copytime*0.20;}
                    else if (inputtime-copytime>0.59){cout<< "Time Exceeded";}
                }
                break;
            }  
        }
    }while(choose<=nProbs&&choose>=0);
    
    

    return 0;
}