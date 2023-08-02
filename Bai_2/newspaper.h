#ifndef NEWSPAPER_H
#define NEWSPAPER_H

#include "document.h"

class Newspaper : public Document
{
private:
    int dayPublish;
public:
    Newspaper(int id, string name, int quantity, int day) : Document(id, name, quantity, 3), dayPublish(day) {}
    int getDayPublish();
    void printInfor();

};

#endif
