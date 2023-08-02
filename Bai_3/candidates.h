#ifndef CANDIDATES_H
#define CANDIDATES_H

#include <string>
#include <iostream>
using namespace std;

enum type
{
    A,
    B,
    C
};

class Candidates
{
protected:
    string idCandidates;
    string nameCandidates;
    string addressCandidates;
    int priorityCandidates;
    type typeCandidates;
    
public:
    Candidates(string id, string name, string address, int priority, type candidates) : idCandidates(id), nameCandidates(name), addressCandidates(address), priorityCandidates(priority), typeCandidates(candidates){}
    string getName();
    string getID();
    string getAddress();
    int getPriority();
    type getCandidates();
    virtual void printInfor() = 0;
    virtual ~Candidates(){}
};

#endif