/*Write a program that takes a single character as input from the user and uses a switch statement 
to check if the character is a vowel (a, e, i, o, u for both uppercase and lowercase) or a 
consonant. Print the result according*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a single character\n";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "The character is a vowel." << endl;
            break;
        default:
            cout << "The character is a consonant." << endl;
            break;
    }

    return 0;
}
