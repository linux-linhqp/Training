#include "text.h"

int main(int argc, char const *argv[])
{
    Text a;
    string example;
    int key;
    do
    {
        cout << "----------------MANAGE TEXT---------------\n";
        cout << "1. Write\n";
        cout << "2. Count Word\n";
        cout << "3. Count CharA\n";
        cout << "4. Cast Form\n";
        cout << "5. Display Text\n";
        cout << "0. Exit\n";
        cout << "-------------------------------------------\n";
        ENTER_INFORMATION("- Enter: ", key, key < 0 || key > 6);

        switch (key)
        {
        case 1:
            cout << "Input Text: " << endl;
            cin.ignore();
            getline(cin, example);
            a.setText(example);
            break;
        case 2:
            cout << "Num Word: " << a.countWord() << endl;
            break;
        case 3:
            cout << "Num Char A & a: " << a.countCharA() << endl;
            break;
        case 4:
            a.castForm();
            break;
        case 5:
            cout << "Text: " << a.getText() << endl;
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    } while (1);
    return 0;
}
