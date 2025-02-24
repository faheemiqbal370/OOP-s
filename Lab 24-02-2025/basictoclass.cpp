#include <iostream>

class Time
{
private:
    int hours;
    int minutes;

public:
    // Default constructor
    Time() : hours(0), minutes(0) {}

    // Constructor with hours and minutes
    Time(int h, int m) : hours(h), minutes(m) {}

    // Overloaded constructor to convert integer (total minutes) to Time object
    Time(int totalMinutes)
    {
        hours = totalMinutes / 60;   // Calculate hours
        minutes = totalMinutes % 60; // Calculate remaining minutes
    }

    // Method to display the time
    void displayTime() const
    {
        std::cout << "Time: " << hours << " hours and " << minutes << " minutes" << std::endl;
    }

    // Getters (optional, but good practice)
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }

    // Setters (optional, but good practice)
    void setHours(int h) { hours = h; }
    void setMinutes(int m) { minutes = m; }
};

int main()
{
    Time t1(10, 30); // Using the constructor with hours and minutes
    t1.displayTime();

    Time t2 = 540;    // Using the overloaded constructor to convert 540 minutes to a Time object
    t2.displayTime(); // Output: Time: 9 hours and 0 minutes

    Time t3 = 75;     // Using the overloaded constructor to convert 75 minutes to a Time object
    t3.displayTime(); // Output: Time: 1 hours and 15 minutes

    return 0;
}