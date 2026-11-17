// NC_WRAPPERS: 1400A3D70
/* The chat-name reader's integer parse (0x1400A3D70): the original skips
   to the first digit or '-' in the chat-name window 0x1862AE028, copies
   at most 255 digit/dash characters into the scratch buffer at
   0x1863AE028 + 0x100008 words, NUL-terminates and parses the copy with
   the original's CRT sscanf (0x14015B070). The cursor 0x1862AE020 is
   left just past the last copied character; when the window has no digit
   or is exhausted the copy is empty and sscanf parses nothing. */
#include <string.h>
#include "nc.h"
#include "recovery_0a0000.h"

/* The cursor 0x1862AE020, the window length 0x1862AE024, the window bytes
   0x1862AE028 and the scratch buffer the copy lands in 0x100008 words into
   (0x1863AE028). The state the driver touches: the whole name window plus
   the cursor and length words and the first 512 bytes of the scratch. */
#define NAME_CURSOR  SR_GLOBAL(int32_t, 0x1862AE020ULL)
#define NAME_LENGTH  SR_GLOBAL(int32_t, 0x1862AE024ULL)
#define NAME_WINDOW  (&SR_GLOBAL(unsigned char, 0x1862AE028ULL))
#define NAME_SCRATCH (&SR_GLOBAL(unsigned char, 0x1863AE028ULL))
#define NAME_SCRATCH_STRIDE 0x100008U

static const char *windows[] = {
    "text 12345 text",           /* digits after text, cursor at the start */
    "-42",                       /* a leading minus */
    "0000",                      /* leading zeros */
    "  7 x",                     /* the skip runs over spaces */
    "abc",                       /* no digit at all: the copy is empty */
    "",                          /* an empty window */
    "99999999999999999999",      /* more digits than sscanf's %d takes */
    "1234567890123456789012345678901234567890123456789012345678901234567890"
    "1234567890123456789012345678901234567890123456789012345678901234567890"
    "1234567890123456789012345678901234567890123456789012345678901234567890"
    "1234567890123456789012345678901234567890123456789012345678901234567890"
    "999",                       /* a run longer than the 255-character copy */
    "--5",                       /* two minuses */
    "5-5-5",                     /* dashes inside the run */
    "x-2147483648y",             /* INT_MIN with text around it */
    "2147483647",                /* INT_MAX */
    "no digits here -",          /* a trailing minus, still a digit run */
};

int main(void)
{
    nc_map_image();
    int cases = nc_cases(300);
    for (int n = 0; n < cases; n++) {
        const char *text = windows[n % (int)(sizeof windows / sizeof windows[0])];
        size_t length = strlen(text);
        nc_set_mxcsr(0x1F80);
        nc_seed((uint64_t)n * 7 + 3);
        nc_restore();
        /* The window: the seeded text, and when it fits the seeded length
           is kept (the game writes the length it drew; a length past the
           text is a window that keeps reading scratch). */
        NAME_CURSOR = 0;
        if (n % 5 == 0) {
            NAME_LENGTH = 0;         /* an exhausted window */
        } else {
            NAME_LENGTH = (int)length;
            memcpy(NAME_WINDOW, text, length);
        }
        /* A marker at the scratch copy so an untouched run shows in the
           observation (the original copies over it one byte at a time). */
        memset(NAME_SCRATCH + NAME_SCRATCH_STRIDE, (unsigned char)(0x40 + (n % 32)), 300);
        NAME_SCRATCH[NAME_SCRATCH_STRIDE + 300] = 0;
        int result = recovery_name_read_number();
        nc_line("name %d cursor %d", n, NAME_CURSOR);
        nc_line("result %d", result);
        nc_bytes("copy", NAME_SCRATCH + NAME_SCRATCH_STRIDE, 300);
    }
    return 0;
}
