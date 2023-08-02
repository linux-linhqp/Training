#ifndef CANDIDATESB_H
#define CANDIDATESB_H

#include "candidates.h"

class CandidatesB : public Candidates
{
private:
    string subject1 = "Toan";
    string subject2 = "Hoa";
    string subject3 = "Sinh";
    type block = B;
public:
    CandidatesB(string id, string name, string address, int priority) : Candidates(id, name, address, priority, block){}
    void printInfor();
};


#endif