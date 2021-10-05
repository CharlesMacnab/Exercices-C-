#include <iostream>
#include <bits/shared_ptr.h>
#include "StationMeteo.h"
#include "Agriculteur.h"

void scenario1(){
    StationMeteo s(99);
    shared_ptr <Agriculteur> sptr(new Agriculteur());
    s.ajouter(sptr);
    s.modifierT();

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << std::endl;
    scenario1();
    return 0;
}
