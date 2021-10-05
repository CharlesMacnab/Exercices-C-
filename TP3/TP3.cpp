#include <iostream>
#include "TP3.h"
#include <cmath>

Point::Point() {
    x=0;
    y=0;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::Point(double x) : x(x) , y(2*x){};

//------------------------TP1 functions-------------------------

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
    Point middle{};
    middle.setX(middleX);
    middle.setY(middleY);
    return middle;
}

//-----------------------------------TEST-------------------------------//

