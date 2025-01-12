// Day 6

//Program 2:
#include <iostream>
using namespace std;

int reverseDigits(int number) {
    int reversed = 0;
    while (number != 0) {
        int digit = number % 10;   // Getting last digit
        reversed = reversed * 10 + digit;  // And then adding that digit to reversed number
        number /= 10;   // And now we need to remove the last digit from number
    }
    return reversed;
}

int main() {
    int number;
    cout << "Enter an integer to reverse its digits: ";
    cin >> number;
    cout << "Here is your reversed number: " << reverseDigits(number) << endl;
    return 0;
}