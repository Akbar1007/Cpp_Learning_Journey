// Day 13

#include "Book.h"
#include <iostream>
#include <string>

// creating constructor outside from the class
Book::Book(int id, string tit, string auth, float p) {
	bookID = id;
	title = tit;
	author = auth;
	price = p;
}

// creating methods outside from the class
void Book::display() {
	cout << "Book ID: " << bookID << endl;
	cout << "Book title: " << title << endl;
	cout << "Book author: " << author << endl;
	cout << "Price: " << price << endl;
}

int main() {
	// initializzing three different objects

	Book object;
	Book object2(1, "Book 19", "A popular writer", 3);
	Book object3(2, "Review book", "Teacher", 1);
	// and then calling the function to print results
	object.display();
	object2.display();
	object3.display();
	return 0;
}

