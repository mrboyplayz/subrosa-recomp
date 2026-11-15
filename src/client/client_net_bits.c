#include "shared_client.h"
#include "../engine/net_bits.h"
#include "../engine/net_rotation.h"

//----- (0000000140115AE0) ----------------------------------------------------
__int64            sr_net_read_bits(_DWORD *a1, int a2)
{
  return net_read_bits(a1, a2);
}

//----- (0000000140115BD0) ----------------------------------------------------
__int64            sr_net_read_optional_index(int *a1, int a2)
{
  /* Clean implementation: src/engine/net_readers.c, checked against the original
     executable (tools/native-compare). This wrapper keeps the entry point the
     recompiled callers use. */
  return net_read_optional_index((int32_t *)a1, a2);
}

//----- (0000000140115C20) ----------------------------------------------------
__int64            sr_net_read_bits_scaled(_DWORD *a1, int a2, int a3)
{
  return net_read_bits_scaled(a1, a2, (unsigned int)a3);
}

//----- (0000000140115D20) ----------------------------------------------------
__int64            sr_net_read_signed_bits(int *a1, int a2)
{
  /* Clean implementation: src/engine/net_readers.c, checked against the original
     executable (tools/native-compare). This wrapper keeps the entry point the
     recompiled callers use. */
  return net_read_signed_bits((int32_t *)a1, a2);
}

//----- (0000000140115D90) ----------------------------------------------------
__int64            sr_net_write_bits(_DWORD *a1, signed int a2)
{
  return net_write_bits(a1, a2);
}

//----- (0000000140115E60) ----------------------------------------------------
__int64            sr_net_write_bits_always_success(_DWORD *a1, signed int a2)
{
  return net_write_bits_always_success(a1, a2);
}

//----- (0000000140115E80) ----------------------------------------------------
__int64            sr_net_write_bits_scaled(_DWORD *a1, int a2, unsigned int a3)
{
  return net_write_bits_scaled(a1, a2, a3);
}

//----- (0000000140115F70) ----------------------------------------------------
__int64            sr_net_write_bits_always_success_alt(_DWORD *a1, signed int a2)
{
  return net_write_bits_always_success_alt(a1, a2);
}

