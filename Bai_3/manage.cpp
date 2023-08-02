#include "manage.h"

void Manage::addCandidates(int key)
{
    string id;
    string name;
    string address;
    int priority;
    ENTER_INFORMATION("Enter ID ? ", id, 0);
    ENTER_INFORMATION("Enter Name ? ", name, 0);
    ENTER_INFORMATION("Enter Address ? ", address, 0);
    ENTER_INFORMATION("Enter Priority ? ", priority, 0);

    switch (key)
    {
    case 1:
        list.push_back(new CandidatesA(id, name, address, priority));
        break;
    case 2:
        list.push_back(new CandidatesB(id, name, address, priority));
        break;
    case 3:
        list.push_back(new CandidatesC(id, name, address, priority));
        break;
    default:
        cout << "Error Key!\n";
        break;
    }
}

void Manage::printfCandidates()
{
    if (list.empty())
    {
        cout << "List Candidates is empty. Not display\n";
    }
    else
    {
        cout << "ID"
             << "\t";
        cout << "Name"
             << "\t";
        cout << "Address"
             << "\t ";
        cout << "Priority"
             << "\t";
        cout << "Block" << endl;
        for (auto var : list)
        {
            var->printInfor();
        }
    }
}

void Manage::searchCandidates(string id)
{
    if (list.empty())
    {
        cout << "List Candidate is empty. Not search\n";
    }
    else
    {
        bool check = false;
        for (auto var : list)
        {

            if (var->getID() == id)
            {
                cout << "ID"
                     << "\t";
                cout << "Name"
                     << "\t";
                cout << "Address"
                     << "\t";
                cout << "Priority"
                     << "\t";
                cout << "Block" << endl;
                var->printInfor();
                check = true;
            }
        }
        if (check != true)
            cout << "Can't find\n";
    }
}