#include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration of Fahrenheit class

class Celsius {
    double temperature;

public:
    // Constructor to initialize Celsius temperature
    Celsius(double temp = 0) : temperature(temp) {}

    // Overload type conversion operator to convert Celsius to Fahrenheit
    operator Fahrenheit() const;

    // Display Celsius temperature
    void display() const {
        cout << temperature << "°C" << endl;
    }

    // Getter for Celsius temperature
    double getTemperature() const {
        return temperature;
    }
};

class Fahrenheit {
    double temperature;

public:
    // Constructor to initialize Fahrenheit temperature
    Fahrenheit(double temp = 0) : temperature(temp) {}

    // Overload type conversion operator to convert Fahrenheit to Celsius
    operator Celsius() const {
        return Celsius((temperature - 32) * 5.0 / 9.0);
    }

    // Display Fahrenheit temperature
    void display() const {
        cout << temperature << "°F" << endl;
    }

    // Getter for Fahrenheit temperature
    double getTemperature() const {
        return temperature;
    }
};

// Definition of Celsius to Fahrenheit conversion operator
Celsius::operator Fahrenheit() const {
    return Fahrenheit(temperature * 9.0 / 5.0 + 32);
}

int main() {
    Celsius c(37);     // 37°C
    Fahrenheit f = c;  // Convert Celsius to Fahrenheit

    // Display the temperatures
    c.display();
    f.display();

    // Convert back to Celsius
    Celsius c2 = f;
    c2.display();

    return 0;
}