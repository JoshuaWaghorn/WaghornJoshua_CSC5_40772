/* 
 * File:   main.cpp
 * Author: Joshua Waghorn
 * Created on 2/1/2020 1830
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include<iostream>
using namespace std;


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


int main(){
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
    
    return 0;
}