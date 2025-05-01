#include "Person.h"
#include <iomanip>

// and now using Person class methods here
Person::Person() : Name(""), Address(""), PhoneNumber(0) {}

Person::Person(string name, string address, int phone)
    : Name(name), Address(address), PhoneNumber(phone) {}

void Person::setData() {
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, Name);
    cout << "Enter Address: ";
    getline(cin, Address);
    cout << "Enter Phone Number: ";
    cin >> PhoneNumber;
}

void Person::display() const {
    cout << left << setw(20) << Name
         << left << setw(30) << Address
         << left << setw(15) << PhoneNumber << endl;
}

string Person::getName() const {
    return Name;
}

int Person::getPhone() const {
    return PhoneNumber;
}

void Person::writeToFile(fstream &file) const {
    file.write((char*)this, sizeof(*this));
}

void Person::readFromFile(fstream &file) {
    file.read((char*)this, sizeof(*this));
}
