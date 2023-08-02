#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
    int iDPerson;
    string namePerson;
    int agePerson;
public:
    Person(){}
    Person(string name, int age, int id) : namePerson(name), agePerson(age), iDPerson(id){}
    int getID();
    int getAge();
    string getName();
    void setID(int id);
    void setAge(int age);
    void setName(string name);
    void printInforPerson();
};

#endif
