#include "certificate.h"

int Certificate::getIDCertificate()
{
    return iDCertificate;
}

int Certificate::getDateCertificate()
{
    return dateCertificate;
}

string Certificate::getNameCertificate()
{
    return nameCertificate;
}

string Certificate::getrankCertificate()
{
    return rankCertificate;
}

void Certificate::showInforCertificate()
{
    cout << setw(5) << left << iDCertificate;
    cout << setw(20) << left << nameCertificate;
    cout << setw(20) << left << rankCertificate;
    cout << setw(5) << left << dateCertificate << endl;
}