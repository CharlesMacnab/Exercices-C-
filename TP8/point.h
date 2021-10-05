#include <cmath>
#include <iostream>

#ifndef TP8_POINT_H
#define TP8_POINT_H


class Point {
private:
    double x;
    double y;
public:
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    double distance(Point P);
    Point milieu (Point P);
    Point (double x, double y);
};

using namespace std;

void Point::setX(double x){
    this->x = x;
}

void Point::setY(double y){
    this->y = y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

double Point::distance(Point P) {
    return sqrt(pow(abs(P.x - x),2) + pow(abs(P.y - y),2));
}

Point Point::milieu(Point P) {

    double middleX = (P.x + x)/2;
    double middleY = (P.y + y)/2;
    Point middle;
    middle.setX(middleX);
    middle.setY(middleY);
    return middle;
}

Point ::Point(double x, double y) {
    setX(x);
    setY(y);
}



#endif //TP8_POINT_H
