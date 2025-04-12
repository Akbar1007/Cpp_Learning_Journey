// Day 19

#include <iostream>
#include "hospital.h"
using namespace std;

int main() {
    // an array of pointers to Hospital objects
    Hospital* hospital[4];
    
    // two Doctor objectshere
    hospital[0] = new Doctor(101, "Dr. Bill", 45, 'M', "Cardiology", "Monday", 6, "Wednesday");
    hospital[1] = new Doctor(102, "Dr. Bella", 38, 'F', "Neurology", "Tuesday", 8, "Friday");
    
    // two Patient objects here
    hospital[2] = new Patient(501, "John Doe", 30, 'M', "Hypertension, Diabetes");
    hospital[3] = new Patient(502, "Jane Smith", 25, 'F', "Asthma, Allergies");
    
    cout << "==== Hospital Management System ====" << endl << endl;
    
    // display information here
    for (int i = 0; i < 4; i++) {
        if (i < 2) {
            cout << "Doctor " << (i + 1) << " Information:" << endl;
        } else {
            cout << "Patient " << (i - 1) << " Information:" << endl;
        }
        
        hospital[i]->Display();  // virtual function call, runtime polymorphism
        cout << "-----------------------------" << endl;
    }
    
    // memory clean up
    for (int i = 0; i < 4; i++) {
        delete hospital[i];
    }
    
    return 0;
}