#include <iostream>

using namespace std;

enum MealType {NO_PREF, REGULAR, LOW_FAT, VAGETARIAN};

struct Passenger
{
    string name;
    MealType mealPref; // meal preference
    bool isFreqFlyer; // in the frequent flyer program
    string freqFlyerNo; // the passenger's pref. flyer Number 
};


int main(){
    Passenger pass = {"John Smith", VAGETARIAN, "293145"};

    cout << pass.name << endl;
    cout << pass.mealPref << endl;

    Passenger *p = new Passenger; //dynamically allocate
    p->name = "James";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    cout << p->name << endl;
    cout << p->freqFlyerNo << endl;
    
    delete p; //destroy
}