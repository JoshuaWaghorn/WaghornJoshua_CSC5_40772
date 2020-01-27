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
        int age;
        char input;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do
    {
        cout << "Enter height(inches):\n\n";
        cin>>height;
        cout << "Enter Weight(pounds):\n\n";
        cin>>weight;
        cout << "Enter age:\n\n";
        cin>>age;
        cout << "\tThe user's Hat size: " << hat(weight, height) << "\tThe user's Jacket size: "<< jacket( height, weight, age) << "\tThe user's Waist size: "<< waist( height, weight, age)<< "\n \nWould you like to continue (y/n)? ";
        cin>>input;
    }
        while(toupper(input) == 'Y');
        return 0;
    }

    double hat(double weight ,double height)

    {
        return ((weight/height) * 2.9);
    }

    double jacket(double height,double weight,int age)
    { 
        double size;
        int j;
        if (age>=30)
        {
        if((age % 10) !=0)
        age = age-(age%10);
        j= (age-30)/10;
        size =((height * weight) / 288)+((1.0/8)*j);
        }
        else
        size =((height * weight) / 288);
        return size;
    }

    double waist(double height,double weight,int age)
    {
        double size2;
        int k;

        if(age >= 28)
        {
            if((age % 2) !=0)
            age = age-(age%2);
            k = (age-28)/2;
            size2 = (weight/(5.7))+( (1.0/10)*k);
        }
        else 
        size2 = weight / (5.7);
        return size2;
        
        return 0;
    }