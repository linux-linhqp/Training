#include "manage.h"

int main(int argc, char const *argv[])
{
    Manage a;
    int key;
    int id;
    do
    {
        cout << "----------PROGRAM EMPLOYEE MANAGE----------\n";
        cout << "1. Add Employee\n";
        cout << "2. Erase Employee\n";
        cout << "3. Update Infor Employee\n";
        cout << "4. Display Employee\n";
        cout << "0. Exit \n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION_CIN("- Enter: ", key, key < 0 || key > 5);

        switch (key)
        {
        case 1:
            cout << "1. Experience\n";
            cout << "2. Fresher\n";
            cout << "3. Intern\n";
            cout << "0. Exit\n";
            ENTER_INFORMATION_CIN("- Enter Type Employee: ", key, key < 0 || key > 4);
            a.addEmployee(key);
            break;
        case 2:
            ENTER_INFORMATION_CIN("- Enter ID: ", id, 0);
            a.eraseEmployee(id);
            break;
        case 3:
            ENTER_INFORMATION_CIN("- Enter ID: ", id, 0);
            a.updateInforEmployee(id);
            break;
        case 4:
            a.printEmployee();
            break;
        case 0:
            exit(0);
        default:
            cout << "Error ! Please reEnter\n";
            break;
        }

    } while (1);
    return 0;
}
