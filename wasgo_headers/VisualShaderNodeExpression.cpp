/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VisualShaderNodeExpression.h"
String VisualShaderNodeExpression::get_expression(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_VisualShaderNodeExpression_wrapper_get_expression(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void VisualShaderNodeExpression::set_expression(String p_expression){

    Variant wasgo_var_expression = p_expression;
    uint8_t wasgo_buffer_expression[256];
    int wasgo_size_expression = 256;
    encode_variant(wasgo_var_expression, wasgo_buffer_expression, wasgo_size_expression);
    
	_wasgo_VisualShaderNodeExpression_wrapper_set_expression(wasgo_id, wasgo_buffer_expression, wasgo_size_expression);
}

VisualShaderNodeExpression::VisualShaderNodeExpression(WasGoId p_wasgo_id) : VisualShaderNodeGroupBase(p_wasgo_id){
}
VisualShaderNodeExpression::VisualShaderNodeExpression(){
    wasgo_id = _wasgo_VisualShaderNodeExpression_constructor();
}
VisualShaderNodeExpression::~VisualShaderNodeExpression(){
    _wasgo_VisualShaderNodeExpression_destructor(wasgo_id);
}