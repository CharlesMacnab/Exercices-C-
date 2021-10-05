#include "point.h"
#include <cmath>
#include <iostream>

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
    Point middle{};
    middle.setX(middleX);
    middle.setY(middleY);
    return middle;
}

//--------------------------------------------------------------------//

void Point1::setX_dyn(double x){
    this->x = x;
}

void Point1::setY_dyn(double y){
    this->y = y;
}

double Point1::getX_dyn() {
    return x;
}

double Point1::getY_dyn() {
    return y;
}


double Point1::distance_dyn(Point1* P) {
    return sqrt(pow(abs(P->x - x),2) + pow(abs(P->y - y),2));
}

Point1* Point1::milieu_dyn(Point1* P) {

    double middleX = (P->x + x)/2;
    double middleY = (P->y + y)/2;
    Point1* middle;
    middle=new Point1();
    middle->setX_dyn(middleX);
    middle->setY_dyn(middleY);
    return middle;
}