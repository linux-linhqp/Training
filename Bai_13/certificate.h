#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Certificate
{
private:
    int iDCertificate;
    string nameCertificate;
    string rankCertificate;
    int dateCertificate;

public:
    Certificate(int id, string name, string rank, int date)
        : iDCertificate(id),
          nameCertificate(name),
          rankCertificate(rank),
          dateCertificate(date) {}
    int getIDCertificate();
    string getNameCertificate();
    string getrankCertificate();
    int getDateCertificate();
    void showInforCertificate();
};

#endif