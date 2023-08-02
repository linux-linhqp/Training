#ifndef ROOM_H
#define ROOM_H

#include "person.h"

#define ROOMA 500
#define ROOMB 300
#define ROOMC 100

#define ENTER_INFORMATION(content, variable, condition) \
    do                                                  \
    {                                                   \
        cout << content;                                \
        cin >> variable;                                \
    } while (condition)

class Room
{
private:
    Person p1;
    int priceRoom;
    int numDay;
    int billRoom;

public:
    Room(int price, int day) : priceRoom(price), numDay(day) {
        string name;
        int age;
        int id;
        cout << "Input Person Infor" << endl;
        ENTER_INFORMATION("Enter Name ? ", name, 0);
        ENTER_INFORMATION("Enter Age ? ", age, age < 0 || age > 100);
        ENTER_INFORMATION("Enter ID ? ", id, 0);
        p1.setAge(age);
        p1.setID(id);
        p1.setName(name);
    }

    int getBill();
    int getNumDay();
    Person getInforPerson();
    void printInforRoom();
};

#endif