#include "HashMap.h"
#include "Entry.h"
#include <iostream>

using namespace std;

int main(){
    HashMap hm;
    hm.put("Kim", "20");
    hm.put("Choi", "40");
    hm.put("Park", "50");
    hm.put("Ahn", "10");
    hm.put("Park", "30");

    Entry e = *(hm.find("Kim"));
    cout << e.getKey() << " " << e.getValue() << endl;

    e = *(hm.find("Choi"));
    cout << e.getKey() << " " << e.getValue() << endl;

    e = *(hm.find("Park"));
    cout << e.getKey() << " " << e.getValue() << endl;

    hm.erase("Park");

    if(hm.find("Park") == hm.end()) cout << "Not Found" << endl;
}