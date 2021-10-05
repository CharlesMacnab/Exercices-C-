
#ifndef TP5_RATIONAL_H
#define TP5_RATIONAL_H

class rational{
private:
    int numerator;
    int denominator;
    int PGCD();

public:
    void set_numerator(int num);
    void set_denominator(int den);
    int get_numerator();
    int get_denominator();
    int get_PGCD();
    void afficher_fraction();
    rational();
    rational(int a, int b);
    rational(rational const& hello);
};

#endif //TP5_RATIONAL_H
