#include <iostream>
using namespace std;
int main() {
    int num1, num2, sum;
    // Ask for first number
    cout << "Enter the first number: ";
    cin >> num1;
    // Ask for second number
    cout << "Enter the second number: ";
    cin >> num2;
    // Calculate sum
    sum = num1 + num2;
    // Display result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;
    return 0;
}
