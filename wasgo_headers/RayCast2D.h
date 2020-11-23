/* THIS FILE IS GENERATED */
#ifndef RAYCAST2D_H
#define RAYCAST2D_H

#include <stdint.h>

#include "Vector2.h"
#include "Object.h"
#include "RID.h"
#include "Node2D.h"
class RayCast2D : public Node2D{
public: RayCast2D();
void  add_exception(Object node);
void  add_exception_rid(RID rid);
void  clear_exceptions();
void  clear_exceptions();
void  force_raycast_update();
void  force_raycast_update();
Vector2  get_cast_to();
Vector2  get_cast_to();
Object  get_collider();
Object  get_collider();
int  get_collider_shape();
int  get_collider_shape();
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
Vector2  get_collision_normal();
Vector2  get_collision_normal();
Vector2  get_collision_point();
Vector2  get_collision_point();
bool  get_exclude_parent_body();
bool  get_exclude_parent_body();
bool  is_collide_with_areas_enabled();
bool  is_collide_with_areas_enabled();
bool  is_collide_with_bodies_enabled();
bool  is_collide_with_bodies_enabled();
bool  is_colliding();
bool  is_colliding();
bool  is_enabled();
bool  is_enabled();
void  remove_exception(Object node);
void  remove_exception_rid(RID rid);
void  set_cast_to(Vector2 local_point);
void  set_collide_with_areas(bool enable);
void  set_collide_with_bodies(bool enable);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_enabled(bool enabled);
void  set_exclude_parent_body(bool mask);
};
#endif