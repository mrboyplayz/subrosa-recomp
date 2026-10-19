#include <string.h>
#include "menu.h"
#include "text.h"

static float advance(int font, unsigned char character)
{
    float value;
    memcpy(&value, text_font_bytes(font) + TEXT_FONT_ADVANCES + 4u * character, 4);
    return value;
}

uint32_t menu_text_hit_index(int index, float x)
{
    const MenuWidget *widget = &menu_widgets[index];
    int at = 0;
    float width = 0.0f;
    while (menu_text_buffer[at]) {
        if (at >= menu_text_limit) break;
        width = width + advance(widget->font, menu_text_buffer[at]) * widget->text_size;
        /* COMISS/JB stops for both a smaller x and unordered operands. */
        if (!(x >= width)) break;
        ++at;
    }
    return (uint32_t)at;
}

float menu_text_prefix_width(int index, int count)
{
    float width = 0.0f;
    if (count <= 0) return width;
    const MenuWidget *widget = &menu_widgets[index];
    for (int at = 0; at < count; ++at) {
        unsigned char character = menu_text_buffer[at];
        if (!character || at >= menu_text_limit) break;
        if (widget->password) character = '*';
        width = width + widget->text_size * advance(widget->font, character);
    }
    return width;
}
