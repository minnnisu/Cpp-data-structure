#include "Score.h"
#include "IndexOutOfBounds.h"
#include <iostream>

using namespace std;

Score::Score(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Score::~Score(){
    delete[] entries;
}


void Score::add(const GameEntry& e){
    int newScore = e.getScore();
    if(maxEntries == numEntries){
        if(newScore <= entries[maxEntries-1].getScore()){
            return;
        }
    } else{
        numEntries++;
    }
    int i = numEntries-2;
    while(i >= 0 && newScore >= entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

GameEntry Score::remove(int i){
    if((i >= maxEntries) || (i < 0)){
        throw IndexOutOfBounds("접근가능한 위치가 아닙니다");
    }

    GameEntry e = entries[i];
    for(int k = i+1; k < numEntries; k++){
        entries[k-1] = entries[k];
    }
    numEntries--;
    return e;
}

void Score::showEntries(){
    cout << "현재 삽입된 Entry 개수: " << numEntries << endl;
    for(int i = 0; i < numEntries; i++){
        cout << "----------" << endl;
        cout << "idx_" << i << endl;
        cout << "이름: " << entries[i].getName() << endl;
        cout << "점수: " << entries[i].getScore() << endl;
    }
    cout << "----------" << endl;

}