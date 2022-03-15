#include <iostream>
#include "point.h"
#include "forme.h"
#include "cercle.h"
#include "rectangle.h"
#include "carre.h"

std::ostream& operator<<(std::ostream& s, const point_t& pt);
std::ostream& operator<<(std::ostream& s, const forme_t& forme);
std::ostream& operator<<(std::ostream& s, const cercle_t& cercle);
std::ostream& operator<<(std::ostream& s, const rectangle_t& rectangle);
std::ostream& operator<<(std::ostream& s, const carre_t& carre);

int main() {
    point_t pt1;
    point_t pt2(3, 4);
    point_t pt3(-6, -3);

    cercle_t cercle1(pt1, 5);
    rectangle_t rectangle1(pt2, 5, 6);
    carre_t carre1(pt3, 4);

    std::cout << pt1;
    std::cout << cercle1 << rectangle1 << carre1;
    return 0;
}

// surdefinition << point
std::ostream& operator<<(std::ostream& s, const point_t& pt) {
    s << "Abs : " << pt.getX() << "\tOrd : " << pt.getY() << std::endl;
    return s;
}

// surdefinition << forme
std::ostream& operator<<(std::ostream& s, const forme_t& forme) {
    s << "FORME \nCentre : " << forme.get();
    return s;
}

// surdefinition << cercle
std::ostream& operator<<(std::ostream& s, const cercle_t& cercle) {
    s << "CERCLE \nCentre : " << cercle.get() << "\tRayon : " << cercle.getR() << std::endl;
    return s;
}

// surdefinition << rectangle
std::ostream& operator<<(std::ostream& s, const rectangle_t& rectangle) {
    s << "RECTANGLE \nCentre : " << rectangle.get();
    s << "\tLongueur : " << rectangle.getLongueur() << "\tLargeur : " << rectangle.getLargeur() << std::endl;
    return s;
}

// surdefinition << carre
std::ostream& operator<<(std::ostream& s, const carre_t& carre) {
    s << "CARRE \nCentre : " << carre.get();
    s << "\tLongueur : " << carre.getLongueur() << "\tLargeur : " << carre.getLargeur() << std::endl;
    return s;
}