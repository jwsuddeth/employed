
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

#include "SalaryFormatter.h"

using namespace std;

class Employee
{
	private:
	string id;
	string firstName;
	string lastName;
	string title;
	double salary;


	public:
	Employee()
	{
		id = "";
		firstName = "";
		lastName = "";
		title = "";
		salary = 0.0;
	}

	Employee(const string & newId, const string & fn, const string & ln, const string & t, const double sal)
	{
		id = newId;
		firstName = fn;
		lastName = ln;
		title = t;
		salary = sal;
	}

	string getId() const { return id; }
	string getFirstName() const { return firstName; }
	string getLastName() const { return lastName; }
	string getTitle() const { return title; }
	double getSalary() const { return salary; }


	void setId(const string & newId) { id = newId; }
	void setFirstName(const string & fn) { firstName = fn; }
	void setLastName(const string & ln) { lastName = ln; }
	void setTitle(const string & t) { title = t; }
	void setSalary(const double sal) { salary = sal; }

	void showEmployeeData()
	{
		cout << "Id: " << id << '\n'
			<< "First Name: " << firstName << '\n'
			<< "Last Name: " << lastName << '\n'
			<< "Title: " << title << '\n'
			<< "Salary: " << SalaryFormatter::formatSalary(salary) << '\n';

	}
};

#endif

