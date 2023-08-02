#include "town.h"

void Town::printTown()
{
    if (listFamily.empty())
    {
        cout << "Town is empty. Not print\n";
    }
    else
    {
        int count = 0;
        for(auto x : listFamily)
        {
            cout << "----------- Family " << count + 1 << endl;
            x.printFamily();
            count++;
            cout << "-------------------------------"<< endl;
        }
    }
}