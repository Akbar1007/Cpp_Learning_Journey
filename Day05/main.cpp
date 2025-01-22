// Day 5:
// All four programs"

#include <iostream>
using namespace std;

int main() {

    // Program 1:
    int counter = 0;
    int number = 0;
    int largest = 0;
    // Input 10 numbers and find the largest one
    cout << "Enter 10 numbers: " << endl;

    // Looping to process each of the 10 numbers
    for (counter = 1; counter <= 10; ++counter) {
        cout << "Enter number " << counter << ": ";
        cin >> number;

        // If the current number is larger than the largest number so far
        if (counter == 1 || number > largest) {
            largest = number;
        }
    }

    // Printing out the largest number
    cout << "The largest number is: " << largest << endl;

    // Program 2:
    // Printing out the table and then using the for loop to fill it with numbers
    // I also used \n to make a new line like in your table:
    // \t - tab
    cout << "N\t10*N\t100*N\t1000*N\n" << endl;
    
    for (int N = 1; N <= 5; ++N) {
        cout << N << '\t' << 10 * N << '\t' << 100 * N << '\t' << 1000 * N << endl;
    }

    // Program 3:
    // Loop for each line of stars
    for (int i = 1; i <= 5; ++i) {
        // Print 'i' stars in each row
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; //Moving to the next line
    }

    // Program 4:
    // Loop for each row
    for (int i = 1; i <= 5; ++i) {

        //Second loop for printing spaces 
        for (int s = 5; s > i; --s) {
            cout << " "; // Print a space
        }

        // The last loop is for printing the numbers
        for (int j = 1; j <= i; ++j) {
            cout << j; //Print the numbers in each row
        }

        cout << endl; // This moves to the next line after each row
    }

    return 0;
}