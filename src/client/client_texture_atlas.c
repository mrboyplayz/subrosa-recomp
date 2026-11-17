#include "shared_client.h"
#include "../engine/texture_atlas.h"

//----- (0000000140068FC0) ----------------------------------------------------
__int64            sub_140068FC0(int a1, char *a2)
{
  return texture_atlas_load(a1, a2);
}

//----- (000000014006CA30) ----------------------------------------------------
__int64            sub_14006CA30(unsigned int a1, unsigned int a2)
{
  return texture_atlas_init(a1, a2);
}
