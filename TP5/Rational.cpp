#include "Rational.h"
#include <iostream>


int rational::PGCD() {
    int z = 0;
    int a = get_denominator();
    int b = get_numerator();
    for (int i = 1; i < a; i++) {
        for (int j = 1; j < b; j++) {
            if (a % i == 0 && b % j == 0) {
                z = i;
            }
        }
    }
    if (z==0){
        std :: cout << "Aucun pgcd commun" << std :: endl;
    }
    return z;
}

int rational::get_PGCD(){
    return PGCD();
}


void rational::set_numerator(int num){
    numerator = num;
}

void rational::set_denominator(int den){
    if(den != 0) {
        denominator = den;
    }
    else std::cout << "error" << std :: endl;
}
int rational::get_numerator(){
    return numerator;
}
int rational::get_denominator(){
    return denominator;
}

void rational::afficher_fraction() {
    int a =get_numerator();
    int b = get_denominator();
    std::cout << a << "/" << b << std :: endl;
}

rational::rational(){
   set_numerator(10);
   set_denominator(15);
}

rational::rational(int a, int b) {
    set_numerator(a);
    set_denominator(b);
}

rational::rational(rational const &hello) {
    numerator = hello.numerator;
    denominator = hello.denominator;
}