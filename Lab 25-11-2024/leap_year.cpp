#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0, netincome;

    cout << "Enter your annual income: ";
    cin >> income;

    if (income <= 250000) {
        tax = 0;
    } else if (income > 250000 && income <= 500000) {
        tax = income * 0.05;
    } else if (income > 500000 && income <= 1000000) {
        tax = income * 0.20;
    } else if (income > 1000000) {
        tax = income * 0.30;
    }

    netincome = income - tax;

    cout << "The income tax for an annual income of Rupees " << income << " is Rupees " << tax << endl;
    cout << "The total amount after tax deduction is Rupees " << netincome << endl;

    return 0;
}
