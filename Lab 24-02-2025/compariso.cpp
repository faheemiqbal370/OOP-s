#include <iostream>
using namespace std;

class Vector
{
    int x, y;

public:
    // Constructor to initialize x and y
    Vector(int a = 0, int b = 0) : x(a), y(b) {}

    // Overload the unary - operator
    Vector operator-() const
    {
        return Vector(-x, -y);
    }

    // Display the vector coordinates
    void display() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Vector v1(10, -5);

    // Use overloaded unary - operator
    Vector v2 = -v1;

    // Display the result
    v2.display();

    return 0;
}