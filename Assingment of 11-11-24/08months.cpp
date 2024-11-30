/*Write a program that takes an integer from the user representing the month (1 for January, 2 for
February, etc.) and uses a switch statement to print the number of days in that month. Consider
leap year (assume it is a leap year if February is chosen) and handle it with an additional check.*/
#include <iostream>
using namespace std;
int main()
{
    int month,c;
    cout << "Enter:\n 1 for January\n 2 for February\n 3 for March\n 4 for April\n 5 for May\n 6 for June\n 7 for July\n 8 for August\n 9 for September\n 10 for October\n 11 for November\n 12 for December\n";
    cin>>month;
    if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        c=31;
    }
    else if(month==2){
        c=29;
    }
    else{
        c=30;
    }

    switch(month){
        case 1:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 2:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 3:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 4:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 5:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 6:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 7:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 8:
        cout<<"The number of days in "<<month<< " are " <<c;
        break;

        case 9:
        cout<<"The number of days in " <<month<<" are " <<c;
        break;

        case 10:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 11:
        cout<<"The number of days in " <<month<< " are " <<c;
        break;

        case 12:
        cout<<"The number of days in "  <<month<< " are " <<c;
        break;
        default:
        cout<<"INVALID OUTPUT";
    }
    return 0;
}