#ifndef JOURNAL_H
#define JOURNAL_H

#include "document.h"

class Journal : public Document
{
private:
    int numPublish;
    int monthPublish;
public:
    Journal(int id, string name, int quantity, int number, int month) : Document(id, name, quantity, 2), numPublish(number), monthPublish(month) {}
    int getNumPublish();
    int getMonthPublish();
    void printInfor();

};

#endif