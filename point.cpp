#include "point.h"

// constructors
point_t::point_t(int abs, int ord) {
    this->x = abs;
    this->y = ord;
}

point_t::point_t(const point_t& pt) {
    this->x = pt.getX();
    this->y = pt.getY();
}

// destructor
point_t::~point_t() {
}

// methodes
void point_t::translater(const point_t pt) {
    this->x = pt.getX();
    this->y = pt.getY();
}

void point_t::translater(const int abs, const int ord) {
    this->x += abs;
    this->y += ord;
}