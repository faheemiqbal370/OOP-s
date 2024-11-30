/*Create a program that takes two integer inputs and an arithmetic operator (+, -, *, /) from the 
user, then performs the corresponding operation. Use if, else if, and else statements to 
handle each case and print the result.*/
//HEre i used IF ELSE
#include<iostream>
using namespace std;
int main(){
    int a,b;
    float c;
    char opr;

    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<"Enter the Operation you want to perform \n(+ - * /)\n";
    cin>>opr;

    if(opr=='+')
    {
        c=a+b;
        cout<<"The sum is "<<c;
    }
    else if(opr=='-')
    {
        c=a-b;
        cout<<"The difference is "<<c;
    }
     else if(opr=='*')
     {
        c=a*b;
        cout<<"The product is "<<c;
    }
     else if(opr=='/')
     {
        c=static_cast<float>(a) /b;
        cout<<"The division of two numbers is "<<c;
    }
    else
    {
        cout<<"INVALID INPUT";
    }
    return 0;
}