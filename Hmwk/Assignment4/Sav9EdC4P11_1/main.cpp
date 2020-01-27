/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 *
 * Created on January 25, 2020, 20:43
 */

    #include <iostream>
    #include <iomanip>
    using namespace std;

   

    int main(){
        
        double hsize, jsize, wsize;
        double height, weight;
        int age, repeat;
        
        do{
            cout<< "Enter height(inches):\n\n";
            cin>>height;
            cout<< "Enter weight(pounds):\n\n";
            cin>>weight;
            cout<< "Enter age:\n\n";
            cin>>age;
            
            hsize = weight/height*2.9;
            while(jsize){
                double j;
                if(age<=29.0){
                    jsize==height*weight;
                }
                if(age>=30.0)
                {
                    age=age-age%10;
                    j=age-30.0/10;
                    jsize=height*weight/288+1.0/8*j;
                }
            }
            
            while(wsize){
                double w;
                if(age<=27){
                    wsize=weight/5.7;
                }
                if(age>=28){
                    age=age-age%2;w=age-28/2;
                    wsize=weight/5.7+1.0/10*w;
                }
            }
            cout << "Hat size = " << hsize << endl;
            cout << "Jacket size = " << jsize << endl;
            cout << "Waist size = " << wsize << endl << endl;
            cout << "Run again:\n\n";
            cin>>repeat;
            if(repeat='n'){return 0;}
        }while(repeat=='y');
        
        
    }