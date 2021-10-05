#include <iostream>

using namespace std;

void numbers(int* tab, int n){
    for (int i = 0; i < n; i++) {
        cout << "Entrer la " << i << "ème valeur du tableau" << endl;
        cin >> tab[i];
    }
}

void print(int* tab, int n){
    for (int i = 0; i < n; i++) {
        cout << "Valeur " << i << " = " << tab[i] << endl;
    }
}

void average(int* tab, int n){
    int number = 0;
    int final;
    for (int i = 0; i < n; i++) {
        number = tab[i] + number;
    }
    final = number / n ;
    cout << "La moyenne est " << final << endl;

}

int main(){
    auto n = 0;
    cout << "Entrer une taille d'un tableau" << endl;
    cin >> n;
    if (n > 0){
        int* tab = new int[n];
        numbers(tab,n);
        print(tab, n);
        average(tab, n);
        delete[] tab;
    }
    return 0;
}