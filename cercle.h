#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"
#include "point.h"

class cercle_t : public forme_t {
private:
    unsigned int rayon;
public:
    // constructors
    cercle_t(const point_t&, unsigned int);

    // methodes
    unsigned int getR()const {return rayon;}
    void setR(const unsigned int& p) {rayon = p;}

    float perimetre()const;
    float surface()const;
};

#endif