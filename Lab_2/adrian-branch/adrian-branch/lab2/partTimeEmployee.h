#include "inherit2.h"

class partTimeEmployee: public personType
{
public:
    void print();


    double calculatePay();


    void setNameRateHours(string first, string last,
             double rate, double hours);

    partTimeEmployee(string first, string last,
      double rate, double hours);


    partTimeEmployee();

private:
    double payRate;
    double hoursWorked;
};

