/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeScalarOp.h"
VisualShaderNodeScalarOp::Operator VisualShaderNodeScalarOp::get_operator(){
	return VisualShaderNodeScalarOp::Operator(_wasgo_VisualShaderNodeScalarOp_wrapper_get_operator(wasgo_id));
}
void VisualShaderNodeScalarOp::set_operator(VisualShaderNodeScalarOp::Operator p_op){
	_wasgo_VisualShaderNodeScalarOp_wrapper_set_operator(wasgo_id, p_op._get_wasgo_id());
}

VisualShaderNodeScalarOp::VisualShaderNodeScalarOp(WasGoId p_wasgo_id) : VisualShaderNode(p_wasgo_id){
}
VisualShaderNodeScalarOp::VisualShaderNodeScalarOp(){
    wasgo_id = _wasgo_VisualShaderNodeScalarOp_constructor();
}
VisualShaderNodeScalarOp::~VisualShaderNodeScalarOp(){
    _wasgo_VisualShaderNodeScalarOp_destructor(wasgo_id);
}