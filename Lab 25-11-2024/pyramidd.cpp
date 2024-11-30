#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) //control rows
    {
      for (int j = 1; j <= n - i; j++) // control spaces
       {
            cout << " ";
        }
       for (int k = 1; k <= i; k++)  // control numbers
       {
            cout << k << " ";
        }
        
        cout << endl;
    }

    return 0;
}
