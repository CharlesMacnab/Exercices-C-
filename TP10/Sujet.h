//
// Created by charl on 23/01/2020.
//

#ifndef TP10_SUJET_H
#define TP10_SUJET_H

#include <vector>
#include <bits/shared_ptr.h>
#include "Osbervateur.h"
using namespace std;

class Sujet {
protected:
    vector <shared_ptr <Osbervateur> > osbervateur;
public:
   virtual void ajouter(shared_ptr <Osbervateur> o);
   virtual void notification();
};


#endif //TP10_SUJET_H
