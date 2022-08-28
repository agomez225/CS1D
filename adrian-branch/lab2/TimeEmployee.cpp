#include <iostream>

#include "inherit2.h"
#include "partTimeEmployee.h"

using namespace std;

int main()
{
 personType newPerson;
 partTimeEmployee newEmployee("John","Smith",7.50,56);
 partTimeEmployee employee;
       newEmployee.print();
 employee.setNameRateHours("Rachel", "Moore",9.75, 45);
 employee.print();

 return 0;
}
