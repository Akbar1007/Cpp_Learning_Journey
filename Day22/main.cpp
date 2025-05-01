// Day 22

#include "Person.h"
#include <vector>
#include <fstream>
// this is so that setw works
#include <iomanip>

void displayAll();
void findByName(string);
void findByPhone(int);
void deleteRecord(string);
void addRecordAtPosition(int);

const string FILENAME = "Person.dat";

int main() {
    int choice;
    do {
        cout << "\n========= PERSON DATABASE MENU =========\n";
        cout << "1. Display All Records\n";
        cout << "2. Find Phone Number by Name\n";
        cout << "3. Find Name by Phone Number\n";
        cout << "4. Delete a Record by Name\n";
        cout << "5. Add a Record at Specific Position\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        string name;
        int phone, pos;

        switch (choice) {
            case 1:
                displayAll();
                break;
            case 2:
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                findByName(name);
                break;
            case 3:
                cout << "Enter phone number: ";
                cin >> phone;
                findByPhone(phone);
                break;
            case 4:
                cout << "Enter name to delete: ";
                cin.ignore();
                getline(cin, name);
                deleteRecord(name);
                break;
            case 5:
                cout << "Enter position to insert at (0-based index): ";
                cin >> pos;
                addRecordAtPosition(pos);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 0);
		// the program will exit when user enters 0 but until then it will work and the user can choose the options from 1 to 5 from the menu

    return 0;
}

//  option 1 of menu which is shown to user
void displayAll() {
    fstream file(FILENAME, ios::in | ios::binary);
    if (!file) {
        cout << "File not found.\n";
        return;
    }

    Person p;
    cout << left << setw(20) << "Name"
         << setw(30) << "Address"
         << setw(15) << "Phone Number" << endl;
    cout << "---------------------------------------------------------------\n";

    while (file.read((char*)&p, sizeof(p))) {
        p.display();
    }

    file.close();
}

// otpion 2
void findByName(string name) {
    fstream file(FILENAME, ios::in | ios::binary);
    Person p;
    bool found = false;

    while (file.read((char*)&p, sizeof(p))) {
        if (p.getName() == name) {
            cout << "Phone Number: " << p.getPhone() << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Person not found.\n";
    file.close();
}

// option 3
void findByPhone(int phone) {
    fstream file(FILENAME, ios::in | ios::binary);
    Person p;
    bool found = false;

    while (file.read((char*)&p, sizeof(p))) {
        if (p.getPhone() == phone) {
            cout << "Name: " << p.getName() << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Phone number not found.\n";
    file.close();
}

// option 4
void deleteRecord(string name) {
    fstream file(FILENAME, ios::in | ios::binary);
    vector<Person> people;
    Person p;

    while (file.read((char*)&p, sizeof(p))) {
        if (p.getName() != name) {
            people.push_back(p);
        }
    }
    file.close();

    file.open(FILENAME, ios::out | ios::binary | ios::trunc);
    for (Person &person : people) {
        file.write((char*)&person, sizeof(person));
    }
    file.close();
    cout << "Record deleted (if found).\n";
}

// option 5
void addRecordAtPosition(int pos) {
    fstream file(FILENAME, ios::in | ios::binary);
    vector<Person> people;
    Person p;

    while (file.read((char*)&p, sizeof(p))) {
        people.push_back(p);
    }
    file.close();

    Person newPerson;
    newPerson.setData();

    if (pos >= 0 && pos <= people.size())
        people.insert(people.begin() + pos, newPerson);
    else {
        cout << "Invalid position. Appending to end.\n";
        people.push_back(newPerson);
    }

    file.open(FILENAME, ios::out | ios::binary | ios::trunc);
    for (Person &person : people) {
        file.write((char*)&person, sizeof(person));
    }
    file.close();
    cout << "Record added.\n";
}
