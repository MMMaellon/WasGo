/* THIS FILE IS GENERATED */
#include "VisualShaderNodeScalarConstant.h"
float VisualShaderNodeScalarConstant::get_constant(){
	return (float) _wasgo_VisualShaderNodeScalarConstant_wrapper_get_constant(wasgo_id));
}
void VisualShaderNodeScalarConstant::set_constant(float p_value){
	_wasgo_VisualShaderNodeScalarConstant_wrapper_set_constant(wasgo_id, value);
}

VisualShaderNodeScalarConstant::VisualShaderNodeScalarConstant(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisualShaderNodeScalarConstant::~VisualShaderNodeScalarConstant(){
}