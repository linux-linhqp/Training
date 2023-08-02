#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include "employee.h"

class Experience : public Employee
{
private:
    int expInYearExperience;
    string proSkillExperience;

public:
    Experience(string fullname, int birthDay, string email, int type, int numCertificate, int year, string skill)
        : Employee(fullname, birthDay, email, 0, numCertificate),
          expInYearExperience(year),
          proSkillExperience(skill) {}
    int getExpYear();
    string getProSkill();
    void showInfor();
};

#endif
