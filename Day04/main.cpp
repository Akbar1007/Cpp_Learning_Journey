// Day 4

#include <iostream>;
using namespace std;

int main() {
		//Program 1:
    int product = 1;  // Variable to store the product of odd integers
    int number = 1;   // Start from 1, the first odd integer

    // Loop through the numbers from 1 to 15
    while (number <= 15) {
        if (number % 2 != 0) {  // Check if the number is odd
            product *= number;  // Multiply the product by the odd number
        }
        number++;  // Increment to the next number
    }

    // Output the result
    cout << "The product of odd integers from 1 to 15 is: " << product << endl;



		// Program 2:

    int m, n, sum = 0;

    //Here I am asking for two numbers m and n for our user
    cout << "Enter two numbers (m and n): ";
    cin >> m >> n;

    //Here I am calculating the sum of those numbers
    for (int i = m; i <= n; i++) {
        sum = sum + i;
    }

    cout << "The sum of numbers from " << m << " to " << n << " is: " << sum << endl;

		// Program 3:

    char operation;
    double num1, num2;

    // Asking for the operation and two numbers
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Just performing the operation
    switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        // Here I added the case when the second number might be 0. And if it is 0, then we do not perform
        if (num2 != 0) 
            cout << "Result: " << num1 / num2 << endl;
        
        else 
            cout << "Error: Division by zero is incorrect!" << endl;
        
        break;
    default:
        cout << "Error: Invalid operator" << endl;
    }

    return 0;
}