#include <iostream>
#include <string>  // Required for using string type
using namespace std;
int main() 
{
    // Constant declaration
    const float PI = 3.14159;
    // Variable declarations
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    string name = "Vrushti";
    bool isStudent = true;
    // Output values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
    // Operations
    age += 1;  // Increment age
    height = height + 0.1;  // Increase height slightly
    cout << "\nAfter 1 year:" << endl;
    cout << "New Age: " << age << endl;
    cout << "New Height: " << height << endl;
    // Using the constant
    float radius = 2.0;
    float area = PI * radius * radius;
    cout << "\nArea of circle with radius " << radius << " is: " << area << endl;
    return 0;
}
