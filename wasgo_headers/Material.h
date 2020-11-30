/* THIS FILE IS GENERATED */
#ifndef MATERIAL_H
#define MATERIAL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Resource.h"
class Material : public Resource{
Material get_next_pass();
int get_render_priority();
void set_next_pass(Material p_next_pass);
void set_render_priority(int p_priority);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Material_wrapper_get_next_pass(WasGoId wasgo_id);
int _wasgo_Material_wrapper_get_render_priority(WasGoId wasgo_id);
void _wasgo_Material_wrapper_set_next_pass(WasGoId wasgo_id, WasGo::WasGoId p_next_pass);
void _wasgo_Material_wrapper_set_render_priority(WasGoId wasgo_id, int p_priority);
}
#endif