/* THIS FILE IS GENERATED */
#ifndef CAMERATEXTURE_H
#define CAMERATEXTURE_H

#include <stdint.h>

#include "CameraServer.h"
#include "Texture.h"
class CameraTexture : public Texture{
public: CameraTexture();
bool  get_camera_active();
bool  get_camera_active();
int  get_camera_feed_id();
int  get_camera_feed_id();
enum.CameraServer::FeedImage  get_which_feed();
enum.CameraServer::FeedImage  get_which_feed();
void  set_camera_active(bool active);
void  set_camera_feed_id(int feed_id);
void  set_which_feed(int which_feed);
};
#endif