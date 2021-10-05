#include <iostream>

using namespace std;

int addition(int val1, int val2){
    int result;
    result = val1 + val2;
    return result;
}

void positif (int result){
    cout << "Positif?" <<endl;
    if(result > 0){
        cout << "true" << endl;
    }
    else cout << "false ou nul" << endl;
}

int main() {
    int val1, val2, result;
    cout << "Saisir 2 valeurs" <<endl;
    cin >> val1 >> val2;
    result = addition(val1,val2);
    cout << val1 << " + " << val2<< " = " << result<<endl;
    positif(result);
    return 0;
}