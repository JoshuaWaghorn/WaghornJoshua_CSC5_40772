/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/1/2020 0000
 * Purpose:  Histogram
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char input1, input2, input3, input4, output1, output2, output3, output4;
    cout << "Create a histogram chart.\n";
    cout << "Input 4 digits as characters.\n";
    input1 = cin.get();
    input2 = cin.get();
    input3 = cin.get();
    input4 = cin.get();
    
    output1=0;
    
    
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
    
    

    return 0;
}

