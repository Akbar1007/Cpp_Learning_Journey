#include <iostream>
#include <string>

// this class stores user details: name and pinNUmber
class Account {
  private:
    std::string AccountName;
    int PinNumber;

  public:
	// parameterized constructor
  Account(std::string name, int pin) : AccountName(name), PinNumber(pin) {}

  // Display function that shows user details 
  void Display() {
      std::cout << "Account Name: " << AccountName << std::endl;
      std::cout << "PIN: **** (hidden for security)!" << std::endl;
  }
};