#include <iostream>
#include <stdexcept>
using namespace std;

class IndexOutOfBounds{
public:
    IndexOutOfBounds();
    IndexOutOfBounds(string message){
        this->errorMessage = message;
    }
    string errorMessage;
};

class GameEntry{
    public:
        GameEntry(const string& n = " " , int s = 0);
        string getName() const;
        int getScore() const;
    private:
        string name;
        int score;
};

//constructor
GameEntry::GameEntry(const string& n, int s) 
    :name(n), score(s) {}

//accessors
string GameEntry::getName() const { return name;}
int GameEntry::getScore() const { return score;}


class Scores{
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry& e);
        GameEntry remove(int t);
        void showEntries();
    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;
};

Scores::Scores(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores(){
    delete[] entries;
}
void Scores::add(const GameEntry& e){
    int newScore = e.getScore();
    if(numEntries == maxEntries){
        if(newScore <= entries[maxEntries-1].getScore())
        return;  
    }
    else numEntries++;

    int i = numEntries-2;
    while (i>= 0 && newScore > entries[i].getScore())
    {
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

GameEntry Scores::remove(int i){
    if((i<0)|| (i>= numEntries))
    throw IndexOutOfBounds("Invalid index");
    GameEntry e = entries[i];
    for (int j = i+1; j < numEntries; j++)
    entries[j-1] = entries[j];
    numEntries--;
    return e;
}


void Scores::showEntries(){
    for(int i = 0; i < numEntries; i++){
        cout << entries[i].getName() << endl;
        cout << entries[i].getScore() << endl;
    }
}

int main(int argc, char const *argv[])
{
    Scores score(10);
    GameEntry player[6];
    player[0] = GameEntry("tester1", 30);
    player[1] = GameEntry("tester2", 10);
    player[2] = GameEntry("tester3", 50);
    player[3] = GameEntry("tester4", 20);
    player[4] = GameEntry("tester5", 60);
    player[5] = GameEntry("tester6", 80);
    
    //add Player
    for (int i = 0; i < 6; i++){
            score.add(player[i]);
        }

    //remove Player
    try{
        score.remove(10);
    }
    catch(IndexOutOfBounds& except)
    {
        cout << except.errorMessage << endl;
    }
    
    score.showEntries();

    return 0;
}





