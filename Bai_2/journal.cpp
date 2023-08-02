#include "journal.h"

int Journal::getNumPublish()
{
    return numPublish;
}

int Journal::getMonthPublish()
{
    return monthPublish;
}

void Journal::printInfor()
{
    cout << idDocument << "\t";
    cout << nameNXB << "\t\t";
    cout << quantityDoccument << "\t\t";
    cout << "Num Publish: " << numPublish << "\t";
    cout << "Month Publish: " << monthPublish << endl;
}