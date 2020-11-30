/* THIS FILE IS GENERATED */
#ifndef INPUTEVENTPANGESTURE_H
#define INPUTEVENTPANGESTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "InputEventGesture.h"
class InputEventPanGesture : public InputEventGesture{
Vector2 get_delta();
void set_delta(Vector2 p_delta);

InputEventPanGesture(WasGoId p_wasgo_id);
~InputEventPanGesture();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_InputEventPanGesture_wrapper_get_delta(WasGoId wasgo_id);
void _wasgo_InputEventPanGesture_wrapper_set_delta(WasGoId wasgo_id, WasGo::WasGoId p_delta);
}
#endif