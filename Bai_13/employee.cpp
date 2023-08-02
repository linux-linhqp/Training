#include "employee.h"

int Employee::countEmployee = 0;

int Employee::getID()
{
    return iDEmplyee;
}

int Employee::getBirthDay()
{
    return birthDayEmployee;
}

int Employee::getType()
{
    return typeEmployee;
}

string Employee::getName()
{
    return fullNameEmployee;
}

string Employee::getEmail()
{
    return emailEmployee;
}

void Employee::showInfor()
{
    cout <<  setw(10) << left << iDEmplyee;
    cout <<  setw(15) << left << fullNameEmployee;
    cout <<  setw(15) << left << emailEmployee;
    cout <<  setw(15) << left << birthDayEmployee;
    cout <<  setw(10) << left << typeEmployee << endl;
}

void Employee::setEmail(string email)
{
    emailEmployee = email;
}

void Employee::setBirthDay(int birthDay)
{
    birthDayEmployee = birthDay;
}

void Employee::setName(string name)
{
    fullNameEmployee = name;
}