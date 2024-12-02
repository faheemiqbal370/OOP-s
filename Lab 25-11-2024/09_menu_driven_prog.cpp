#include <iostream>
using namespace std;

// Function to find the factorial of a number
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) return 1;
    unsigned long long fact = 1;
    for (int i = 2; i <= num; i++) 
    {
        fact *= i;
    }
    return fact;
}

// Function to find the GCD or HCF of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice;
    
    do {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Find the factorial of a number\n";
        cout << "2. Find the GCD of two numbers\n";
        cout << "3. Find the LCM of two numbers\n";
        cout << "4. Exit the program\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                // Find the factorial of a number
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if (num < 0) {
                    cout << "Factorial is not defined for negative numbers.\n";
                } else {
                    cout << "The factorial of " << num << " is " << factorial(num) << ".\n";
                }
                break;
            }
            case 2: {
                // Find the GCD of two numbers
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << ".\n";
                break;
            }
            case 3: {
                // Find the LCM of two numbers
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "The LCM of " << a << " and " << b << " is " << lcm(a, b) << ".\n";
                break;
            }
            case 4: {
                // Exit the program
                cout << "Exiting the program...\n";
                break;
            }
            default: {
                // Invalid choice
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } 
    while (choice != 4);
    
    return 0;
}
