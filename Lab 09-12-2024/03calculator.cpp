#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    char op;
    int num1,num2,result;
    cout<<"enter the operation you want to perform (+ - * / %)\n";
    cin>>op;

    (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') ? 
        cout << "Error: Invalid operator" :

    cout<<"Enter 2 numbers\n";
    cin>>num1>>num2;

    result = (op == '+') ? num1 + num2 :
             (op == '-') ? num1 - num2 :
             (op == '*') ? num1 * num2 :
             (op == '/') ? (num2 != 0 ? num1 / num2 : 0) :
             (op == '%') ? (num2 != 0 ? fmod(num1, num2) : 0) :
              0;

    (op == '/' && num2 == 0) ? cout << "Error: Division by zero\n" :
    (op == '%' && num2 == 0) ? cout << "Error: Modulus by zero\n" :
        cout << "Result: " << result;

        return 0;
    

}