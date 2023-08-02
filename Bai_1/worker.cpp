#include "worker.h"

void Worker::prinfInfor()
{
    cout << nameEmployee << "\t\t";
    cout << ageEmployee << "\t";
    cout << genderEmployee << "\t\t";
    cout << addressEmployee << "\t\t";
    cout << "Level: " << levelWorker << "\n";
}

int Worker::getLevel()
{
    return levelWorker;
}