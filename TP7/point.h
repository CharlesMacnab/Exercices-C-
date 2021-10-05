//
// Created by charl on 12/12/2019.
//

#ifndef TP7_POINT_H
#define TP7_POINT_H

template<class T> class point{
private:
    T x;
    T y;
public:
    point(T abs, T ord);

    ~point();

    T getX();
    T getY();
    void setX(T abs);
    void setY(T ord);
};

template<class T> point<T> :: point(T abs, T ord){
    setX(abs);
    setY(ord);
}

template<class T> T point<T> :: getX(){
    return x;
}
template<class T> T point<T> :: getY(){
    return y;
}
template<class T> void point<T> :: setX(T abs){
    x = abs;
}
template<class T> void point<T> :: setY(T ord){
    y = ord;
}

template<class T> point<T>::~point() {
}

#endif //TP7_POINT_H
