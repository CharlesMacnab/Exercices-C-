#include <iostream>

using namespace std;

int sum(int n){
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}
int sum2(int k, int n){
    int s = 0;
    for (int i = k; i < n; i++) {
        s += i;
    }
    return s;
}
void sum3(int n, int l){
    for (int i = 1; i <= n; i++) {
        l += i;
    }
}

int main() {
    int n = 6;
    int s = sum(n);
    cout << s << endl;

    int k=2;
    int l = sum2(k, n);
    cout << l << endl;




}
