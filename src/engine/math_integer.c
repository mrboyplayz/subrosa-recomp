#include <string.h>
#include "math3d.h"
#include "arith.h"

void math_mat3_transpose(float out[9], const float matrix[9])
{
    uint32_t words[9];
    memcpy(words, matrix, sizeof(words));
    for (int row = 0; row < 3; ++row)
        for (int column = 0; column < 3; ++column)
            memcpy(out + row * 3 + column, words + column * 3 + row, 4);
}

uint32_t math_fixed_vec2_rotate(int32_t vector[2], uint16_t angle)
{
    int64_t sine = math_fixed_sine[angle];
    int64_t cosine = math_fixed_sine[(uint16_t)(angle + 0x4000)];
    int64_t x = vector[0], y = vector[1];
    int64_t negative_y = subtract_int(0, (int32_t)y);
    uint32_t new_x = (uint32_t)((cosine * x + 0x8000) >> 16)
                   + (uint32_t)((sine * negative_y + 0x8000) >> 16);
    uint32_t new_y = (uint32_t)((sine * x + 0x8000) >> 16)
                   + (uint32_t)((cosine * y + 0x8000) >> 16);
    vector[0] = (int32_t)new_x;
    vector[1] = (int32_t)new_y;
    return new_y;
}
