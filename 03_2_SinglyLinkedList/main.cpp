#include "StringLinkedList.h"
#include "StringNode.h"
#include <iostream>

using namespace std;

enum MenuType
{ // 선택가능한 메뉴
    NODE_INSERT_FRONT = 1,
    NODE_DELETE_FRONT,
    SHOW_FORONT_ELEM,
    END
};

void addNode(StringLinkedList *list);    // Node 삽입
void removeNode(StringLinkedList *list); // Node 제거

int main()
{
    int choice;                                      //선택한 메뉴번호
    StringLinkedList *list = new StringLinkedList(); // StringLinkedList

    do
    {
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. 노드 추가  2. 노드 삭제  3. 첫번째 노드 값 출력  4. 프로그램 종료" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        case MenuType::NODE_INSERT_FRONT:
            addNode(list);
            break;

        case MenuType::NODE_DELETE_FRONT:
            removeNode(list);
            break;

        case MenuType::SHOW_FORONT_ELEM:
            cout << list->front() << endl;
            break;

        case MenuType::END:
            cout << "프로그램을 종료합니다." << endl;
            break;

        default:
            break;
        }

        cout << endl;
    } while (choice != 4);

    delete list;

    return 0;
}

void addNode(StringLinkedList *list)
{
    string elem;
    cout << "[노드 추가]" << endl;
    cout << "element 값" << endl;
    cout << ">> ";
    cin.ignore(10, '\n');
    getline(cin, elem);

    list->addFront(elem);
    cout << "Node 추가 성공!" << endl;
}

void removeNode(StringLinkedList *list)
{
    list->removeFront();
    cout << "Node 삭제 성공!" << endl;
}