/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ArrayMesh.h"
void ArrayMesh::add_blend_shape(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ArrayMesh_wrapper_add_blend_shape(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
void ArrayMesh::add_surface_from_arrays(Mesh::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes = (Array) [], int p_compress_flags = (int) 97280){
	_wasgo_ArrayMesh_wrapper_add_surface_from_arrays(wasgo_id, p_primitive._get_wasgo_id(), p_arrays._get_wasgo_id(), p_blend_shapes._get_wasgo_id(), p_compress_flags);
}
void ArrayMesh::clear_blend_shapes(){
	_wasgo_ArrayMesh_wrapper_clear_blend_shapes(wasgo_id);
}
int ArrayMesh::get_blend_shape_count(){
	return (int) _wasgo_ArrayMesh_wrapper_get_blend_shape_count(wasgo_id);
}
Mesh::BlendShapeMode ArrayMesh::get_blend_shape_mode(){
	return Mesh::BlendShapeMode(_wasgo_ArrayMesh_wrapper_get_blend_shape_mode(wasgo_id));
}
String ArrayMesh::get_blend_shape_name(int p_index){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ArrayMesh_wrapper_get_blend_shape_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_index);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
::AABB ArrayMesh::get_custom_aabb(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 28;
    uint8_t wasgo_ret_buffer[28];
    _wasgo_ArrayMesh_wrapper_get_custom_aabb(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (AABB) wasgo_ret;
    
}
Error ArrayMesh::lightmap_unwrap(Transform p_transform, float p_texel_size){

    Variant wasgo_var_transform = p_transform;
    uint8_t wasgo_buffer_transform[52];
    int wasgo_size_transform = 52;
    encode_variant(wasgo_var_transform, wasgo_buffer_transform, wasgo_size_transform);
    
	return Error(_wasgo_ArrayMesh_wrapper_lightmap_unwrap(wasgo_id, wasgo_buffer_transform, wasgo_size_transform, p_texel_size));
}
void ArrayMesh::regen_normalmaps(){
	_wasgo_ArrayMesh_wrapper_regen_normalmaps(wasgo_id);
}
void ArrayMesh::set_blend_shape_mode(Mesh::BlendShapeMode p_mode){
	_wasgo_ArrayMesh_wrapper_set_blend_shape_mode(wasgo_id, p_mode._get_wasgo_id());
}
void ArrayMesh::set_custom_aabb(::AABB p_aabb){

    Variant wasgo_var_aabb = p_aabb;
    uint8_t wasgo_buffer_aabb[28];
    int wasgo_size_aabb = 28;
    encode_variant(wasgo_var_aabb, wasgo_buffer_aabb, wasgo_size_aabb);
    
	_wasgo_ArrayMesh_wrapper_set_custom_aabb(wasgo_id, wasgo_buffer_aabb, wasgo_size_aabb);
}
int ArrayMesh::surface_find_by_name(String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (int) _wasgo_ArrayMesh_wrapper_surface_find_by_name(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
int ArrayMesh::surface_get_array_index_len(int p_surf_idx){
	return (int) _wasgo_ArrayMesh_wrapper_surface_get_array_index_len(wasgo_id, p_surf_idx);
}
int ArrayMesh::surface_get_array_len(int p_surf_idx){
	return (int) _wasgo_ArrayMesh_wrapper_surface_get_array_len(wasgo_id, p_surf_idx);
}
int ArrayMesh::surface_get_format(int p_surf_idx){
	return (int) _wasgo_ArrayMesh_wrapper_surface_get_format(wasgo_id, p_surf_idx);
}
String ArrayMesh::surface_get_name(int p_surf_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_ArrayMesh_wrapper_surface_get_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_surf_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Mesh::PrimitiveType ArrayMesh::surface_get_primitive_type(int p_surf_idx){
	return Mesh::PrimitiveType(_wasgo_ArrayMesh_wrapper_surface_get_primitive_type(wasgo_id, p_surf_idx));
}
void ArrayMesh::surface_remove(int p_surf_idx){
	_wasgo_ArrayMesh_wrapper_surface_remove(wasgo_id, p_surf_idx);
}
void ArrayMesh::surface_set_name(int p_surf_idx, String p_name){

    Variant wasgo_var_name = p_name;
    uint8_t wasgo_buffer_name[256];
    int wasgo_size_name = 256;
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	_wasgo_ArrayMesh_wrapper_surface_set_name(wasgo_id, p_surf_idx, wasgo_buffer_name, wasgo_size_name);
}
void ArrayMesh::surface_update_region(int p_surf_idx, int p_offset, PoolByteArray p_data){
	_wasgo_ArrayMesh_wrapper_surface_update_region(wasgo_id, p_surf_idx, p_offset, p_data._get_wasgo_id());
}

ArrayMesh::ArrayMesh(WasGoId p_wasgo_id) : Mesh(p_wasgo_id){
}
ArrayMesh::ArrayMesh(){
    wasgo_id = _wasgo_ArrayMesh_constructor();
}
ArrayMesh::~ArrayMesh(){
    _wasgo_ArrayMesh_destructor(wasgo_id);
}