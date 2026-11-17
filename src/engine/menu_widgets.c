/* The menu edit buffer. See menu_widgets.h. */
#include "menu_widgets.h"

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
