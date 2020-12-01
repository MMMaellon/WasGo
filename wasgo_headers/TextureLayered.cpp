/* THIS FILE IS GENERATED */
#include "TextureLayered.h"
void TextureLayered::create(int p_width, int p_height, int p_depth, Image::Format p_format, int p_flags = (int) 4){
	_wasgo_TextureLayered_wrapper_create(wasgo_id, p_width, p_height, p_depth, ((Variant) p_format).get_wasgo_id(), p_flags);
}
int TextureLayered::get_depth(){
	return (int) _wasgo_TextureLayered_wrapper_get_depth(wasgo_id);
}
int TextureLayered::get_flags(){
	return (int) _wasgo_TextureLayered_wrapper_get_flags(wasgo_id);
}
Image::Format TextureLayered::get_format(){
	return Image::Format::from_wasgo_id(_wasgo_TextureLayered_wrapper_get_format(wasgo_id));
}
int TextureLayered::get_height(){
	return (int) _wasgo_TextureLayered_wrapper_get_height(wasgo_id);
}
Image TextureLayered::get_layer_data(int p_layer){
	return Image::from_wasgo_id(_wasgo_TextureLayered_wrapper_get_layer_data(wasgo_id, p_layer));
}
int TextureLayered::get_width(){
	return (int) _wasgo_TextureLayered_wrapper_get_width(wasgo_id);
}
void TextureLayered::set_data_partial(Image p_image, int p_x_offset, int p_y_offset, int p_layer, int p_mipmap = (int) 0){
	_wasgo_TextureLayered_wrapper_set_data_partial(wasgo_id, ((Variant) p_image).get_wasgo_id(), p_x_offset, p_y_offset, p_layer, p_mipmap);
}
void TextureLayered::set_flags(int p_flags){
	_wasgo_TextureLayered_wrapper_set_flags(wasgo_id, p_flags);
}
void TextureLayered::set_layer_data(Image p_image, int p_layer){
	_wasgo_TextureLayered_wrapper_set_layer_data(wasgo_id, ((Variant) p_image).get_wasgo_id(), p_layer);
}