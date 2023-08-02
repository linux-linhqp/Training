#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
    int IDPerson;
    string namePerson;
    int agePerson;
    string jobPerson;
public:
    Person(string name, int age, string job) : namePerson(name), agePerson(age), jobPerson(job)
    {
        static int id = 100;
        IDPerson = id;
        id++;
    }
    int getID();
    int getAge();
    string getName();
    string getJob();
    void printInforPerson();
};

#endif
