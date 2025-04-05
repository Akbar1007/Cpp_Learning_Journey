// Day 17 - Inheritence

#include <iostream>
#include <string>
using namespace std;

// my base class - student
class Student {
protected:
    int ID;
    string Name; 
    string school;
		int GroupNumber;
public:
    // constructor
    Student(int id, string name, string sch, int group) {
        ID = id;
        Name = name;
        school = sch;
        GroupNumber = group;
    }

    // display function
    void displayStudentInfo() {
        cout << "Student ID: U" << ID << endl;
        cout << "Name: " << Name << endl;
        cout << "University: " << school << endl;
        cout << "Section number: " << GroupNumber << endl;
    }
};

// Derived Class: Test (Inherits from Student)
class Test : public Student {
protected:
    int Physics;
    int OOP;
    int English;

public:
    // its constructor
    Test(int id, string name, string sch, int group, int phy, int oop, int eng)
        : Student(id, name, sch, group) // call to student class constructor
    {
        Physics = phy;
        OOP = oop;
        English = eng;
    }

    // show test scores
    void displayTestScores() {
        cout << "Physics Score: " << Physics << endl;
        cout << "OOP Score: " << OOP << endl;
        cout << "English Score: " << English << endl;
    }
};


// Derived Class: Result (Inherits from Test)
class Result : public Test {
private:
    // total
    int Total;
		// average (grade point index)
    float GPI;

public:
    // constructor for Result class
    Result(int id, string name, string sch, int group, int phy, int oop, int eng)
        : Test(id, name, sch, group, phy, oop, eng) // call to Test class constructor
    {
        calculateResults();
    }

    // calculate total and GPI
    void calculateResults() {
        Total = Physics + OOP + English;
        GPI = Total / 3.0;
    }

    // full result info
    void displayResult() {
        cout << "=========================================" << endl;
        displayStudentInfo();
        cout << "-----------------------------------------" << endl;
        displayTestScores();
        cout << "-----------------------------------------" << endl;
        cout << "Total Marks: " << Total << endl;
        cout << "GPI (Average): " << GPI << endl;
    }
};


// main Function
int main() {
    // Create a Result object with sample data
    Result student1(2410041, "Akbar Axmedov", "INHA University in Tashkent", 1, 50, 60, 70);

    // full result
    student1.displayResult();

    return 0;
}