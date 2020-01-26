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
        const int minfloors = 1;
        const int minrooms  = 10;
        int floors;         
        int rooms;          
        int occupied;       
        int totalrooms=0, totaloccupied=0;
        
        
        cout << "Enter how many floors there are:\n";
        do{
            cin>>floors;
        }while(floors<minfloors);          
        
        for(int floor=1; floor <= floors; floor++){
            
            if(floor == 13){
                continue;
            }
            
            
            cout << "Enter how many rooms are on floor " << floor << ":\n";
            do{
                cin>>rooms;
            }while(rooms<minrooms); 
            
            totalrooms += rooms;
            
            
            
            
            cout << "Enter how many are occupied:\n";
            do{
                cin>>occupied;
            }while(occupied<0 || occupied>rooms); 
            
            totaloccupied += occupied;
        }
        
       
        cout << "There are " << totaloccupied << " rooms occupied.\n";
        cout << "There are " << (totalrooms-totaloccupied) << " rooms unoccupied.\n";
        cout << fixed << setprecision(1) << 1.0*totaloccupied/totalrooms*100 << "% of rooms are occupied.";
        
        
        return 0;
    }