

#ifndef TP3_TP3_H
#define TP3_TP3_H

class Point {
private:
    double x;
    double y;
public:
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    double distance(Point P);
    Point milieu (Point P);
    //------Nouveau------
    Point();
    Point(double,double);
    Point(double);
};

#endif //TP3_TP3_H
