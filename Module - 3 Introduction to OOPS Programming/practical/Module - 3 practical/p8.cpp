#include <iostream>
using namespace std;
int main() 
{
    int marks;
    // Taking marks input from the user
    cout << "Enter the student's marks (0 to 100): ";
    cin >> marks;
    // Grade calculation using if-else conditions
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!" << endl;
    }
    else if (marks >= 90) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F (Fail)" << endl;
    }
    return 0;
}
