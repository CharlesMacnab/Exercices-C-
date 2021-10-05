

#ifndef TP2_POINT_H
#define TP2_POINT_H

class Point1{
private:
    double x;
    double y;
public:
    void setX_dyn(double x);
    void setY_dyn(double y);
    double getX_dyn();
    double getY_dyn();
    double distance_dyn(Point1* P);
    Point1* milieu_dyn (Point1* P);
};

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
};

#endif //TP2_POINT_H
