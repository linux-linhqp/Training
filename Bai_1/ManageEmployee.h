#ifndef MANAGEEMPLOYEE_H
#define MANAGEEMPLOYEE_H

#include <vector>
#include "employee.h"
#include "engineer.h"
#include "staff.h"
#include "worker.h"

using namespace std;

#define ENTER_INFORMATION(content, variable, condition) \
    do                                                  \
    {                                                   \
        cout << content;                                \
        cin >> variable;                                \
    } while (condition)

class ManageEmployee
{
private:
    vector<Employee*> list;
public:
    void addEmployee(int key);
    void searchEmployee(string name);
    void printfInforEmployee();
};

#endif
