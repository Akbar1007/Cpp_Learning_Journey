#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

// base class
class Person {
protected:
    string Name;
    int Age;
    char Gender;

public:
    //parameterized constr
    Person(string name, int age, char gender) : Name(name), Age(age), Gender(gender) {}

    //virtual func
    virtual void Display() const {
        cout << "Name: " << Name << ", Age: " << Age << ", Gender: " << Gender << endl;
    }

    // virtual destr
    virtual ~Person() {}
};

#endif