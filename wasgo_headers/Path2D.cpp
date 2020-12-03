/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Path2D.h"
Curve2D Path2D::get_curve(){
	return Curve2D(_wasgo_Path2D_wrapper_get_curve(wasgo_id));
}
void Path2D::set_curve(Curve2D p_curve){
	_wasgo_Path2D_wrapper_set_curve(wasgo_id, p_curve._get_wasgo_id());
}

Path2D::Path2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
Path2D::Path2D(){
    wasgo_id = _wasgo_Path2D_constructor();
}
Path2D::~Path2D(){
    _wasgo_Path2D_destructor(wasgo_id);
}