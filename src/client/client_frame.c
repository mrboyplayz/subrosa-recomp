#include "shared_client.h"
#include "../engine/physics.h"
#include "../engine/physics_kernels.h"

//----- (000000014003B920) ----------------------------------------------------
int sr_game_frame(int process_input)
{
  extern int game_frame(int process_input);
  /* src/engine/frame.c, which also covers the patch block at 0x1400403F0 */
  return game_frame(process_input);
}

