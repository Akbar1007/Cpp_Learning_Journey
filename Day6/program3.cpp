// Day 6

// Program 3:
#include <iostream>
using namespace std;

// convert Fahrenheit to Celsius
int celsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// convert Celsius to Fahrenheit
int fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

// Creating a void function to print temperature conversion tables:
void printTemperatureTables() {
    // Print Celsius to Fahrenheit table
    cout << "Celsius     Fahrenheit" << endl;
    for (int c = 0; c <= 100; c += 10) {
        cout << c << "              " << fahrenheit(c) << endl;
    }

    cout << endl;

    // Printing Fahrenheit to Celsius table
    cout << "Fahrenheit  Celsius" << endl;
    for (int f = 32; f <= 212; f += 10) {
        cout << f << "            " << celsius(f) << endl;
    }
}

int main() {
    // Temperature conversion and charts
    printTemperatureTables();
    return 0;
}