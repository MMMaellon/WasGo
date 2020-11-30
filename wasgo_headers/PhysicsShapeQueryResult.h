/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYRESULT_H
#define PHYSICSSHAPEQUERYRESULT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Reference.h"
class PhysicsShapeQueryResult : public Reference{
int get_result_count();
Object get_result_object(int p_idx);
int get_result_object_id(int p_idx);
int get_result_object_shape(int p_idx);
RID get_result_rid(int p_idx);
};


//Wrapper Functions
extern "C"{
int _wasgo_PhysicsShapeQueryResult_wrapper_get_result_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object(WasGoId wasgo_id, int p_idx);
int _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_id(WasGoId wasgo_id, int p_idx);
int _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_shape(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_PhysicsShapeQueryResult_wrapper_get_result_rid(WasGoId wasgo_id, int p_idx);
}
#endif