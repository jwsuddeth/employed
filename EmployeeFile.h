#ifndef EMPLOYEEFILE_H
#define EMPLOYEEFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include "Employee.h"
#include "EmployeeRepository.h"


using namespace std;


class EmployeeFile
{
    public:

    void loadEmployees(EmployeeRepository & repo, const string & filename)
    {
        ifstream empFile("employees.csv");
        while (empFile.good())
        {
            // load the file
            string csv;
            getline(empFile, csv);

            stringstream ss(csv);
            string id;
            string fname;
            string lname;
            string title;
            string ssalary;
            double salary;

            getline(ss, id, ',');
            getline(ss, fname, ',');
            getline(ss, lname, ',');
            getline(ss, title, ',');
            getline(ss, ssalary, ',');

            salary = atof(ssalary.c_str());

            Employee e(id, fname, lname, title, salary);
            repo.addEmployee(e);
        }

        empFile.close();

    }

    void saveEmployees(EmployeeRepository & repo, const string & filename)
    {
        ofstream empFile("employees.csv");
        
        map<string, Employee> &data = repo.getData();

        // loop over the repo, generate csv text, and write the record.
        for (auto itr = data.begin(); itr != data.end(); itr++)
        {
            Employee e = itr->second;
            string csv = e.getCsv();
            empFile << csv << '\n';
        }
        empFile.close();
    }
};


#endif
