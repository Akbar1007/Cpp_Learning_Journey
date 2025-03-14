#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string AccountName;   
    int AccountNumber;    
    string type;          
    float Balance;        

public:
    // Parameterized constructor to initialize all account details
    Account(string name = "", int number = 0, string accType = "", float balance = 0.0f);

    // Deposit function - adds amount to the current balance
    void deposit(float amount);

    // Withdraw function - subtracts amount from the current balance if funds are sufficient
    void withdraw(float amount);

    // Overload == operator to compare account numbers
    bool operator==(const Account& other) const;

    // Overload > operator to compare account balances
    bool operator>(const Account& other) const;

    // Friend functions to overload << and >> operators for input/output
    friend ostream& operator<<(ostream& out, const Account& acc);
    friend istream& operator>>(istream& in, Account& acc);
};

#endif
