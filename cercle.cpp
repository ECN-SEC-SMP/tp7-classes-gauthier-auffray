#include "cercle.h"
#include "forme.h"

cercle_t::cercle_t(const point_t& centre, unsigned int r) : forme_t(centre) {
    this->rayon = r;
}

// methodes
float cercle_t::perimetre()const {
    return (2 * rayon * 3,14159265);
}
float cercle_t::surface()const {
    return (3,14159265 * (rayon * rayon));
}