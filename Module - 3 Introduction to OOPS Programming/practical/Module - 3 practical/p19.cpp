#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance; // Encapsulated data member

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance) {
        if (initialBalance < 0) {
            balance = 0;
            cout << "Initial balance can't be negative. Setting balance to 0." << endl;
        } else {
            balance = initialBalance;
        }
    }

    // Deposit function
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Function to check current balance
    float getBalance() {
        return balance;
    }
};

int main() {
    // Create an object of BankAccount with initial balance
    BankAccount account(1000.0);

    // Perform some operations
    account.deposit(500.0);
    account.withdraw(300.0);
    account.withdraw(1500.0);  // Should fail
    account.deposit(-200);     // Should show error

    // Display current balance
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
