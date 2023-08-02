#ifndef BOOK_H
#define BOOK_H

#include "document.h"

class Book : public Document
{
private:
    string nameAuthor;
    int numPage;
public:
    Book(int id, string name, int quantity, string author, int page) : Document(id, name, quantity, 1), nameAuthor(author), numPage(page){}
    string getNameAuthor();
    void printInfor();
    int getNumPage();
};

#endif