#ifndef INTERN_H
#define INTERN_H

#include "employee.h"

class Intern : public Employee
{
private:
    string majorIntern;
    int semesterIntern;
    string nameUniversity;

public:
    Intern(string fullname, int birthDay, string email, int type, int numCertificate, string major, int semester, string university)
        : Employee(fullname, birthDay, email, 2, numCertificate),
          majorIntern(major),
          semesterIntern(semester),
          nameUniversity(university) {}
    string getMajor();
    int getSemester();
    string getUniversity();
    void showInfor();
};

#endif