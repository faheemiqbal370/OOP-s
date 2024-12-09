//Grading System
#include <iostream>
using namespace std;

int main() 
{
    int marks[5];
    float total = 0.0;
    int failCount = 0;
    float percentage;
    char grade;

    for (int i = 1; i <=5; i++) {
        cout << "Enter marks for subject " << (i)<<"\n";
        cin >> marks[i];
        total=total+marks[i];
        if (marks[i] < 40) { 
            failCount++;
        }
    }
    percentage = total / 5.0;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    if (failCount > 1) {
        cout << "Repeat Year" << endl;
    } else {
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }

    return 0;
}