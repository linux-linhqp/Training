#include "book.h"

int Book::getNumPage()
{
    return numPage;
}

string Book::getNameAuthor()
{
    return nameAuthor;
}

void Book::printInfor()
{
    cout << idDocument << "\t";
    cout << nameNXB << "\t\t";
    cout << quantityDoccument << "\t\t";
    cout << "Author: " << nameAuthor << "\t";
    cout << "Num Page: " << numPage << endl;
}