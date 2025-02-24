/*4. Parameterized Constructor and Default Constructor - Perimeter of a 
Rectangle
• Create a Rectangle class with attributes length and width.
• Implement a default constructor that initializes values to zero.
• Implement a parameterized constructor to accept values.
• Calculate and display the perimeter using calculatePerimeter().*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    //constructor 
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor 
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculatePerimeter() {
        return 2 * (length + width);
    }
  
    float getLength() {
        return length;
    }

};

int main() {

    Rectangle rect1;
    cout << "Perimeter of rectangle with default constructor: " << rect1.calculatePerimeter() << endl;

    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect2(length, width);
    cout << "Perimeter of rectangle with parameterized constructor: " << rect2.calculatePerimeter() << endl;

    return 0;
}
