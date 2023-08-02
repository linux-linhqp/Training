#ifndef STAFF_H
#define STAFF_H

#include "employee.h"

class Staff : public Employee
{
private:
    string jobStaff;

public:
    Staff(string name, int age, string gender, string address, string job) : Employee(name, age, gender, address, 2), jobStaff(job) {}
    void prinfInfor();
    string getJob();
};

#endif
