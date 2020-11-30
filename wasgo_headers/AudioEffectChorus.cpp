/* THIS FILE IS GENERATED */
#include "AudioEffectChorus.h"
float AudioEffectChorus::get_dry(){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_dry(wasgo_id));
}
int AudioEffectChorus::get_voice_count(){
	return (int) _wasgo_AudioEffectChorus_wrapper_get_voice_count(wasgo_id));
}
float AudioEffectChorus::get_voice_cutoff_hz(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_cutoff_hz(wasgo_id, voice_idx));
}
float AudioEffectChorus::get_voice_delay_ms(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_delay_ms(wasgo_id, voice_idx));
}
float AudioEffectChorus::get_voice_depth_ms(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_depth_ms(wasgo_id, voice_idx));
}
float AudioEffectChorus::get_voice_level_db(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_level_db(wasgo_id, voice_idx));
}
float AudioEffectChorus::get_voice_pan(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_pan(wasgo_id, voice_idx));
}
float AudioEffectChorus::get_voice_rate_hz(int p_voice_idx){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_voice_rate_hz(wasgo_id, voice_idx));
}
float AudioEffectChorus::get_wet(){
	return (float) _wasgo_AudioEffectChorus_wrapper_get_wet(wasgo_id));
}
void AudioEffectChorus::set_dry(float p_amount){
	_wasgo_AudioEffectChorus_wrapper_set_dry(wasgo_id, amount);
}
void AudioEffectChorus::set_voice_count(int p_voices){
	_wasgo_AudioEffectChorus_wrapper_set_voice_count(wasgo_id, voices);
}
void AudioEffectChorus::set_voice_cutoff_hz(int p_voice_idx, float p_cutoff_hz){
	_wasgo_AudioEffectChorus_wrapper_set_voice_cutoff_hz(wasgo_id, voice_idx, cutoff_hz);
}
void AudioEffectChorus::set_voice_delay_ms(int p_voice_idx, float p_delay_ms){
	_wasgo_AudioEffectChorus_wrapper_set_voice_delay_ms(wasgo_id, voice_idx, delay_ms);
}
void AudioEffectChorus::set_voice_depth_ms(int p_voice_idx, float p_depth_ms){
	_wasgo_AudioEffectChorus_wrapper_set_voice_depth_ms(wasgo_id, voice_idx, depth_ms);
}
void AudioEffectChorus::set_voice_level_db(int p_voice_idx, float p_level_db){
	_wasgo_AudioEffectChorus_wrapper_set_voice_level_db(wasgo_id, voice_idx, level_db);
}
void AudioEffectChorus::set_voice_pan(int p_voice_idx, float p_pan){
	_wasgo_AudioEffectChorus_wrapper_set_voice_pan(wasgo_id, voice_idx, pan);
}
void AudioEffectChorus::set_voice_rate_hz(int p_voice_idx, float p_rate_hz){
	_wasgo_AudioEffectChorus_wrapper_set_voice_rate_hz(wasgo_id, voice_idx, rate_hz);
}
void AudioEffectChorus::set_wet(float p_amount){
	_wasgo_AudioEffectChorus_wrapper_set_wet(wasgo_id, amount);
}

AudioEffectChorus::AudioEffectChorus(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectChorus::~AudioEffectChorus(){
}