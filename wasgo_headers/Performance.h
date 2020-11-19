/* THIS FILE IS GENERATED */
#ifndef PERFORMANCE_H
#define PERFORMANCE_H

#include <stdint.h>

#include "Object.h"
class Performance : public Object{
public: Performance();
enum Monitor{
TIME_FPS: 0,
TIME_PROCESS: 1,
TIME_PHYSICS_PROCESS: 2,
MEMORY_STATIC: 3,
MEMORY_DYNAMIC: 4,
MEMORY_STATIC_MAX: 5,
MEMORY_DYNAMIC_MAX: 6,
MEMORY_MESSAGE_BUFFER_MAX: 7,
OBJECT_COUNT: 8,
OBJECT_RESOURCE_COUNT: 9,
OBJECT_NODE_COUNT: 10,
OBJECT_ORPHAN_NODE_COUNT: 11,
RENDER_OBJECTS_IN_FRAME: 12,
RENDER_VERTICES_IN_FRAME: 13,
RENDER_MATERIAL_CHANGES_IN_FRAME: 14,
RENDER_SHADER_CHANGES_IN_FRAME: 15,
RENDER_SURFACE_CHANGES_IN_FRAME: 16,
RENDER_DRAW_CALLS_IN_FRAME: 17,
RENDER_VIDEO_MEM_USED: 18,
RENDER_TEXTURE_MEM_USED: 19,
RENDER_VERTEX_MEM_USED: 20,
RENDER_USAGE_VIDEO_MEM_TOTAL: 21,
PHYSICS_2D_ACTIVE_OBJECTS: 22,
PHYSICS_2D_COLLISION_PAIRS: 23,
PHYSICS_2D_ISLAND_COUNT: 24,
PHYSICS_3D_ACTIVE_OBJECTS: 25,
PHYSICS_3D_COLLISION_PAIRS: 26,
PHYSICS_3D_ISLAND_COUNT: 27,
AUDIO_OUTPUT_LATENCY: 28,
};
float  get_monitor(int monitor);
};
#endif