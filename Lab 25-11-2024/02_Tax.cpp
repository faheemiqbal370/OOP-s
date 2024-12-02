#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0, net_income;

    cout << "Enter your annual income: ";
    cin >> income;

    if (income <= 250000) 
    {
        tax = 0;
    } 
    else if (income > 250000 && income <= 500000) 
    {
        tax = (income - 250000) * 0.05;
    } else if (income > 500000 && income <= 1000000) {
        tax = (250000 * 0.05) + ((income - 500000) * 0.20);
    } else if (income > 1000000) {
        tax = (250000 * 0.05) + (500000 * 0.20) + ((income - 1000000) * 0.30);
    }

    net_income = income - tax;

    cout << "The income tax for an annual income of ₹" << income << " is ₹" << tax << endl;
    cout << "The total amount after tax deduction is ₹" << net_income << endl;

    return 0;
}
