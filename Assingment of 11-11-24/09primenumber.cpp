/*Write a program that takes an integer as input and uses a for loop with an if statement to check 
if the number is prime. If it’s prime, print "Prime Number"; otherwise, print "Not a Prime 
Number.*/
#include<iostream>
using namespace std;
int main(){
    int nbr,flag=1;
    cout<<"Enter the number to check wheather it is prime or not\n";
    cin>>nbr;
    if(nbr==1){
        cout<<"Number is neither Prime nor Composite";
    }
    else
    {
    for( int i=2;i<=nbr-1;i++)
    {
        if(nbr%i==0){
            cout<<"The number is composite";
            flag=0;
            break;

        }
    }    
    if(flag==1){
        cout<<"The number is prime";
    }
    }


 }