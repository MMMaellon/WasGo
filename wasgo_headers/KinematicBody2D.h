/* THIS FILE IS GENERATED */
#ifndef KINEMATICBODY2D_H
#define KINEMATICBODY2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "PhysicsBody2D.h"
#include "KinematicCollision2D.h"
class KinematicBody2D : public PhysicsBody2D{
Vector2 get_floor_normal();
Vector2 get_floor_velocity();
float get_safe_margin();
KinematicCollision2D get_slide_collision(int p_slide_idx);
int get_slide_count();
bool is_on_ceiling();
bool is_on_floor();
bool is_on_wall();
bool is_sync_to_physics_enabled();
KinematicCollision2D move_and_collide(Vector2 p_rel_vec, bool p_infinite_inertia = (bool) True, bool p_exclude_raycast_shapes = (bool) True, bool p_test_only = (bool) False);
Vector2 move_and_slide(Vector2 p_linear_velocity, Vector2 p_up_direction = (Vector2) (0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True);
Vector2 move_and_slide_with_snap(Vector2 p_linear_velocity, Vector2 p_snap, Vector2 p_up_direction = (Vector2) (0, 0), bool p_stop_on_slope = (bool) False, int p_max_slides = (int) 4, float p_floor_max_angle = (float) 0.785398, bool p_infinite_inertia = (bool) True);
void set_safe_margin(float p_pixels);
void set_sync_to_physics(bool p_enable);
bool test_move(Transform2D p_from, Vector2 p_rel_vec, bool p_infinite_inertia = (bool) True);

KinematicBody2D(WasGoId p_wasgo_id);
~KinematicBody2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_KinematicBody2D_wrapper_get_floor_normal(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_KinematicBody2D_wrapper_get_floor_velocity(WasGoId wasgo_id);
float _wasgo_KinematicBody2D_wrapper_get_safe_margin(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_KinematicBody2D_wrapper_get_slide_collision(WasGoId wasgo_id, int p_slide_idx);
int _wasgo_KinematicBody2D_wrapper_get_slide_count(WasGoId wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_on_ceiling(WasGoId wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_on_floor(WasGoId wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_on_wall(WasGoId wasgo_id);
int _wasgo_KinematicBody2D_wrapper_is_sync_to_physics_enabled(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_KinematicBody2D_wrapper_move_and_collide(WasGoId wasgo_id, WasGo::WasGoId p_rel_vec, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only);
WasGo::WasGoId _wasgo_KinematicBody2D_wrapper_move_and_slide(WasGoId wasgo_id, WasGo::WasGoId p_linear_velocity, WasGo::WasGoId p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
WasGo::WasGoId _wasgo_KinematicBody2D_wrapper_move_and_slide_with_snap(WasGoId wasgo_id, WasGo::WasGoId p_linear_velocity, WasGo::WasGoId p_snap, WasGo::WasGoId p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia);
void _wasgo_KinematicBody2D_wrapper_set_safe_margin(WasGoId wasgo_id, float p_pixels);
void _wasgo_KinematicBody2D_wrapper_set_sync_to_physics(WasGoId wasgo_id, bool p_enable);
int _wasgo_KinematicBody2D_wrapper_test_move(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_rel_vec, bool p_infinite_inertia);
}
#endif