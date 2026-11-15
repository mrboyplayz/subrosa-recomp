#include "shared_client.h"

//----- (00000001401880C0) ----------------------------------------------------
__m128i *           sr_steam_ticket_stage(     __m128i *a1, unsigned int a2)
{
  extern void *steam_ticket_stage(const void *ticket, unsigned int length);
  /* src/engine/world_street_mesh.c: stores the ticket length, copies the Steam encrypted app ticket into the staging buffer and raises the received flag; over-long tickets are dropped. The skip path leaves the original's result register unset and no caller reads it, so the port returns NULL there. */
  return (__m128i *)steam_ticket_stage((const void *)a1, a2);
}

//----- (0000000140188B80) ----------------------------------------------------
__int64            sr_world_build_street_meshes(__int64 a1, __int64 a2, __int64 a3)
{
  extern void world_build_street_meshes(void);
  /* src/engine/world_street_mesh.c; takes no arguments (the decompiler saw leftover registers). The original
     returns the scratch stride, no caller reads it. */
  world_build_street_meshes();
  return 8;
}

