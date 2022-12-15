#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
private:
    int id;
    string name;
public:
    Student(int _id = 1, string _name = "홍길동"): id(_id), name(_name){};
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }

    void show(){
        cout << "id: " << id << " " << "name: " << name << endl;
    }
};
#endif