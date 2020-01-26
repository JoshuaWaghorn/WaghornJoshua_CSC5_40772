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
        double mph = 0;
        int hours = 0;
        
        
        cout << "What is the speed of the vehicle in mph?\n";
        cin>>mph;
        cout << "How many hours has it traveled?\n";
        cin>>hours;
        cout << "Hour   Distance Traveled\n";
        for(int a=1; a<=hours; a++){
            if(a*mph<=9.9&&a*mph>=0&&a<=30){
                cout << setfill('0') << a << "             " << a*mph << endl;
            }
            if(a*mph>=10&&a*mph<=99.9&&a<=30){
                cout << setfill('0') << a << "             " << a*mph << endl;
            }
            if(a*mph>=100&&a*mph<=999.9&&a<=30){
                cout << setfill('0') << a << "            " << a*mph << endl;
            }
            if(a*mph>=1000&&a<=30){
                cout << setfill('0') << a << "            " << a*mph << endl;
            }
        }
        return 0;
    }
    
    