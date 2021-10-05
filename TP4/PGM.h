#include <iostream>

#ifndef TP4_PGM_H
#define TP4_PGM_H

class PGM{

private:
    int width;
    int height;
    int maxvalue;
    int** data;
    int counter=0;

public:
    void set_width (int width);
    void set_height (int height);
    void set_maxvalue (int maxvalue);
    void set_data (int** data);

    int** initImage();
    void deleteImage();
    int** createImage(int minpix = 0, int maxpix = 255);
    void afficherImage();
    void writeFile(char* filename);
    void nbImage();
    void drawrect (int x1, int y1, int x2, int y2, int val);
    void drawline(int x1, int x2, int line, int val);
    void drawcross(int x, int y, int val);
    void readFile(char* filename);
    void thresholding(int th, char* filename);
    void filterImage(char* filename, int k);


    PGM();
    PGM(int height, int witdh, int minpix, int maxpix);
    ~PGM();
    PGM(PGM const& p);
};

#endif //TP4_PGM_H
