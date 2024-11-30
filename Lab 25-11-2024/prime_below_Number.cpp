#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i<= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, current = 2;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers less than or equal to " << n << " are: ";
    while (current <= n)
    {
        if (isPrime(current))// here it sends 2 then 3 and so on upto n and function checks for all numbers seperately
         {
            cout << current << " ";
        }
        current++;// here current gets incremented and reaches to loop where function gets played again.
    }
    cout << endl;

    return 0;
}
