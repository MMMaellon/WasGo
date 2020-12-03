/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTFILTER_H
#define AUDIOEFFECTFILTER_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
class AudioEffectFilter : public AudioEffect{
public:
enum FilterDB{
FILTER_6DB,
FILTER_12DB,
FILTER_18DB,
FILTER_24DB
};
float get_cutoff();
AudioEffectFilter::FilterDB get_db();
float get_gain();
float get_resonance();
void set_cutoff(float p_freq);
void set_db(AudioEffectFilter::FilterDB p_amount);
void set_gain(float p_amount);
void set_resonance(float p_amount);

protected:
AudioEffectFilter(WasGoId p_wasgo_id);
public:
AudioEffectFilter();
~AudioEffectFilter();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AudioEffectFilter_wrapper_get_cutoff(WasGoId wasgo_id);
WasGoId _wasgo_AudioEffectFilter_wrapper_get_db(WasGoId wasgo_id);
float _wasgo_AudioEffectFilter_wrapper_get_gain(WasGoId wasgo_id);
float _wasgo_AudioEffectFilter_wrapper_get_resonance(WasGoId wasgo_id);
void _wasgo_AudioEffectFilter_wrapper_set_cutoff(WasGoId wasgo_id, float p_freq);
void _wasgo_AudioEffectFilter_wrapper_set_db(WasGoId wasgo_id, WasGoId p_amount);
void _wasgo_AudioEffectFilter_wrapper_set_gain(WasGoId wasgo_id, float p_amount);
void _wasgo_AudioEffectFilter_wrapper_set_resonance(WasGoId wasgo_id, float p_amount);

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectFilter_constructor();
    void _wasgo_AudioEffectFilter_destructor(WasGoId p_wasgo_id);
            
}
#endif