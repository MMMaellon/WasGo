/* THIS FILE IS GENERATED */
#ifndef RESOURCEFORMATSAVER_H
#define RESOURCEFORMATSAVER_H

#include <stdint.h>

#include "Resource.h"
#include "String.h"
#include "Reference.h"
#include "PoolStringArray.h"
class ResourceFormatSaver : public Reference{
public: ResourceFormatSaver();
PoolStringArray  get_recognized_extensions(Resource resource);
bool  recognize(Resource resource);
int  save(String path, Resource resource, int flags);
};
#endif