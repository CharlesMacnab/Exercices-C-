//
// Created by charl on 05/12/2019.
//

#include "Point.h"

Point::Point(float abs, float ord){
    setX(abs);
    setY(ord);
}
Point::Point(Point const& p){
    x = p.x;
    y = p.y;
}
float Point :: getX(){
    return x;
}
float Point :: getY(){
    return y;
}
void Point :: setX(float abs){
    x = abs;
}
void Point :: setY(float ord){
    y = ord;
}