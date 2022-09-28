#include <iostream>
#include "CircleList.h"
#include "CNode.h"


//노드 0개, 1개, 여러개 일 때 테스트

using namespace std;

enum MenuType{
    NODE_INSERT = 1,
    NODE_REMOVE,
    SHIFT_CURSOR,
    SHOW_FRONT_NODE,
    SHOW_BACK_NODE,
    SHOW_ALL_NODE,
    END
};

void insertNode(CircleList *list);     
void removeNode(CircleList *list); 
void shiftCursor(CircleList *list);
void showNodeFront(CircleList *list);
void showNodeBack(CircleList *list);
void showNodeAll(CircleList *list);


int main()
{
    int choice; //선택한 메뉴번호
    CircleList *list = new CircleList();

    do{
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. 노드 추가  2. 노드 삭제  3. 커서 이동" << endl;
        cout << "4. 노드 출력(앞)  5. 노드 출력(뒤)  6. 모든 노드 출력" << endl;
        cout << "8. 프로그램 종료" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        case MenuType::NODE_INSERT:
            insertNode(list);
            break;

        case MenuType::NODE_REMOVE:
            removeNode(list);
            break;

        case MenuType::SHIFT_CURSOR:
            shiftCursor(list);
            break;

        case MenuType::SHOW_FRONT_NODE:
            showNodeFront(list);
            break;

        case MenuType::SHOW_BACK_NODE:
            showNodeBack(list);
            break;

        case MenuType::SHOW_ALL_NODE:
            showNodeAll(list);
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


void insertNode(CircleList *list){
    string elem;
    cout << "[노드 추가]" << endl;
    cout << "element 값" << endl;
    cout << ">> ";
    cin.ignore(10, '\n');
    getline(cin, elem);

    list->add(elem);
    cout << "Node 추가 성공!" << endl;
}

void removeNode(CircleList *list){
    list->remove();
}

void shiftCursor(CircleList *list){
    int count;
    cout << "[쉬프트]" << endl;
    cout << "쉬프트 횟수" << endl;
    cout << ">> ";
    cin.ignore(10, '\n');
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        list->advance();
    }
    
}

void showNodeFront(CircleList *list){
    if(list->empty()){
        cout << "노드가 비었습니다" << endl;
        return;
    }
    cout << list->front() << endl;
    
}

void showNodeBack(CircleList *list){
    if(list->empty()){
        cout << "노드가 비었습니다" << endl;
        return;
    }
    cout << list->back() << endl;
}

void showNodeAll(CircleList *list){
    list->showAll();
}

