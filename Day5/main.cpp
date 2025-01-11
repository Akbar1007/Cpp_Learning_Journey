// Day 5

#include <iostream>
using namespace std;

int main() {
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

    return 0;
}