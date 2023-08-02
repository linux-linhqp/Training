#ifndef CANDIDATESA_H
#define CANDIDATESA_H

#include "candidates.h"

class CandidatesA : public Candidates
{
private:
    string subject1 = "Toan";
    string subject2 = "Hoa";
    string subject3 = "Sinh";
    type block = A;
public:
    CandidatesA(string id, string name, string address, int priority) : Candidates(id, name, address, priority, block){}
    void printInfor();
};

#endif