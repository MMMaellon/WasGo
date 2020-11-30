/* THIS FILE IS GENERATED */
#ifndef PACKETPEERUDP_H
#define PACKETPEERUDP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "PacketPeer.h"
#include "Error.h"
class PacketPeerUDP : public PacketPeer{
void close();
Error connect_to_host(String p_host, int p_port);
String get_packet_ip();
int get_packet_port();
bool is_connected_to_host();
bool is_listening();
Error join_multicast_group(String p_multicast_address, String p_interface_name);
Error leave_multicast_group(String p_multicast_address, String p_interface_name);
Error listen(int p_port, String p_bind_address = (String) *, int p_recv_buf_size = (int) 65536);
void set_broadcast_enabled(bool p_enabled);
Error set_dest_address(String p_host, int p_port);
Error wait();

PacketPeerUDP(WasGoId p_wasgo_id);
~PacketPeerUDP();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PacketPeerUDP_wrapper_close(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_connect_to_host(WasGoId wasgo_id, WasGo::WasGoId p_host, int p_port);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_get_packet_ip(WasGoId wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_get_packet_port(WasGoId wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_is_connected_to_host(WasGoId wasgo_id);
int _wasgo_PacketPeerUDP_wrapper_is_listening(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_join_multicast_group(WasGoId wasgo_id, WasGo::WasGoId p_multicast_address, WasGo::WasGoId p_interface_name);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_leave_multicast_group(WasGoId wasgo_id, WasGo::WasGoId p_multicast_address, WasGo::WasGoId p_interface_name);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_listen(WasGoId wasgo_id, int p_port, WasGo::WasGoId p_bind_address, int p_recv_buf_size);
void _wasgo_PacketPeerUDP_wrapper_set_broadcast_enabled(WasGoId wasgo_id, bool p_enabled);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_set_dest_address(WasGoId wasgo_id, WasGo::WasGoId p_host, int p_port);
WasGo::WasGoId _wasgo_PacketPeerUDP_wrapper_wait(WasGoId wasgo_id);
}
#endif