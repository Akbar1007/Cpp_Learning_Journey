// Day 8

//Program 1:

#include <iostream>
using namespace std;

// Function that copies the value 
int tripleByValue(int count) {
    return count * 3;
}

// Funciton that triples the value by passing a reference
void tripleByReference(int& count) {
    count *= 3;
}

int main() {
    int count;
    cout << "Input an integer: " << endl;
    cin >> count;

    cout << "Original count: " << count << endl;

    // by value
    int resultByValue = tripleByValue(count);
    cout << "Tripled by value: " << resultByValue << endl;

    // by reference
    tripleByReference(count);
    cout << "Tripled by reference: " << count << endl;

    return 0;
}