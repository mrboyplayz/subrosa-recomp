#include <string.h>
#include "menu.h"
#include "text_helpers.h"

uint32_t menu_allocate_widget(uint32_t id, float x, float y,
                              float width, float height, uint32_t style)
{
    uint32_t alignment = menu_layout->next_alignment;
    int minimum_status = (alignment >> 8) & 1;
    int index = -1, previous_status = 0;
    menu_layout->next_alignment = 0;
    /* The last matching reusable slot wins. */
    for (int i = 0; i < MENU_WIDGET_CAPACITY; ++i)
        if (menu_widgets[i].status > minimum_status && menu_widgets[i].status < 3
            && menu_widgets[i].id == id) {
            index = i;
            previous_status = menu_widgets[i].status;
        }
    if (index == -1) {
        index = 0;
        while (menu_widgets[index].status)
            if (++index >= MENU_WIDGET_CAPACITY) return UINT32_MAX;
        memset(&menu_widgets[index], 0, sizeof(MenuWidget));
    }
    if (alignment & 1) x = x + width * -0.5f;
    else if (alignment & 2) x = x - width;
    if (alignment & 4) y = y + height * -0.5f;
    else if (alignment & 8) y = y - height;
    MenuWidget *widget = &menu_widgets[index];
    widget->status = 3;
    widget->id = id;
    widget->visible = 1;
    widget->unknown_28 = menu_layout->unknown_d4;
    widget->input_source = (uint32_t)menu_parent;
    widget->local[0] = x; widget->local[1] = y;
    widget->local[2] = width; widget->local[3] = height;
    widget->screen[0] = x; widget->screen[1] = y;
    widget->screen[2] = width; widget->screen[3] = height;
    if (menu_parent != -1) {
        widget->screen[0] = x + *menu_parent_x(menu_parent);
        widget->screen[1] = (*menu_parent_y(menu_parent) - *menu_parent_scroll(menu_parent)) + y;
    }
    for (int k = 0; k < 4; ++k) widget->border[k] = menu_layout->border[k];
    widget->style = style;
    if (menu_layout->next_active) {
        menu_active_widget = index;
        menu_layout->next_active = 0;
    }
    widget->disabled = menu_layout->next_disabled ? 1 : 0;
    menu_layout->next_disabled = 0;
    uint32_t key = menu_layout->next_shortcut;
    widget->shortcut = key;
    if (key && key - 1 <= 510
        && (*menu_shortcut_slot(key) == -1 || menu_parent == menu_active_parent))
        *menu_shortcut_slot(key) = index;
    menu_layout->next_shortcut = 0;
    widget->unknown_2c = menu_layout->next_unknown_100;
    menu_layout->next_unknown_100 = 0;
    if (menu_layout->next_attachment) {
        widget->unknown_84 = menu_layout->next_unknown_108;
        widget->unknown_88 = menu_layout->next_unknown_10c;
        widget->attachment = menu_layout->next_attachment;
    }
    menu_layout->next_attachment = 0;
    for (int k = 0; k < 6; ++k) widget->neighbors[k] = UINT32_MAX;
    if (menu_grid_enabled) {
        uint32_t column = menu_grid_column, row = menu_grid_row;
        if ((int32_t)column < 16 && (int32_t)row < 16)
            *menu_grid_slot(row, column) = index;
        if (menu_layout->vertical) {
            menu_grid_column = 0;
            menu_grid_row = row + 1;
        } else menu_grid_column = column + 1;
    }
    if (menu_layout->next_keyboard_focus && previous_status <= 1)
        menu_keyboard_widget = index;
    menu_layout->next_keyboard_focus = 0;
    return (uint32_t)index;
}

static uint32_t make_widget(const unsigned char *label)
{
    uint32_t seed = ((uint32_t)menu_parent << 8) + (menu_layout->id_seed << 16);
    uint32_t id = text_label_id(label, seed);
    return menu_allocate_widget(id, menu_layout->x, menu_layout->y,
                                menu_layout->width, menu_layout->height, menu_layout->style);
}

static MenuWidget *finish_widget(int32_t index, int type, const unsigned char *label)
{
    if (menu_layout->vertical)
        menu_layout->y = menu_layout->y + (menu_layout->height + 4.0f);
    else {
        menu_layout->x = menu_layout->x + (menu_layout->width + 4.0f);
        menu_layout->row_height = menu_layout->height + 4.0f;
    }
    menu_layout->last_widget = (int32_t)index;
    MenuWidget *widget = &menu_widgets[index];
    widget->type = type;
    text_copy_visible_label(widget->label, label);
    return widget;
}

static int clicked(uint32_t index)
{
    return !menu_input_blocked && menu_click && (int32_t)index == menu_hovered_widget
        && (int32_t)index == menu_active_widget;
}

uint32_t menu_button(const unsigned char *label)
{
    uint32_t index = make_widget(label);
    if (index == UINT32_MAX) return 0;
    MenuWidget *widget = finish_widget(index, 0, label);
    if (widget->disabled) return 0;
    if (clicked(index)) return 1;
    if (widget->pending) { widget->pending = 0; return 1; }
    return (int32_t)index == menu_keyboard_widget && menu_keyboard_trigger;
}

uint32_t menu_selectable(const unsigned char *label, int32_t *value, uint32_t option)
{
    uint32_t index = make_widget(label);
    if (index == UINT32_MAX) return 0;
    MenuWidget *widget = finish_widget(index, 2, label);
    int enabled = !widget->disabled;
    widget->value_pointer = (uintptr_t)value;
    widget->option = option;
    if (enabled) {
        if (clicked(index)) { *value = (int32_t)option; return 1; }
        if ((menu_input_mode < 2 || widget->input_source == menu_input_source) && widget->pending) {
            widget->pending = 0;
            *value = (int32_t)option;
            return 1;
        }
    }
    return 0;
}

uint32_t menu_toggle(const unsigned char *label, uint32_t *value)
{
    uint32_t index = make_widget(label);
    if (index == UINT32_MAX) return 0;
    MenuWidget *widget = finish_widget(index, 1, label);
    widget->value_pointer = (uintptr_t)value;
    widget->option = 1;
    if (!clicked(index)) return 0;
    *value ^= 1;
    return 1;
}

uint32_t menu_toggle_mask(const unsigned char *label, uint32_t *value, uint32_t mask)
{
    uint32_t index = make_widget(label);
    if (index == UINT32_MAX) return 0;
    MenuWidget *widget = finish_widget(index, 1, label);
    widget->value_pointer = (uintptr_t)value;
    widget->option = mask;
    if (!clicked(index)) return 0;
    *value ^= mask;
    return 1;
}

uint32_t menu_group(const unsigned char *label)
{
    uint32_t index = make_widget(label);
    if (index == UINT32_MAX) return 0;
    MenuWidget *widget = finish_widget(index, 13, label);
    if (clicked(index)) widget->value_word ^= 1u;
    if (widget->value_word) {
        menu_layout->id_seed = index;
        menu_layout->x = menu_layout->x + 16.0f;
        if ((int32_t)menu_group_depth < 16) {
            *menu_group_slot(menu_group_depth) = index;
            ++menu_group_depth;
        }
    }
    return widget->value_word;
}

uint32_t menu_slider(const unsigned char *label, int32_t *value,
                      int32_t minimum, int32_t maximum, int32_t step)
{
    uint32_t index = make_widget(label);
    /* This native helper also writes the record preceding the pool when
       allocation fails; preserve that signed-index behavior. */
    MenuWidget *widget = finish_widget((int32_t)index, 11, label);
    widget->slider_step = step;
    widget->value_pointer = (uintptr_t)value;
    widget->slider_min = minimum;
    widget->slider_max = maximum;
    widget->slider_thumb = 16.0f;
    if ((int32_t)index == menu_active_widget)
        menu_slider_from_x((int32_t)index, menu_mouse_x - widget->screen[0]);
    return index;
}
