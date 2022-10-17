#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int score;
public:
    Student(string name, int score);
    string getName();
    int getScore();
};

#endif