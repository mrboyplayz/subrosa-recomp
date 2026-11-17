#include "menu_widgets.h"
#include "text_helpers.h"
#include <math.h>

/* 0x140070FF0. Creates a scrollbar widget. If the widget is the hovered one
   and some global flags are set, it updates the value pointer using the
   mouse position and the widget's dimensions. */
uint32_t menu_scrollbar(int widget_id, float x, float y, float width, float height,
                       uint32_t style, uint32_t flags, float *value, float min, float max)
{
    uint32_t id = text_label_id("Scrollbar", widget_id + (menu_layout->id_seed << 16) + (menu_parent << 8));
    uint32_t slot = menu_allocate_widget(id, x, y, width, height, style);
    MenuWidget *w = &menu_widgets[slot];

    w->slider_min = (int32_t)min;
    w->slider_max = (int32_t)max;
    w->pending = flags;
    w->type = 7;
    w->value_pointer = (uint64_t)value;

    if (menu_input_blocked || (w->status = 0, menu_input_blocked)) {
        if (!menu_click) {
            if (slot != menu_hovered_widget)
                goto skip_update;
            w->status = 1;
        }
    }

    if (slot == menu_hovered_widget) {
        float val = (float)((float)(menu_mouse_x - w->screen[0]) / (w->screen[2] - (float)w->pending)) * (float)(w->slider_max - w->slider_min) + (float)w->slider_min;
        *value = fmaxf(min, fminf(max, val));
    }
skip_update:
    return slot;
}

/* 0x1400722C0. The original walks the buffer once, keeping every byte
   outside the selection in the scratch buffer 0x4000 bytes after it, then
   copies the scratch back over the buffer including its terminator. Bytes
   are kept when (i < anchor) and (i < caret) agree; the assembly compares
   them in that order. The final clamp of the collapsed caret against the
   new length is an unsigned 64-bit compare (cmova), so a negative caret
   collapses onto the new length too. */
int32_t menu_text_delete_selection(void)
{
    int caret = menu_text_caret;
    int anchor = menu_text_anchor;
    int kept = 0;
    int selection = 0;
    int low = caret;

    int length = 0;
    while (menu_text_buffer[length])
        ++length;

    for (int i = 0; i < length; ++i) {
        if ((i < anchor) == (i < caret)) {
            menu_text_scratch[kept++] = menu_text_buffer[i];
        } else {
            selection = 1;
            if (low > i)
                low = i;
        }
    }
    menu_text_scratch[kept] = 0;
    for (int i = 0; ; ++i) {
        menu_text_buffer[i] = menu_text_scratch[i];
        if (!menu_text_scratch[i])
            break;
    }
    menu_text_caret = low;

    int new_length = 0;
    while (menu_text_buffer[new_length])
        ++new_length;
    if ((uint64_t)(int64_t)low > (uint64_t)new_length)
        low = (int32_t)new_length;
    menu_text_caret = low;
    menu_text_anchor = low;
    return selection;
}
