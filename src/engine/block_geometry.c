#include "block_geometry.h"
#include "effect.h"
#include "memory.h"
#include <math.h>

/* 0x1400689A0 */
void sr_block_geometry_add_effect_4(int area_id, int block_id, int effect_id, int record_id, int variant, int count, uint32_t *pos, float *vel)
{
    if ((variant & 0xE0000000) != 0x80000000) {
        return;
    }

    uint64_t record_offset = (uint16_t)variant * 232;
    if (count >= SR_GLOBAL(int32_t, 0x145098CD8ULL + record_offset)) {
        return;
    }

    uint64_t records_ptr = SR_GLOBAL(uint64_t, 0x145098CE0ULL + record_offset);
    float weight = SR_GLOBAL(float, 0x140278338ULL);

    float f_area = (float)area_id;
    float f_block = (float)block_id;
    float f_effect = (float)effect_id;
    float f_record = (float)record_id;

    float *rec = (float *)(records_ptr + 48 * count);

    float s2 = (f_record + rec[11]) * weight;
    float s5 = (f_block + rec[5]) * weight;
    float s13_1 = (f_effect + rec[8]) * weight;
    float s4 = (f_record + rec[6]) * weight;
    float s6 = (f_block + rec[2]) * weight;
    float s7 = (f_effect + rec[3]) * weight;
    float s8 = (f_record + rec[4]) * weight;
    float s9 = (f_block + rec[0]) * weight;
    float s10 = (f_effect + rec[1]) * weight;
    float s11 = (f_record + rec[2]) * weight;
    float s12 = (f_effect + rec[10]) * weight;
    float s13_2 = (f_effect + rec[7]) * weight;

    float f_word[22];
    f_word[0] = s2;
    f_word[1] = s5;
    f_word[2] = s13_1;
    f_word[3] = s4;
    f_word[4] = s6;
    f_word[5] = s7;
    f_word[6] = s8;
    f_word[7] = s9;
    f_word[8] = s10;
    f_word[9] = s11;
    f_word[10] = (s2 + s4) * 0.5f;
    f_word[11] = (s12 + s13_2) * 0.5f;
    f_word[12] = (s2 + s11) * 0.5f;
    f_word[13] = (s6 + s5) * 0.5f;
    f_word[14] = (s7 + s13_1) * 0.5f;
    f_word[15] = (s4 + s8) * 0.5f;
    f_word[16] = (s6 + s9) * 0.5f;
    f_word[17] = (s7 + s10) * 0.5f;
    f_word[18] = (s8 + s11) * 0.5f;
    f_word[19] = (s2 + s9) * 0.5f;
    f_word[20] = (s12 + s10) * 0.5f;
    f_word[21] = (s2 + s11) * 0.5f;

    int current_effect_count = world_effect_count;
    for (int i = 0; i < 4; i++) {
        if (current_effect_count < EFFECT_CAPACITY) {
            Effect *eff = &world_effects[current_effect_count];
            
            eff->type = EFFECT_4;
            eff->lifetime = 60000;
            
            // Points
            eff->points[0][0] = f_word[3 * i];
            eff->points[0][1] = f_word[3 * i + 1];
            eff->points[0][2] = f_word[3 * i + 2];
            
            eff->points[1][0] = f_word[3 * ((i + 1) & 3)];
            eff->points[1][1] = f_word[3 * ((i + 1) & 3) + 1];
            eff->points[1][2] = f_word[3 * ((i + 1) & 3) + 2];
            
            eff->points[2][0] = (float)pos[0];
            eff->points[2][1] = (float)pos[1];
            eff->points[2][2] = (float)pos[2];
            
            if (i == 2) {
                eff->points[2][0] -= 0.0625f;
            }

            eff->velocity[0] = 0;
            eff->velocity[1] = 0;
            eff->velocity[2] = 0;
            
            eff->point_velocity[0][0] = vel[0] * 0.015625f;
            eff->point_velocity[0][1] = vel[1] * 0.015625f;
            eff->point_velocity[0][2] = vel[2] * 0.015625f;
            
            eff->drag = 993158992.0f; // This looks like a bit-cast of 0x3B326750
            eff->lifetime = 60000; // Redundant but in assembly
            eff->size = 1048576000.0f; // 0x3E800000
            eff->size_2 = 1065311273.0f; // 0x3F7F5C29
            
            // Recalculate distance-like values
            float d0x = eff->points[0][0] - eff->points[1][0];
            float d0y = eff->points[0][1] - eff->points[1][1];
            float d0z = eff->points[0][2] - eff->points[1][2];
            eff->rest_length[0] = sqrtf(d0x * d0x + d0y * d0y + d0z * d0z);
            
            float d1x = eff->points[1][0] - eff->points[2][0];
            float d1y = eff->points[1][1] - eff->points[2][1];
            float d1z = eff->points[1][2] - eff->points[2][2];
            eff->rest_length[1] = sqrtf(d1x * d1x + d1y * d1y + d1z * d1z);
            
            float d2x = eff->points[2][0] - eff->points[0][0];
            float d2y = eff->points[2][1] - eff->points[0][1];
            float d2z = eff->points[2][2] - eff->points[0][2];
            eff->rest_length[2] = sqrtf(d2x * d2x + d2y * d2y + d2z * d2z);

            current_effect_count++;
        }
        i++; // Loop handles i internally but decompiled C had ++element_index
    }
    world_effect_count = current_effect_count;
}
