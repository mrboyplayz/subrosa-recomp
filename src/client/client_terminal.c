#include "shared_client.h"
#include "../engine/terminal.h"

//----- (00000001400C5750) ----------------------------------------------------
__int64 sub_1400C5750(int a1)
{
  return terminal_raw_source_map((int)a1);
}

//----- (00000001400C3E00) ----------------------------------------------------
__int64 sub_1400C3E00(int a1)
{
  return terminal_clear_line_and_bump((int)a1);
}
