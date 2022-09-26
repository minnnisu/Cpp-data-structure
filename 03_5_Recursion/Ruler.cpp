#include<iostream>

using namespace std;

//눈금을 만드는 함수
string makeTicks(int n){
    if(n == 1){ //basis case
        return "-";
    }else{ //recursive case
        cout << makeTicks(n-1) << endl;
        return makeTicks(n-1) + "-";
    }
}

//원하는 크기의 하나의 눈금을 만드는 함수
string makeOneTick(int tick){
    if(tick == 0){ //basis case
        return "-";
    }else{ //recursive case
        return makeOneTick(tick-1) + "-";
    }
}

//인치를 만드는 함수
void makeRuler(int inch, int tick){
    if(inch == 0){ //basis case
        cout << makeOneTick(tick) << " " << inch << endl;
        return;
    }else{ //recursive case
        makeRuler(inch-1, tick);
        cout << makeTicks(tick) << " " << inch << endl; 

    }
}

int main(){
    int inch; //인치
    int ticks; //눈금 개수

    cout << "enter inch : ";
    cin >> inch;
    cout << "enter major tick length : ";
    cin >> ticks;
    makeRuler(inch, ticks);

    return 0;
}