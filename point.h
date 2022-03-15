#ifndef POINT_H
#define POINT_H

class point_t {
private:
    int x, y;
public:
    point_t(int, int);
    ~point_t();

    // seters
    void setX(int p) {x = p;}
    void setY(int p) {y = p;}

    // geters
    int getX() {return x;}
    int getY() {return y;}

    // methodes
    void translater(point_t);
    void translater(int, int);
};

#endif