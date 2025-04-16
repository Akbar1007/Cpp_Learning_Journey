#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

// class template
template <typename T>
class Student : public Person {
private:
    T IDNumber;

public:
    // my parameterized constr
    Student(T id, string name, int age, char gender)
        : Person(name, age, gender), IDNumber(id) {}

    // overriding Display func to show our data
    void Display() const override {
        cout << "ID Number: " << IDNumber << ", Name: " << Name
             << ", Age: " << Age << ", Gender: " << Gender << endl;
    }
};

#endif