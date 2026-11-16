#include "humans.h"
#include "memory.h"
#include "net_bits.h"
#include "human.h"

/* 0x14018D9F0 */
int human_state_read_fields(int human)
{
    uint32_t val;
    WorldHuman *h = &world_humans[human];

    net_read_bits(&val, 8);
    h->player = (val == 255) ? -1 : (int)val;
    net_read_bits(&val, 1);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F80) = val;
    net_read_bits(&val, 5);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F84) = val;
    net_read_bits(&val, 3);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F88) = val;
    net_read_bits(&val, 4);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F90) = val;
    net_read_bits(&val, 3);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F94) = val;
    net_read_bits(&val, 4);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F8C) = val;
    net_read_bits(&val, 5);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F98) = val;
    net_read_bits(&val, 4);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6F9C) = val;
    net_read_bits(&val, 4);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6FA0) = val;
    net_read_bits(&val, 4);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6FA8) = val;
    
    uint32_t res = net_read_bits(&val, 2);
    SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6FAC) = val;
    return (int)res;
}
