/*Create a program that takes two integer inputs and an arithmetic operator (+, -, *, /) from the 
user, then performs the corresponding operation. Use if, else if, and else statements to 
handle each case and print the result.*/
//HERE I USED SWITCH CASE
#include<iostream>
using namespace std;
int main(){
    int a,b,num;
    float c;
    cout<<"Enter Two numbers\n";
    cin>>a>>b;
    cout<<"Enter: \n 1 for Addition\n 2 for Subtraction \n 3 for Multiplication \n 4 for division\n";
    cin>>num;
    switch (num)
    {
    case 1:
        c=a+b;
        cout<<"The sum is "<<c;
         break;
    case 2:
        c=a-b;
        cout<<"The difference is "<<c;
        break;
    case 3:
        c=a*b;
        cout<<"The product is "<<c;
        break;
    case 4:
         c=static_cast<float>(a) /b;
        cout<<"The division of two numbers is "<<c;
        break;
    default:
        break;
    }
return 0;
}