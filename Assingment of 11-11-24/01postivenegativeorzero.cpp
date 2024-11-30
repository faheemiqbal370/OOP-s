/*Write a program that takes an integer input from the user and checks if it is positive, negative, or 
zero using if, else if, and else statements. Print the result accordingly.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number to check hather it is Postive,Negative or Zero\n";
    cin>>a;
    if(a<0)
    {
        cout<<"The number is NEGATIVE";
    }
    else if(a>0)
    {
        cout<<"The number is POSTIVE";
    }
    else{
        cout<<"The number is ZERO";
    }
}