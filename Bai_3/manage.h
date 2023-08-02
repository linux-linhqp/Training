#ifndef MANAGE_H
#define MANAGE_H

#include <vector>
#include "candidates.h"
#include "candidatesA.h"
#include "candidatesB.h"
#include "candidatesC.h"

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
    vector<Candidates*> list;
public:
    void addCandidates(int key);
    void printfCandidates();
    void searchCandidates(string id);
};


#endif