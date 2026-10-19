#include <string.h>
#include "menu.h"
#include "camera.h"
#include "arith.h"
#include "gl.h"

uint32_t menu_push_clip(float x, float y, float width, float height)
{
    float old_x, old_y, old_width, old_height;
    if (menu_clip_depth) {
        old_x = menu_clip_rect[0]; old_y = menu_clip_rect[1];
        old_width = menu_clip_rect[2]; old_height = menu_clip_rect[3];
    } else {
        old_x = old_y = 0.0f;
        old_width = renderer_canvas_width; old_height = renderer_canvas_height;
        menu_clip_rect[0] = old_x; menu_clip_rect[1] = old_y;
        menu_clip_rect[2] = old_width; menu_clip_rect[3] = old_height;
    }
    float left = max_float(old_x, x);
    float right = min_float(old_width + old_x, x + width);
    /* The native code evaluates both vertical bounds even when the
       horizontal interval fails. Keep those FP exceptions observable. */
    volatile float top = max_float(old_y, y);
    volatile float bottom = min_float(old_height + old_y, y + height);
    if (left > right || top > bottom) return 0;
    menu_clip_rect[0] = left; menu_clip_rect[1] = top;
    menu_clip_rect[2] = right - left; menu_clip_rect[3] = bottom - top;
    menu_clip_slot(menu_clip_depth)[0] = left;
    memcpy(menu_clip_slot(menu_clip_depth) + 2, menu_clip_rect + 2, 4);
    menu_clip_slot(menu_clip_depth)[1] = top;
    memcpy(menu_clip_slot(menu_clip_depth) + 3, menu_clip_rect + 3, 4);
    if (++menu_clip_depth == 1) glEnable(3089);
    camera_set_scissor(menu_clip_rect[0], menu_clip_rect[1], menu_clip_rect[2], menu_clip_rect[3]);
    return 1;
}

void menu_pop_clip(void)
{
    if ((int32_t)menu_clip_depth <= 0) { glDisable(3089); return; }
    --menu_clip_depth;
    if ((int32_t)menu_clip_depth <= 0) { glDisable(3089); return; }
    uint32_t index = menu_clip_depth - 1u;
    memcpy(menu_clip_rect, menu_clip_slot(index), 4);
    memcpy(menu_clip_rect + 2, menu_clip_slot(index) + 2, 4);
    memcpy(menu_clip_rect + 1, menu_clip_slot(index) + 1, 4);
    memcpy(menu_clip_rect + 3, menu_clip_slot(index) + 3, 4);
    camera_set_scissor(menu_clip_rect[0], menu_clip_rect[1], menu_clip_rect[2], menu_clip_rect[3]);
}
