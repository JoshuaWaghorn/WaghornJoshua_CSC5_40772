/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 *
 * Created on January 25, 2020, 7:02 PM
 */

    #include <iostream>
    #include <iomanip>
    using namespace std;

   

    int main(){
        
        float a, b, c, max;
        
        cout << "Enter first number:\n";
        cin>>a;
        cout << endl;
        cout << "Enter Second number:\n";
        cin>>b;
        cout << endl;
        cout << "Enter third number:\n";
        cin>>c;
        cout << endl;
        
        if (a>b){
            cout << "Largest number from two parameter function:\n"
                    << a << endl << endl;
        }
        
        if (a<b){cout << "Largest number from two parameter function:\n"
                    << b << endl << endl;
        }
        
        if(a>b&&a>c){cout << "Largest number from three parameter function:\n"
                    << a << endl;
        }
        if(b>a&&b>c){cout << "Largest number from three parameter function:\n"
                    << b << endl;
        }
        if(c>a&&c>b){cout << "Largest number from three parameter function:\n"
                    << c << endl;
        }
        
        return 0;
    }