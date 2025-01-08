// Day 2

#include <iostream>
using namespace std;

int main() {
    //Program 1:

    int integer_1, integer_2, integer_3;
    cout << "Enter the first integer: " << endl;
    cin >> integer_1;
    cout << "Enter the second integer: " << endl;
    cin >> integer_2;
    cout << "Enter the third integer: " << endl;
    cin >> integer_3;

    // Calculating the sum, average, and product:
    int sum_of_integers = integer_1 + integer_2 + integer_3;
    double average = sum_of_integers / 3.0;
    int product = integer_1 * integer_2 * integer_3;

    // Printing the results:
    cout << "Sum: " << sum_of_integers << endl;
    cout << "Average: " << average << endl;
    cout << "Product: " << product << endl;

    // Determining the smallest and largest intergers:
    if (integer_1 < integer_2 && integer_1 < integer_3)
        cout << integer_1 << " is the smallest one." << endl;
    if (integer_2 < integer_1 && integer_2 < integer_3)
        cout << integer_2 << " is the smallest one." << endl;
    if (integer_3 < integer_1 && integer_3 < integer_2)
        cout << integer_3 << " is the smallest one." << endl;

    if (integer_1 > integer_2 && integer_1 > integer_3)
        cout << integer_1 << " is the largest one." << endl;
    if (integer_2 > integer_1 && integer_2 > integer_3)
        cout << integer_2 << " is the largest one." << endl;
    if (integer_3 > integer_1 && integer_3 > integer_2)
        cout << integer_3 << " is the largest one." << endl;


    return 0;
}

