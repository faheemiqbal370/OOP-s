/*Constructor and Destructor in a Class - Triangle Area Calculation
• Define a Triangle class with a constructor to initialize base and height.
• Implement a function calculateArea() using the formula: 
• Implement a destructor to display a message when an object is destroyed.*/
#include <iostream>
using namespace std;

class Triangle {
private:
    float base;
    float height;

public:
    // Constructor 
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    float calculateArea() {
        return 0.5 * base * height;
    }

    // Destructor 
    ~Triangle() {
        cout << "Triangle object with base " << base << " and height " << height << " is being destroyed." << endl;
    }
};

int main() {
    float base, height;

    // Input base and height
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Create a Triangle object
    Triangle tri(base, height);
    
    cout << "The area of the triangle is: " << tri.calculateArea() << endl;

    // Triangle object will be destroyed automatically here when it goes out of scope
    return 0;
}
