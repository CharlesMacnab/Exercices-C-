//
// Created by charl on 23/01/2020.
//

#include "StationMeteo.h"

StationMeteo::StationMeteo(float t){
    if (temperature != t){
        temperature = t;
        notification();
    }
}

void StationMeteo::ajouter(shared_ptr <Osbervateur> o) {
    osbervateur.push_back(o);
}

void StationMeteo::notification() {
    cout << "La température a changé" << endl;
}
