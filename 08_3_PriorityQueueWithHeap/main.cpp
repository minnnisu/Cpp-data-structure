#include "Student.h"
#include "HeapPriorityQueue.h"
#include <iostream>

using namespace std;

int main(){
    HeapPriorityQueue p;
    p.insert(Student(1, "Kim"));
    p.insert(Student(4, "Sim"));
    p.insert(Student(1, "Ahn"));
    p.insert(Student(2, "Choi"));
    p.insert(Student(5, "Park"));

    while(!p.empty()){
        Student s = p.min();
        s.show();
        p.removeMin();
    }
}
