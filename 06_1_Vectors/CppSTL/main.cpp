#include <iostream>
#include <vector>
#include <list>

using namespace std;

class student
{
public:
    student(){};
    student(string n) : name(n) {};
    string getName() {return name;};
private:
    string name;
};


int main(){
    vector<student> myVector(5, student("길동"));
    myVector.push_back(student("민수"));
    myVector.push_back(student("희진"));

    cout << "size: " <<  myVector.size() << endl;
    cout << "at(1): " << myVector.at(1).getName() << endl;
    cout << "operator[][1]: " << myVector.operator[](1).getName() << endl;
    cout << "front: " << myVector.front().getName() << endl;
    cout << "back: " << myVector.back().getName() << endl;

    myVector.pop_back();

    cout << "----------------- After pop_back() -----------------" << endl;
    cout << "size: " <<  myVector.size() << endl;
    cout << "front: " << myVector.front().getName() << endl;
    cout << "back: " << myVector.back().getName() << endl;

    myVector.resize(5);

    cout << "----------------- After resize() -----------------" << endl;
    cout << "size: " <<  myVector.size() << endl;
    cout << "front: " << myVector.front().getName() << endl;
    cout << "back: " << myVector.back().getName() << endl;


}