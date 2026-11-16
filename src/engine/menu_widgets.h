/* Immediate-mode widget layer: the edit buffer of text fields, and the
 * widget draw/input routines that live on top of the menu records
 * (menu.h).
 *
 * The edit buffer is the game's shared text-editing state: one string with
 * a caret and a selection anchor. menu_text_delete_selection removes the
 * selected range; menu_text_key feeds keys into it.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same return value. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_MENU_WIDGETS_H
#define SR_ENGINE_MENU_WIDGETS_H

#include <stdint.h>
#include "memory.h"
#include "menu.h"

/* Edit-buffer state the text-field routines share. The scratch buffer sits
   0x4000 bytes after the text buffer (the original copies scratch back over
   the buffer with a -0x4000 displacement). */
#define menu_text_anchor  SR_GLOBAL(int32_t, 0x151042A30ULL)  /* selection anchor */
#define menu_text_caret   SR_GLOBAL(int32_t, 0x151042A34ULL)  /* caret */
#define menu_text_scratch (&SR_GLOBAL(unsigned char, 0x151046A40ULL))

/* Deletes the selected range [min(caret, anchor), max(caret, anchor)) from
   the edit buffer, copies the kept text back over the buffer, and collapses
   both the caret and the anchor onto the selection start (clamped against
   the new length as an unsigned 64-bit compare, as the original does).
   Returns 1 when a selection was removed, 0 otherwise. 0x1400722C0 */
int32_t menu_text_delete_selection(void);

#endif
