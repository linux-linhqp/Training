#include "experience.h"

int Experience::getExpYear()
{
    return expInYearExperience;
}

string Experience::getProSkill()
{
    return proSkillExperience;
}

void Experience::showInfor()
{
    cout << setw(10) << left << iDEmplyee;
    cout << setw(20) << left << fullNameEmployee;
    cout << setw(20) << left << emailEmployee;
    cout << setw(15) << left << birthDayEmployee;
    cout << setw(20) << left << typeEmployee;
    cout << setw(2) << left << proSkillExperience << " - ";
    cout << setw(2) << left << "Year: " << expInYearExperience << endl;
}