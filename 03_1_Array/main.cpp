#include "GameEntry.h"
#include "Score.h"
#include "IndexOutOfBounds.h"
#include <iostream>

using namespace std;

enum MenuType{ // 선택가능한 메뉴
    ENTRY_INSERT = 1,
    ENTRY_REMOVE,
    ENTRY_SHOW,
    END
};

void insertEntry(Score&); //entry 삽입
void removeEntry(Score&); //entry 제거

int main(){
    int arraySize; //Score 멤버변수 entries의 크기
    int choice; //선택한 메뉴번호

    //Score 객체 생성
    cout << "[Initialize]" << endl;
    cout << "저장할 Entry의 개수를 입력하세요" << endl;
    cout << ">> ";
    cin >> arraySize;
    Score sc(arraySize);
    cout << endl;
    
    do{
        //메뉴 선택
        cout << "[메뉴 선택]" << endl;
        cout << "1. Entry 추가  2. Entry 삭제  3. 모든 Entry 출력  4. 프로그램 종료" << endl;
        cout << ">> ";
        cin >> choice;

        switch (choice)
        {
        case MenuType::ENTRY_INSERT:
            insertEntry(sc);
            break;
        
        case MenuType::ENTRY_REMOVE:
            removeEntry(sc);
            break;

        case MenuType::ENTRY_SHOW:
            sc.showEntries();
            break;

        case MenuType::END:
            cout << "프로그램을 종료합니다." << endl;
            break;

        default:
            break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;

}

void insertEntry(Score& s){
    string pName;
    int pScore;
    cout << "[Entry 추가]" << endl;

    cout << "player 이름" << endl;
    cout << ">> ";
    cin.ignore(10, '\n');
    getline(cin, pName);

    cout << "player 점수" << endl;
    cout << ">> ";
    cin >> pScore;

    s.add(GameEntry(pName, pScore)); //Entry 추가
    cout << "Entry 추가 성공!" << endl;
}

void removeEntry(Score& s){
    int idx;
    cout << "[Entry 삭제]" << endl;
    cout << "제거할 Entry의 위치를 입력하세요";
    cout << ">> ";
    cin >> idx;
    try{
        GameEntry e = s.remove(idx);
        cout << "[삭제된 Entry 정보]" << endl;
        cout << "player 이름: " << e.getName() << endl;
        cout << "player 점수: " << e.getScore() << endl;

    }catch(IndexOutOfBounds& e){
        cout << e.getErrMessage() << endl;
    }
}