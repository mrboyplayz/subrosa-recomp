#include <string.h>
#include "menu.h"

int64_t menu_push_size(float width, float height)
{
    int64_t result = (int32_t)menu_size_depth;
    if ((int32_t)menu_size_depth < 16) {
        memcpy(menu_size_slot(menu_size_depth, 0), &menu_layout->width, 4);
        result = (int32_t)menu_size_depth;
        memcpy(menu_size_slot(menu_size_depth, 1), &menu_layout->height, 4);
        /* The height slot at depth -1 aliases the depth word itself. */
        ++menu_size_depth;
    }
    memcpy(&menu_layout->height, &height, 4);
    memcpy(&menu_layout->width, &width, 4);
    return result;
}

uint64_t menu_pop_size(void)
{
    uint64_t result = menu_size_depth;
    if ((int32_t)menu_size_depth > 0) {
        --menu_size_depth;
        result = (int32_t)((uint32_t)result - 1u);
        memcpy(&menu_layout->width, menu_size_slot((uint32_t)result, 0), 4);
        memcpy(&menu_layout->height, menu_size_slot((uint32_t)result, 1), 4);
    }
    return result;
}

uint32_t menu_begin_grid(void)
{
    menu_grid_enabled = 1;
    memset(menu_grid_slot(0, 0), 0xff, 16 * 16 * sizeof(int32_t));
    menu_grid_column = 0;
    menu_grid_row = 0;
    return 0;
}

uint32_t *menu_reset(void)
{
    static const uint32_t dimensions[4] = {0x40800000,0x40800000,0x43400000,0x41c00000};
    static const uint32_t colours_138[4] = {0x3e000000,0x3e000000,0x3e000000,0x3f600000};
    static const uint32_t colours_148[4] = {0x3e000000,0x3e800000,0x3ec00000,0x3f800000};
    static const uint32_t colours_158[4] = {0x3e800000,0x3ec00000,0x3f000000,0x3f800000};
    static const uint32_t border[4] = {0x3f800000,0x3f800000,0x3f800000,0x3f800000};
    for (int i = 0; i < MENU_WIDGET_CAPACITY; ++i) {
        menu_widgets[i].status = 0;
        menu_widgets[i].unknown_0c = 0;
    }
    menu_text_record_count = 0;
    menu_unknown_parent_count = 0;
    for (int i = 0; i < 256; ++i) *menu_parent_status(i) = 0;
    uint32_t *shortcuts = (uint32_t *)menu_shortcut_slot(0);
    memset(shortcuts, 0xff, 512 * sizeof(uint32_t));
    memcpy(&menu_layout->x, dimensions, sizeof(dimensions));
    menu_parent = -1;
    menu_layout->style = 1095761920;
    const uint32_t spacing = 1082130432;
    memcpy(&menu_layout->unknown_ec, &spacing, 4);
    memcpy(menu_unknown_61138, colours_138, sizeof(colours_138));
    menu_unknown_61040 = 0;
    memcpy(menu_unknown_61148, colours_148, sizeof(colours_148));
    menu_layout->id_seed = UINT32_MAX;
    memcpy(menu_unknown_61158, colours_158, sizeof(colours_158));
    menu_group_depth = 0;
    menu_layout->vertical = 1;
    memcpy(menu_layout->border, border, sizeof(border));
    menu_layout->next_shortcut = 0;
    menu_active_parent = -1;
    menu_active_widget = -1;
    menu_unknown_61178 = UINT32_MAX;
    menu_keyboard_widget = -1;
    return shortcuts;
}
