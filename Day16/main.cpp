// Day 16

#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    // Creating Account objects
    Account acc1("User 1", 101, "Humo", 5000.0f);
    Account acc2("User 2", 102, "Uzcard", 3000.0f);
    Account acc3;

    // Input for acc3 from user
    cout << "Enter details for a new account:" << endl;
    cin >> acc3;

    // Perform deposit and withdrawal operations
    acc1.deposit(1000);
    acc2.withdraw(500);
    acc3.deposit(200);

    // Display account details
    cout << "\nAccount Details:\n";
    cout << acc1 << endl;
    cout << acc2 << endl;
    cout << acc3 << endl;

    // Compare accounts
    if (acc1 == acc2) {
        cout << "Account 1 and Account 2 have the same account number." << endl;
    } else {
        cout << "Account 1 and Account 2 have different account numbers." << endl;
    }

    if (acc1 > acc2) {
        cout << "Account 1 has a greater balance than Account 2." << endl;
    } else {
        cout << "Account 2 has a greater or equal balance than Account 1." << endl;
    }

    return 0;
}
