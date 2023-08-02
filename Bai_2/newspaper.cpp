#include "newspaper.h"

int Newspaper::getDayPublish()
{
    return dayPublish;
}

void Newspaper::printInfor()
{
    cout << idDocument << "\t";
    cout << nameNXB << "\t\t";
    cout << quantityDoccument << "\t\t";
    cout << "Day Publish: " << dayPublish << endl;
}