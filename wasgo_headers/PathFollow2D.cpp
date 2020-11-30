/* THIS FILE IS GENERATED */
#include "PathFollow2D.h"
bool PathFollow2D::get_cubic_interpolation(){
	return (bool) _wasgo_PathFollow2D_wrapper_get_cubic_interpolation(wasgo_id));
}
float PathFollow2D::get_h_offset(){
	return (float) _wasgo_PathFollow2D_wrapper_get_h_offset(wasgo_id));
}
float PathFollow2D::get_lookahead(){
	return (float) _wasgo_PathFollow2D_wrapper_get_lookahead(wasgo_id));
}
float PathFollow2D::get_offset(){
	return (float) _wasgo_PathFollow2D_wrapper_get_offset(wasgo_id));
}
float PathFollow2D::get_unit_offset(){
	return (float) _wasgo_PathFollow2D_wrapper_get_unit_offset(wasgo_id));
}
float PathFollow2D::get_v_offset(){
	return (float) _wasgo_PathFollow2D_wrapper_get_v_offset(wasgo_id));
}
bool PathFollow2D::has_loop(){
	return (bool) _wasgo_PathFollow2D_wrapper_has_loop(wasgo_id));
}
bool PathFollow2D::is_rotating(){
	return (bool) _wasgo_PathFollow2D_wrapper_is_rotating(wasgo_id));
}
void PathFollow2D::set_cubic_interpolation(bool p_enable){
	_wasgo_PathFollow2D_wrapper_set_cubic_interpolation(wasgo_id, enable);
}
void PathFollow2D::set_h_offset(float p_h_offset){
	_wasgo_PathFollow2D_wrapper_set_h_offset(wasgo_id, h_offset);
}
void PathFollow2D::set_lookahead(float p_lookahead){
	_wasgo_PathFollow2D_wrapper_set_lookahead(wasgo_id, lookahead);
}
void PathFollow2D::set_loop(bool p_loop){
	_wasgo_PathFollow2D_wrapper_set_loop(wasgo_id, loop);
}
void PathFollow2D::set_offset(float p_offset){
	_wasgo_PathFollow2D_wrapper_set_offset(wasgo_id, offset);
}
void PathFollow2D::set_rotate(bool p_enable){
	_wasgo_PathFollow2D_wrapper_set_rotate(wasgo_id, enable);
}
void PathFollow2D::set_unit_offset(float p_unit_offset){
	_wasgo_PathFollow2D_wrapper_set_unit_offset(wasgo_id, unit_offset);
}
void PathFollow2D::set_v_offset(float p_v_offset){
	_wasgo_PathFollow2D_wrapper_set_v_offset(wasgo_id, v_offset);
}

PathFollow2D::PathFollow2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
PathFollow2D::~PathFollow2D(){
}