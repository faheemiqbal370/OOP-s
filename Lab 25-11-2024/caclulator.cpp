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
        c=static_cast<float>(a) /b; // static_cast<float> converts the variable a to a float type . 
        cout<<"The division of two numbers is "<<c;
    }
    else
    {
        cout<<"INVALID INPUT";
    }
    return 0;
}