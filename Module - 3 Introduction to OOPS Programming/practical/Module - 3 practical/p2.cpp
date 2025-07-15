#include <iostream>
#include <string>  // Required for using strings
using namespace std;
int main() 
{
    string name;
    int age;
    // Asking for user's name
    cout << "Enter your name: ";
    getline(cin, name);  // Allows input with spaces
    // Asking for user's age
    cout << "Enter your age: ";
    cin >> age;

    // Displaying personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
