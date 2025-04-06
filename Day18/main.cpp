// Day 18: Inheritance; Polymorphism; Virtual Base Class

#include <iostream>
#include <string>
#include "Classes.h"
using namespace std;

int main()
{
	ECLASS obj;
	obj.Person::setData("Azimjon", 17, 'a');
	obj.Teacher::setData("Object oriented programming...");
	obj.Student::setStudent(2410041, "OOP", 4);
	
	obj.showStudentInfo();
	obj.showTeacherInfo();
}

