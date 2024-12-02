#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number\n";
    cin >> n;

    for(int i = 0; i < 20; i++) { // for rows
        for(int j = 1; j <= 10; j++) { // for columns
            int z = n * (i * 10 + j);
            cout << z << "\t"; // use tab for spacing
        }
        cout << endl; // move to the next line after each row
    }

    return 0;
}
