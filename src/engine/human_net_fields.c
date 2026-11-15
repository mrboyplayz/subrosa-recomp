#include "human_net_fields.h"
#include "memory.h"
#include "net_bits.h"

/* Humans: 0x18329E308, 0x6FF8 bytes each (frame.h). */
#define human_state_field(human, offset) \
    (&SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)(human) + (offset)))

/* The human record's state fields packed into the outgoing packet in the
 * original's order and widths — note 0x6F94 before 0x6F8C, the transfers are
 * not in address order. The last transfer is a tail call, so the result is
 * net_write_bits' own return; the game reads its low 32 bits (eax).
 * 0x14010EE20 */
long long human_state_write_fields(int human)
{
    net_write_bits(human_state_field(human, 0x8), 8);
    net_write_bits(human_state_field(human, 0x6F80), 1);
    net_write_bits(human_state_field(human, 0x6F84), 5);
    net_write_bits(human_state_field(human, 0x6F88), 3);
    net_write_bits(human_state_field(human, 0x6F90), 4);
    net_write_bits(human_state_field(human, 0x6F94), 3);
    net_write_bits(human_state_field(human, 0x6F8C), 4);
    net_write_bits(human_state_field(human, 0x6F98), 5);
    net_write_bits(human_state_field(human, 0x6F9C), 4);
    net_write_bits(human_state_field(human, 0x6FA0), 4);
    net_write_bits(human_state_field(human, 0x6FA8), 4);
    return net_write_bits(human_state_field(human, 0x6FAC), 2);
}
