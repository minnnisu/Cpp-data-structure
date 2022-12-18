#include "DLinkedList.h"
#include "DNode.h"
#include <iostream>

using namespace std;

enum MenuType{
    NODE_INSERT_FRONT = 1,
    NODE_INSERT_BACK,
    NODE_REMOVE_FRONT,
    NODE_REMOVE_BACK,
    SHOW_FRONT_NODE,
    SHOW_BACK_NODE,
    SHOW_ALL_NODE,
    END
};

void addNodeFront(DLinkedList *list);   
void addNodeBack(DLinkedList *list);   
void removeNodeFront(DLinkedList *list); 
void removeNodeBack(DLinkedList *list);


int main()
{
    int choice; //선택한 메뉴번호
    DLinkedList *list = new DLinkedList();

    do{
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. 노드 추가(앞)  2. 노드 추가(뒤)" << endl;
        cout << "3. 노드 삭제(앞)  4. 노드 삭제(뒤)" << endl;
        cout << "5. 노드 출력(앞)  6. 노드 출력(뒤)" << endl;
        cout << "7. 모든 노드 출력 8. 프로그램 종료" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        case MenuType::NODE_INSERT_FRONT:
            addNodeFront(list);
            break;

        case MenuType::NODE_INSERT_BACK:
            addNodeBack(list);
            break;

        case MenuType::NODE_REMOVE_FRONT:
            removeNodeFront(list);
            break;

        case MenuType::NODE_REMOVE_BACK:
            removeNodeBack(list);
            break;

        case MenuType::SHOW_FRONT_NODE:
            cout << list->front() << endl;
            break;

        case MenuType::SHOW_BACK_NODE:
            cout << list->back() << endl;
            break;

        case MenuType::SHOW_ALL_NODE:
            list->showAll();
            break;

        case MenuType::END:
            cout << "프로그램을 종료합니다." << endl;
            break;

        default:
            break;
        }

        cout << endl;
    } while (choice != END);

    delete list;

    return 0;
}


void addNodeFront(DLinkedList *list){
    string elem;
    cout << "[노드 추가]" << endl;
    cout << "element 값" << endl;
    cout << ">> ";
    cin.ignore(10, '\n');
    getline(cin, elem);

    list->addFront(elem);
    cout << "Node 추가 성공!" << endl;
}

void addNodeBack(DLinkedList *list){
    string elem;
    cout << "[노드 추가]" << endl;
    cout << "element 값" << endl;
    cout << ">> ";
    cin.ignore(10, '\n');
    getline(cin, elem);

    list->addBack(elem);
    cout << "Node 추가 성공!" << endl;
}

void removeNodeFront(DLinkedList *list){
    list->removeFront();
}

void removeNodeBack(DLinkedList *list){
    list->removeBack();
}