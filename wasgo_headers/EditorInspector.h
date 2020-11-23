/* THIS FILE IS GENERATED */
#ifndef EDITORINSPECTOR_H
#define EDITORINSPECTOR_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "Node.h"
#include "PoolStringArray.h"
#include "Variant.h"
#include "Object.h"
#include "ScrollContainer.h"
class EditorInspector : public ScrollContainer{
public: EditorInspector();
void  _edit_request_change(Object arg0, String arg1);
void  _feature_profile_changed();
void  _feature_profile_changed();
void  _filter_changed(String arg0);
void  _multiple_properties_changed(PoolStringArray arg0, Array arg1);
void  _node_removed(Node arg0);
void  _object_id_selected(String arg0, int arg1);
void  _property_changed(String arg0, Variant arg1, String arg2 = "", bool arg3 = false);
void  _property_changed_update_all(String arg0, Variant arg1, String arg2, bool arg3);
void  _property_checked(String arg0, bool arg1);
void  _property_keyed(String arg0, bool arg1);
void  _property_keyed_with_value(String arg0, Variant arg1, bool arg2);
void  _property_selected(String arg0, int arg1);
void  _resource_selected(String arg0, Resource arg1);
void  _vscroll_changed(float arg0);
void  refresh();
void  refresh();
};
#endif