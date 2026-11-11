#include "shared_client.h"
#include "../engine/area_bounds.h"
#include "../engine/net_bits.h"
#include "../engine/physics_kernels.h"

#include "../engine/physics.h"
#include "../engine/disk.h"

//----- (000000014003C6F0) ----------------------------------------------------
__int64            sr_parser_token_matches(_BYTE *token)
{
  extern int parser_token_matches(const unsigned char *token);
  return parser_token_matches(token);
}

//----- (0000000140091DF0) ----------------------------------------------------
_BOOL8            sr_parser_skip_to_token(_BYTE *token)
{
  extern int parser_skip_to_token(const unsigned char *token);
  return parser_skip_to_token(token);
}

//----- (0000000140115360) ----------------------------------------------------
__int64 sr_parser_read_number()
{
  extern uint32_t parser_read_number(void);
  return parser_read_number();
}

//----- (0000000140115410) ----------------------------------------------------
__int64 sr_parser_read_number64()
{
  extern uint64_t parser_read_number64(void);
  return parser_read_number64();
}
