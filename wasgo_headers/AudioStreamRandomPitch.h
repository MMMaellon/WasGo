/* THIS FILE IS GENERATED */
#ifndef AUDIOSTREAMRANDOMPITCH_H
#define AUDIOSTREAMRANDOMPITCH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioStream.h"
class AudioStreamRandomPitch : public AudioStream{
AudioStream get_audio_stream();
float get_random_pitch();
void set_audio_stream(AudioStream p_stream);
void set_random_pitch(float p_scale);

AudioStreamRandomPitch(WasGoId p_wasgo_id);
~AudioStreamRandomPitch();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AudioStreamRandomPitch_wrapper_get_audio_stream(WasGoId wasgo_id);
float _wasgo_AudioStreamRandomPitch_wrapper_get_random_pitch(WasGoId wasgo_id);
void _wasgo_AudioStreamRandomPitch_wrapper_set_audio_stream(WasGoId wasgo_id, WasGo::WasGoId p_stream);
void _wasgo_AudioStreamRandomPitch_wrapper_set_random_pitch(WasGoId wasgo_id, float p_scale);
}
#endif