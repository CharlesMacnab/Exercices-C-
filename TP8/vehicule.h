
#include <string>
#include <cstring>
#include "point.h"

#ifndef TP8_VEHICULE_H
#define TP8_VEHICULE_H

class Vehicle{
private:
    char *identifier;
    Point position;
protected:
    float carburant;
    float consommation;
public:
    std::string getIdentifier();
    void setIdentifier(std::string identifier);
    Point &getPosition();
    void setPosition(Point &position);
    float getCarburant();
    void setCarburant(float carburant);
    float getConsommation();
    void setConsommation(float consommation);
    ~Vehicle();
    Vehicle();
    Vehicle(char* id, Point p);
    Vehicle(Vehicle const& autre);

};



using namespace std;



Vehicle::Vehicle() : position(0,0) {
    identifier=new char[10*sizeof(char)];
    strcpy(identifier,"");
}

Vehicle::Vehicle(char* id, Point p)
{
    identifier=new char[10*sizeof(char)];
    position=p;
    strcpy(identifier,id);

}

Vehicle::~Vehicle(){
    delete [] identifier;
}

Vehicle::Vehicle(Vehicle const& autre){
    identifier=new char[10*sizeof(char)];
    position=autre.position;
    stpcpy(identifier, autre.identifier);

}
#endif //TP8_VEHICULE_H
