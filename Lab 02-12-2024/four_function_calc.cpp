#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        float num1, num2, result;
        char op;

        // Prompt the user for input
        cout << "Enter first number, operator, second number (e.g., 10 / 3): ";
        cin >> num1 >> op >> num2;

        // Perform the calculation based on the operator
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                    continue; // Skip the rest of this iteration and prompt again
                }
                break;
            default:
                cout << "Invalid operator. Please use +, -, *, or /.\n";
                continue; // Skip the rest of this iteration and prompt again
        }

        // Display the result
        cout << "Answer = " << result << endl;

        // Ask if the user wants to perform another calculation
        cout << "Do another (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeat if the user chooses 'y'

    cout << "Goodbye!\n";
    return 0;
}
