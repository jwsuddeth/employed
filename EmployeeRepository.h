#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include <string>
#include <map>
#include "Employee.h"

using namespace std;

class EmployeeRepository 
{
    private:
        
        map<string, Employee> employees; 
    
    public:
        EmployeeRepository()
        {

        }
    
        void addEmployee(const Employee & emp) 
        {
            if (employees.find(emp.getId()) == employees.end()) 
            {
                employees[emp.getId()] = emp;
            }
        }
    
        Employee findEmployee(const string& emp_id) 
        {
            auto it = employees.find(emp_id);
            if (it != employees.end()) {
                return it->second;
            }
            return Employee();
        }
    
        void deleteEmployee(const string& emp_id) 
        {
            auto it = employees.find(emp_id);
            if (it != employees.end()) 
            {
                employees.erase(it);
            }
        }
    
        map<string, Employee> &getData()
        {
            return employees;
        }

        void displayEmployees() 
        {
            for (const auto& pair : employees) {
                std::cout << "Employee ID: " << pair.first << std::endl;
            }
        }
    };
    

#endif
