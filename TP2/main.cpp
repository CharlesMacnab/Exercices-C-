#include <iostream>
#include "point.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "tic-tac-toe.h"

using namespace std;

double randomDouble(double min, double max) {
    return (rand() / ((double)RAND_MAX)) * (max-min) + min;
}

Point1* createRandomPath(int nbSteps, double minX, double maxX, double minY, double maxY){
    Point1* tabpoints;
    tabpoints = new Point1[nbSteps];// création de nbSteps objet
    for (int i = 0; i < nbSteps; i++) {
        tabpoints[i].setX_dyn(randomDouble(minX,maxX));
        tabpoints[i].setY_dyn(randomDouble(minY,maxY));
    }
    return tabpoints;
}

void showRandomPath(Point1* pathPoints, int nbSteps){
    cout << "Le chemin aléatoire généré est :" << endl;
    for (int i = 0; i < nbSteps; i++) {
        cout << "{(" << pathPoints[i].getX_dyn() << "," << pathPoints[i].getY_dyn() << ")}";
    }
}

double followPath(Point1* point, Point1* path, int nbSteps){
    double final_distance = 0;
    point->setX_dyn(path[0].getX_dyn());
    point->setY_dyn(path[0].getY_dyn());
    for (int i = 1; i < nbSteps ; i++) {
            final_distance = sqrt(pow(abs(path[i].getX_dyn() - point->getX_dyn()),2) + pow(abs(path[i].getY_dyn() - point->getY_dyn()),2)) + final_distance;
        point->setX_dyn(path[i].getX_dyn());
        point->setY_dyn(path[i].getY_dyn());
    }
    cout << " Les coordonnées du point E après le déplacement dans le chemin aléatoire est : (" << point[nbSteps - 1].getX_dyn() << "," << point[nbSteps - 1].getY_dyn() << ")" << " et la distance parcourue est : " << final_distance;
    return final_distance;
}

int main() {

    srand( time(NULL) );


// ---------------------------------------- Point Version Statique TEST ------------------------------------------------

    double longeur;
    double a,b;
    double c,d;

    Point point1{};
    Point point2{};

    // POINT A
    cout << "**SAISIE DU POINT A**" << endl;
    cout << "Tapez l'abscisse : ";
    cin >> a;
    cout << "Tapez l'ordonnée : ";
    cin >> b;
    point1.setX(a);
    point1.setY(b);

    // POINT B
    cout << "**SAISIE DU POINT B**" << endl;
    cout << "Tapez l'abscisse : ";
    cin >> c;
    cout << "Tapez l'ordonnée : ";
    cin >> d;
    point2.setX(c);
    point2.setY(d);

    //MILIEU
    Point middle{};
    middle = point1.milieu(point2);
    cout << "**MILIEU DE AB**"<< endl;
    cout << "L'abscisse vaut : " << middle.getX() << endl;
    cout << "L'abscisse vaut : " << middle.getY() << endl;

    // DISTANCE
    longeur = point1.distance(point2);
    cout << "**La distance AB vaut : " << longeur << endl;
    cout << endl;
    cout << endl;


// ---------------------------------------- Point Version Dynamique TEST -----------------------------------------------

    double longeur2;
    double e,f;
    double g,h;

    Point1* point3;
    point3=new Point1();
    Point1* point4;
    point4=new Point1();

    // POINT A
    cout << "**SAISIE DU POINT A**" << endl;
    cout << "Tapez l'abscisse : ";
    cin >> e;
    cout << "Tapez l'ordonnée : ";
    cin >> f;
    point3->setX_dyn(e);
    point3->setY_dyn(f);

    // POINT B
    cout << "**SAISIE DU POINT B**" << endl;
    cout << "Tapez l'abscisse : ";
    cin >> g;
    cout << "Tapez l'ordonnée : ";
    cin >> h;
    point4->setX_dyn(g);
    point4->setY_dyn(h);

    //MILIEU
    Point1* middle2;
    middle2 = point3->milieu_dyn(point4);
    cout << "**MILIEU DE AB**"<< endl;
    cout << "L'abscisse vaut : " << middle2->getX_dyn() << endl;
    cout << "L'abscisse vaut : " << middle2->getY_dyn() << endl;

    // DISTANCE
    longeur2 = point3->distance_dyn(point4);
    cout << "**La distance AB vaut : " << longeur2 << endl;
    delete middle2;
    delete point3;
    delete point4;
    cout << endl;
    cout << endl;

// -----------------------------------------------  Random Path TEST  -------------------------------------------------

    Point1* point5;
    Point1* point6;
    point6 = new Point1();
    point5 = createRandomPath(3,1,5,1,5);
    showRandomPath(point5,3);
    followPath(point5,point6,3);
    cout << endl;
    cout << endl;


// -----------------------------------------------  Jeu du Morpion TEST -----------------------------------------------

    JeuMorpion* test;
    test = new JeuMorpion();
    test->init();
    cout << endl;
    cout << "                           Bienvenue au Jeu du Morpion                           " << endl;
    cout << "---------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Joueur 1 utilise les ronds : O" << endl;
    cout << "Joueur 2 utilise les croix : X" << endl;
    cout << endl;
    cout << "Voici la grille initialisé" << endl;
    cout << endl;
    test->affichage();

    int ligne, colonne;
    int counter = 0;
    bool error;
    while(counter != 9) {

        if(counter %2 == 0){
            cout<<"Joueur 1 à toi de jouer" << endl;
            cout << endl;
        }
        else{
            cout<<"Joueur 2 à toi de jouer" << endl;
            cout << endl;
        }

        cout << "Choix de la ligne (entre 0 et 2) : ";
        cin >> ligne;
        cout << "Choix de la colonne (entre 0 et 2) : ";
        cin >> colonne;

        if (counter %2 == 0) {
            error = test->placer_rond(ligne, colonne);
            if(!error) {
                while (!error) {
                    cout << "Choix de la ligne (entre 0 et 2) : ";
                    cin >> ligne;
                    cout << "Choix de la colonne (entre 0 et 2) : ";
                    cin >> colonne;
                    error = test->placer_rond(ligne, colonne);
                }
            }
            cout << endl;
            test->affichage();
            if (test->victoire()) {
                cout << "Joueur 1 a gagné la partie!" << endl;
                return 0;
            }
            counter++;
        }

        else {
            error = test->placer_croix(ligne, colonne);
            if(!error) {
                while (!error) {
                    cout << "Choix de la ligne (entre 0 et 2) : ";
                    cin >> ligne;
                    cout << "Choix de la colonne (entre 0 et 2) : ";
                    cin >> colonne;
                    error = test->placer_croix(ligne, colonne);
                }
            }
            cout << endl;
            test->affichage();
            if (test->victoire()) {
                cout << "Joueur 2 a gagné la partie!" << endl;
                return 0;
            }
            counter++;
        }
    }
    cout << "Egalité ! " << endl;

    return 0;
}