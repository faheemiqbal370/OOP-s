/*2. Class with Private Data Members and Getter/Setter Functions - Rectangle
Area Calculation
• Create a Rectangle class with private attributes length and width.
• Implement setter and getter functions.
• Calculate and display the area using calculateArea().*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float getLength() {
        return length;
    }

    float getWidth() {
        return width;
    }

    float calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    // Get the length and width using getter functions
    float rectLength = rect.getLength();
    float rectWidth = rect.getWidth();

    // Display the length, width, and area
    cout << "Length: " << rectLength << endl;
    cout << "Width: " << rectWidth << endl;
    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;

    return 0;
}

