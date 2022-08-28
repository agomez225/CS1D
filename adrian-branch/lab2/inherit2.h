#ifndef H_PersonType
#define H_PersonType

#include <string>

using namespace std;

class personType
{
public:
    void print() const;

    void setName(string first, string last);


    void getName(string& first, string& last);

    personType(string first, string last);

    personType();

private:
    string firstName;
    string lastName;
};
#endif

