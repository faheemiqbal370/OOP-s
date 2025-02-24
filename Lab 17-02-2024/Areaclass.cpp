/*1. Create a Simple Class - Circle Area Calculation
• Define a class Circle with an attribute radius.
• Implement a function calculateArea() to compute and return the area of the circle.
• Create an object, set the radius, and display the area.*/
#include <iostream>
using namespace std;
class circle {
    private:
    int radius;
    public:
    void setradius(int r){
        radius=r;
    }
    int calcarea(){
        return 3.14*(radius*radius);
    }
};
int main() {
    circle one;
    one.setradius(6);
    cout<<"The radius of circle is"<<one.calcarea();

    return 0;
}
   
