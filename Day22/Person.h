#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
protected:
    string Name;
    string Address;
    int PhoneNumber;

public:
    Person();
    Person(string name, string address, int phone);

    void setData();
    void display() const;

    string getName() const;
    int getPhone() const;

    void writeToFile(fstream &file) const;
    void readFromFile(fstream &file);
};

#endif
