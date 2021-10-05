#include <iostream>

using namespace std;

int max (int n){
    return n;
}

int max2 (int m, int n){
    if (m > n){
        return m;
    }
    else return n;
}

int max3 (int m, int n, int r){
    if (m > n && r){
        return m;
    }
    if (r > n && m){
        return r;
    }
    if (n > m && r){
        return n;
    }
}

int main(){
    int n = 0;
    int n2 =0;
    int n3 = 0;
    cout << "Entrer une valeur" <<endl;
    cin >> n;
    cout << "Entrer une deuxième valeur" <<endl;
    cin >> n2;
    cout << "Entrer une troisième valeur" <<endl;
    cin >> n2;
    max(n);
    max2(n,n2);
    max3(n,n2,n3);

}