#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"
#include "point.h"

class rectangle_t : public forme_t {
protected:
    // point_t pts[4];
    unsigned int longueur;
    unsigned int largeur;
public:
    rectangle_t(const point_t&, const unsigned int&, const unsigned int&);

    // methodes
    void setLongueur(const unsigned int& p) {longueur = p;}
    void setLargeur(const unsigned int& p) {largeur = p;}
    unsigned int getLongueur()const {return longueur;}
    unsigned int getLargeur()const {return largeur;}

    virtual float perimetre()const;
    virtual float surface()const;
};

#endif