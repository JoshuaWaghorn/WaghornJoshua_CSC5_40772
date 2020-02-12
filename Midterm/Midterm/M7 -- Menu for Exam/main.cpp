/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/1/2020 0030
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Problem 1 voids
void cross(int c)
{
    int i,j,k;
    if(c%2)
    {
        for(int i=c;i>=1;i--)
        {
            for(int j=c;j>=1;j--)
            {
                if(j==i || j==(c-i+1))
                    cout<<j;
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
        for(int i=1;i<=c;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(j==i || j==(c-i+1))
                {
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
}

void forwardslash(int f)
{
    if(f%2)
    {
        for(int i=f;i>=1;i--)
        {
            for(int j=f;j>=1;j--)
            {
                if(j==f-i+1)
                {
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
        for(int i=1;i<=f;i++)
        {
            for(int j=1;j<=f;j++)
            {
                if(j==(f-i+1))
                {
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
}

void backwardslash(int b)
{
    if(b%2)
    {
        for(int i=b;i>=1;i--)
        {
            for(int j=b;j>=1;j--)
            {
                if(j==i)
                {
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
        for(int i=1;i<=b;i++)
        {
            for(int j=1;j<=b;j++)
            {
                if(j==i)
                {
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
}

//None for Problem 2

//Problem 3 strings
string one[] = { "", "One ", "Two ", "Three ", "Four ", 
                 "Five ", "Six ", "Seven ", "Eight ", 
                 "Nine ", "Ten ", "Eleven ", "Twelve ", 
                 "Thirteen ", "Fourteen ", "Fifteen ", 
                 "Sixteen ", "Seventeen ", "Eighteen ", 
                 "Nineteen "
               }; 
  
string ten[] = { "", "", "Twenty ", "Thirty ", "Forty ", 
                 "Fifty ", "Sixty ", "Seventy ", "Eighty ", 
                 "Ninety "
               }; 
  
string numtoword(int input, string s) 
{ 
    string str = ""; 
    
    if (input > 19) 
        str += ten[input / 10] + one[input % 10]; 
    else
        str += one[input]; 
  
    
    if (input) 
        str += s; 
  
    return str; 
} 
  
string numtoword(long input) 
{ 
    
    string out;
    
    out += numtoword(((input / 1000) % 100), "Thousand ");
    
    out += numtoword(((input / 100) % 10), "Hundred ");
    
    out += numtoword((input % 100), ""); 
  
    return out;
} 

//None for Problem 4

//None for Problem 5

//Problem 6 float
float f(float x, int n); 

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




//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<=6&&inN>=1);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    int inputnum;
    char shape;
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>inputnum>>shape;
    if(shape=='x' || shape=='X')
        cross(inputnum);
    else if(shape=='f' || shape=='F')
        forwardslash(inputnum);
    else if(shape=='b' || shape=='B')
        backwardslash(inputnum);
    else
        cout<<"Error"<<endl;
    
}

void problem2(){
    char input1, input2, input3, input4;
    cout << "Create a histogram chart.\n";
    cout << "Input 4 digits as characters.\n";
    cin>>input1;
    cin>>input2;
    cin>>input3;
    cin>>input4;
    
    
    if(input4>='0'&&input4<='9'){
        cout << input4 << " ";
        if(input4=='0')cout<<endl;
        if(input4=='1')cout<<"*"<<endl;
        if(input4=='2')cout<<"**"<<endl;
        if(input4=='3')cout<<"***"<<endl;
        if(input4=='4')cout<<"****"<<endl;
        if(input4=='5')cout<<"*****"<<endl;
        if(input4=='6')cout<<"******"<<endl;
        if(input4=='7')cout<<"******"<<endl;
        if(input4=='8')cout<<"********"<<endl;
        if(input4=='9')cout<<"*********"<<endl;
    }
    
    if(input4>='a'&&input4<='z'){
        cout << input4 << " ?\n";
    }
    
    if(input4>='A'&&input4<='Z'){
        cout << input4 << " ?\n";
    }
    
    
    if(input3>='0'&&input3<='9'){
        cout << input3 << " ";
        if(input3=='0')cout<<endl;
        if(input3=='1')cout<<"*"<<endl;
        if(input3=='2')cout<<"**"<<endl;
        if(input3=='3')cout<<"***"<<endl;
        if(input3=='4')cout<<"****"<<endl;
        if(input3=='5')cout<<"*****"<<endl;
        if(input3=='6')cout<<"******"<<endl;
        if(input3=='7')cout<<"******"<<endl;
        if(input3=='8')cout<<"********"<<endl;
        if(input3=='9')cout<<"*********"<<endl;
    }
    
    if(input3>='a'&&input3<='z'){
        cout << input3 << " ?\n";
    }
    
    if(input3>='A'&&input3<='Z'){
        cout << input3 << " ?\n";
    }
    
    
    
    if(input2>='0'&&input2<='9'){
        cout << input2 << " ";
        if(input2=='0')cout<<endl;
        if(input2=='1')cout<<"*"<<endl;
        if(input2=='2')cout<<"**"<<endl;
        if(input2=='3')cout<<"***"<<endl;
        if(input2=='4')cout<<"****"<<endl;
        if(input2=='5')cout<<"*****"<<endl;
        if(input2=='6')cout<<"******"<<endl;
        if(input2=='7')cout<<"******"<<endl;
        if(input2=='8')cout<<"********"<<endl;
        if(input2=='9')cout<<"*********"<<endl;
    }
    
    if(input2>='a'&&input2<='z'){
        cout << input2 << " ?\n";
    }
    
    if(input2>='A'&&input2<='Z'){
        cout << input2 << " ?\n";
    }
    
    
    if(input1>='0'&&input1<='9'){
        cout << input1 << " ";
        if(input1=='0')cout<<endl;
        if(input1=='1')cout<<"*"<<endl;
        if(input1=='2')cout<<"**"<<endl;
        if(input1=='3')cout<<"***"<<endl;
        if(input1=='4')cout<<"****"<<endl;
        if(input1=='5')cout<<"*****"<<endl;
        if(input1=='6')cout<<"******"<<endl;
        if(input1=='7')cout<<"******"<<endl;
        if(input1=='8')cout<<"********"<<endl;
        if(input1=='9')cout<<"*********"<<endl;
    }
    
    if(input1>='a'&&input1<='z'){
        cout << input1 << " ?\n";
    }
    
    if(input1>='A'&&input1<='Z'){
        cout << input1 << " ?\n";
    }
}

void problem3(){
    long input; 
    
    cout << "Input an integer [1-3000] convert to an English Check value.\n";
    cin>>input;
    
    cout << numtoword(input) << "and no/100's Dollars" << endl; 
}

void problem4(){
    char package;
    unsigned short hours;
    
//Input or initialize values Here
    cout << "ISP charges for service delivered." << endl;
    cout << "Input package A,B,C then hours used for the month" << endl;
    cin >> package >> hours;
    
    //Basic Charges
    double chargea = 16.99;
    if(hours<=10)
        chargea += 0;
    else if(hours<=20)
        chargea += (hours-10)*0.95;
    else
        chargea += (10*0.95)+((hours-20)*0.85);
    double chargeb = 26.99;
    if(hours<=20)
        chargeb += 0;
    else if(hours<=30)
        chargeb += (hours-20)*0.74;
    else
        chargeb += (10*0.74)+((hours-30)*0.64);
    double chargec = 36.99;
    cout<<setprecision(2)<<fixed;
    
    if(package=='a'){
        cout<<"$"<<chargea;
        if(chargec < chargeb && chargec < chargeb){
            cout<<" C $"<<(chargea - chargec)<<endl;
        }
        else if(chargeb < chargea){
            cout<<" B $"<<(chargeb- chargea)<<endl;
        }
        else{
            cout<<" A $"<<(chargea- chargea)<<endl;
        }
    }
    
    else if(package=='b'){
        cout<<"$"<<chargeb;
        if(chargec < chargea && chargec < chargeb){
            cout<<" C $"<<(chargeb- chargec)<<endl;
        }
        else if(chargea < chargeb){
            cout<<" A $"<<(chargeb- chargea)<<endl;
        }
        else{
            cout<<" B $"<<(chargeb- chargeb)<<endl;
        }
    }
    else{
        cout<<"$"<<chargec;
        if(chargec > chargea && chargec > chargeb){
            cout<<" B $"<<(chargec- chargeb)<<endl;
        }
        else if(chargec>chargea){
            cout<<" A $"<<(chargec- chargea)<<endl;
        }
        else{
            cout<<" C $"<<(chargec- chargec)<<endl;
        }
    }
}

void problem5(){
    float payRate;
    unsigned short hrsWrkd;
    float grossPay, time, timehalf, timedouble, adjustedtime;
    
    //Input or initialize values Here
    cout << fixed << showpoint << setprecision(2);
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    if(hrsWrkd<=20){
        time=payRate*hrsWrkd;
        grossPay=time;
        cout << "$" << grossPay << endl;
    }
    
    if(hrsWrkd>20&&hrsWrkd<=40){
        time=payRate*20; //200@10/hour
        adjustedtime = hrsWrkd-20;
        timehalf=adjustedtime*payRate*1.5;
        grossPay=time+timehalf;
        cout << "$" << grossPay << endl;
    }
    
    if(hrsWrkd>40){
        time=payRate*20; //200@10/hour
        timehalf=payRate*20*1.5; //300@10/hour*1.5
        adjustedtime = hrsWrkd-40;
        timedouble=adjustedtime*payRate*2.0; //200@10/hour*2.0
        grossPay=time+timehalf+timedouble;
        cout << "$" << grossPay << endl;
    }
}

void problem6(){
    int n; 
    float x; 
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+.......\n";
    cout<<"Input x and the number of terms, output f(x)\n";
    cin>>x>>n; 
    
    cout<<fixed<<showpoint<<setprecision(6);
    cout<<f(x, n)<<endl;
}