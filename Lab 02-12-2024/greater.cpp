#include <iostream>
#include <conio.h> // for getche()
using namespace std;

int main() {
    long number = 0;
    char digit;

    cout << "Enter a number (up to 6 digits): ";

    for (int i = 0; i < 6; i++) {
        digit = getche(); // read a single character from the keyboard
        if (digit == '\r') { // check for Enter key (carriage return)
            break;
        }
        if (digit < '0' || digit > '9') { // check for non-digit input
            cout << "\nInvalid input. Please enter only digits.\n";
            return 1;
        }
        number = number * 10 + (digit - '0'); // construct the number
    }

    cout << "\nNumber is: " << number << endl;

    return 0;
}
