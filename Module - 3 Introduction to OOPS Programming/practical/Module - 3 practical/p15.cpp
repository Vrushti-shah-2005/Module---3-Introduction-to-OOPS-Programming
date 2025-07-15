#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add to sum
    }

    // Calculate average
    float average = (float)sum / n;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
