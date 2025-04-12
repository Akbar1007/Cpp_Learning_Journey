#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>
using namespace std;

// base class Hospital
class Hospital {
protected:
    int ID;
    string Name;
    int Age;
    char Gender;

public:
    // parameterized constructor
    Hospital(int id, string name, int age, char gender) 
        : ID(id), Name(name), Age(age), Gender(gender) {}
    
    // virtual Display function
    virtual void Display() {
        cout << "ID: " << ID << endl;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Gender: " << Gender << endl;
    }
    
    // virtual destructor
    virtual ~Hospital() {}
};

// derived class Doctor
class Doctor : public Hospital {
private:
    string department;
    string cons_day;
    int cons_hours;
    string surgery_day;

public:
    // my parameterized constructor
    Doctor(int id, string name, int age, char gender, 
           string dept, string consDay, int consHours, string surgeryDay)
        : Hospital(id, name, age, gender),
          department(dept), cons_day(consDay), cons_hours(consHours), surgery_day(surgeryDay) {}
    
    // overriding my function
    void Display() override {
        Hospital::Display();
        cout << "Department: " << department << endl;
        cout << "Consultation Day: " << cons_day << endl;
        cout << "Consultation Hours: " << cons_hours << endl;
        cout << "Surgery Day: " << surgery_day << endl;
    }
};

// derived
class Patient : public Hospital {
private:
    string med_history;

public:
    // param... constructor
    Patient(int id, string name, int age, char gender, string medHistory)
        : Hospital(id, name, age, gender), med_history(medHistory) {}
    
    // overriding again
    void Display() override {
        Hospital::Display();
        cout << "Medical History: " << med_history << endl;
    }
};

#endif 