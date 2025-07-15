#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator {
public:
    // Addition
    float add(float a, float b) {
        return a + b;
    }

    // Subtraction
    float subtract(float a, float b) {
        return a - b;
    }

    // Multiplication
    float multiply(float a, float b) {
        return a * b;
    }

    // Division
    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;  // Create object of Calculator
    float num1, num2;
    char op;

    // Input from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform operation using object
    switch (op) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
