// Day 6 

// Program 4:

#include <iostream>
#include <cmath>      // For mathematical operations (e.g., M_PI)
using namespace std;

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    // Multiply length and width to get the area
    return length * width;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    // Use the formula: area = pi * radius^2
		float M_PI = 3.14159265358979323846;
    return M_PI * radius * radius;
}

int main() {
    // Display options for the user
    cout << "Choose an option to calculate area:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";

    int choice;
    cin >> choice;  // Get the user's choice

    if (choice == 1) {
        // Rectangle area calculation
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;  // Input length
        cout << "Enter the width of the rectangle: ";
        cin >> width;   // Input width

        // Call the rectangle area function
        double area = calculateArea(length, width);
        cout << "The area of the rectangle is: " << area << "\n";

    } else if (choice == 2) {
        // Circle area calculation
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;  // Input radius

        // Call the circle area function
        double area = calculateArea(radius);
        cout << "The area of the circle is: " << area << "\n";

    } else {
        // Handle invalid input
        cout << "Invalid choice. Please run the program again.\n";
    }

    return 0;  // Indicate successful program execution
}
