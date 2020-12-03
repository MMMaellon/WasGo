/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "WindowDialog.h"
TextureButton WindowDialog::get_close_button(){
	return TextureButton(_wasgo_WindowDialog_wrapper_get_close_button(wasgo_id));
}
bool WindowDialog::get_resizable(){
	return (bool) _wasgo_WindowDialog_wrapper_get_resizable(wasgo_id);
}
String WindowDialog::get_title(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_WindowDialog_wrapper_get_title(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
void WindowDialog::set_resizable(bool p_resizable){
	_wasgo_WindowDialog_wrapper_set_resizable(wasgo_id, p_resizable);
}
void WindowDialog::set_title(String p_title){

    Variant wasgo_var_title = p_title;
    uint8_t wasgo_buffer_title[256];
    int wasgo_size_title = 256;
    encode_variant(wasgo_var_title, wasgo_buffer_title, wasgo_size_title);
    
	_wasgo_WindowDialog_wrapper_set_title(wasgo_id, wasgo_buffer_title, wasgo_size_title);
}

WindowDialog::WindowDialog(WasGoId p_wasgo_id) : Popup(p_wasgo_id){
}
WindowDialog::WindowDialog(){
    wasgo_id = _wasgo_WindowDialog_constructor();
}
WindowDialog::~WindowDialog(){
    _wasgo_WindowDialog_destructor(wasgo_id);
}