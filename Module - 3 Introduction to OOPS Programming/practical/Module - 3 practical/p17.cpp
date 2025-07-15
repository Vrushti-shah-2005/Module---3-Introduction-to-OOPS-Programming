#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Mismatch found
        }
        start++;
        end--;
    }
    return true; // No mismatches
}

int main() {
    string input;

    // Input from user
    cout << "Enter a string: ";
    cin >> input;

    // Check palindrome
    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
