/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Expression.h"
Variant Expression::execute(Array p_inputs = (Array) [], Object p_base_instance = (Object) "", bool p_show_error = (bool) true){
	return Variant(_wasgo_Expression_wrapper_execute(wasgo_id, p_inputs._get_wasgo_id(), p_base_instance._get_wasgo_id(), p_show_error));
}
String Expression::get_error_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Expression_wrapper_get_error_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
bool Expression::has_execute_failed(){
	return (bool) _wasgo_Expression_wrapper_has_execute_failed(wasgo_id);
}
Error Expression::parse(String p_expression, PoolStringArray p_input_names = (PoolStringArray) []){

    Variant wasgo_var_expression = p_expression;
    uint8_t wasgo_buffer_expression[256];
    int wasgo_size_expression = 256;
    encode_variant(wasgo_var_expression, wasgo_buffer_expression, wasgo_size_expression);
    
	return Error(_wasgo_Expression_wrapper_parse(wasgo_id, wasgo_buffer_expression, wasgo_size_expression, p_input_names._get_wasgo_id()));
}

Expression::Expression(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
Expression::Expression(){
    wasgo_id = _wasgo_Expression_constructor();
}
Expression::~Expression(){
    _wasgo_Expression_destructor(wasgo_id);
}