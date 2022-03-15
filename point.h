#ifndef POINT_H
#define POINT_H

class point_t {
private:
    int x, y;
    int& ref = x;
public:
    // constructors
    point_t(int abs = 0, int odr = 0);
    point_t(const point_t&);

    // destructor
    ~point_t() {}

    // seters
    void setX(const int p) {x = p;}
    void setY(const int p) {y = p;}

    // geters
    int getX()const {return x;}
    int getY()const {return y;}

    // methodes
    void translater(const point_t);
    void translater(const int, const int);

    // surcharge operators
    point_t operator+=(const point_t);
};

#endif