#include "ManageEmployee.h"

void ManageEmployee::addEmployee(int key)
{
    string name;
    int age;
    string gender;
    string address;
    ENTER_INFORMATION("Enter Name ? ", name, 0);
    ENTER_INFORMATION("Enter Age ? ", age, age < 0 || age > 100);
    ENTER_INFORMATION("Enter Gender ? ", gender, 0);
    ENTER_INFORMATION("Enter Address ? ", address, 0);

    if (key == 1)
    {
        string major;
        ENTER_INFORMATION("Enter Engineer Major: ", major, 0);

        list.push_back(new Engineer(name, age, gender, address, major));
    }
    else if (key == 2)
    {
        string job;
        ENTER_INFORMATION("Enter Staff Job: ", job, 0);

        list.push_back(new Staff(name, age, gender, address, job));
    }
    else if (key == 3)
    {
        int level;
        ENTER_INFORMATION("Enter Worker Level: ", level, level < 1 || level > 10);

        list.push_back(new Worker(name, age, gender, address, level));
    }
    else
    {
        cout << "Error Key!\n";
    }
}

void ManageEmployee::searchEmployee(string name)
{
    if (list.empty())
    {
        cout << "List Document is empty. Not search\n";
    }
    else
    {
        bool check = false;
        for (auto x : list)
        {
            if (x->getName() == name)
            {
                cout << "Name"
                     << "\t\t";
                cout << "Age"
                     << "\t";
                cout << "Gender"
                     << "\t\t";
                cout << "Address"
                     << "\t\t";
                cout << "Other"
                     << "\n";

                x->prinfInfor();
                check = true;
            }
        }
        if (check != true)
            cout << "Can't find\n";
    }
}

void ManageEmployee::printfInforEmployee()
{
    if (list.empty())
    {
        cout << "List Employee is empty\n";
    }
    else
    {
        cout << "Name"
             << "\t\t";
        cout << "Age"
             << "\t";
        cout << "Gender"
             << "\t\t";
        cout << "Address"
             << "\t\t";
        cout << "Other"
             << "\n";

        for (auto x : list)
        {
            x->prinfInfor();
        }
    }
}