/* THIS FILE IS GENERATED */
#ifndef TEXTUREPROGRESS_H
#define TEXTUREPROGRESS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Range.h"
#include "Margin.h"
#include "Texture.h"
class TextureProgress : public Range{
enum FillMode{
FILL_LEFT_TO_RIGHT,
FILL_RIGHT_TO_LEFT,
FILL_TOP_TO_BOTTOM,
FILL_BOTTOM_TO_TOP,
FILL_CLOCKWISE,
FILL_COUNTER_CLOCKWISE,
FILL_BILINEAR_LEFT_AND_RIGHT,
FILL_BILINEAR_TOP_AND_BOTTOM,
FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE
};
float get_fill_degrees();
int get_fill_mode();
bool get_nine_patch_stretch();
Texture get_over_texture();
Texture get_progress_texture();
Vector2 get_radial_center_offset();
float get_radial_initial_angle();
int get_stretch_margin(Margin p_margin);
Color get_tint_over();
Color get_tint_progress();
Color get_tint_under();
Texture get_under_texture();
void set_fill_degrees(float p_mode);
void set_fill_mode(int p_mode);
void set_nine_patch_stretch(bool p_stretch);
void set_over_texture(Texture p_tex);
void set_progress_texture(Texture p_tex);
void set_radial_center_offset(Vector2 p_mode);
void set_radial_initial_angle(float p_mode);
void set_stretch_margin(Margin p_margin, int p_value);
void set_tint_over(Color p_tint);
void set_tint_progress(Color p_tint);
void set_tint_under(Color p_tint);
void set_under_texture(Texture p_tex);

TextureProgress(WasGoId p_wasgo_id);
~TextureProgress();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_TextureProgress_wrapper_get_fill_degrees(WasGoId wasgo_id);
int _wasgo_TextureProgress_wrapper_get_fill_mode(WasGoId wasgo_id);
int _wasgo_TextureProgress_wrapper_get_nine_patch_stretch(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_over_texture(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_progress_texture(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_radial_center_offset(WasGoId wasgo_id);
float _wasgo_TextureProgress_wrapper_get_radial_initial_angle(WasGoId wasgo_id);
int _wasgo_TextureProgress_wrapper_get_stretch_margin(WasGoId wasgo_id, WasGo::WasGoId p_margin);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_tint_over(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_tint_progress(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_tint_under(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TextureProgress_wrapper_get_under_texture(WasGoId wasgo_id);
void _wasgo_TextureProgress_wrapper_set_fill_degrees(WasGoId wasgo_id, float p_mode);
void _wasgo_TextureProgress_wrapper_set_fill_mode(WasGoId wasgo_id, int p_mode);
void _wasgo_TextureProgress_wrapper_set_nine_patch_stretch(WasGoId wasgo_id, bool p_stretch);
void _wasgo_TextureProgress_wrapper_set_over_texture(WasGoId wasgo_id, WasGo::WasGoId p_tex);
void _wasgo_TextureProgress_wrapper_set_progress_texture(WasGoId wasgo_id, WasGo::WasGoId p_tex);
void _wasgo_TextureProgress_wrapper_set_radial_center_offset(WasGoId wasgo_id, WasGo::WasGoId p_mode);
void _wasgo_TextureProgress_wrapper_set_radial_initial_angle(WasGoId wasgo_id, float p_mode);
void _wasgo_TextureProgress_wrapper_set_stretch_margin(WasGoId wasgo_id, WasGo::WasGoId p_margin, int p_value);
void _wasgo_TextureProgress_wrapper_set_tint_over(WasGoId wasgo_id, WasGo::WasGoId p_tint);
void _wasgo_TextureProgress_wrapper_set_tint_progress(WasGoId wasgo_id, WasGo::WasGoId p_tint);
void _wasgo_TextureProgress_wrapper_set_tint_under(WasGoId wasgo_id, WasGo::WasGoId p_tint);
void _wasgo_TextureProgress_wrapper_set_under_texture(WasGoId wasgo_id, WasGo::WasGoId p_tex);
}
#endif