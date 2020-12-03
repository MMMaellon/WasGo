/* THIS FILE IS GENERATED */
#ifndef VISIBILITYENABLER2D_H
#define VISIBILITYENABLER2D_H

#include "wasgo\wasgo.h"

#include "VisibilityNotifier2D.h"
class VisibilityEnabler2D : public VisibilityNotifier2D{
public:
enum Enabler{
ENABLER_PAUSE_ANIMATIONS,
ENABLER_FREEZE_BODIES,
ENABLER_PAUSE_PARTICLES,
ENABLER_PARENT_PROCESS,
ENABLER_PARENT_PHYSICS_PROCESS,
ENABLER_PAUSE_ANIMATED_SPRITES,
ENABLER_MAX
};
bool is_enabler_enabled(VisibilityEnabler2D::Enabler p_enabler);
void set_enabler(VisibilityEnabler2D::Enabler p_enabler, bool p_enabled);

protected:
VisibilityEnabler2D(WasGoId p_wasgo_id);
public:
VisibilityEnabler2D();
~VisibilityEnabler2D();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_VisibilityEnabler2D_wrapper_is_enabler_enabled(WasGoId wasgo_id, WasGoId p_enabler);
void _wasgo_VisibilityEnabler2D_wrapper_set_enabler(WasGoId wasgo_id, WasGoId p_enabler, bool p_enabled);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisibilityEnabler2D_constructor();
    void _wasgo_VisibilityEnabler2D_destructor(WasGoId p_wasgo_id);
            
}
#endif