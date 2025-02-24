#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    // Constructor to initialize hours and minutes
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Overload the type conversion operator to convert Time to int (total minutes)
    operator int() const
    {
        return hours * 60 + minutes;
    }

    // Display the time
    void display() const
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t(2, 30); // 2 hours and 30 minutes

    // Display the time
    t.display();

    // Convert Time object to total minutes
    int totalMinutes = t;
    cout << "Total minutes: " << totalMinutes << endl;

    return 0;
}