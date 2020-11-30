/* THIS FILE IS GENERATED */
#ifndef STREAMPEER_H
#define STREAMPEER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Error.h"
class StreamPeer : public Reference{
int get_16();
int get_32();
int get_64();
int get_8();
int get_available_bytes();
Array get_data(int p_bytes);
float get_double();
float get_float();
Array get_partial_data(int p_bytes);
String get_string(int p_bytes = (int) -1);
int get_u16();
int get_u32();
int get_u64();
int get_u8();
String get_utf8_string(int p_bytes = (int) -1);
Variant get_var(bool p_allow_objects = (bool) False);
bool is_big_endian_enabled();
void put_16(int p_value);
void put_32(int p_value);
void put_64(int p_value);
void put_8(int p_value);
Error put_data(PoolByteArray p_data);
void put_double(float p_value);
void put_float(float p_value);
Array put_partial_data(PoolByteArray p_data);
void put_string(String p_value);
void put_u16(int p_value);
void put_u32(int p_value);
void put_u64(int p_value);
void put_u8(int p_value);
void put_utf8_string(String p_value);
void put_var(Variant p_value, bool p_full_objects = (bool) False);
void set_big_endian(bool p_enable);
};


//Wrapper Functions
extern "C"{
int _wasgo_StreamPeer_wrapper_get_16(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_32(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_64(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_8(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_available_bytes(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_get_data(WasGoId wasgo_id, int p_bytes);
float _wasgo_StreamPeer_wrapper_get_double(WasGoId wasgo_id);
float _wasgo_StreamPeer_wrapper_get_float(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_get_partial_data(WasGoId wasgo_id, int p_bytes);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_get_string(WasGoId wasgo_id, int p_bytes);
int _wasgo_StreamPeer_wrapper_get_u16(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_u32(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_u64(WasGoId wasgo_id);
int _wasgo_StreamPeer_wrapper_get_u8(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_get_utf8_string(WasGoId wasgo_id, int p_bytes);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_get_var(WasGoId wasgo_id, bool p_allow_objects);
int _wasgo_StreamPeer_wrapper_is_big_endian_enabled(WasGoId wasgo_id);
void _wasgo_StreamPeer_wrapper_put_16(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_32(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_64(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_8(WasGoId wasgo_id, int p_value);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_put_data(WasGoId wasgo_id, WasGo::WasGoId p_data);
void _wasgo_StreamPeer_wrapper_put_double(WasGoId wasgo_id, float p_value);
void _wasgo_StreamPeer_wrapper_put_float(WasGoId wasgo_id, float p_value);
WasGo::WasGoId _wasgo_StreamPeer_wrapper_put_partial_data(WasGoId wasgo_id, WasGo::WasGoId p_data);
void _wasgo_StreamPeer_wrapper_put_string(WasGoId wasgo_id, WasGo::WasGoId p_value);
void _wasgo_StreamPeer_wrapper_put_u16(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_u32(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_u64(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_u8(WasGoId wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_utf8_string(WasGoId wasgo_id, WasGo::WasGoId p_value);
void _wasgo_StreamPeer_wrapper_put_var(WasGoId wasgo_id, WasGo::WasGoId p_value, bool p_full_objects);
void _wasgo_StreamPeer_wrapper_set_big_endian(WasGoId wasgo_id, bool p_enable);
}
#endif