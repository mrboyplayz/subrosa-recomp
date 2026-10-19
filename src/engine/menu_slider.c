#include "menu.h"
#include "arith.h"

int32_t *menu_slider_from_x(int index, float x)
{
    MenuWidget *widget = &menu_widgets[index];
    int32_t minimum = widget->slider_min, maximum = widget->slider_max;
    float thumb = widget->slider_thumb;
    float fraction = (x - thumb * 0.5f) / (widget->local[2] - thumb);
    float range = max_float((float)subtract_int(maximum, minimum), 1.0f);
    int32_t offset = truncate_float(fraction * range + 0.5f);
    if (menu_step_enabled) {
        int32_t step = widget->slider_step;
        if (step) {
            int32_t rounded = add_int(step >> 1, offset);
            offset = subtract_int(rounded, rounded % step);
        }
    }
    int32_t candidate = add_int(minimum, offset);
    if (candidate >= minimum) minimum = candidate;
    int32_t *out = (int32_t *)(uintptr_t)widget->value_pointer;
    if (minimum <= maximum) maximum = minimum;
    *out = maximum;
    return out;
}
