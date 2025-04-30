#include <iostream>

#include "Employee.h"
#include "SalaryFormatter.h"

using namespace std;

int main()
{

//	cout << SalaryFormatter::formatSalary(3.14) << '\n';

	Employee e;
	e.setId("123");
	e.setFirstName("Jeff");
	e.setLastName("Suddeth");
	e.setTitle("General Manager");
	e.setSalary(400000.00);
	e.showEmployeeData();

	return 0;
}

