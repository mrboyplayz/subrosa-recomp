#include "shared_client.h"
#include "../engine/collision.h"
#include "../engine/text_helpers.h"
#include "../engine/physics.h"
#include "../engine/events.h"
#include "../engine/disk.h"
#include "../engine/item.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/net_bits.h"

//----- (000000014004C4C0) ----------------------------------------------------
__int64            sr_text_compare_bytes(unsigned __int8 *a1, __int64 a2)
{
  return text_compare_bytes(a1, (const unsigned char *)(uintptr_t)a2);
}

//----- (000000014006C670) ----------------------------------------------------
// CRC32-style UI label ID helper. Lazily builds 256-entry table with polynomial 0xEDB88320 and returns bitwise-not final CRC.
__int64            sr_text_label_id(unsigned __int8 *a1, unsigned int a2)
{
  return text_label_id(a1, a2);
}

//----- (000000014006C870) ----------------------------------------------------
__int64            sr_text_scan_matches(_BYTE *a1)
{
  return text_scan_matches(a1);
}

//----- (000000014006C980) ----------------------------------------------------
__int64            sr_text_compare_bytes_alt(unsigned __int8 *a1, __int64 a2)
{
  return text_compare_bytes(a1, (const unsigned char *)(uintptr_t)a2);
}

//----- (000000014006E4C0) ----------------------------------------------------
_BOOL8            sr_text_scan_past(_BYTE *a1)
{
  return text_scan_past(a1);
}

//----- (000000014006F120) ----------------------------------------------------
// UI label copy helper. Copies text to widget label buffer and stops visible label at null or ## hidden-ID marker.
__int64            sr_text_copy_visible_label(__int64 a1, char *a2)
{
  return text_copy_visible_label((unsigned char *)(uintptr_t)a1, (const unsigned char *)a2);
}

