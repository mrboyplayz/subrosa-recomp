#include "sr_ui_original.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>

static uint32_t sr_crc_table[256];
static int sr_crc_ready;

static void sr_crc_init(void) {
    if (sr_crc_ready) {
        return;
    }
    for (uint32_t i = 0; i < 256; i++) {
        uint32_t c = i;
        for (int bit = 0; bit < 8; bit++) {
            c = (c >> 1) ^ (0xedb88320u & (uint32_t)-(int)(c & 1u));
        }
        sr_crc_table[i] = c;
    }
    sr_crc_ready = 1;
}

uint32_t sr_ui_label_id(const char *label, uint32_t seed) {
    sr_crc_init();
    uint32_t crc = seed;
    const unsigned char *p = (const unsigned char *)label;
    while (*p) {
        crc = (crc >> 8) ^ sr_crc_table[(crc ^ *p) & 0xffu];
        p++;
    }
    return ~crc;
}

size_t sr_ui_visible_label(char *dst, size_t dst_size, const char *src) {
    size_t len = 0;
    if (!dst_size) {
        return 0;
    }
    while (src[len] && len + 1 < dst_size) {
        if (src[len] == '#' && src[len + 1] == '#') {
            break;
        }
        dst[len] = src[len];
        len++;
    }
    dst[len] = 0;
    return len;
}

void sr_ui_begin(SrUiContext *ui, float x, float y, float w, float h) {
    memset(ui, 0, sizeof(*ui));
    ui->cursor_x = x;
    ui->cursor_y = y;
    ui->default_w = w;
    ui->default_h = h;
    ui->style = 0;
    ui->parent = -1;
    ui->hot_widget = -1;
    ui->active_widget = -1;
    ui->focus_widget = -1;
}

static int sr_ui_alloc_widget(SrUiContext *ui, uint32_t id, float w, float h) {
    int best = -1;
    int best_generation = -1;
    for (int i = 0; i < SR_UI_MAX_WIDGETS; i++) {
        SrUiWidget *widget = &ui->widgets[i];
        if (widget->live && widget->id == id && widget->style < 3 && widget->style > best_generation) {
            best = i;
            best_generation = widget->style;
        }
    }
    if (best == -1) {
        for (int i = 0; i < SR_UI_MAX_WIDGETS; i++) {
            if (!ui->widgets[i].live) {
                best = i;
                memset(&ui->widgets[i], 0, sizeof(ui->widgets[i]));
                break;
            }
        }
    }
    if (best == -1) {
        return -1;
    }

    /* IDA shows 1024 slots with a 488-byte stride; this struct keeps the recovered fields named. */
    SrUiWidget *widget = &ui->widgets[best];
    widget->live = 1;
    widget->id = id;
    widget->style = ui->style;
    widget->parent = ui->parent;
    widget->local_rect.x = ui->cursor_x;
    widget->local_rect.y = ui->cursor_y;
    widget->local_rect.w = w;
    widget->local_rect.h = h;
    widget->screen_rect = widget->local_rect;

    if (ui->horizontal) {
        ui->cursor_x += w + 4.0f;
        ui->last_advance_y = h + 4.0f;
    } else {
        ui->cursor_y += h + 4.0f;
        ui->last_advance_y = h + 4.0f;
    }

    return best;
}

static int sr_ui_widget_hit(const SrUiWidget *widget, float x, float y) {
    return x >= widget->screen_rect.x &&
           y >= widget->screen_rect.y &&
           x < widget->screen_rect.x + widget->screen_rect.w &&
           y < widget->screen_rect.y + widget->screen_rect.h;
}

static int sr_ui_finish_clickable(SrUiContext *ui, int index, const char *label, SrUiWidgetKind kind) {
    if (index < 0) {
        return 0;
    }
    SrUiWidget *widget = &ui->widgets[index];
    widget->kind = kind;
    sr_ui_visible_label(widget->label, sizeof(widget->label), label);
    widget->hovered = sr_ui_widget_hit(widget, ui->mouse_x, ui->mouse_y);
    widget->clicked = widget->hovered && ui->mouse_pressed;
    return widget->clicked;
}

int sr_ui_button(SrUiContext *ui, const char *label) {
    uint32_t id = sr_ui_label_id(label, (uint32_t)((ui->parent << 8) + (ui->style << 16)));
    int index = sr_ui_alloc_widget(ui, id, ui->default_w, ui->default_h);
    return sr_ui_finish_clickable(ui, index, label, SR_UI_WIDGET_BUTTON);
}

int sr_ui_checkbox(SrUiContext *ui, const char *label, int *value) {
    uint32_t id = sr_ui_label_id(label, (uint32_t)((ui->parent << 8) + (ui->style << 16)));
    int index = sr_ui_alloc_widget(ui, id, ui->default_w, ui->default_h);
    int clicked = sr_ui_finish_clickable(ui, index, label, SR_UI_WIDGET_CHECKBOX);
    if (index >= 0) {
        ui->widgets[index].int_value = value;
        ui->widgets[index].int_min = 0;
        ui->widgets[index].int_max = 1;
    }
    if (clicked && value) {
        *value ^= 1;
    }
    return clicked;
}

int sr_ui_int_slider(SrUiContext *ui, const char *label, int *value, int min_value, int max_value, int step) {
    uint32_t id = sr_ui_label_id(label, (uint32_t)((ui->parent << 8) + (ui->style << 16)));
    int index = sr_ui_alloc_widget(ui, id, ui->default_w, ui->default_h);
    int clicked = sr_ui_finish_clickable(ui, index, label, SR_UI_WIDGET_INT_SLIDER);
    if (index >= 0) {
        SrUiWidget *widget = &ui->widgets[index];
        widget->int_value = value;
        widget->int_min = min_value;
        widget->int_max = max_value;
        widget->int_step = step;
    }
    if (clicked && value) {
        int span = max_value - min_value;
        float rel = span > 0 ? (ui->mouse_x - ui->widgets[index].screen_rect.x - 8.0f) /
                              (ui->widgets[index].screen_rect.w - 16.0f) : 0.0f;
        int next = min_value + (int)(rel * (float)span + 0.5f);
        if (step > 0) {
            next -= next % step;
        }
        if (next < min_value) {
            next = min_value;
        }
        if (next > max_value) {
            next = max_value;
        }
        *value = next;
    }
    return index;
}

int sr_ui_combo_box(SrUiContext *ui, const char *label, int *value, const char **items, int item_count) {
    uint32_t id = sr_ui_label_id(label, (uint32_t)((ui->parent << 8) + (ui->style << 16)));
    int index = sr_ui_alloc_widget(ui, id, ui->default_w, ui->default_h);
    int clicked = sr_ui_finish_clickable(ui, index, label, SR_UI_WIDGET_COMBO_BOX);
    if (index >= 0) {
        SrUiWidget *widget = &ui->widgets[index];
        widget->int_value = value;
        widget->items = items;
        widget->item_count = item_count;
        widget->item_selected_at_build = value ? *value : 0;
    }
    if (value && item_count > 0 && ui->hot_widget == index) {
        while (ui->wheel_delta < 0) {
            *value = (*value + item_count - 1) % item_count;
            ui->wheel_delta++;
        }
        while (ui->wheel_delta > 0) {
            *value = (*value + 1) % item_count;
            ui->wheel_delta--;
        }
    }
    return clicked;
}

void sr_ui_build_options_menu(SrUiContext *ui, SrUiOptionsState *state) {
    static const char *audio_outputs[] = { "Default", "Device 1", "Device 2" };
    static const char *audio_inputs[] = { "Default", "Microphone 1", "Microphone 2" };

    sr_ui_button(ui, "Back");
    sr_ui_checkbox(ui, "Fullscreen", &state->fullscreen);
    sr_ui_checkbox(ui, "V-Sync", &state->vsync);
    sr_ui_checkbox(ui, "Frame Smoothing", &state->frame_smoothing);
    sr_ui_checkbox(ui, "Sprite Models", &state->sprite_models);
    sr_ui_checkbox(ui, "Invert Mouse", &state->invert_mouse);
    sr_ui_checkbox(ui, "Use advanced inventory", &state->advanced_inventory);
    sr_ui_int_slider(ui, "Sound Volume", &state->sound_volume, 0, 100, 10);
    sr_ui_combo_box(ui, "Audio Output", &state->audio_output, audio_outputs, 3);
    sr_ui_combo_box(ui, "Audio Input", &state->audio_input, audio_inputs, 3);
}

void sr_ui_dump(FILE *out, const SrUiContext *ui) {
    for (int i = 0; i < SR_UI_MAX_WIDGETS; i++) {
        const SrUiWidget *widget = &ui->widgets[i];
        if (!widget->live) {
            continue;
        }
        fprintf(out, "%03d kind=%d id=%08x rect=(%.1f,%.1f %.1fx%.1f) label=\"%s\"",
                i,
                widget->kind,
                widget->id,
                widget->screen_rect.x,
                widget->screen_rect.y,
                widget->screen_rect.w,
                widget->screen_rect.h,
                widget->label);
        if (widget->int_value) {
            fprintf(out, " value=%d", *widget->int_value);
        }
        if (widget->items && widget->item_count > 0) {
            int selected = widget->int_value ? *widget->int_value : 0;
            if (selected >= 0 && selected < widget->item_count) {
                fprintf(out, " item=\"%s\"", widget->items[selected]);
            }
        }
        fputc('\n', out);
    }
}

void sr_ui_print_options_menu(FILE *out) {
    SrUiContext ui;
    SrUiOptionsState state = {
        1, 1, 0, 1, 0, 0, 80, 0, 0
    };
    sr_ui_begin(&ui, 32.0f, 40.0f, 320.0f, 32.0f);
    sr_ui_build_options_menu(&ui, &state);
    sr_ui_dump(out, &ui);
}
