#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    string nameEmployee;
    int ageEmployee;
    string genderEmployee;
    string addressEmployee;
    int typeEmployee;

public:
    Employee(string name, int age, string gender, string address, int type) : nameEmployee(name), ageEmployee(age), genderEmployee(gender), addressEmployee(address), typeEmployee(type) {}
    virtual void prinfInfor() = 0;
    string getName();
    int getAge();
    string getGender();
    string getAddress();
    virtual ~Employee(){}
};

#endif