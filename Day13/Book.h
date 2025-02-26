#include <iostream>
#include <string>
using namespace std;

class Book {
	// public things 
	public:
	int bookID;
	string title;
	string author;
	float price;

	// constructor with no parameters
	Book() {
		bookID = 0;
		title = "Unknown";
		author = "Unknown";
		price = 0.0;
	}
	// constructor with some parameters
	Book(int id, string tit, string auth, float p);

	// our deconstructor:
	~Book() {
		cout << "The book is deleted!" << endl;
	}
	void display();
};	

