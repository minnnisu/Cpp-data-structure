#include "ArrayQueue.h"
#include "Exception.h"
#include <iostream>

enum MenuType
{ // 선택가능한 메뉴
    ENQUEUE = 1,
    DEQUEUE,
    FRONT,
    SIZE,
    IS_EMPTY,
    END
};

void enqueueData(ArrayQueue* myQueue);
void dequeueData(ArrayQueue* myQueue);
void showFront(ArrayQueue* myQueue);
void showSize(ArrayQueue* myQueue);
void empty(ArrayQueue* myQueue);


using namespace std;

int main(){
    ArrayQueue* myQueue = new ArrayQueue(5);

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

void enqueueData(ArrayQueue *myQueue){
    try{
        Elem e;
        cout << "push할 문자열" << endl;
        getline(cin,e);
        myQueue->enqueue(e);
    }catch(Exception e){
        cout << e.getErrMessage() << endl;
    }
}

void dequeueData(ArrayQueue *myQueue){
    try{
        myQueue->dequeue();
    }catch(Exception e){
        cout << e.getErrMessage() << endl;
    }
}

void showFront(ArrayQueue *myQueue){
    try{
        cout << myQueue->front() << endl; 
    }catch(Exception e){
        cout << e.getErrMessage() << endl;
    }
    
}

void showSize(ArrayQueue *myQueue){
    cout << myQueue->size() << endl;
}

void empty(ArrayQueue *myQueue){
    if(myQueue->empty()){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
}