#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "certificate.h"
#include <vector>

using namespace std;

#define ENTER_INFORMATION_CIN(content, variable, condition) \
    do                                                      \
    {                                                       \
        cout << content;                                    \
        cin >> variable;                                    \
    } while (condition)

#define ENTER_INFORMATION_GETLINE(content, variable, condition) \
    do                                                          \
    {                                                           \
        cout << content;                                        \
        cin.ignore();                                           \
        getline(cin, variable);                                 \
    } while (condition)

class Employee
{
protected:
    int iDEmplyee;
    string fullNameEmployee;
    int birthDayEmployee;
    string emailEmployee;
    static int countEmployee;
    int typeEmployee;
    vector<Certificate> listCertificate;

public:
    Employee(string fullname, int birthDay, string email, int type, int numCertificate)
        : fullNameEmployee(fullname),
          birthDayEmployee(birthDay),
          emailEmployee(email),
          typeEmployee(type)
    {
        static int id = 100;
        iDEmplyee = id;
        ++id;
        ++countEmployee;
        for (int i = 0; i < numCertificate; i++)
        {
            int id, date;
            string name, rank;
            cout << "**Input Infor Certificate " << i + 1 << ": " << endl;
            ENTER_INFORMATION_CIN("- *Enter ID Certificate: ? ", id, 0);
            ENTER_INFORMATION_GETLINE("- *Enter Name Certificate: ? ", name, 0);
            ENTER_INFORMATION_CIN("- *Enter Date Certificate: ? ", date, 0);
            ENTER_INFORMATION_GETLINE("- *Enter Rank Certificate: ? ", rank, 0);
            Certificate a(id, name, rank, date);
            listCertificate.push_back(a);
        }
    }
    virtual void showInfor();
    int getID();
    string getName();
    int getBirthDay();
    string getEmail();
    int getType();
    void setName(string name);
    void setBirthDay(int birthDay);
    void setEmail(string email);
    virtual ~Employee() {}
};

#endif