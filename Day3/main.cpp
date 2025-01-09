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

		
		//Program 2:
		// Creating a variable for the number:
		int number;
		// Asking the user to enter a number:
		cout << "Enter a number please: " << endl;
		cin >> number;

    // Checking if the number is zero, even, or odd:
    if (number == 0) 
        cout << "The number is zero." << endl;
    
    // I simply used the modulus operator:
    else if (number % 2 == 0) 
        cout << "The number is even." << endl;
    
    else 
        cout << "The number is odd." << endl;
    

		
		//Program 3:

    // Creating three variables that we need for the program:
    int hardness, tensileStrength;
    float carbonContent;

    // Asking the user to input the needed information:
    cout << "Enter hardness: ";
    cin >> hardness;
    cout << "Enter carbon content: ";
    cin >> carbonContent;
    cout << "Enter tensile strength: ";
    cin >> tensileStrength;

    int grade = 5; 
    // Grade is 5 if none of the conditions are satisfied

    // Determining the grade based on the conditions
    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) 
        grade = 10;

    else if (hardness > 50 && carbonContent < 0.7) 
        grade = 9;
    
    else if (carbonContent < 0.7 && tensileStrength > 5600) 
        grade = 8;
    
    else if (hardness > 50 && tensileStrength > 5600) 
        grade = 7;
    
    // Using the logical OR "||" to check if any one of the conditions is satisfied.
    else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) 
        grade = 6;
    

    // Printing out the grade of the steel
    cout << "The grade of the steel is: " << grade << endl;

	return 0;
}

