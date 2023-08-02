#include "manage.h"

int main(int argc, char const *argv[])
{
    Manage a;
    int key;
    do
    {
        cout << "--------------MANAGE STUDENT------------\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student (AgeStudent: 20)\n";
        cout << "3. Number Student (Age: 20 && HomeTown: DN)\n";
        cout << "0. Exit\n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION("- Enter: ", key, key < 0 || key > 4);

        switch (key)
        {
        case 1:
            a.addStudent();
            break;
        case 2:
            a.displayStudent();
            break;
        case 3:
            cout << "Num Student: " << a.numStudent() << endl;
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    } while (1);

    return 0;
}
