#include "forme.h"

// constructors
forme_t::forme_t(point_t const& point) {
    this->pt.setX(point.getX());
    this->pt.setY(point.getY());
}

// destructor
forme_t::~forme_t() {
}

// surcharge
void forme_t::operator+=(const forme_t& forme) {
    this->pt += forme.get();
}