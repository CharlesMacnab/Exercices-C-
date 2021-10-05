#include <iostream>
#include "TP3.h"



void test1(){
    Point p;
}
void test2(){
    Point p();
}
void test3(){
    Point p(1,2);
}
void test4(){
    Point p(4);
}
void test5(){
    Point* p = new Point;
}
void test6(){
    Point* p = new Point();
}
void test7(){
    Point* p = new Point(4);
}
void test8(){
    Point* p = new Point(1,2);
}

void test9(){
    Point p = {1,2};
}

void test10(){
    Point p1(1,2);
    Point p2 = p1;
}

void test11(){
    Point p1(1,2);
    Point p2;
    p1 = p2;
}

void test12(){
    Point* p1 = new Point(1,2);
    Point* p2 = p1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test1();


    return 0;
}