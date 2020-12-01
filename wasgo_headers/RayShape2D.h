/* THIS FILE IS GENERATED */
#ifndef RAYSHAPE2D_H
#define RAYSHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Shape2D.h"
class RayShape2D : public Shape2D{
public:
float get_length();
bool get_slips_on_slope();
void set_length(float p_length);
void set_slips_on_slope(bool p_active);

RayShape2D(WasGoId p_wasgo_id);
~RayShape2D();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_RayShape2D_wrapper_get_length(WasGoId wasgo_id);
int _wasgo_RayShape2D_wrapper_get_slips_on_slope(WasGoId wasgo_id);
void _wasgo_RayShape2D_wrapper_set_length(WasGoId wasgo_id, float p_length);
void _wasgo_RayShape2D_wrapper_set_slips_on_slope(WasGoId wasgo_id, bool p_active);
}
#endif