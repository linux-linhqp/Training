#include "manage.h"

void Manage::addDocument(int key)
{
    int id;
    string name;
    int quantity;
    ENTER_INFORMATION("Enter ID ? ", id, 0);
    // cout << "Enter ID: ";
    // cin >> id;
    ENTER_INFORMATION("Enter NameNXB ? ", name, 0);
    // cout << "Enter NameNXB: ";
    // cin >> name;
    ENTER_INFORMATION("Enter Quantity ? ", quantity, 0);
    // cout << "Enter Quantity: ";
    // cin >> quantity;
    if (key == 1)
    {
        string nameAuthor;
        int numPage;
        ENTER_INFORMATION("Enter name Author ? ", nameAuthor, 0);
        // cout << "Enter name Author: ";
        // cin >> nameAuthor;
        ENTER_INFORMATION("Enter number Page ? ", numPage, 0);
        // cout << "Enter number Page: ";
        // cin >> numPage;
        list.push_back(new Book(id, name, quantity, nameAuthor, numPage));
    }
    else if (key == 2)
    {
        int numPublish;
        int monthPublish;
        ENTER_INFORMATION("Enter number Publish ? ", numPublish, 0);
        // cout << "Enter number Publish: ";
        // cin >> numPublish;
        ENTER_INFORMATION("Enter month Publish ? ", monthPublish, monthPublish < 0 || monthPublish > 13);
        // cout << "Enter month Publish: ";
        // cin >> monthPublish;
        list.push_back(new Journal(id, name, quantity, numPublish, monthPublish));
    }
    else if (key == 3)
    {
        int dayPublish;
        ENTER_INFORMATION("Enter day Publish ? ", dayPublish, dayPublish < 0 || dayPublish > 32);
        // cout << "Enter day Publish: ";
        // cin >> dayPublish;
        list.push_back(new Newspaper(id, name, quantity, dayPublish));
    }
    else
    {
        cout << "Error Key!\n";
    }
}

bool Manage::deleteDocument(int id)
{
    if (list.empty())
    {
        cout << "List Document is empty. Not delete\n";
        return false;
    }
    else
    {
        int count = 0;
        for (auto x : list)
        {
            if (id == x->getID())
            {
                cout << "Found ID: " << id;
                list.erase(list.begin() + count);
                cout << " Deleted !" << endl;
                return true;
            }
            count++;
        }
        cout << "Not found ID" << endl;
        return false;
    }
}

void Manage::printfDocument()
{
    if (list.empty())
    {
        cout << "List Document is empty. Not display\n";
    }
    else
    {
        cout << "ID"
             << "\t";
        cout << "Name NXB"
             << "\t";
        cout << "Quantity"
             << "\t";
        cout << "Other" << endl;
        for (auto var : list)
        {
            var->printInfor();
        }
    }
}

void Manage::searchDocument(int key)
{
    if (list.empty())
    {
        cout << "List Document is empty. Not search\n";
    }
    else
    {
        for (auto var : list)
        {
            if (var->getTypeDocument() == key)
                var->printInfor();
        }
        
    }
}