/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECUBEMAP_H
#define VISUALSHADERNODECUBEMAP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "VisualShaderNode.h"
#include "CubeMap.h"
class VisualShaderNodeCubeMap : public VisualShaderNode{
enum Source{
SOURCE_TEXTURE,
SOURCE_PORT
};
enum TextureType{
TYPE_DATA,
TYPE_COLOR,
TYPE_NORMALMAP
};
CubeMap get_cube_map();
VisualShaderNodeCubeMap::Source get_source();
VisualShaderNodeCubeMap::TextureType get_texture_type();
void set_cube_map(CubeMap p_value);
void set_source(VisualShaderNodeCubeMap::Source p_value);
void set_texture_type(VisualShaderNodeCubeMap::TextureType p_value);

VisualShaderNodeCubeMap(WasGoId p_wasgo_id);
~VisualShaderNodeCubeMap();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_VisualShaderNodeCubeMap_wrapper_get_cube_map(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualShaderNodeCubeMap_wrapper_get_source(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualShaderNodeCubeMap_wrapper_get_texture_type(WasGoId wasgo_id);
void _wasgo_VisualShaderNodeCubeMap_wrapper_set_cube_map(WasGoId wasgo_id, WasGo::WasGoId p_value);
void _wasgo_VisualShaderNodeCubeMap_wrapper_set_source(WasGoId wasgo_id, WasGo::WasGoId p_value);
void _wasgo_VisualShaderNodeCubeMap_wrapper_set_texture_type(WasGoId wasgo_id, WasGo::WasGoId p_value);
}
#endif