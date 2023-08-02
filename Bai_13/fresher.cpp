#include "fresher.h"

int Fresher::getDateGraduation()
{
    return dateGraduation;
}

string Fresher::getEducation()
{
    return educationGraduation;
}

string Fresher::getRankGraduation()
{
    return rankGraduation;
}

void Fresher::showInfor()
{
    cout << setw(10) << left << iDEmplyee;
    cout << setw(20) << left << fullNameEmployee;
    cout << setw(20) << left << emailEmployee;
    cout << setw(15) << left << birthDayEmployee;
    cout << setw(20) << left << typeEmployee;
    cout << setw(2) << left << "Year: " << dateGraduation << " - ";
    cout << setw(2) << left << educationGraduation << " - ";
    cout << setw(2) << left << rankGraduation << endl;
}