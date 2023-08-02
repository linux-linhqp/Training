#include "intern.h"

string Intern::getMajor()
{
    return majorIntern;
}

string Intern::getUniversity()
{
    return nameUniversity;
}

int Intern::getSemester()
{
    return semesterIntern;
}

void Intern::showInfor()
{
    cout <<  setw(10) << left << iDEmplyee;
    cout <<  setw(20) << left << fullNameEmployee;
    cout <<  setw(20) << left << emailEmployee;
    cout <<  setw(15) << left << birthDayEmployee;
    cout <<  setw(20) << left << typeEmployee;
    cout <<  setw(2) << left << majorIntern << " - ";
    cout <<  setw(2) << left << nameUniversity << " - ";
    cout <<  setw(2) << left << "Semester: " << semesterIntern << endl;
}