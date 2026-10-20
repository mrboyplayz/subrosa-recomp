#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006BDC0) ----------------------------------------------------
__int64 sr_auth_draw_status()
{
  char *status_text;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006BDC0[608];
#define legacy_text_arguments (*(_QWORD (*)[5])(void *)(sr_frame_14006BDC0 + 0)) /* [rsp+0h] */
#define legacy_alpha_word (*(int (*))(void *)(sr_frame_14006BDC0 + 40)) /* [rsp+28h] */
#define legacy_blue_word (*(int (*))(void *)(sr_frame_14006BDC0 + 48)) /* [rsp+30h] */
#define legacy_green_word (*(int (*))(void *)(sr_frame_14006BDC0 + 56)) /* [rsp+38h] */
#define legacy_red_word (*(int (*))(void *)(sr_frame_14006BDC0 + 64)) /* [rsp+40h] */
#define formatted_auth_number (*(_BYTE (*)[512])(void *)(sr_frame_14006BDC0 + 80)) /* [rsp+50h] */
#define unused_frame_cookie (*(__int64 (*))(void *)(sr_frame_14006BDC0 + 592)) /* [rsp+250h] */

  switch ( g_16B165F40 )
  {
    case 0u:
      if ( g_1829F8BC0 )
      {
        status_text = "Steam Auth...";
        if ( !g_1829F8FD8 )
          status_text = "Steam Ticket...";
      }
      else
      {
        status_text = "Steam Init Failed";
      }
      goto LABEL_11;
    case 1u:
      status_text = "CS Auth...";
LABEL_11:
      legacy_red_word = 1065353216;
      legacy_green_word = 1065353216;
      legacy_blue_word = 1065353216;
      legacy_alpha_word = 1065353216;
      legacy_text_arguments[4] = 0;
      sr_text_draw_recovered(status_text, 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440C0000u))))), 12.0, 0u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14006BEAA */;
      return 0; /* the function has no caller */
    case 2u:
      crt_sprintf(formatted_auth_number, "%03d-%04d", g_1603612F0 / 0x2710, g_1603612F0 % 0x2710);
      status_text = formatted_auth_number;
      goto LABEL_11;
  }
  return 0; /* the function has no caller */
}
#undef legacy_text_arguments
#undef legacy_alpha_word
#undef legacy_blue_word
#undef legacy_green_word
#undef legacy_red_word
#undef formatted_auth_number
#undef unused_frame_cookie

// 14006BF1E: conditional instruction was optimized away because eax.4!=0

