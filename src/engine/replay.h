/* Replay playback: reading recorded game state back out of the replay
 * buffer. Recording (0x140127630) and the control-key handler (0x1400A3970)
 * stay as decompiled C until their own pass.
 *
 * The replay buffer is one 4 MiB malloc block (0x144CBFAB8, capacity
 * 0x144CBFAA0). The cursor (0x144CBFAB0) and the recorded length
 * (0x144CBFAB4) walk it; every read frame refills the net read buffer from
 * it, so the packet readers of net_bits.h see the recorded stream. A frame
 * is either a header (the game type and the map name, recorded once) or one
 * simulation tick of state.
 */
#ifndef SR_ENGINE_REPLAY_H
#define SR_ENGINE_REPLAY_H

#include <stdint.h>
#include "memory.h"

#define replay_buffer_capacity  SR_GLOBAL(uint32_t, 0x144CBFAA0ULL)
#define replay_buffer           SR_GLOBAL(uint8_t *, 0x144CBFAB8ULL)

/* 0x1A4D2DD24: flag dwords counted after every state frame, four of every
   64-byte block over 256 blocks; their purpose is not established. */
#define replay_record           (&SR_GLOBAL(uint32_t, 0x1A4D2DD24ULL))
#define REPLAY_RECORD_BLOCKS    256

/* 0x140127300: read the next recorded frame from the replay buffer into the
   net read stream and the game state. Returns without touching anything when
   the whole recording has been read. */
void replay_read_frame(void);

#endif
