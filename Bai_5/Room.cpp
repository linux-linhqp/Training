#include "Room.h"

int Room::getBill()
{
    billRoom = numDay * priceRoom;
    return billRoom;
}

int Room::getNumDay()
{
    return numDay;
}

void Room::printInforRoom()
{
    cout << "-----INFOR ROOM-----" <<endl;
    cout << "Price: " << priceRoom << " Day: " << numDay << endl;
    cout << "*--Infor Renter--*" << endl;
    p1.printInforPerson();
}

Person Room::getInforPerson()
{
    return p1;
}