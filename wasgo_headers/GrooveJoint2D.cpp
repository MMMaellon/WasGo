/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "GrooveJoint2D.h"
float GrooveJoint2D::get_initial_offset(){
	return (float) _wasgo_GrooveJoint2D_wrapper_get_initial_offset(wasgo_id);
}
float GrooveJoint2D::get_length(){
	return (float) _wasgo_GrooveJoint2D_wrapper_get_length(wasgo_id);
}
void GrooveJoint2D::set_initial_offset(float p_offset){
	_wasgo_GrooveJoint2D_wrapper_set_initial_offset(wasgo_id, p_offset);
}
void GrooveJoint2D::set_length(float p_length){
	_wasgo_GrooveJoint2D_wrapper_set_length(wasgo_id, p_length);
}

GrooveJoint2D::GrooveJoint2D(WasGoId p_wasgo_id) : Joint2D(p_wasgo_id){
}
GrooveJoint2D::GrooveJoint2D(){
    wasgo_id = _wasgo_GrooveJoint2D_constructor();
}
GrooveJoint2D::~GrooveJoint2D(){
    _wasgo_GrooveJoint2D_destructor(wasgo_id);
}