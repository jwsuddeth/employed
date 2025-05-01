
#ifndef MENU_H
#define MENU_H


#include <iostream>
#include <string>


using namespace std;

// Enumeration for possible menu commands (menu options)
enum class MenuCommand {
    AddNew,
    Find,
    Remove,
    Exit  // for error handling if an unknown choice is entered
};

// Menu class definition
class Menu
{


public:
    // Constructor to initialize memberName (optional, used for displaying the menu title)
    Menu(){}
    
    void printMenu()
    {
               // Display menu options
        cout << "1. AddNew\n"
         << "2. Get Employee\n"
        << "3. Delete Employee\n"
        << "4. Exit\n"
        << "Enter your choice (1-3): ";
    }
    
    // Public method to display the menu and get a command from the user
    MenuCommand GetCommand() 
    {
        
        int choice = -1;
        while (choice < 0 || choice > 4)
        {
     
            cin >> choice;
  
            if (choice < 0 || choice > 4)
            {
                 cout << "Invalid Option" << endl;
            }
        }
        
        switch (choice) 
        {
            case 1: return MenuCommand::AddNew;
            case 2: return MenuCommand::Find;
            case 3: return MenuCommand::Remove;
            case 4: return MenuCommand::Exit;
        }
        
        
        return MenuCommand::Exit;
    }
};


#endif
