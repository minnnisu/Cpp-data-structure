#ifndef SCORE_H
#define SCORE_H
#include "GameEntry.h"
#include <iostream>

using namespace std;

class Score //entry의 점수
{
private:
    int maxEntries; //최대로 삽입 가능한 entry의 개수
    int numEntries; //현재 삽입된 entry의 개수
    GameEntry *entries; //entry를 담을 array

public:
    Score(int maxEnt = 10); //생성자
    ~Score(); //소멸자
    void add(const GameEntry& e); //game entry 추가 (내림차순)
    GameEntry remove(int i); //game entry 삭제
    void showEntries(); //entries에 등록된 entry들의 정보 출력
};


#endif