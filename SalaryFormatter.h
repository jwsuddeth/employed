#ifndef SALARYFORMATTER_H
#define SALARYFORMATTER_H



#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>

using namespace std;

class SalaryFormatter
{

	public:
		static string formatSalary(double m)
		{
			stringstream ss;
			ss.imbue(std::locale("en_US"));
			ss << fixed << setprecision(2) << showbase << put_money(m * 100);
			return ss.str();
		}

};

#endif


