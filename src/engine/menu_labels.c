#include <string.h>
#include "menu.h"
#include "text.h"

static void queue_label(const unsigned char *label, float x, float y, float size)
{
    MenuTextRecord *record = menu_label_record(menu_text_record_count);
    record->parent = menu_parent;
    unsigned char *out = record->label;
    unsigned char character;
    /* Native forward copy includes NUL and does not truncate at 256 bytes. */
    do { character = *label++; *out++ = character; } while (character);
    record = menu_label_record(menu_text_record_count);
    record->font = (int32_t)menu_layout->unknown_d4;
    record->local[0] = x; record->local[1] = y;
    record->size = size;
    record->screen[0] = x; record->screen[1] = y;
    record->unknown_2c = size; record->unknown_30 = size;
    if (menu_parent != -1) {
        record->screen[0] = *menu_parent_x(menu_parent) + record->screen[0];
        record->screen[1] = (*menu_parent_y(menu_parent) - *menu_parent_scroll(menu_parent))
                              + record->screen[1];
    }
    for (int k = 0; k < 4; ++k) record->border[k] = menu_layout->border[k];
    ++menu_text_record_count;
}

void menu_label(const unsigned char *label)
{
    if ((int32_t)menu_text_record_count >= 1024) return;
    queue_label(label, menu_layout->x, menu_layout->y, menu_layout->font_size);
    if (menu_layout->vertical)
        menu_layout->y = menu_layout->y + (menu_layout->font_size + 4.0f);
    else {
        float width = text_width((int32_t)menu_layout->unknown_d4,
                                 (const char *)label, menu_layout->font_size);
        menu_layout->x = menu_layout->x + (width + 4.0f);
    }
}

void menu_label_at(const unsigned char *label, float x, float y, float size, uint32_t flags)
{
    if ((int32_t)menu_text_record_count >= 1024) return;
    float width = text_width((int32_t)menu_layout->unknown_d4, (const char *)label, size);
    if (flags & 1) x = x + width * -0.5f;
    else if (flags & 2) x = x - width;
    if (flags & 4) y = y + size * -0.5f;
    else if (flags & 8) y = y - size;
    queue_label(label, x, y, size);
}
