#include "shared_client.h"

//----- (0000000140038230) ----------------------------------------------------
void sr_world_grid_query_items(int *out, int *minimum, int *maximum)
{
  extern void world_grid_query_items(void *, const int32_t *, const int32_t *);
  world_grid_query_items(out, minimum, maximum);
}

