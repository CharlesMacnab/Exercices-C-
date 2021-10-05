//
// Created by charl on 05/12/2019.
//

#ifndef COMPOSITION_POINT_H
#define COMPOSITION_POINT_H

class Point{
private:
    float x;
    float y;
public:
    Point(float abs, float ord);
    Point(Point const& p);
    float getX();
    float getY();
    void setX(float abs);
    void setY(float ord);
};

#endif //COMPOSITION_POINT_H
