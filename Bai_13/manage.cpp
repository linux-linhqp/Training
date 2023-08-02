#include "manage.h"

void Manage::addEmployee(int key)
{
    string fullname, email;
    int birthDay, numCertificate;
    ENTER_INFORMATION_GETLINE("Enter Name Employee: ? ", fullname, 0);
    ENTER_INFORMATION_CIN("Enter BirthDay: ? ", birthDay, birthDay < 0 || birthDay > 31);
    ENTER_INFORMATION_GETLINE("Enter Email: ? ", email, 0);
    ENTER_INFORMATION_CIN("Enter Number Certificate: ? ", numCertificate, 0);

    if (key == 1)
    {
        int year;
        string skill;
        ENTER_INFORMATION_CIN("Enter Year Experience: ? ", year, year < 0 || year > 100);
        ENTER_INFORMATION_GETLINE("Enter Pro Skill: ? ", skill, 0);
        listEmployee.push_back(new Experience(fullname, birthDay, email, key - 1, numCertificate, year, skill));
    }
    else if (key == 2)
    {
        int date;
        string rank, education;
        ENTER_INFORMATION_GETLINE("Enter Education: ? ", education, 0);
        ENTER_INFORMATION_CIN("Enter Date Graduation: ? ", date, date < 0 || date > 2023);
        ENTER_INFORMATION_GETLINE("Enter Rank Graduation: ? ", rank, 0);
        listEmployee.push_back(new Fresher(fullname, birthDay, email, key - 1, numCertificate, date, rank, education));
    }
    else if (key == 3)
    {
        int semester;
        string major, university;
        ENTER_INFORMATION_GETLINE("Enter Major: ? ", major, 0);
        ENTER_INFORMATION_CIN("Enter Semester: ? ", semester, semester < 0 || semester > 10);
        ENTER_INFORMATION_GETLINE("Enter University: ? ", university, 0);
        listEmployee.push_back(new Intern(fullname, birthDay, email, key - 1, numCertificate, major, semester, university));
    }
    else if (key == 0)
    {
        return;
    }
    else
    {
        cout << "Error Key !" << endl;
    }
}

void Manage::eraseEmployee(int id)
{
    if (listEmployee.empty())
    {
        cout << "List Employee is empty. Not erase" << endl;
    }
    else
    {
        int count = 0;
        bool checkID = false;
        for (auto x : listEmployee)
        {
            if (x->getID() == id)
            {
                listEmployee.erase(listEmployee.begin() + count);
                checkID = true;
                cout << "Deleted Done" << endl;
            }
            count++;
        }
        if (checkID != true)
            cout << "ID is unavailable" << endl;
    }
}

void Manage::updateInforEmployee(int id)
{
    if (listEmployee.empty())
    {
        cout << "List Employee is empty. Not erase" << endl;
    }
    else
    {
        int key;
        bool checkID = false;
        for (auto x : listEmployee)
        {
            if (x->getID() == id)
            {
                cout << "-------UPDATE INFORMATION-------" << endl;
                cout << "1. Name\n";
                cout << "2. BirthDay\n";
                cout << "3. Email\n";
                cout << "0. Exit\n";
                ENTER_INFORMATION_CIN("- Enter Key: ", key, key < 0 || key > 4);

                string fullname;
                int birthDay;
                string email;

                switch (key)
                {
                case 1:
                    ENTER_INFORMATION_GETLINE("Enter Name Employee: ? ", fullname, 0);
                    x->setName(fullname);
                    break;
                case 2:
                    ENTER_INFORMATION_CIN("Enter BirthDay: ? ", birthDay, birthDay < 0 || birthDay > 31);
                    x->setBirthDay(birthDay);
                    break;
                case 3:
                    ENTER_INFORMATION_GETLINE("Enter Email: ? ", email, 0);
                    x->setEmail(email);
                    break;
                case 0:
                    break;
                default:
                    cout << "Error Key !" << endl;
                    break;
                }

                checkID = true;
                cout << "Updated Done" << endl;
                break;
            }
        }
        if (checkID != true)
            cout << "ID is unavailable" << endl;
    }
}

void Manage::printEmployee()
{
    if (listEmployee.empty())
    {
        cout << "List Employee is empty. Not display" << endl;
    }
    else
    {
        cout << setw(10) << left << "ID";
        cout << setw(20) << left << "Fullname";
        cout << setw(20) << left << "Email";
        cout << setw(15) << left << "BirthDay";
        cout << setw(20) << left << "TypeEmployee";
        cout << setw(10) << left << "Other" << endl;
        for (auto x : listEmployee)
        {
            x->showInfor();
        }
    }
}