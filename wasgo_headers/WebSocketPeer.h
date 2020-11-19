/* THIS FILE IS GENERATED */
#ifndef WEBSOCKETPEER_H
#define WEBSOCKETPEER_H

#include <stdint.h>

#include "PacketPeer.h"
#include "String.h"
class WebSocketPeer : public PacketPeer{
public: WebSocketPeer();
enum WriteMode{
WRITE_MODE_TEXT: 0,
};
void  close(int code = 1000, String reason = "");
String  get_connected_host();
String  get_connected_host();
int  get_connected_port();
int  get_connected_port();
enum.WebSocketPeer::WriteMode  get_write_mode();
enum.WebSocketPeer::WriteMode  get_write_mode();
bool  is_connected_to_host();
bool  is_connected_to_host();
void  set_no_delay(bool enabled);
void  set_write_mode(int mode);
bool  was_string_packet();
bool  was_string_packet();
};
#endif