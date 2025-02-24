/*6. Overloading Constructor in a Class - Area of Circle and Rectangle
• Define a Shape class with a default constructor and an overloaded constructor.
• If radius is given, calculate the area of a circle.
• If length and breadth are given, calculate the area of a rectangle.*/
#include <iostream>
using namespace std;

// Shape class definition
class Shape {
private:
    float radius;
    float length;
    float breadth;

public:
    // Default constructor
    Shape() {
        radius = 0;
        length = 0;
        breadth = 0;
    }

    // Overloaded constructor for circle (radius)
    Shape(float r) {
        radius = r;
        length = 0;
        breadth = 0;
    }

    // Overloaded constructor for rectangle (length and breadth)
    Shape(float l, float b) {
        radius = 0;
        length = l;
        breadth = b;
    }

    // Function to calculate the area
    float calculateArea() {
        if (radius != 0) {
            return 3.14159 * radius * radius; // Area of circle
        } else if (length != 0 && breadth != 0) {
            return length * breadth; // Area of rectangle
        } else {
            return 0; // Invalid case
        }
    }
};

int main() {
    // Using the overloaded constructor for circle
    Shape circle(5.0);
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    // Using the overloaded constructor for rectangle
    Shape rectangle(4.0, 6.0);
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}
