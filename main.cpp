#include <iostream>

#include "Employee.h"
#include "SalaryFormatter.h"
#include "Menu.h"

#include "IdGenerator.h"

using namespace std;

int main() 
{
	IDGenerator idgen;
	cout << idgen.generateId(6) << '\n';
	cout << idgen.generateId(6) << '\n';
	cout << idgen.generateId(6) << '\n';
	cout << idgen.generateId(6) << '\n';
	cout << idgen.generateId(6) << '\n';
	cout << idgen.generateId(6) << '\n';

    // Menu myMenu;  // Create a Menu object with a title
    // MenuCommand cmd;

    // // Loop until the user chooses to exit
    // do {
    //     myMenu.printMenu();
    //     cmd = myMenu.GetCommand();
        
    //     // Handle the command using a switch-case structure
    //     switch (cmd) 
    //     {
    //         case MenuCommand::AddNew:
    //             std::cout << "You selected Option 1.\n";
    //             // TODO: Add action for Option 1 here
    //             break;
    //         case MenuCommand::Find:
    //             std::cout << "You selected Option 2.\n";
    //             // TODO: Add action for Option 2 here
    //             break;
    //         case MenuCommand::Remove:
    //             cout << "You selected option 3\n";
    //         break;
    //         case MenuCommand::Exit:
    //             std::cout << "Exiting the menu. Goodbye!\n";
    //             break;
    //     }

    //     std::cout << std::endl;  // Blank line for readability before next iteration
    // } while (cmd != MenuCommand::Exit);

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

