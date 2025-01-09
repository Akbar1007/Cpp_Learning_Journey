// Day 3

#include <iostream>
using namespace std;

//Program 1:
int main() {
    double salary, tax = 0.0, incomeAfterTax;

    // Asking the user to input the salary:
    cout << "Enter your salary in USD:" << endl;
    cin >> salary;

    // I am calculating tax based on salary range
    if (salary <= 2000)
        tax = 0;

    else if (salary >= 2001 && salary <= 3000) 
        tax = (salary * 20) / 100;
    
    else if (salary >= 3001 && salary <= 5000) {
        tax = (salary * 30) / 100;
    }
    else if (salary > 5000) {
        tax = (salary * 40) / 100;
    }

    // This is to calculate income after tax
    incomeAfterTax = salary - tax;

    // Just printing the results:
    cout << "Tax payable: $" << tax << endl;
    cout << "Income after tax deduction: $" << incomeAfterTax << endl;

    return 0;
}
