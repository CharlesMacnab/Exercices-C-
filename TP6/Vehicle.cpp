//
// Created by charl on 05/12/2019.
//

#include "Vehicle.h"
#include <cstring>
#include <cmath>

Vehicle :: Vehicle() : position (0,0) {
    identifier = new char [10* sizeof(char)];
    strcpy(identifier, "");
}

Vehicle :: Vehicle(float x, float y) : position(x,y){
    identifier = new char [10* sizeof(char)];
    strcpy(identifier,"");
}

Vehicle :: ~Vehicle() {
    delete identifier;
}

Vehicle :: Vehicle(Vehicle const& p) : position(p.position),identifier(p.identifier){

}

char* Vehicle :: getID(){
    return identifier;
}

Point Vehicle :: getCP(){
    return position;
}

void Vehicle :: setID(char* P){
    identifier = P;
}

void Vehicle :: setCP(Point P){
    position = P;
}

float Vehicle :: moveTo(Point p){
    return sqrt(pow(p.getX()-position.getX(),2) + pow(p.getY()-position.getY(),2));
}