/*Write a program that takes a number between 1 and 7 from the user and uses a switch statement 
to print the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.). Print "Invalid 
input" if the number is not between 1 and 7.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter:\n 1 for Monday\n 2 for Tuesday\n 3 for Wednesday\n 4 for Thursday\n 5 for Friday\n 6 for Saturday\n 7 for Sunday\n";
    cin>>a;

     switch (a)
    {
    case 1:
        cout<<"Monday";
         break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
     case 5:
        cout<<"Friday";
        break;
     case 6:
        cout<<"Saturday";
        break;
     case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"INVALID INPUT";
        break;
    }
    return 0;


}