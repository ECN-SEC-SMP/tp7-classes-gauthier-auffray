#include <iostream>
#include "point.h"

std::ostream& operator<<(std::ostream& s, const point_t pt) {
    s << "Abs : " << pt.getX() << "   Ord : " << pt.getY() << std::endl;
    return s;
}

int main() {
    point_t pt1;
    point_t pt2(3, 4);


    return 0;
}
