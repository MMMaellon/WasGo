/* THIS FILE IS GENERATED */
#ifndef REMOTETRANSFORM_H
#define REMOTETRANSFORM_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Variant.h"
class RemoteTransform : public Spatial{
void force_update_cache();
NodePath get_remote_node();
bool get_update_position();
bool get_update_rotation();
bool get_update_scale();
bool get_use_global_coordinates();
void set_remote_node(NodePath p_path);
void set_update_position(bool p_update_remote_position);
void set_update_rotation(bool p_update_remote_rotation);
void set_update_scale(bool p_update_remote_scale);
void set_use_global_coordinates(bool p_use_global_coordinates);

RemoteTransform(WasGoId p_wasgo_id);
~RemoteTransform();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RemoteTransform_wrapper_force_update_cache(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_RemoteTransform_wrapper_get_remote_node(WasGoId wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_update_position(WasGoId wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_update_rotation(WasGoId wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_update_scale(WasGoId wasgo_id);
int _wasgo_RemoteTransform_wrapper_get_use_global_coordinates(WasGoId wasgo_id);
void _wasgo_RemoteTransform_wrapper_set_remote_node(WasGoId wasgo_id, WasGo::WasGoId p_path);
void _wasgo_RemoteTransform_wrapper_set_update_position(WasGoId wasgo_id, bool p_update_remote_position);
void _wasgo_RemoteTransform_wrapper_set_update_rotation(WasGoId wasgo_id, bool p_update_remote_rotation);
void _wasgo_RemoteTransform_wrapper_set_update_scale(WasGoId wasgo_id, bool p_update_remote_scale);
void _wasgo_RemoteTransform_wrapper_set_use_global_coordinates(WasGoId wasgo_id, bool p_use_global_coordinates);
}
#endif