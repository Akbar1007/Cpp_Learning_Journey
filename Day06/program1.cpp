// Day 6

//Program 1:
#include <iostream>
using namespace std;

//Creating a function to calculate the average of numbers from 1 to 10
double averageNumbers() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    return sum / 10.0;  //I am telling to return average as double
}

int main() {
    // Printing our the final results after calling the function:
    cout << "The average of numbers from 1 to 10 is: " << averageNumbers() << endl;
    return 0;
}