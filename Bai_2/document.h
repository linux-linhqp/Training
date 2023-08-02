#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class Document
{
protected:
    int idDocument;
    string nameNXB;
    int quantityDoccument;
    int typeDocument;
public:
    Document(int id, string name, int quantity, int type) : idDocument(id), nameNXB(name), quantityDoccument(quantity), typeDocument(type){}
    string getName();
    int getID();
    int getQuantity();
    int getTypeDocument();
    virtual void printInfor() = 0;
    virtual ~Document(){}
};

#endif
