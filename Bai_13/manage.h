#ifndef MANAGE_H
#define MANAGE_H

#include "employee.h"
#include "experience.h"
#include "fresher.h"
#include "intern.h"


class Manage
{
private:
    vector<Employee *> listEmployee;

public:
    void addEmployee(int key);
    void updateInforEmployee(int id);
    void eraseEmployee(int id);
    void printEmployee();
};

#endif