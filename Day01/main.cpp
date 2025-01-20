// Day 1

#include <iostream>
using namespace std;

int main() {
	//Just printing "Welcome to my C++ learning jounrey":
	cout << "Welcome to my C++ learning jounrey" << endl;

	//Declaring a variable for integer and printing its value:
	int integer_variable = 5;
	cout << "INTEGER: " <<  integer_variable << endl;

	//Declaring a variable for double and printing its value:
	double double_variable = 6.6;
	cout << "DOUBLE: " << double_variable << endl;

	//Declaring a variable for float and printing its value:
	float float_variable = 7.5; 
	cout << "FLOAT: " << float_variable << endl;

	// Declaring a char variable and printing its value:
	char char_variable = 'A';
	cout << "CHAR: " << char_variable << endl;

	// Calculating the area of the square:
	int side;
	// Taking input from the user:
	cout << "Enter the side of the square: ";
	// Taking that input and storing it in our variable:
	cin >> side;

	// Calculating the area of the square:
	int area = side * side;

	// We are finally printing the side and area of the square:
	cout << "Side of the square: " << side << endl;
	cout << "Area of the square: " << area << endl;
	return 0;
}



