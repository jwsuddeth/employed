#include <iostream>

#include "Employee.h"
#include "SalaryFormatter.h"
#include "Menu.h"

#include "IdGenerator.h"
#include "EmployeeRepository.h"
#include "EmployeeFile.h"


using namespace std;

int main() 
{
	//IDGenerator idGen;

	// Employee e1(idGen.generateId(6), "Bugs", "Bunny", "Manager", 52000);
	// Employee e2(idGen.generateId(6), "Yosemite", "Sam", "Clerk", 32000);
	// Employee e3(idGen.generateId(6), "Sylvester", "Cat", "Janitor", 32000);
	// Employee e4(idGen.generateId(6), "Taz", "Devil", "Stocker", 32000);
	// Employee e5(idGen.generateId(6), "Jerry", "Mouse", "Clerk", 28000);

	// repo.addEmployee(e1);
	// repo.addEmployee(e2);
	// repo.addEmployee(e3);
	// repo.addEmployee(e4);
	// repo.addEmployee(e5);

	// EmployeeRepository repo;
	// EmployeeFile file;
	// //file.saveEmployees(repo, "employees.csv");
	// file.loadEmployees(repo, "employees.csv");

	// Employee e = repo.findEmployee("2739b6551c5f");

	// if (e.getId().size() > 0)
	// {
	// 	e.showEmployeeData();
	// }
	// else
	// {
	// 	cout << "Employee not found!\n";
	// }


	// repo.displayEmployees();



	// IDGenerator idgen;
	// cout << idgen.generateId(6) << '\n';
	// cout << idgen.generateId(6) << '\n';
	// cout << idgen.generateId(6) << '\n';
	// cout << idgen.generateId(6) << '\n';
	// cout << idgen.generateId(6) << '\n';
	// cout << idgen.generateId(6) << '\n';

	EmployeeRepository repo;
	EmployeeFile file;
	file.loadEmployees(repo, "employees.csv");

	IDGenerator idGenerator;

    Menu myMenu;  // Create a Menu object with a title
    MenuCommand cmd;

    // Loop until the user chooses to exit
    do {
		string firstName, lastName, title;
		double salary;

		Employee e;

        myMenu.printMenu();
        cmd = myMenu.GetCommand();
        
        // Handle the command using a switch-case structure
        switch (cmd) 
        {
            case MenuCommand::AddNew:
                // std::cout << "You selected Option 1.\n";

				cout << "Enter FirstName: ";
				getline(cin, firstName);
				cout << endl;

				cout << "Enter LastName: ";
				getline(cin, lastName);
				cout << endl;

				cout << "Enter Title: ";
				getline(cin, title);
				cout << endl;

				cout << "Enter Salary: " << endl;
				cin >> salary;
				
				e.setId(idGenerator.generateId(6));
				e.setFirstName(firstName);
				e.setLastName(lastName);
				e.setTitle(title);
				e.setSalary(salary);

				repo.addEmployee(e);

				cout << endl;

                // TODO: Add action for Option 1 here
                break;
            case MenuCommand::Find:
                std::cout << "You selected Option 2.\n";
                // TODO: Add action for Option 2 here
                break;
            case MenuCommand::Remove:
                cout << "You selected option 3\n";
				// TODO: Add action for option 3
            break;
            case MenuCommand::Exit:
                std::cout << "Exiting the menu. Goodbye!\n";
                break;
        }

        std::cout << std::endl;  // Blank line for readability before next iteration
    } while (cmd != MenuCommand::Exit);

	file.saveEmployees(repo, "employees.csv");

    return 0;
}

// int main()
// {

//	cout << SalaryFormatter::formatSalary(3.14) << '\n';

	// Employee e;
	// e.setId("123");
	// e.setFirstName("Jeff");
	// e.setLastName("Suddeth");
	// e.setTitle("General Manager");
	// e.setSalary(400000.00);
	// e.showEmployeeData();

// 	return 0;
// }

