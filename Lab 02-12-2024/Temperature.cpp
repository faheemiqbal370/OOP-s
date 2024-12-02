#include<iostream>
using namespace std;


int main(){

    double tc,tf;
    int choice;
    cout<<"Enter 1: To convert celsius into fahrenhiet.\n Enter 2:To convert fahrenhiet into celsius.\n";
    cin>>choice;

    if(choice==1){
        cout<<"Enter Temperature in Celsius\n";
        cin>>tc;
       tf=(tc*9.0/5.0)+32; 
        cout<<"The temperature in fahrenhiet is " <<tf;
    }
    
    if(choice==2){
        cout<<"Enter Temperature in Fahrenhiet";
        cin>>tf;
        tc=(tf-32)*(5.0/9.0);
        cout<<"The temperature in fahrenhiet is " <<tf;
    }
}
