#include "hud.h"
#include "memory.h"
#include "math3d.h"
#include "gl.h"
#include <math.h>
#include <string.h>

#define HUD_TABLE_BASE 0x192E8EC40ULL

void hud_draw_health_capsule(int player_idx, float a2, float a3)
{
    /* 0x1400A77C0 */
    float x0 = a3;
    float y0 = a2;
    
    /* These correspond to the values in xmm11, xmm10 etc at the start */
    /* Based on the disassembled flow and the original decompiler's usage of global arrays */
    /* We assume these are vertex offsets or similar. */
    float v_off_x = SR_GLOBAL(float, 0x140404A6C + 0x100); // This is a placeholder
    float v_off_y = SR_GLOBAL(float, 0x140404A6C + 0x110); 
    
    float dx = x0 - v_off_x;
    float dy = y0 - v_off_y;
    
    float len = sqrtf(dx * dx + dy * dy);
    float nx = 0, ny = 0;
    if (len != 0.0f) {
        nx = dx / len;
        ny = dy / len;
    }

    renderer_batch->primitive = RENDERER_BATCH_TRIANGLES;
    renderer_batch->vertex_count = 0;
    renderer_batch->floats_per_vertex = 9;
    
    /* The loop in assembly (0x1400a78d0) runs 64 times. */
    /* It uses a table at 0x192E8EC40. */
    for (int i = 0; i < 64; i++) {
        float *table_entry = (float *)(uintptr_t)(HUD_TABLE_BASE + i * 8);
        float tx = table_entry[0];
        float ty = table_entry[1];
        
        float vx = (nx * tx + ny * ty) + x0;
        float vy = (ny * tx - nx * ty) + y0;
        
        float v[3] = {vx, vy, 0.0f};
        renderer_batch_vertex3fv(v);
    }
    
    renderer_batch_flush();
}
