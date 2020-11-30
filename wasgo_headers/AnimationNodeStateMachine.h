/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINE_H
#define ANIMATIONNODESTATEMACHINE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AnimationRootNode.h"
#include "Variant.h"
#include "AnimationNodeStateMachineTransition.h"
#include "AnimationNode.h"
class AnimationNodeStateMachine : public AnimationRootNode{
void add_node(String p_name, AnimationNode p_node, Vector2 p_position = (Vector2) (0, 0));
void add_transition(String p_from, String p_to, AnimationNodeStateMachineTransition p_transition);
String get_end_node();
Vector2 get_graph_offset();
AnimationNode get_node(String p_name);
String get_node_name(AnimationNode p_node);
Vector2 get_node_position(String p_name);
String get_start_node();
AnimationNodeStateMachineTransition get_transition(int p_idx);
int get_transition_count();
String get_transition_from(int p_idx);
String get_transition_to(int p_idx);
bool has_node(String p_name);
bool has_transition(String p_from, String p_to);
void remove_node(String p_name);
void remove_transition(String p_from, String p_to);
void remove_transition_by_index(int p_idx);
void rename_node(String p_name, String p_new_name);
void replace_node(String p_name, AnimationNode p_node);
void set_end_node(String p_name);
void set_graph_offset(Vector2 p_offset);
void set_node_position(String p_name, Vector2 p_position);
void set_start_node(String p_name);

AnimationNodeStateMachine(WasGoId p_wasgo_id);
~AnimationNodeStateMachine();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AnimationNodeStateMachine_wrapper_add_node(WasGoId wasgo_id, WasGo::WasGoId p_name, WasGo::WasGoId p_node, WasGo::WasGoId p_position);
void _wasgo_AnimationNodeStateMachine_wrapper_add_transition(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to, WasGo::WasGoId p_transition);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_end_node(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_graph_offset(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_node(WasGoId wasgo_id, WasGo::WasGoId p_name);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_node_name(WasGoId wasgo_id, WasGo::WasGoId p_node);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_node_position(WasGoId wasgo_id, WasGo::WasGoId p_name);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_start_node(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_transition(WasGoId wasgo_id, int p_idx);
int _wasgo_AnimationNodeStateMachine_wrapper_get_transition_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_transition_from(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_AnimationNodeStateMachine_wrapper_get_transition_to(WasGoId wasgo_id, int p_idx);
int _wasgo_AnimationNodeStateMachine_wrapper_has_node(WasGoId wasgo_id, WasGo::WasGoId p_name);
int _wasgo_AnimationNodeStateMachine_wrapper_has_transition(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_node(WasGoId wasgo_id, WasGo::WasGoId p_name);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_transition(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to);
void _wasgo_AnimationNodeStateMachine_wrapper_remove_transition_by_index(WasGoId wasgo_id, int p_idx);
void _wasgo_AnimationNodeStateMachine_wrapper_rename_node(WasGoId wasgo_id, WasGo::WasGoId p_name, WasGo::WasGoId p_new_name);
void _wasgo_AnimationNodeStateMachine_wrapper_replace_node(WasGoId wasgo_id, WasGo::WasGoId p_name, WasGo::WasGoId p_node);
void _wasgo_AnimationNodeStateMachine_wrapper_set_end_node(WasGoId wasgo_id, WasGo::WasGoId p_name);
void _wasgo_AnimationNodeStateMachine_wrapper_set_graph_offset(WasGoId wasgo_id, WasGo::WasGoId p_offset);
void _wasgo_AnimationNodeStateMachine_wrapper_set_node_position(WasGoId wasgo_id, WasGo::WasGoId p_name, WasGo::WasGoId p_position);
void _wasgo_AnimationNodeStateMachine_wrapper_set_start_node(WasGoId wasgo_id, WasGo::WasGoId p_name);
}
#endif