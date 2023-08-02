#ifndef ENGINEER_H
#define ENGINEER_H

#include "employee.h"

class Engineer : public Employee
{
private:
    string majorEngineer;
public:
    Engineer(string name, int age, string gender, string address, string major) : Employee(name, age, gender, address, 1), majorEngineer(major) {}
    void prinfInfor();
    string getMajor();
};

#endif
