/* THIS FILE IS GENERATED */
#ifndef LINKBUTTON_H
#define LINKBUTTON_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "BaseButton.h"
class LinkButton : public BaseButton{
public:
enum UnderlineMode{
UNDERLINE_MODE_ALWAYS,
UNDERLINE_MODE_ON_HOVER,
UNDERLINE_MODE_NEVER
};
String get_text();
LinkButton::UnderlineMode get_underline_mode();
void set_text(String p_text);
void set_underline_mode(LinkButton::UnderlineMode p_underline_mode);

protected:
LinkButton(WasGoId p_wasgo_id);
public:
LinkButton();
~LinkButton();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_LinkButton_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_LinkButton_wrapper_get_underline_mode(WasGoId wasgo_id);
void _wasgo_LinkButton_wrapper_set_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_LinkButton_wrapper_set_underline_mode(WasGoId wasgo_id, WasGoId p_underline_mode);

    //constructor and destructor wrappers
    WasGoId _wasgo_LinkButton_constructor();
    void _wasgo_LinkButton_destructor(WasGoId p_wasgo_id);
            
}
#endif