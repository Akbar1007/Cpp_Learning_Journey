// Day 2:
// All three progras:

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

    //Program 2:
    cout << "Integer  Square  Cube" << endl;
    // Using power function:
    cout << pow(0, 1) << "        " << pow(0, 2) << "       " << pow(0, 3) << endl;
    cout << pow(1, 1) << "        " << pow(1, 2) << "       " << pow(1, 3) << endl;
    cout << pow(2, 1) << "        " << pow(2, 2) << "       " << pow(2, 3) << endl;
    cout << pow(3, 1) << "        " << pow(3, 2) << "       " << pow(3, 3) << endl;
    cout << pow(4, 1) << "        " << pow(4, 2) << "      " << pow(4, 3) << endl;
    cout << pow(5, 1) << "        " << pow(5, 2) << "      " << pow(5, 3) << endl;
    cout << pow(6, 1) << "        " << pow(6, 2) << "      " << pow(6, 3) << endl;
    cout << pow(7, 1) << "        " << pow(7, 2) << "      " << pow(7, 3) << endl;
    cout << pow(8, 1) << "        " << pow(8, 2) << "      " << pow(8, 3) << endl;
    cout << pow(9, 1) << "        " << pow(9, 2) << "      " << pow(9, 3) << endl;
    cout << pow(10, 1) << "       " << pow(10, 2) << "     " << pow(10, 3) << endl;

    //Program 3:

    // Input values
    double total_km, cost_per_liter, average_km_per_liter;
    cout << "Enter the total kilometers driven per day: ";
    cin >> total_km;
    cout << "Enter the cost per liter of gasoline: ";
    cin >> cost_per_liter;
    cout << "Enter the average kilometers per liter: ";
    cin >> average_km_per_liter;

    // Total cost per day:
    double total_cost_per_day = (total_km / average_km_per_liter) * cost_per_liter;

    // The result
    cout << "Total cost per day of driving to work: " << total_cost_per_day << endl;

    return 0;
}
