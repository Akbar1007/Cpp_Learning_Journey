#include <iostream>
#include <string>
using namespace std;

class Person
{
	//protected
protected:
	string Name;
	int Age;
	char Gender;
public:
	void setData(string name , int age, char gender) 
	{
		Name = name;
		Age = age;
		Gender = gender;
	}
	void showData()
	{
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Gender: " << Gender << endl;
	}
};

//virtual inheritance fro mthe class
class Student : public virtual Person
{
	int IDnumber;
	string subject;
	int grade;

public:
	void setStudent(int id, string subject, int gra)
	{
		IDnumber = id;
		subject = subject;
		grade = gra;
	}

	void showStudent()
	{
		cout << "ID number: " << IDnumber << endl;
		cout << "Subject: " << subject << endl;
		cout << "Grade: " << grade << endl;
	}
};
//virtual inherit from class
class Teacher : public virtual Person
{
	string courseInfo;

public:
	void setData(string c)
	{
		courseInfo = c;
	}
	void showTeacher()
	{
		cout << "Course Info: " << courseInfo << endl;
	}
};

class ECLASS : public Student , public Teacher
{
public:
	void showStudentInfo()
	{
		showData();
		showStudent();
	}
	void showTeacherInfo()
	{
		showData();
		showTeacher();
	}
};