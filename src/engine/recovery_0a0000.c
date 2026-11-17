/* The chat-name reader of the client frame. See recovery_0a0000.h.
 *
 * The name the reader scans lives beside the player records: the cursor
 * word 0x1862AE020, the window length 0x1862AE024 and the window bytes
 * 0x1862AE028, with a 1M-word scratch buffer at 0x1863AE028 whose copy
 * lands exactly 0x100008 words into it.
 */
#include "recovery_0a0000.h"

/* The original's CRT sscanf entry, still in src/client/. 0x14015B070 */
extern long long crt_sscanf(long long text, char *format, ...);

/* The name the chat reader scans: the cursor 0x1862AE020, the window
 * length 0x1862AE024 and the window bytes 0x1862AE028. */
#define NAME_CURSOR  SR_GLOBAL(int32_t, 0x1862AE020ULL)
#define NAME_LENGTH  SR_GLOBAL(int32_t, 0x1862AE024ULL)
#define NAME_WINDOW  (&SR_GLOBAL(unsigned char, 0x1862AE028ULL))
/* The scratch buffer 0x1863AE028: the copy lands 0x100008 words into it. */
#define NAME_SCRATCH (&SR_GLOBAL(unsigned char, 0x1863AE028ULL))
#define NAME_SCRATCH_STRIDE 0x100008U

/* 0x1402734f8: the "%d" the original passes to its CRT sscanf. */
static char name_number_format[] = "%d";

/* 0x1400A3D70. Reads the integer at the chat-name cursor: skips to the
 * first digit or '-', copies at most 255 digit/dash characters into the
 * scratch buffer 0x100008 words into 0x1863AE028, NUL-terminates, and
 * parses the copy with the original's CRT sscanf at 0x14015B070 through
 * its thunk. The cursor is left just past the last copied character. */
int recovery_name_read_number(void)
{
    int position = NAME_CURSOR;
    int limit = NAME_LENGTH;
    int copied = 0;
    unsigned int parsed;

    while (position < limit) {
        unsigned char ch = NAME_WINDOW[position];
        if ((unsigned char)(ch - 48) <= 9u || ch == 45)
            break;
        NAME_CURSOR = ++position;
    }
    if (position < limit) {
        for (;;) {
            unsigned char ch;
            if (copied >= 255)
                break;
            ch = NAME_WINDOW[position];
            if ((unsigned char)(ch - 48) > 9u && ch != 45)
                break;
            NAME_SCRATCH[NAME_SCRATCH_STRIDE + copied] = ch;
            ++copied;
            position = ++NAME_CURSOR;
            if (position >= limit)
                break;
        }
    }
    NAME_SCRATCH[NAME_SCRATCH_STRIDE + copied] = 0;
    crt_sscanf((long long)(uintptr_t)&NAME_SCRATCH[NAME_SCRATCH_STRIDE],
               name_number_format, &parsed);
    return (int)parsed;
}
