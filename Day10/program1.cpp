// Day 10:

//Program 1:
#include <iostream>
using namespace std;
// function that calculates the area 
void calculateArea() {
    int length, width, area;
    int* pLength = &length;
    int* pWidth = &width;
    int* pArea = &area;

    cout << "Enter the length of the rectangle: ";
    cin >> *pLength;
    cout << "Enter the width of the rectangle: ";
    cin >> *pWidth;

    *pArea = (*pLength) * (*pWidth);

    cout << "The area of the rectangle is: " << *pArea << endl;
}

int main() {
    // calling the function
    calculateArea();
    
    cout << "Finsihed" << endl;
    return 0;
}
