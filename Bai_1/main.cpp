#include <iostream>
#include <string>
#include "ManageEmployee.h"

int main(int argc, char const *argv[])
{
    ManageEmployee a;
    int key;
    do
    {
        cout << "----------PROGRAM EMPLOYEE MANAGE----------\n";
        cout << "1. Enter Employee Information \n";
        cout << "2. Search Employee Information  \n";
        cout << "3. Dislay Employee List Information \n";
        cout << "0. Exit \n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION("- Enter: ", key, key < 0 || key > 4);

        if (key == 1)
        {
            cout << "1. Engineer\n";
            cout << "2. Staff\n";
            cout << "3. Worker\n";
            cout << "0. Exit\n";
            ENTER_INFORMATION("- Enter Type: ", key, key < 0 || key > 4);
            a.addEmployee(key);
        }
        else if (key == 2)
        {
            string name;
            ENTER_INFORMATION("- Enter Name to Search: ", name, 0);
            a.searchEmployee(name);
        }
        else if (key == 3)
        {
            a.printfInforEmployee();
        }
        else if (key == 0)
        {
            exit(0);
        }
        else
        {
            cout << "Error ! Please reEnter\n";
        }

    } while (1);
    return 0;
}
