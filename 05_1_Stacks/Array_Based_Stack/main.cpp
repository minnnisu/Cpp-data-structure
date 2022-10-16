#include "ArrayStack.h"
#include "StackEmpty.h"
#include "StackFull.h"
#include <iostream>

using namespace std;

typedef string Elem;

enum MenuType
{ // 선택가능한 메뉴
    PUSH = 1,
    POP,
    TOP,
    SIZE,
    IS_EMPTY,
    END
};

void pushData(ArrayStack *myStack);
void popData(ArrayStack *myStack);
void showTop(ArrayStack *myStack);
void showSize(ArrayStack *myStack);
void empty(ArrayStack *myStack);

int main(){
    ArrayStack* myStack = new ArrayStack();
    int choice;

    do
    {
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. Push  2. Pop  3. Top  4. Size  5. Is Empty?  6. End" << endl;
        cout << ">> ";
        cin >> choice;
        cin.ignore(256,'\n');


        switch (choice)
        {
        case MenuType::PUSH:
            pushData(myStack);
            break;

        case MenuType::POP:
            popData(myStack);
            break;

        case MenuType::TOP:
            showTop(myStack);
            break;

        case MenuType::SIZE:
            showSize(myStack);
            break;

        case MenuType::IS_EMPTY:
            empty(myStack);
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

void pushData(ArrayStack *myStack){
    try
    {
        Elem e;
        cout << "push할 문자열" << endl;
        getline(cin,e);
        myStack->push(e);
    }
    catch(StackFull e)
    {
        e.getErrMessage();
    }
    
}

void popData(ArrayStack *myStack){
    try{
        myStack->pop();

    }catch(StackEmpty e){
        e.getErrMessage();
    }
}

void showTop(ArrayStack *myStack){
    try{
        cout << myStack->top() << endl;
         
    }catch(StackEmpty e){
        e.getErrMessage();
    }
    
}

void showSize(ArrayStack *myStack){
    cout << myStack->size() << endl;
}

void empty(ArrayStack *myStack){
    if(myStack->empty()){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
}