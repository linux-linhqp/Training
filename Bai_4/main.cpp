// #include <iostream>
#include "town.h"

int main(int argc, char const *argv[])
{
    int numberFamily;
    cout << "- Enter number Family: ";
    cin >> numberFamily;
    Town a(numberFamily);
    a.printTown();
    return 0;
}
