/* THIS FILE IS GENERATED */
#ifndef SEGMENTSHAPE2D_H
#define SEGMENTSHAPE2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "Shape2D.h"
class SegmentShape2D : public Shape2D{
public:
Vector2 get_a();
Vector2 get_b();
void set_a(Vector2 p_a);
void set_b(Vector2 p_b);

SegmentShape2D(WasGoId p_wasgo_id);
~SegmentShape2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_SegmentShape2D_wrapper_get_a(WasGoId wasgo_id);
WasGoId _wasgo_SegmentShape2D_wrapper_get_b(WasGoId wasgo_id);
void _wasgo_SegmentShape2D_wrapper_set_a(WasGoId wasgo_id, WasGoId p_a);
void _wasgo_SegmentShape2D_wrapper_set_b(WasGoId wasgo_id, WasGoId p_b);
}
#endif