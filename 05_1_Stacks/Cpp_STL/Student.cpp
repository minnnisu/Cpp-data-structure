#include "Student.h"

Student::Student(string n, int s) : name(n), score(s) {};

string Student::getName(){
    return name;
}

int Student::getScore(){
    return score;
}

