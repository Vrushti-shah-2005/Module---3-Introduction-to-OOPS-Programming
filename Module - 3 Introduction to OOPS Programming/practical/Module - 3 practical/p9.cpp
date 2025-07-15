#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;
int main()
{
    int secretNumber, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0));  // Seed for random number generation
    secretNumber = rand() % 100 + 1;  // Generates number between 1 and 100
    cout << "Guess the number (between 1 and 100):" << endl;
    // Loop until the user guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);
    return 0;
}
