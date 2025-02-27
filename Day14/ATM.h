#include <iostream>
#include <string>
#include "Account.h"
#include "Balance.h"
using namespace std;

class ATM {
  private:
  Account account;
  Balance balance;
  
	public:
  // Constructor initializing account and balance
	ATM(string name, int pin, int withdrawal, int deposit, int balanceAmount)
    : account(name, pin), balance(withdrawal, deposit, balanceAmount) {}

    
  // Display user account details and balance
  void ShowATMDetails() {
      cout << "ATM User Information:" << endl;
      account.Display();
      cout << "\nBalance Information:" << endl;
      balance.Show();
  }
};