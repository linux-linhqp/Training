#include "hotel.h"

int main(int argc, char const *argv[])
{
    Hotel a;
    int key;
    int id;
    do
    {
        cout << "--------------MANAGE HOTEL------------\n";
        cout << "1. Add Renter\n";
        cout << "2. Erase Renter\n";
        cout << "3. Export Bill\n";
        cout << "0. Exit\n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION("- Enter: ", key, key < 0 || key > 4);

        switch (key)
        {
        case 1:
            cout << "1. Room A\n";
            cout << "2. Room B\n";
            cout << "3. Room C\n";
            cout << "0. Exit\n";
            ENTER_INFORMATION("- Enter Room: ", key, key < 0 || key > 4);
            a.addRoom(key);
            break;
        case 2:
            ENTER_INFORMATION("- Enter Id Person: ", id, 0);
            a.eraseRoom(id);
            break;
        case 3:
            ENTER_INFORMATION("- Enter Id Person: ", id, 0);
            a.exportRoom(id);
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    } while (1);

    return 0;
}
