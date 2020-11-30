/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYPARAMETERS_H
#define PHYSICSSHAPEQUERYPARAMETERS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Resource.h"
class PhysicsShapeQueryParameters : public Reference{
int get_collision_mask();
Array get_exclude();
float get_margin();
RID get_shape_rid();
Transform get_transform();
bool is_collide_with_areas_enabled();
bool is_collide_with_bodies_enabled();
void set_collide_with_areas(bool p_enable);
void set_collide_with_bodies(bool p_enable);
void set_collision_mask(int p_collision_mask);
void set_exclude(Array p_exclude);
void set_margin(float p_margin);
void set_shape(Resource p_shape);
void set_shape_rid(RID p_shape);
void set_transform(Transform p_transform);

PhysicsShapeQueryParameters(WasGoId p_wasgo_id);
~PhysicsShapeQueryParameters();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PhysicsShapeQueryParameters_wrapper_get_collision_mask(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PhysicsShapeQueryParameters_wrapper_get_exclude(WasGoId wasgo_id);
float _wasgo_PhysicsShapeQueryParameters_wrapper_get_margin(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PhysicsShapeQueryParameters_wrapper_get_shape_rid(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PhysicsShapeQueryParameters_wrapper_get_transform(WasGoId wasgo_id);
int _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_areas_enabled(WasGoId wasgo_id);
int _wasgo_PhysicsShapeQueryParameters_wrapper_is_collide_with_bodies_enabled(WasGoId wasgo_id);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_areas(WasGoId wasgo_id, bool p_enable);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collide_with_bodies(WasGoId wasgo_id, bool p_enable);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_collision_mask(WasGoId wasgo_id, int p_collision_mask);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_exclude(WasGoId wasgo_id, WasGo::WasGoId p_exclude);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_margin(WasGoId wasgo_id, float p_margin);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_shape(WasGoId wasgo_id, WasGo::WasGoId p_shape);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_shape_rid(WasGoId wasgo_id, WasGo::WasGoId p_shape);
void _wasgo_PhysicsShapeQueryParameters_wrapper_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_transform);
}
#endif