#ifndef MANAGE_H
#define MANAGE_H

#include "student.h"
#include <vector>

#define ENTER_INFORMATION(content, variable, condition) \
    do                                                  \
    {                                                   \
        cout << content;                                \
        cin >> variable;                                \
    } while (condition)

class Manage
{
private:
    vector<Student> list;
    int countStudent = 0;
public:
    void addStudent();
    void displayStudent();
    int numStudent();
};

#endif