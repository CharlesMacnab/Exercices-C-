#include <iostream>
#include "point.h"
#include <vector>
#include <cstring>
#include <cstdbool>

#define boolToString(b) (b ? "true" : "false")

using namespace std;

template<class T> void test (point<T> p1){
    std::cout << &p1 << std::endl;
    std::cout << "(" << p1.getX() << "," << p1.getY() << ")" << std::endl;
    std::cout << &p1 << std::endl;
}


template<typename T> void printVector(vector<T> v){
    cout << "[";
    for(typename vector<T>::iterator it=v.begin();it!=v.end();it++){
        cout << *it;
        if(it!=v.end()-1){ cout << ",";}
    }
    cout << "]" << endl;
}
void printNumbers(){
    vector<int> numbers = {1,2,3};
    printVector(numbers);
}
void printLetters(){
    vector<char> letters = {'A', 'B', 'C'};
    printVector(letters);
}

bool isNumber(char* val){
    for(int i=0;i<strlen(val);i++){
        if(!isdigit(val[i])){ return false;}
    }
    return true;
}

void isNumberTests(){
    cout << boolToString( isNumber("1") )<< endl;
    cout << boolToString( isNumber("42") ) << endl;
    cout << boolToString( isNumber("6PO") ) << endl;
    cout << boolToString( isNumber("R2D2") ) << endl;
}

void keepNumbersOnly(vector<string> v){

}

void filterVectorTest(){
    vector<string> values = {"Z", "1", "A", "42", "E", "G", "0"};
    keepNumbersOnly(values);
    printVector(values);
}

int main() {

    point<int> p1(6.9, 2.4);
    test(p1);
    //----------------------




    return 0;
}