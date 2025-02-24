#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor to initialize real and imag
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator + (const Complex &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // Display the complex number
    void display() {
        cout << real << " + i" << imag;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    
    // Use overloaded + operator
    Complex c3 = c1 + c2;

    // Display the result
    c3.display();

    return 0;
}