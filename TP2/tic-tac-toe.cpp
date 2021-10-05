#include "tic-tac-toe.h"
#include <iostream>

using namespace std;

bool JeuMorpion::placer_coup(int ligne, int colonne, Content c) {

    if(grille[ligne][colonne] != 0){
        cout << endl;
        cout <<"!!!!!!!!!Erreur la case est déjà jouée!!!!!!!!!" << endl;
        cout << endl;
        cout << "Veuillez rejouer" << endl;
        cout << endl;
        return false;
    }

    if(ligne >2 || colonne >2){
        cout << endl;
        cout <<"!!!!!!!!!Erreur veuilez rentrer un nombre entre 0 et 2!!!!!!!!!" << endl;
        cout << endl;
        cout << "Veuillez rejouer" << endl;
        cout << endl;
        return false;
    }

    if(c == ROND){
        grille[ligne][colonne] = Content::ROND;
        return true;
    }
    if(c == CROIX){
        grille[ligne][colonne] = Content::CROIX;
        return true;
    }

    return false;

}

void JeuMorpion ::init() {
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
            grille[i][j] = VIDE;
        }
    }
}

bool JeuMorpion ::placer_rond(int ligne, int colonne) {
    return placer_coup(ligne,colonne,ROND);
}

bool JeuMorpion ::placer_croix(int ligne, int colonne) {
    return placer_coup(ligne,colonne,CROIX);
}

void JeuMorpion::affichage(){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grille[i][j] == Content::VIDE){
                cout << " ";
            }
            if (grille[i][j] == Content::ROND){
                cout << "O";
            }
            if (grille[i][j] == Content::CROIX){
                cout << "X";
            }
            if (j != 2){
                cout << "|";
            }
            else{
                cout << endl;
            }
        }
    }
    cout << endl;
}

bool JeuMorpion::victoire() {

    if (grille[0][0] == grille[0][1] && grille[0][0] == grille[0][2] && grille[0][0] != Content::VIDE)
        return  true;
    else if (grille[1][0] == grille[1][1] && grille[1][0] == grille[1][2] && grille[1][0] != Content::VIDE)
        return  true;
    else if (grille[2][0] == grille[2][1] && grille[2][0] == grille[2][2] && grille[2][0] != Content::VIDE)
        return  true;
    else if (grille[0][0] == grille[1][0] && grille[0][0] == grille[2][0] && grille[0][0] != Content::VIDE)
        return  true;
    else if (grille[0][1] == grille[1][1] && grille[0][1] == grille[2][1] && grille[0][1] != Content::VIDE)
        return  true;
    else if (grille[0][2] == grille[1][2] && grille[0][2] == grille[2][2] && grille[0][2] != Content::VIDE)
        return  true;
    else if (grille[0][0] == grille[1][1] && grille[0][0] == grille[2][2] && grille[0][0] != Content::VIDE)
        return  true;
    else if (grille[0][2] == grille[1][1] && grille[0][2] == grille[2][0] && grille[0][2] != Content::VIDE)
        return  true;

    return false;
}