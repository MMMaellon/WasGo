/* THIS FILE IS GENERATED */
#ifndef PINJOINT_H
#define PINJOINT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Joint.h"
class PinJoint : public Joint{
public:
enum Param{
PARAM_BIAS,
PARAM_DAMPING,
PARAM_IMPULSE_CLAMP
};
float get_param(PinJoint::Param p_param);
void set_param(PinJoint::Param p_param, float p_value);

PinJoint(WasGoId p_wasgo_id);
~PinJoint();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_PinJoint_wrapper_get_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_PinJoint_wrapper_set_param(WasGoId wasgo_id, WasGoId p_param, float p_value);
}
#endif