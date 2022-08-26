#include <iostream> 
#include "partTimeEmployee.h" 
using namespace std;

void partTimeEmployee::print()
{
    personType::print();   //print the name of the employee 
    cout << " wages are : " << calculatePay() << endl;
}

double partTimeEmployee::calculatePay()
{
    return (payRate * hoursWorked);
}

void partTimeEmployee::setNameRateHours(string first,
    string last, double rate, double hours)
{
    personType::setName(first, last);
    payRate = rate;
    hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee(string first, string last,
    double rate, double hours)
    : personType(first, last) //constructor with parameters 
{
    payRate = rate;
    hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee()   // default constructor 
{
    payRate = 0;
    hoursWorked = 0;
}

