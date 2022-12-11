#include "Point2D.h"
#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<Point2D, vector<Point2D>, LeftRight> p;
    Point2D point2D;
    p.push(Point2D(8.5, 4.6));
    p.push(Point2D(1.3, 5.7));
    p.push(Point2D(2.5, 0.6));

    point2D = p.top();
    cout << point2D.getX() << " " << point2D.getY() << endl; p.pop();

    point2D = p.top();
    cout << point2D.getX() << " " << point2D.getY() << endl; p.pop();

    point2D = p.top();
    cout << point2D.getX() << " " << point2D.getY() << endl; p.pop();
}
