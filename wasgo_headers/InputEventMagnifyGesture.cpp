/* THIS FILE IS GENERATED */
#include "InputEventMagnifyGesture.h"
float InputEventMagnifyGesture::get_factor(){
	return (float) _wasgo_InputEventMagnifyGesture_wrapper_get_factor(wasgo_id));
}
void InputEventMagnifyGesture::set_factor(float p_factor){
	_wasgo_InputEventMagnifyGesture_wrapper_set_factor(wasgo_id, factor);
}

InputEventMagnifyGesture::InputEventMagnifyGesture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
InputEventMagnifyGesture::~InputEventMagnifyGesture(){
}