/* THIS FILE IS GENERATED */
#ifndef BACKBUFFERCOPY_H
#define BACKBUFFERCOPY_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Node2D.h"
class BackBufferCopy : public Node2D{
enum CopyMode{
COPY_MODE_DISABLED,
COPY_MODE_RECT,
COPY_MODE_VIEWPORT
};
BackBufferCopy::CopyMode get_copy_mode();
Rect2 get_rect();
void set_copy_mode(BackBufferCopy::CopyMode p_copy_mode);
void set_rect(Rect2 p_rect);

BackBufferCopy(WasGoId p_wasgo_id);
~BackBufferCopy();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_BackBufferCopy_wrapper_get_copy_mode(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_BackBufferCopy_wrapper_get_rect(WasGoId wasgo_id);
void _wasgo_BackBufferCopy_wrapper_set_copy_mode(WasGoId wasgo_id, WasGo::WasGoId p_copy_mode);
void _wasgo_BackBufferCopy_wrapper_set_rect(WasGoId wasgo_id, WasGo::WasGoId p_rect);
}
#endif