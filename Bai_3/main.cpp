#include <iostream>
#include "manage.h"

int main(int argc, char const *argv[])
{
    Manage a;
    int key;
    string id;
    do
    {
        cout << "--------------MANAGE CANDIDATES------------\n";
        cout << "1. Add Candidates\n";
        cout << "2. Display Candidates\n";
        cout << "3. Search Candidates\n";
        cout << "0. Exit\n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION("- Enter: ", key, key < 0 || key > 4);

        switch (key)
        {
        case 1:
            cout << "1. Candidates A\n";
            cout << "2. Candidates B\n";
            cout << "3. Candidates C\n";
            cout << "0. Exit\n";
            ENTER_INFORMATION("- Enter Type: ", key, key < 0 || key > 4);
            a.addCandidates(key);
            break;
        case 2:
            a.printfCandidates();
            break;
        case 3:
            ENTER_INFORMATION("- Enter ID to search: ", id, 0);
            a.searchCandidates(id);
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    } while (1);

    return 0;
}
