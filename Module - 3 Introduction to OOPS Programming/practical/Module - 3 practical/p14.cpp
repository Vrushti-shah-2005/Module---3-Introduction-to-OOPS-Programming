#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void showGlobal() {
    // This function can access the global variable
    cout << "Inside showGlobal() - Global Variable: " << globalVar << endl;
}

void showLocal() {
    // Local variable (only accessible inside this function)
    int localVar = 50;
    cout << "Inside showLocal() - Local Variable: " << localVar << endl;
    
    // Accessing global variable from here as well
    cout << "Inside showLocal() - Global Variable: " << globalVar << endl;
}

int main() {
    // Local variable in main()
    int localVar = 10;

    cout << "Inside main() - Local Variable: " << localVar << endl;
    cout << "Inside main() - Global Variable: " << globalVar << endl;

    showGlobal();  // Call function that uses global variable
    showLocal();   // Call function that uses both local and global

    return 0;
}
