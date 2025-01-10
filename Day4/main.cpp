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

    return 0;
}