#include "person.h"

int Person::getAge()
{
    return agePerson;
}

int Person::getID()
{
    return IDPerson;
}

string Person::getName()
{
    return namePerson;
}

string Person::getJob()
{
    return jobPerson;
}

void Person::printInforPerson()
{
    cout << "ID: " << IDPerson;
    cout << " Name: " << namePerson;
    cout << " Age: " << agePerson;
    cout << " Job: " << jobPerson << endl;
}