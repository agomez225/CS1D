// Author: Parsa Banaei and Adrian
// Description: Hello World in C++ 
//============================================================ 

#include <iostream> 
#include "partTimeEmployee.h"
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
	string name1 = "Parsa";
	hello1Function(name1);
	string name2 = "Adrian";
	hello2Function(name2);




	personType newPerson();
	partTimeEmployee newEmployee("John", "Smith", 7.50, 56);
	partTimeEmployee employee;
    newEmployee.print();
	employee.setNameRateHours("Rachel", "Moore",9.75, 45); 
	employee.print(); 

	return 0;
}

