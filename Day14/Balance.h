#include <iostream>
using namespace std;

// this class stores transactions related to balance
class Balance {
  private:
  int Withdrawal;
  int Deposit;
  int BalanceInquiry;

  public:
  // parameterized constructor
  Balance(int withdrawal, int deposit, int balance) : Withdrawal(withdrawal), Deposit(deposit), BalanceInquiry(balance) {}
    
  // Show balance details
  void Show() {
      cout << "Last Withdrawal: $" << Withdrawal << endl;
      cout << "Last Deposit: $" << Deposit << endl;
      cout << "Current Balance: $" << BalanceInquiry << endl;
  }
};