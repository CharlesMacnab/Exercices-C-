#include <iostream>
#include "PGM.h"
#include <ctime>

int main() {
    srand(time(NULL));
    //char* filename = "lena.pgm";
    //PGM test(25,25,0,255);
    PGM test;
    test.readFile("lena.pgm");
    test.thresholding(125,"image.pgm");
    return 0;
}