#include "hotel.h"

void Hotel::addRoom(int key)
{
    int num;
    int price;
    ENTER_INFORMATION("Enter Num Day: ? ", num, 0);
    switch (key)
    {
    case 1:
        price = ROOMA;
        break;
    case 2:
        price = ROOMB;
        break;
    case 3:
        price = ROOMC;
        break;
    default:
        break;
    }
    Room r(price, num);
    listRoom.push_back(r);
}

void Hotel::eraseRoom(int id)
{
    if (listRoom.empty())
    {
        cout << "Hotel is empty. Not erase" << endl;
    }
    else
    {
        int count = 0;
        bool check = false;
        for (auto x : listRoom)
        {
            if (x.getInforPerson().getID() == id)
            {
                listRoom.erase(listRoom.begin() + count);
                check = true;
            }
            count++;
        }
        if (check != true)
            cout << "Can't find ID Person" << endl;
    }
}

void Hotel::exportRoom(int id)
{
    if (listRoom.empty())
    {
        cout << "Hotel is empty. Not export Bill" << endl;
    }
    else
    {
        int count = 0;
        bool check = false;
        for (auto x : listRoom)
        {
            if (x.getInforPerson().getID() == id)
            {
                x.printInforRoom();
                cout << "==> Total: " << x.getBill() << "$" << endl;
                check = true;
            }
            count++;
        }
        if (check != true)
            cout << "Can't find ID Person" << endl;
    }
}