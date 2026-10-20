#include "shared_client.h"

//----- (0000000140188B80) ----------------------------------------------------
__int64            sr_world_build_street_meshes(__int64 a1, __int64 a2, __int64 a3)
{
  extern void world_build_street_meshes(void);
  /* src/engine/world_street_mesh.c; takes no arguments (the decompiler saw leftover registers). The original
     returns the scratch stride, no caller reads it. */
  world_build_street_meshes();
  return 8;
}

