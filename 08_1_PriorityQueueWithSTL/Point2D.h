#ifndef POINT2D_H
#define POINT2D_H
#include <iostream>

class Point2D
{
private:
    double x, y;
public:
    Point2D(){}
    Point2D(double _x, double _y){
        x = _x;
        y = _y;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
};

class LeftRight
{
public:
    bool operator()(Point2D& p, Point2D& q){
        return p.getX() < q.getX();
    }
};

class BottomTop
{
public:
    bool operator()(Point2D& p, Point2D& q){
        return p.getY() < q.getY();
    }   
};

#endif