#include "student.h"

int Student::getAge()
{
    return ageStudent;
}

int Student::getGrade()
{
    return gradeStudent;
}

string Student::getName()
{
    return nameStudent;
}

string Student::getHomeTown()
{
    return homeTown;
}

void Student::printInfor()
{
    cout << "Name: " << nameStudent;
    cout << " Age: " << ageStudent;
    cout << " HomeTown: " << homeTown;
    cout << " Grade: " << gradeStudent << endl;
}