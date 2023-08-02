#ifndef TOWN_H
#define TOWN_H

#include "family.h"

class Town
{
private:
    vector<Family> listFamily;
    int numberFamily;

public:
    Town(int number) : numberFamily(number)
    {
        for (int i = 0; i < numberFamily; i++)
        {
            int idHouse;
            int numberPerson;
            cout << "Input Family " << i + 1 << " Infor" << endl;
            ENTER_INFORMATION("Enter ID House ? ", idHouse, 0);
            ENTER_INFORMATION("Enter number Person ? ", numberPerson, 0);
            Family a(idHouse, numberPerson);
            listFamily.push_back(a);
        }
    }
    void printTown();
};

#endif