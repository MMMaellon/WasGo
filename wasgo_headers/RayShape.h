/* THIS FILE IS GENERATED */
#ifndef RAYSHAPE_H
#define RAYSHAPE_H

#include <stdint.h>

#include "Shape.h"
class RayShape : public Shape{
public: RayShape();
float  get_length();
float  get_length();
bool  get_slips_on_slope();
bool  get_slips_on_slope();
void  set_length(float length);
void  set_slips_on_slope(bool active);
};
#endif