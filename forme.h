#ifndef FORME_H
#define FORME_H

#include "point.h"

class forme_t {
protected:
    point_t pt;
public:
    // constructors
    forme_t(point_t const&);

    // destructor
    ~forme_t();

    // geters
    point_t get()const {return pt;}

    // surcharge
    void operator+=(const forme_t&);

    // methodes
    virtual float perimetre()const=0;
    virtual float surface()const=0;
};

#endif