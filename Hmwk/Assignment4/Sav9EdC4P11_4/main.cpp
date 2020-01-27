


#include <iostream>
using namespace std;


int main() 
  {
    int score1, score2, score3, age; // age
    double average, height, weight, hsize, jsize, wsize;            // Sizes, weight, height
    char again;                // To hold Y or N input 
    
    
    
    do 
     { 
         // Get height, weight, and age. 
           cout << "Enter height(inches):\n\n";
           cin >> height;
           cout << "Enter Weight(pounds):\n\n";
           cin >> weight;
           cout << "Enter age:\n\n";
           cin >> age;
           
           
           double hsize(double weight, double height){
               return (weight/height) * 2.9;
           } 
  
 
          // Calculate and display the sizes. 
         average = (score1 + score2 + score3) / 3.0; 
           cout << "The average is " << average << ".\n"; 
  
 
          // Does the user want to average another set? 
          cout << "Do you want to average another set? (Y/N) "; 
          cin >> again; 
       } while (again == 'Y' || again == 'y'); 
       return 0; 
   }