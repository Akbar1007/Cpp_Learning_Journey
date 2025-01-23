// Day 7

//Program 1:
#include <iostream>
using namespace std;

double area(double length, double width) {
    return length * width;
}

double area(double base, double height, int) {
    return 0.5 * base * height;
}

double area(double side) {
    return side * side;
}

int main() {
    double length, width, base, height, side;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the Rectangle: " << area(length, width) << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the Triangle: " << area(base, height, 0) << endl;

    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of the Square: " << area(side) << endl;

    return 0;
}