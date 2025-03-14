#include "Account.h"

// Constructor here
Account::Account(string name, int number, string accType, float balance) {
    AccountName = name;
    AccountNumber = number;
    type = accType;
    Balance = balance;
}

// Deposit method
void Account::deposit(float amount) {
    if (amount > 0) {
        Balance += amount;
        cout << "Deposited " << amount << ". New balance: " << Balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

// Withdraw method
void Account::withdraw(float amount) {
    if (amount > 0 && amount <= Balance) {
        Balance -= amount;
        cout << "Withdrawn " << amount << ". New balance: " << Balance << endl;
    } else {
        cout << "Invalid or insufficient funds for withdrawal!" << endl;
    }
}

// Overloading == to check if two accounts have the same account number
bool Account::operator==(const Account& other) const {
    return this->AccountNumber == other.AccountNumber;
}

// Overloading > to compare balances between accounts
bool Account::operator>(const Account& other) const {
    return this->Balance > other.Balance;
}

// Overloading << for outputting account details
ostream& operator<<(ostream& out, const Account& acc) {
    out << "Account Name: " << acc.AccountName << endl;
    out << "Account Number: " << acc.AccountNumber << endl;
    out << "Account Type: " << acc.type << endl;
    out << "Balance: " << acc.Balance << endl;
    return out;
}

// Overloading >> for taking account details from user
istream& operator>>(istream& in, Account& acc) {
    cout << "Enter Account Name: ";
    in >> acc.AccountName;
    cout << "Enter Account Number: ";
    in >> acc.AccountNumber;
    cout << "Enter Account Type (Humo/Uzcard/Visa): ";
    in >> acc.type;
    cout << "Enter Initial Balance: ";
    in >> acc.Balance;
    return in;
}
