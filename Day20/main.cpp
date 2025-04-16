// Day 20

#include <iostream>
#include "Student.h"

int main() {
    // creating my objects here
    // each ID NUmber is in a different data type
    Student<int> student1(100001, "Akbar", 35, 'M');
    Student<string> student2("A2025X", "Alex", 30, 'M');
    Student<long> student3(1234567890L, "Gadzhi", 25, 'M');
    Student<char> student4('Z', "Sam", 40, 'F');

    // just printing out the details
    cout << "Student 1: " << endl;
    student1.Display();
    cout << "\nStudent 2: " << endl;
    student2.Display();
    cout << "\nStudent 3: " << endl;
    student3.Display();
    cout << "\nStudent 4: " << endl;
    student4.Display();

    return 0;
}