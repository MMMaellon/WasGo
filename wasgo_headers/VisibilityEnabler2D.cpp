/* THIS FILE IS GENERATED */
#include "VisibilityEnabler2D.h"
bool VisibilityEnabler2D::is_enabler_enabled(VisibilityEnabler2D::Enabler p_enabler){
	return (bool) _wasgo_VisibilityEnabler2D_wrapper_is_enabler_enabled(wasgo_id, ((Variant) enabler).get_wasgo_id()));
}
void VisibilityEnabler2D::set_enabler(VisibilityEnabler2D::Enabler p_enabler, bool p_enabled){
	_wasgo_VisibilityEnabler2D_wrapper_set_enabler(wasgo_id, ((Variant) enabler).get_wasgo_id(), enabled);
}

VisibilityEnabler2D::VisibilityEnabler2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
VisibilityEnabler2D::~VisibilityEnabler2D(){
}