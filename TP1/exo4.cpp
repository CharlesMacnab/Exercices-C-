#include <iostream>

using namespace std;

int main(){

    int n = 1;
    int* ptr = &n;
    * ptr = 2;
    cout << *ptr << endl;


    int n2 = 1;
    int& refn2 = n2;
    refn2 = 2;
    cout << n2 << endl;

}