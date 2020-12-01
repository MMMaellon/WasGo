/* THIS FILE IS GENERATED */
#ifndef JOINT2D_H
#define JOINT2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "NodePath.h"
class Joint2D : public Node2D{
public:
float get_bias();
bool get_exclude_nodes_from_collision();
NodePath get_node_a();
NodePath get_node_b();
void set_bias(float p_bias);
void set_exclude_nodes_from_collision(bool p_enable);
void set_node_a(NodePath p_node);
void set_node_b(NodePath p_node);
};


//Wrapper Functions
extern "C"{
float _wasgo_Joint2D_wrapper_get_bias(WasGoId wasgo_id);
int _wasgo_Joint2D_wrapper_get_exclude_nodes_from_collision(WasGoId wasgo_id);
WasGoId _wasgo_Joint2D_wrapper_get_node_a(WasGoId wasgo_id);
WasGoId _wasgo_Joint2D_wrapper_get_node_b(WasGoId wasgo_id);
void _wasgo_Joint2D_wrapper_set_bias(WasGoId wasgo_id, float p_bias);
void _wasgo_Joint2D_wrapper_set_exclude_nodes_from_collision(WasGoId wasgo_id, bool p_enable);
void _wasgo_Joint2D_wrapper_set_node_a(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_Joint2D_wrapper_set_node_b(WasGoId wasgo_id, WasGoId p_node);
}
#endif