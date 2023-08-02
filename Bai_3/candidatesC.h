#ifndef CANDIDATESC_H
#define CANDIDATESC_H

#include "candidates.h"

class CandidatesC : public Candidates
{
private:
    string subject1 = "Van";
    string subject2 = "Su";
    string subject3 = "Dia";
    type block = C;
public:
    CandidatesC(string id, string name, string address, int priority) : Candidates(id, name, address, priority, block){}
    void printInfor();
};


#endif