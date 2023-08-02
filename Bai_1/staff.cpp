#include "staff.h"

void Staff::prinfInfor()
{
    cout << nameEmployee << "\t\t";
    cout << ageEmployee << "\t";
    cout << genderEmployee << "\t\t";
    cout << addressEmployee << "\t\t";
    cout << "Job: " << jobStaff << "\n";
}

string Staff::getJob()
{
    return jobStaff;
}
