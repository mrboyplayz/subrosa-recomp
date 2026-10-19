/* Immediate-mode menu records. Original widget stride: 488 bytes. */
#ifndef SR_ENGINE_MENU_H
#define SR_ENGINE_MENU_H
#include <stddef.h>
#include "memory.h"
#define MENU_WIDGET_CAPACITY 1024

#pragma pack(push, 4)
typedef struct MenuWidget {
    int32_t status;
    uint32_t id;
    int32_t type;
    uint32_t unknown_0c, unknown_10;
    uint32_t visible;
    uint32_t disabled;
    uint32_t shortcut;
    uint32_t pending;
    uint32_t input_source;
    union { uint32_t unknown_28; int32_t font; };
    union { uint32_t unknown_2c, password; };
    float local[4];
    uint32_t border[4];
    union { uint32_t style; float text_size; };
    float screen[4];
    uint32_t neighbors[6];
    uint32_t unknown_7c, unknown_80;
    uint32_t unknown_84, unknown_88, unknown_8c;
    uint64_t attachment;
    unsigned char label[256];
    union {
        uint64_t value_pointer;
        struct { uint32_t value_word, unknown_19c; };
    };
    union { uint32_t option; int32_t slider_min; };
    union {
        uint8_t unknown_1a4[68];
        struct {
            int32_t slider_max, slider_step;
            float slider_thumb;
            uint8_t unknown_1b0[56];
        };
    };
} MenuWidget;
typedef struct MenuLayout {
    uint32_t id_seed;
    int32_t last_widget;
    uint32_t unknown_d4;
    float x, y, width, height;
    union { uint32_t style; float font_size; };
    float unknown_ec;
    uint32_t next_active, next_shortcut, next_alignment, next_disabled;
    uint32_t next_unknown_100, next_keyboard_focus;
    uint32_t next_unknown_108, next_unknown_10c;
    uint64_t next_attachment;
    uint32_t vertical, unknown_11c, unknown_120;
    float row_height;
    uint32_t border[4];
} MenuLayout;
typedef struct MenuTextRecord {
    int32_t font, parent;
    float local[2];
    uint32_t border[4];
    float size;
    float screen[2];
    float unknown_2c, unknown_30;
    unsigned char label[256];
} MenuTextRecord;
#pragma pack(pop)
_Static_assert(sizeof(MenuWidget) == 488, "widget stride");
_Static_assert(offsetof(MenuWidget, label) == 152, "widget label");
_Static_assert(offsetof(MenuWidget, value_pointer) == 408, "widget value");
_Static_assert(sizeof(MenuLayout) == 108, "layout state");
_Static_assert(sizeof(MenuTextRecord) == 308, "queued text stride");
#define menu_widgets (&SR_GLOBAL(MenuWidget, 0x150F61190ULL))
#define menu_layout (&SR_GLOBAL(MenuLayout, 0x150F610CCULL))
#define menu_parent SR_GLOBAL(int32_t, 0x150F61084ULL)
#define menu_group_depth SR_GLOBAL(uint32_t, 0x150F61088ULL)
static inline uint32_t *menu_group_slot(uint32_t depth) {
    return &SR_GLOBAL(uint32_t, 0x150F6108CULL + (int64_t)(int32_t)depth * 4);
}
#define menu_active_parent SR_GLOBAL(int32_t, 0x150F61168ULL)
#define menu_active_widget SR_GLOBAL(int32_t, 0x150F61174ULL)
#define menu_unknown_61178 SR_GLOBAL(uint32_t, 0x150F61178ULL)
#define menu_hovered_widget SR_GLOBAL(int32_t, 0x150F61180ULL)
#define menu_keyboard_widget SR_GLOBAL(int32_t, 0x150F61188ULL)
#define menu_keyboard_trigger SR_GLOBAL(uint32_t, 0x150F6118CULL)
#define menu_input_mode SR_GLOBAL(int32_t, 0x151040998ULL)
#define menu_input_source SR_GLOBAL(uint32_t, 0x1510409A0ULL)
#define menu_step_enabled SR_GLOBAL(uint8_t, 0x151041AA0ULL)
#define menu_input_blocked SR_GLOBAL(uint32_t, 0x151042650ULL)
#define menu_click SR_GLOBAL(uint32_t, 0x1510426ECULL)
#define menu_text_limit SR_GLOBAL(int32_t, 0x151042A3CULL)
#define menu_text_buffer (&SR_GLOBAL(unsigned char, 0x151042A40ULL))
#define menu_clip_depth SR_GLOBAL(uint32_t, 0x15104270CULL)
#define menu_clip_rect (&SR_GLOBAL(float, 0x151042A1CULL))
static inline float *menu_clip_slot(uint32_t depth) {
    return &SR_GLOBAL(float, 0x151042710ULL + (int64_t)(int32_t)depth * 16);
}
#define menu_mouse_x SR_GLOBAL(float, 0x1B0032360ULL)
#define menu_grid_enabled SR_GLOBAL(uint32_t, 0x15104AA48ULL)
#define menu_grid_column SR_GLOBAL(uint32_t, 0x15104AE4CULL)
#define menu_grid_row SR_GLOBAL(uint32_t, 0x15104AE50ULL)
#define menu_size_depth SR_GLOBAL(uint32_t, 0x151042894ULL)
static inline uint32_t *menu_size_slot(uint32_t depth, unsigned component) {
    return &SR_GLOBAL(uint32_t, 0x151042898ULL + (int64_t)(int32_t)depth * 8 + component * 4);
}
#define menu_unknown_61040 SR_GLOBAL(uint32_t, 0x150F61040ULL)
#define menu_unknown_61138 (&SR_GLOBAL(uint32_t, 0x150F61138ULL))
#define menu_unknown_61148 (&SR_GLOBAL(uint32_t, 0x150F61148ULL))
#define menu_unknown_61158 (&SR_GLOBAL(uint32_t, 0x150F61158ULL))
#define menu_text_record_count SR_GLOBAL(uint32_t, 0x150FDB190ULL)
static inline MenuTextRecord *menu_label_record(uint32_t index) {
    return &SR_GLOBAL(MenuTextRecord, 0x150FDB194ULL + (int64_t)(int32_t)index * 308);
}
#define menu_unknown_parent_count SR_GLOBAL(uint32_t, 0x151028194ULL)
static inline uint32_t *menu_parent_status(int index) {
    return &SR_GLOBAL(uint32_t, 0x151028198ULL + (int64_t)index * 392);
}
static inline float *menu_parent_x(int index) {
    return &SR_GLOBAL(float, 0x151028300ULL + (int64_t)index * 392);
}
static inline float *menu_parent_y(int index) {
    return &SR_GLOBAL(float, 0x151028304ULL + (int64_t)index * 392);
}
static inline float *menu_parent_scroll(int index) {
    return &SR_GLOBAL(float, 0x1510281D0ULL + (int64_t)index * 392);
}
static inline int32_t *menu_shortcut_slot(uint32_t key) {
    return &SR_GLOBAL(int32_t, 0x151041DC0ULL + (uint64_t)key * 4);
}
static inline int32_t *menu_grid_slot(uint32_t row, uint32_t column) {
    return &SR_GLOBAL(int32_t, 0x15104AA4CULL
                     + ((int64_t)(int32_t)row * 16 + (int64_t)(int32_t)column) * 4);
}

uint32_t menu_allocate_widget(uint32_t id, float x, float y,
                              float width, float height, uint32_t style); /* 0x140070380 */
uint32_t menu_button(const unsigned char *label); /* 0x14006F1F0 */
uint32_t menu_selectable(const unsigned char *label, int32_t *value, uint32_t option); /* 0x14006F5A0 */
uint32_t menu_toggle(const unsigned char *label, uint32_t *value); /* 0x140071910 */
uint32_t menu_toggle_mask(const unsigned char *label, uint32_t *value, uint32_t mask); /* 0x140071AA0 */
uint32_t menu_group(const unsigned char *label); /* 0x14006FD10 */
/* Edit buffer caret and prefix width. These helpers index glyphs as unsigned
   bytes, and do not require a loaded-font flag. Only the width helper masks
   password characters with '*'. 0x140074C50/0x140074CE0 */
uint32_t menu_text_hit_index(int widget, float x);
float menu_text_prefix_width(int widget, int count);
/* Integer slider update, with x relative to its left edge. Signed integer
   sums wrap; a step of -1 with INT_MIN dividend retains native IDIV's fault
   and is outside the valid division inputs. 0x140075930 */
int32_t *menu_slider_from_x(int widget, float x);
uint32_t menu_slider(const unsigned char *label, int32_t *value,
                      int32_t minimum, int32_t maximum, int32_t step); /* 0x140071440 */
/* Push returns the sign-extended old depth; an empty/negative pop returns
   its zero-extended word. Both preserve raw dimension bits. */
int64_t menu_push_size(float width, float height); /* 0x1400755F0 */
uint64_t menu_pop_size(void); /* 0x1400753C0 */
uint32_t menu_begin_grid(void); /* 0x140070B90 */
uint32_t *menu_reset(void); /* 0x140075650 */
uint32_t menu_push_clip(float x, float y, float width, float height); /* 0x140075460 */
void menu_pop_clip(void); /* 0x140075340 */
void menu_label(const unsigned char *label); /* 0x140071640 */
void menu_label_at(const unsigned char *label, float x, float y, float size, uint32_t flags); /* 0x1400764B0 */
#endif
