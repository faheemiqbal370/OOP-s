#include <iostream>
using namespace std;

int main() {
    int lines = 20; // Number of lines for the pyramid

    for (int i = 1; i <= lines; ++i) { // Outer loop for each line
        // Print spaces
        for (int j = 1; j <= lines - i; ++j) {
            cout << " ";
        }

        // Print Xs
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "X";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
