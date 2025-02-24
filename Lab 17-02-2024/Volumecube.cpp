/*5. Class with Multiple Objects - Volume Calculation of Cubes
• Define a Cube class with an attribute side.
• Implement a function calculateVolume() using the formula: 
Volume=side3
• Create multiple objects with different side values and display their volumes*/
#include <iostream>
using namespace std;

class Cube {
private:
    float side;

public:
    // Constructor 
    Cube(float s) {
        side = s;
    }

    float calculateVolume() {
        return side * side * side;
    }

    float getSide() {
        return side;
    }

};

int main() {
    
    Cube cube1(3.0);
    Cube cube2(4.5);
    Cube cube3(2.1);


    cout << "Volume of cube with side " << cube1.getSide() << " is: " << cube1.calculateVolume() << endl;
    cout << "Volume of cube with side " << cube2.getSide() << " is: " << cube2.calculateVolume() << endl;
    cout << "Volume of cube with side " << cube3.getSide() << " is: " << cube3.calculateVolume() << endl;

    return 0;
}
