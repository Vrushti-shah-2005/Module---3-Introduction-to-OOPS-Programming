#include <iostream>
using namespace std;
int main() 
{
    // Implicit conversion (automatic)
    int intVal = 10;
    float floatVal = intVal;  // int to float (implicit)
    cout << "Implicit Conversion:" << endl;
    cout << "Original int value: " << intVal << endl;
    cout << "Converted float value: " << floatVal << endl;
    // Explicit conversion (manual)
    float price = 99.99;
    int roundedPrice = (int)price;  // float to int (explicit casting)

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original float value: " << price << endl;
    cout << "Converted int value (after casting): " << roundedPrice << endl;
    // Another example with double and char
    double number = 65.8;
    char ch = (char)number;  // double to char (explicit)
    cout << "\nDouble to Char Conversion:" << endl;
    cout << "Double value: " << number << endl;
    cout << "Character after casting: " << ch << endl;  // Should print 'A'
    return 0;
}
