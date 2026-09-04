#ifndef SR_UI_ORIGINAL_H
#define SR_UI_ORIGINAL_H

#include <stdint.h>
#include <stdio.h>

#define SR_UI_MAX_WIDGETS 1024
#define SR_UI_LABEL_MAX 256

typedef enum SrUiWidgetKind {
    SR_UI_WIDGET_EMPTY = 0,
    SR_UI_WIDGET_BUTTON = 0,
    SR_UI_WIDGET_SELECT_VALUE = 2,
    SR_UI_WIDGET_TEXT_ENTRY = 5,
    SR_UI_WIDGET_COMBO_BOX = 10,
    SR_UI_WIDGET_INT_SLIDER = 11,
    SR_UI_WIDGET_CHECKBOX = 1
} SrUiWidgetKind;

typedef struct SrUiRect {
    float x;
    float y;
    float w;
    float h;
} SrUiRect;

typedef struct SrUiWidget {
    int live;
    uint32_t id;
    SrUiWidgetKind kind;
    char label[SR_UI_LABEL_MAX];
    SrUiRect local_rect;
    SrUiRect screen_rect;
    int style;
    int parent;
    int clicked;
    int hovered;
    int int_min;
    int int_max;
    int int_step;
    int *int_value;
    const char **items;
    int item_count;
    int item_selected_at_build;
} SrUiWidget;

typedef struct SrUiContext {
    SrUiWidget widgets[SR_UI_MAX_WIDGETS];
    float cursor_x;
    float cursor_y;
    float default_w;
    float default_h;
    float last_advance_y;
    int horizontal;
    int style;
    int parent;
    int hot_widget;
    int active_widget;
    int focus_widget;
    int wheel_delta;
    float mouse_x;
    float mouse_y;
    int mouse_pressed;
} SrUiContext;

typedef struct SrUiOptionsState {
    int fullscreen;
    int vsync;
    int frame_smoothing;
    int sprite_models;
    int invert_mouse;
    int advanced_inventory;
    int sound_volume;
    int audio_output;
    int audio_input;
} SrUiOptionsState;

void sr_ui_begin(SrUiContext *ui, float x, float y, float w, float h);
uint32_t sr_ui_label_id(const char *label, uint32_t seed);
size_t sr_ui_visible_label(char *dst, size_t dst_size, const char *src);
int sr_ui_button(SrUiContext *ui, const char *label);
int sr_ui_checkbox(SrUiContext *ui, const char *label, int *value);
int sr_ui_int_slider(SrUiContext *ui, const char *label, int *value, int min_value, int max_value, int step);
int sr_ui_combo_box(SrUiContext *ui, const char *label, int *value, const char **items, int item_count);
void sr_ui_build_options_menu(SrUiContext *ui, SrUiOptionsState *state);
void sr_ui_dump(FILE *out, const SrUiContext *ui);
void sr_ui_print_options_menu(FILE *out);

#endif
