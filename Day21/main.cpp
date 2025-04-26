// Day 21

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// this is my function to send student data to students.txt and to send average scores to averages.txt
void writeStudentData() {
    ofstream studentFile("students.txt", ios::app);
    ofstream averageFile("averages.txt", ios::app);

    if (!studentFile.good() || !averageFile.good()) {
        cerr << "A problem happened: I could not open one or both output files.\n";
        return;
    }

    // three inputs
    for (int i = 0; i < 3; ++i) {
        string id, name;
        int score1, score2, score3;

        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter three exam scores: ";
        cin >> score1 >> score2 >> score3;

        // it goes to students fule
        studentFile << id << " " << name << " "
                    << score1 << " " << score2 << " " << score3 << endl;

        // average score
        double avg = (score1 + score2 + score3) / 3.0;

        // and it goes averages file
        averageFile << name << " " << setprecision(2) << avg << endl;
    }

    studentFile.close();
    averageFile.close();
}

// and now my function to get info from the files to cout them
void readAndDisplayData() {
    ifstream studentFile("students.txt");
    ifstream averageFile("averages.txt");

    if (!studentFile.good() || !averageFile.good()) {
        cerr << "A porblem happened: Could not open one or both input files.\n";
        return;
    }

    string line;

    cout << "\n--- INfo from students.txt ---\n";
    while (getline(studentFile, line)) {
        cout << line << endl;
    }

    cout << "\n--- Info from averages.txt ---\n";
    while (getline(averageFile, line)) {
        cout << line << endl;
    }

    studentFile.close();
    averageFile.close();
}

int main() {
    cout << "=== Student Score Processing ===\n";
    // just calling the functions
    writeStudentData();
    readAndDisplayData();

    return 0;
}
