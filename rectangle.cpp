#include "rectangle.h"

rectangle_t::rectangle_t(const point_t& centre, const unsigned int& lon, const unsigned int& lar) : forme_t(centre) {
    this->longueur = lon;
    this->largeur = lar;
    // pts[0].set(pt1);
    // pts[1].setX(pt1.getX());
    // pts[1].setY(pt2.getY());
    // pts[2].set(pt2);
    // pts[3].setX(pt2.getX());
    // pts[3].setY(pt1.getY());
}

// methodes
float rectangle_t::perimetre()const {
    return (longueur * 2 + largeur * 2);
}
float rectangle_t::surface()const {
    return (longueur * largeur);
}