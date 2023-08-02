#include "family.h"

void Family::printFamily()
{
    if (listPerson.empty())
    {
        cout << "Family is empty. Not print\n";
    }
    else
    {
        int count = 0;
        for(auto x : listPerson)
        {
            cout << "*Person " << count + 1 << endl;
            x.printInforPerson();
            count++;
        }
    }
}