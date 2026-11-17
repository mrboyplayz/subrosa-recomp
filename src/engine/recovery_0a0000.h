/* The chat-name reader of the client frame.
 *
 * The name the reader scans lives beside the player records: the cursor
 * word 0x1862AE020, the window length 0x1862AE024 and the window bytes
 * 0x1862AE028, with a 1M-word scratch buffer at 0x1863AE028 whose copy
 * lands exactly 0x100008 words into it.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same return value. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_RECOVERY_0A0000_H
#define SR_ENGINE_RECOVERY_0A0000_H

#include <stdint.h>
#include "memory.h"

/* 0x1400A3D70. Reads the integer at the chat-name cursor: skips to the
 * first digit or '-', copies at most 255 digit/dash characters into the
 * scratch buffer 0x100008 words into 0x1863AE028, NUL-terminates, and
 * parses the copy with the original's CRT sscanf at 0x14015B070 through
 * its thunk. The cursor is left just past the last copied character. */
int recovery_name_read_number(void);

#endif
