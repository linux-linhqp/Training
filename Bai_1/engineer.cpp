#include "engineer.h"

void Engineer::prinfInfor()
{
    cout << nameEmployee << "\t\t";
    cout << ageEmployee << "\t";
    cout << genderEmployee << "\t\t";
    cout << addressEmployee << "\t\t";
    cout << "Major: " << majorEngineer << "\n";
}

string Engineer::getMajor()
{
    return majorEngineer;
}
