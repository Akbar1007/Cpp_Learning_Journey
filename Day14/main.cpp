#include <iostream>
#include "ATM.h"

using namespace std;

// this class is using Account and Balance

int main() {
    // creating an ATM object with sample data
    ATM atm("Akbar", 1234, 100, 500, 2000);
    
    // Display user details and balance
    atm.ShowATMDetails();
    
    return 0;
}