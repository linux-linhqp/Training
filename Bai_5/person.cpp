#include "person.h"

int Person::getAge()
{
    return agePerson;
}

int Person::getID()
{
    return iDPerson;
}

string Person::getName()
{
    return namePerson;
}

void Person::printInforPerson()
{
    cout << "ID: " << iDPerson;
    cout << " Name: " << namePerson;
    cout << " Age: " << agePerson << endl;
}

void Person::setAge(int age)
{
    agePerson = age;
}

void Person::setID(int id)
{
    iDPerson = id;
}

void Person::setName(string name)
{
    namePerson = name;
}