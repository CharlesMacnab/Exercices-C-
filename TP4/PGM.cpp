#include <iostream>
#include "PGM.h"
#include <cstdlib>
#include <fstream>
#include <sstream>




void PGM::set_width(int w){
    width = w;
}
void PGM::set_height(int h){
    height = h;
}
void PGM::set_maxvalue(int max){
    maxvalue = max;
}
void PGM::set_data(int** data){
    this->data = data;
}
int** PGM::initImage() {
    data = new int*[height];
    for(int i =0;i<height;i++){
        data[i] = new int[width];
    }
    return data;
}

void PGM::deleteImage(){
    for (int i = 0; i < height; i++) {
            delete[] data[i];
    }
    delete[] data;
}

int** PGM::createImage(int minpix, int maxpix){
    data = initImage();
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            data[i][j] = rand()%(maxpix-minpix) + minpix;
        }
    }
}

// / ((double)RAND_MAX)) *

PGM::PGM() {
    width = 0;
    height = 0;
    maxvalue = 0;
    createImage();
}

PGM::PGM(int height, int width, int minpix, int maxpix) {
    set_height(height);
    set_width(width);
    set_maxvalue(maxpix);
    createImage(minpix,maxpix);

}

PGM::~PGM() {
    deleteImage();
    counter--;
}

PGM::PGM(PGM const& p){
    set_height(p.height);
    set_width(p.width);
    set_maxvalue(p.maxvalue);
    set_data(p.data);
    data = initImage();
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; ++j) {
            data[i][j] = p.data[i][j];
        }
    }
}

void PGM::afficherImage(){

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void PGM::writeFile(char* filename){
    std::ofstream myfile;
    myfile.open (filename);
    myfile << "P2\n";
    myfile << width << " " << height << "\n";
    myfile << maxvalue << "\n";
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            myfile << data[i][j] << " ";
        }
        myfile << std::endl;
    }
    myfile.close();
    counter ++;
}

void PGM::nbImage() {
    std::cout << "There is" << counter << "PGM images" << std::endl;
}

void PGM::drawrect (int x1, int y1, int x2, int y2, int val){
    for (int i = y1; i < y2; i++) {
        for (int j = x1; j < x2; j++) {
            data[i][j]=val;
        }
    }
}

void PGM::drawline(int x1, int x2, int line, int val){
    for(int i=x1;i<x2;i++){
        data[line][i]=val;
    }
}

void PGM::drawcross(int x, int y, int val){
    data[x][y]=val;
    data[x-1][y]=val;
    data[x+1][y]=val;
    data[x][y-1]=val;
    data[x][y+1]=val;

}

void PGM::readFile(char* filename) {
    std::ifstream myfile;
    std::string line;
    std::stringstream s;
    myfile.open(filename);
    if (myfile.is_open()){
        getline(myfile,line);
        s << myfile.rdbuf();
        s >> width >> height;
        s >> maxvalue;
        initImage();
        for(int i=0;i<height;i++){
            for(int j =0;j<width;j++){
                s >> data[i][j];
            }
        }

    }
    myfile.close();
}

void PGM::thresholding(int th, char* filename){
    for(int i=0;i<height;i++){
        for(int j =0;j<width;j++){
            if (data[i][j] > th) {
                data[i][j] = 255;
            }
            else {
                data[i][j] = 0;
            }
        }

    }
    this->writeFile(filename);
}

void PGM::filterImage(char* filename, int k){
    this->readFile(filename);
    int tab(k*k);




























































































}