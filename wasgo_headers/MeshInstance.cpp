/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "MeshInstance.h"
void MeshInstance::create_convex_collision(){
	_wasgo_MeshInstance_wrapper_create_convex_collision(wasgo_id);
}
void MeshInstance::create_debug_tangents(){
	_wasgo_MeshInstance_wrapper_create_debug_tangents(wasgo_id);
}
void MeshInstance::create_trimesh_collision(){
	_wasgo_MeshInstance_wrapper_create_trimesh_collision(wasgo_id);
}
Material MeshInstance::get_active_material(int p_surface){
	return Material(_wasgo_MeshInstance_wrapper_get_active_material(wasgo_id, p_surface));
}
Mesh MeshInstance::get_mesh(){
	return Mesh(_wasgo_MeshInstance_wrapper_get_mesh(wasgo_id));
}
NodePath MeshInstance::get_skeleton_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_MeshInstance_wrapper_get_skeleton_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (NodePath) wasgo_ret;
    
}
Skin MeshInstance::get_skin(){
	return Skin(_wasgo_MeshInstance_wrapper_get_skin(wasgo_id));
}
Material MeshInstance::get_surface_material(int p_surface){
	return Material(_wasgo_MeshInstance_wrapper_get_surface_material(wasgo_id, p_surface));
}
int MeshInstance::get_surface_material_count(){
	return (int) _wasgo_MeshInstance_wrapper_get_surface_material_count(wasgo_id);
}
bool MeshInstance::is_software_skinning_transform_normals_enabled(){
	return (bool) _wasgo_MeshInstance_wrapper_is_software_skinning_transform_normals_enabled(wasgo_id);
}
void MeshInstance::set_mesh(Mesh p_mesh){
	_wasgo_MeshInstance_wrapper_set_mesh(wasgo_id, p_mesh._get_wasgo_id());
}
void MeshInstance::set_skeleton_path(NodePath p_skeleton_path){

    Variant wasgo_var_skeleton_path = p_skeleton_path;
    uint8_t wasgo_buffer_skeleton_path[256];
    int wasgo_size_skeleton_path = 256;
    encode_variant(wasgo_var_skeleton_path, wasgo_buffer_skeleton_path, wasgo_size_skeleton_path);
    
	_wasgo_MeshInstance_wrapper_set_skeleton_path(wasgo_id, wasgo_buffer_skeleton_path, wasgo_size_skeleton_path);
}
void MeshInstance::set_skin(Skin p_skin){
	_wasgo_MeshInstance_wrapper_set_skin(wasgo_id, p_skin._get_wasgo_id());
}
void MeshInstance::set_software_skinning_transform_normals(bool p_enabled){
	_wasgo_MeshInstance_wrapper_set_software_skinning_transform_normals(wasgo_id, p_enabled);
}
void MeshInstance::set_surface_material(int p_surface, Material p_material){
	_wasgo_MeshInstance_wrapper_set_surface_material(wasgo_id, p_surface, p_material._get_wasgo_id());
}

MeshInstance::MeshInstance(WasGoId p_wasgo_id) : GeometryInstance(p_wasgo_id){
}
MeshInstance::MeshInstance(){
    wasgo_id = _wasgo_MeshInstance_constructor();
}
MeshInstance::~MeshInstance(){
    _wasgo_MeshInstance_destructor(wasgo_id);
}