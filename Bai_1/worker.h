#ifndef WORKER_H
#define WORKER_H

#include "employee.h"

class Worker : public Employee
{
private:
    int levelWorker;
public:
    Worker(string name, int age, string gender, string address, int level) : Employee(name, age, gender, address, 3), levelWorker(level) {}
    void prinfInfor();
    int getLevel();
};

#endif
