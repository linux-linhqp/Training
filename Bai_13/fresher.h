#ifndef FRESHER_H
#define FRESHER_H

#include "employee.h"

class Fresher : public Employee
{
private:
    int dateGraduation;
    string rankGraduation;
    string educationGraduation;

public:
    Fresher(string fullname, int birthDay, string email, int type, int numCertificate, int date, string rank, string education)
        : Employee(fullname, birthDay, email, 1, numCertificate),
          dateGraduation(date),
          rankGraduation(rank),
          educationGraduation(education) {}
    int getDateGraduation();
    string getRankGraduation();
    string getEducation();
    void showInfor();
};

#endif