#include <iostream>
#include <stack>
#include <exception>
#include "Student.h"

using namespace std;

enum MenuType
{ // 선택가능한 메뉴
    PUSH = 1,
    POP,
    TOP,
    SIZE,
    IS_EMPTY,
    END
};

void pushData(stack<Student> *studentStack);
void popData(stack<Student> *studentStack);
void showTop(stack<Student> *studentStack);
void showSize(stack<Student> *studentStack);
void empty(stack<Student> *studentStack);

int main(){
    stack<Student> studentStack;
    // studentStack.push(Student("민수", 23));
    // studentStack.push(Student("희진", 23));
    // cout << "size: " << studentStack.size() << endl;

    // Student student = studentStack.top();
    // cout << "name:" << student.getName() << endl;
    // cout << "score:" << student.getScore() << endl;

    // studentStack.pop();
    // cout << "pop" << endl;

    // Student student2 = studentStack.top();
    // cout << "name:" << student.getName() << endl;
    // cout << "score:" << student.getScore() << endl;
    int choice;

    do{
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. Push  2. Pop  3. Top  4. Size  5. Is Empty?  6. End" << endl;
        cout << ">> ";
        cin >> choice;
        cin.ignore(256,'\n');


        switch (choice)
        {
        case MenuType::PUSH:
            pushData(&studentStack);
            break;

        case MenuType::POP:
            popData(&studentStack);
            break;

        case MenuType::TOP:
            showTop(&studentStack);
            break;

        case MenuType::SIZE:
            showSize(&studentStack);
            break;

        case MenuType::IS_EMPTY:
            empty(&studentStack);
            break;

        case MenuType::END:
            cout << "프로그램을 종료합니다." << endl;
            break;

        default:
            break;
        }

        cout << endl;
    } while (choice != MenuType::END);

    return 0;
}

void pushData(stack<Student> *studentStack){
    string name;
    int score;
    cout << "학생 이름: ";
    getline(cin,name);
    cout << "학생 점수: ";
    cin >> score;
    cin.ignore(256,'\n');
    studentStack->push(Student(name, score));
}

void popData(stack<Student> *studentStack){
    try{
        studentStack->pop();

    }catch(exception e){
        cout << e.what() << endl;
    }
}

void showTop(stack<Student> *studentStack){
    try{
        Student student = studentStack->top();
        cout << "name:" << student.getName() << endl;
        cout << "score:" << student.getScore() << endl;
         
    }catch(exception e){
        cout << e.what() << endl;
    }
    
}

void showSize(stack<Student> *studentStack){
    cout << "size: " << studentStack->size() << endl;
}

void empty(stack<Student> *studentStack){
    if(studentStack->empty()){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
}