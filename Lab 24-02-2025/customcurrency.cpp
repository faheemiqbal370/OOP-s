#include <iostream>
using namespace std;

class Currency
{
    int rupees, paise;

public:
    // Constructor to initialize rupees and paise
    Currency(int r = 0, int p = 0) : rupees(r), paise(p)
    {
        // Adjust paise and rupees if paise is 100 or more
        if (paise >= 100)
        {
            rupees += paise / 100;
            paise = paise % 100;
        }
    }

    // Overload the + operator to add two Currency objects
    Currency operator+(const Currency &obj) const
    {
        int totalPaise = (rupees + obj.rupees) * 100 + (paise + obj.paise);
        return Currency(totalPaise / 100, totalPaise % 100);
    }

    // Overload the - operator to subtract two Currency objects
    Currency operator-(const Currency &obj) const
    {
        int totalPaise1 = (rupees * 100) + paise;
        int totalPaise2 = (obj.rupees * 100) + obj.paise;
        int diffPaise = totalPaise1 - totalPaise2;
        return Currency(diffPaise / 100, diffPaise % 100);
    }

    // Display the currency
    void display() const
    {
        cout << rupees << " rupees and " << paise << " paise" << endl;
    }
};

int main()
{
    Currency c1(5, 150); // 5 rupees and 150 paise which is equivalent to 6 rupees and 50 paise
    Currency c2(2, 75);  // 2 rupees and 75 paise

    // Display the currencies
    c1.display();
    c2.display();

    // Add the two currencies
    Currency c3 = c1 + c2;
    cout << "After addition: ";
    c3.display();

    // Subtract the two currencies
    Currency c4 = c1 - c2;
    cout << "After subtraction: ";
    c4.display();

    return 0;
}