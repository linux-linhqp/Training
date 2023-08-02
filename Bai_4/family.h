#ifndef FAMILY_H
#define FAMILY_H

#include "person.h"
#include <vector>
// #include <iostream>

using namespace std;

#define ENTER_INFORMATION(content, variable, condition) \
    do                                                  \
    {                                                   \
        cout << content;                                \
        cin >> variable;                                \
    } while (condition)

class Family
{
private:
    vector<Person> listPerson;
    int iDHouse;
    int numberPerson;

public:
    Family(int id, int number) : iDHouse(id), numberPerson(number)
    {
        for (int i = 0; i < numberPerson; i++)
        {
            string name;
            int age;
            string job;
            cout << "Input Person " << i + 1 << " Infor" << endl;
            ENTER_INFORMATION("Enter Name ? ", name, 0);
            ENTER_INFORMATION("Enter Age ? ", age, age < 0 || age > 100);
            ENTER_INFORMATION("Enter Job ? ", job, 0);
            Person a(name, age, job);
            listPerson.push_back(a);
        }
    }
    void printFamily();
};

#endif
