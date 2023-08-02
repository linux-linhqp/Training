#ifndef HOTEL_H
#define HOTEL_H

#include "Room.h"
#include <vector>

class Hotel
{
private:
    vector<Room> listRoom;
public:
    void addRoom(int key);
    void eraseRoom(int id);
    void exportRoom(int id);
};

#endif