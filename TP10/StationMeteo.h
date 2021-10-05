//
// Created by charl on 23/01/2020.
//

#ifndef TP10_STATIONMETEO_H
#define TP10_STATIONMETEO_H


#include <bits/shared_ptr.h>
#include "Sujet.h"

class StationMeteo : public Sujet {
private:
    float temperature;
public:
    StationMeteo(float t);
    void modifierT();
    void notification();
    void ajouter(shared_ptr <Osbervateur> o);
};


#endif //TP10_STATIONMETEO_H
