#include "manage.h"

void Manage::addStudent()
{
    string name;
    int age;
    string home;
    int grade;
    cout << "Input Student Infor" << endl;
    ENTER_INFORMATION("Enter Name ? ", name, 0);
    ENTER_INFORMATION("Enter Age ? ", age, age < 0 || age > 100);
    ENTER_INFORMATION("Enter Grade ? ", grade, grade < 0 || grade > 12);
    ENTER_INFORMATION("Enter HomeTown ? ", home, 0);
    Student a(name, age, home, grade);
    list.push_back(a);
}

void Manage::displayStudent()
{
    if (list.empty())
    {
        cout << "List Student is empty. Not display" << endl;
    }
    else
    {
        bool check = false;
        for (auto x : list)
        {
            if (x.getAge() == 20)
            {
                x.printInfor();
                check = true;
            }
        }
        if (check != true)
            cout << "No AnyStudent " << endl;
    }
}

int Manage::numStudent()
{
    if (list.empty())
    {
        cout << "List Student is empty. Not display" << endl;
        return 0;
    }
    else
    {
        bool check = false;
        for (auto x : list)
        {
            if (x.getAge() == 23 && x.getHomeTown() == "DN")
            {
                countStudent++;
                check = true;
            }
        }
        if (check != true)
            cout << "No AnyStudent " << endl;
    }
    return countStudent;
}