#include "Exception.h"
#include "LinkedQueue.h"
#include <iostream>

using namespace std;

enum MenuType
{ // 선택가능한 메뉴
    ENQUEUE = 1,
    DEQUEUE,
    FRONT,
    SIZE,
    IS_EMPTY,
    END
};

void enqueueData(LinkedQueue* myQueue);
void dequeueData(LinkedQueue* myQueue);
void showFront(LinkedQueue* myQueue);
void showSize(LinkedQueue* myQueue);
void empty(LinkedQueue* myQueue);

int main(){
    LinkedQueue* myQueue = new LinkedQueue();

    int choice;

    do{
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. Enqueue  2. Dequeue  3. Front  4. Size  5. Is Empty?  6. End" << endl;
        cout << ">> ";
        cin >> choice;
        cin.ignore(256,'\n');


        switch (choice)
        {
        case MenuType::ENQUEUE:
            enqueueData(myQueue);
            break;

        case MenuType::DEQUEUE:
            dequeueData(myQueue);
            break;

        case MenuType::FRONT:
            showFront(myQueue);
            break;

        case MenuType::SIZE:
            showSize(myQueue);
            break;

        case MenuType::IS_EMPTY:
            empty(myQueue);
            break;

        case MenuType::END:
            cout << "프로그램을 종료합니다." << endl;
            break;

        default:
            break;
        }

        cout << endl;
    }while (choice != MenuType::END);

    delete myQueue;
    return 0;
    
}

void enqueueData(LinkedQueue *myQueue){
    Elem e;
    cout << "push할 문자열" << endl;
    getline(cin,e);
    myQueue->enqueue(e);
}

void dequeueData(LinkedQueue *myQueue){
    try{
        myQueue->dequeue();
    }catch(Exception e){
        cout << e.getErrMessage() << endl;
    }
}

void showFront(LinkedQueue *myQueue){
    try{
        cout << myQueue->front() << endl; 
    }catch(Exception e){
        cout << e.getErrMessage() << endl;
    }
    
}

void showSize(LinkedQueue *myQueue){
    cout << myQueue->size() << endl;
}

void empty(LinkedQueue *myQueue){
    if(myQueue->empty()){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
}