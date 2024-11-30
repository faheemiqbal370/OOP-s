#include <iostream>
using namespace std;

int reverseDigits(int num) 
{
    int reversed = 0;
    while (num > 0)
     {
        int digit = num % 10;
        reversed = reversed * 10 + digit;/*it makes number seperation easy like it make 2 into 20
         then adds say 3,becomes 23 ,if 10 is not used it will change into 5*/
        num /= 10;
    }
    return reversed;
}

int main() {
    int number;

    while (true) // it will keep on running untill you input 0
    {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> number;

        if (number == 0) 
        {
            break;
        }

        if (number < 0) 
        {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        int reversedNumber = reverseDigits(number);
        cout << "Reversed number: " << reversedNumber << endl;
    }

    cout << "END" << endl;
    return 0;
}
