#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
    string nameStudent;
    int ageStudent;
    string homeTown;
    int gradeStudent;

public:
    Student(string name, int age, string home, int grade) : nameStudent(name), ageStudent(age), homeTown(home), gradeStudent(grade){}
    string getName();
    int getAge();
    string getHomeTown();
    int getGrade();
    void printInfor();
};

#endif