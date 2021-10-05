//
// Created by charl on 05/12/2019.
//

#ifndef COMPOSITION_VEHICLE_H
#define COMPOSITION_VEHICLE_H

#include "Point.h"

class Vehicle{
private:
    char* identifier;
    Point position;
public:
    Vehicle();
    Vehicle(float x, float y);
    ~Vehicle();
    Vehicle(Vehicle const& p);
    char* getID();
    Point getCP();
    void setID(char* P);
    void setCP(Point P);
    float moveTo(Point p);
    float moveTo()
};

#endif //COMPOSITION_VEHICLE_H
