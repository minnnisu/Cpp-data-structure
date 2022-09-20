#ifndef GAME_ENTRY_H
#define GAME_ENTRY_H
#include <iostream>

using namespace std;

class GameEntry{ // game score entry
private:
    string name; // player 이름
    int score; // player 점수
public:
    GameEntry(const string& n="", int s=0); //생성자
    string getName() const; //player 이름 반환
    int getScore() const; //player 점수 반환
};

#endif
