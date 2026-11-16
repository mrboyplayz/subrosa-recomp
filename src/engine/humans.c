#include "humans.h"
#include "memory.h"
#include "net_bits.h"
#include "human.h"
#include <math.h>
#include <stdlib.h>

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

/* 0x1400B2D20 */
void human_limb_stretch(int human, int limb, float lerp, float *pos_out)
{
    float *bones_base = (float *)(uintptr_t)SR_GLOBAL(uint8_t, 0x18329E580ULL);
    float *h_base = bones_base + (0x6FF8 / 4) * human;
    float *limb_pos = h_base + (0x138 / 4) * limb;
    
    float p[3] = { pos_out[0], pos_out[1], pos_out[2] };
    float base[3] = { limb_pos[0], limb_pos[1], limb_pos[2] };
    float target[3] = { h_base[0], h_base[1], h_base[2] }; 
    
    float delta[3] = { target[0] - base[0], target[1] - base[1], target[2] - base[2] };
    float projected[3] = { base[0] + lerp * delta[0], base[1] + lerp * delta[1], base[2] + lerp * delta[2] };
    
    float diff[3] = { p[0] - projected[0], p[1] - projected[1], p[2] - projected[2] };
    float dist = sqrtf(diff[0] * diff[0] + diff[1] * diff[1] + diff[2] * diff[2]);
    
    float range = SR_GLOBAL(float, 0x140278338ULL);
    if (dist > range) {
        float clamp_dist = (dist < range * 2.0f) ? dist : range * 2.0f;
        float factor = (clamp_dist - range) * 0.5f + range;
        
        if (dist > 0.0f) {
            float inv_dist = 1.0f / dist;
            float scale = factor * inv_dist;
            pos_out[0] = projected[0] + diff[0] * scale;
            pos_out[1] = projected[1] + diff[1] * scale;
            pos_out[2] = projected[2] + diff[2] * scale;
        }
    }
}

/* 0x1400A9760 */
void human_update_state_machine(int human, int amount, int kind)
{
    WorldHuman *h = &world_humans[human];
    
    // 1400a978c: cmpl $0x0, 0x68(%rbx, %rsi, 1)
    // rbx = human * 0x6ff8, rsi = 0x18329e2e0
    // offset = 0x68 + 0x18329e2e0 - 0x18329e308 = 0x68 - 0x28 = 0x40
    // 0x40 is human->unknown_40 (approx)
    
    if (SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x68) != 0) {
        // skip
    } else {
        int val = (amount - (int)h->player) / 2; // simplified
        SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6D7C) -= val;
    }

    if (kind == 2) {
        SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6D84) -= amount;
        SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0xA0) += amount;
    } else if (kind == 3) {
        // similar logic...
    }

    // Random retrigger
    if (amount > 0) {
        uint32_t r = (uint32_t)SR_GLOBAL(int32_t, 0x14023B1B0ULL) & 0x1F;
        if (r < (uint32_t)amount) {
            SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6D80) = 1;
        }
    }
    
    // Clamps
    if (SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0xA0) > 90) {
        SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0xA0) = 90;
    }
    if (SR_GLOBAL(int32_t, 0x18329E2E0ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6D78) < 0) {
        SR_GLOBAL(int32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)human + 0x6D78 - 0x28) = 0;
    }
}
