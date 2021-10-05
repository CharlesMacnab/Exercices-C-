

#ifndef TP2_TIC_TAC_TOE_H
#define TP2_TIC_TAC_TOE_H

enum Content {VIDE, ROND, CROIX};

class JeuMorpion{
private:
    int grille[3][3];
    bool placer_coup(int ligne, int colonne, Content c);
public :
    void init();
    bool placer_rond(int ligne, int colonne);
    bool placer_croix(int ligne, int colonne);
    void affichage();
    bool victoire();
};

#endif //TP2_TIC_TAC_TOE_H
