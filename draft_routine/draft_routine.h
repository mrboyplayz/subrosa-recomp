/* Draft prototypes for the net replication cluster drafts in
 * draft_routine/net_replicate.c (see that file's header for the landing
 * plan). The suite declares these prototypes directly; this header is for
 * the draft engine dir only. */
#ifndef SR_DRAFT_ROUTINE_H
#define SR_DRAFT_ROUTINE_H
#include <stdint.h>
#include "memory.h"

/* The escape-menu flag the 0x14011C730 shim tests (0x183EBFD5C; the menu
 * state region sets it when the menu opens). */
#define net_replication_render_menu_active SR_GLOBAL(int32_t, 0x183EBFD5CULL)

/* The five drafts, one per routine: */
uint32_t draft_distance_priority(float distance);                   /* 0x140105BD0 */
uint64_t draft_peer_catchup(int peer);                              /* 0x140106160 */
uint64_t draft_encode_delta(uint32_t *field, int32_t reference,     /* 0x14010E6C0 */
                             int32_t use_delta, int32_t full_bits);
uint64_t draft_encode_adaptive_delta(uint32_t *field, int32_t reference,   /* 0x14010E9B0 */
                                     int32_t use_delta, int32_t full_bits);
double draft_replication_render_camera(int64_t a1, int64_t a2,      /* 0x14011C730 */
                                       int64_t a3);

#endif
