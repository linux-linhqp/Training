#ifndef MANAGE_H
#define MANAGE_H

#include <vector>
#include "document.h"
#include "newspaper.h"
#include "book.h"
#include "journal.h"

using namespace std;

#define ENTER_INFORMATION(content, variable, condition) \
    do                                                  \
    {                                                   \
        cout << content;                                \
        cin >> variable;                                \
    } while (condition)


class Manage
{
private:
    vector<Document*> list;
public:
    void addDocument(int key);
    bool deleteDocument(int id);
    void printfDocument();
    void searchDocument(int key);
};

#endif