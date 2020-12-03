/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONTDATA_H
#define DYNAMICFONTDATA_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Resource.h"
class DynamicFontData : public Resource{
public:
enum Hinting{
HINTING_NONE,
HINTING_LIGHT,
HINTING_NORMAL
};
String get_font_path();
DynamicFontData::Hinting get_hinting();
bool is_antialiased();
void set_antialiased(bool p_antialiased);
void set_font_path(String p_path);
void set_hinting(DynamicFontData::Hinting p_mode);

protected:
DynamicFontData(WasGoId p_wasgo_id);
public:
DynamicFontData();
~DynamicFontData();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_DynamicFontData_wrapper_get_font_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_DynamicFontData_wrapper_get_hinting(WasGoId wasgo_id);
int _wasgo_DynamicFontData_wrapper_is_antialiased(WasGoId wasgo_id);
void _wasgo_DynamicFontData_wrapper_set_antialiased(WasGoId wasgo_id, bool p_antialiased);
void _wasgo_DynamicFontData_wrapper_set_font_path(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_DynamicFontData_wrapper_set_hinting(WasGoId wasgo_id, WasGoId p_mode);

    //constructor and destructor wrappers
    WasGoId _wasgo_DynamicFontData_constructor();
    void _wasgo_DynamicFontData_destructor(WasGoId p_wasgo_id);
            
}
#endif