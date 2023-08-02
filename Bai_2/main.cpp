#include <iostream>
#include "manage.h"

int main(int argc, char const *argv[])
{
    Manage a;
    int key;
    do
    {
        cout << "---------------MANAGE DOCUMENT-------------\n";
        cout << "1. Add Document\n";
        cout << "2. Erase Document\n";
        cout << "3. Display Document\n";
        cout << "4. Search Document\n";
        cout << "0. Exit\n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION("- Enter: ", key, key < 0 || key > 5);

        switch (key)
        {
        case 1:
            cout << "1. Book\n";
            cout << "2. Journal\n";
            cout << "3. Newspaper\n";
            cout << "0. Exit\n";
            ENTER_INFORMATION("- Enter Type: ", key, key < 0 || key > 4);
            a.addDocument(key);
            break;
        case 2:
            int id;
            a.printfDocument();
            ENTER_INFORMATION("- Enter ID to delete: ", id, 0);
            a.deleteDocument(id);
            break;
        case 3:
            a.printfDocument();
            break;
        case 4:
            cout << "1. Book\n";
            cout << "2. Journal\n";
            cout << "3. Newspaper\n";
            cout << "0. Exit\n";
            ENTER_INFORMATION("- Enter Type: ", key, key < 0 || key > 4);
            a.searchDocument(key);
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    } while (1);

    return 0;
}
