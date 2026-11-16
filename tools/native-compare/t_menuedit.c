/* The menu edit buffer's selection delete: every input that moves a byte,
   clamps a caret, or drops a terminator. State is the flat region the
   original reads: the text buffer at 0x151042A40 and the scratch buffer
   0x4000 bytes after it. */
// NC_WRAPPERS: 1400722C0
#include <limits.h>
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "menu.h"
#include "menu_widgets.h"

#ifdef NC_NATIVE
#define delete_selection() ((int (*)(void))NC_ADDR(0x1400722C0))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400722C0(void);
#define delete_selection() ((int)sub_1400722C0())
#else
#define delete_selection() menu_text_delete_selection()
#endif

#define BUFFER_CAP 0x2000
#define SCRATCH_CAP 0x4000

static int random_caret(int len)
{
    switch (nc_rand_below(6)) {
    case 0: return -1 - (int)nc_rand_below(100);      /* negative */
    case 1: return INT_MIN + (int)nc_rand_below(3);   /* INT_MIN edge */
    case 2: return INT_MAX - (int)nc_rand_below(3);   /* far past the end */
    case 3: return (int)nc_rand_below(len + 2) - 1;   /* -1 .. len */
    case 4: return len + (int)nc_rand_below(4);       /* at or past the end */
    }
    return (int)nc_rand_below(len + 1);               /* inside the text */
}

int main(void)
{
    nc_map_image();
    nc_save(&menu_text_anchor, 0x10);
    nc_save(menu_text_buffer, BUFFER_CAP);
    nc_save(menu_text_scratch, SCRATCH_CAP);

    for (int n = 0; n < nc_cases(2000); n++) {
        nc_seed(n);
        nc_restore();

        /* A string with garbage kept after its terminator, so the copy-back
           truncation is observable. */
        int len = nc_chance(10) ? 0 : (int)nc_rand_below(48);
        for (int i = 0; i < 64; i++)
            menu_text_buffer[i] = (unsigned char)(32 + nc_rand_below(95));
        menu_text_buffer[len] = 0;
        for (int i = 0; i < 64; i++)
            menu_text_scratch[i] = (unsigned char)(32 + nc_rand_below(95));

        int caret = random_caret(len);
        int anchor;
        if (nc_chance(40))
            anchor = caret;                                   /* no selection */
        else
            anchor = caret + (int)nc_rand_below(21) - 10;     /* -10 .. +10 */
        menu_text_caret = caret;
        menu_text_anchor = anchor;

        int result = delete_selection();

        nc_line("case %d len %d result %d caret %d anchor %d",
                n, len, result, menu_text_caret, menu_text_anchor);
        nc_line("  buf %016llx", (unsigned long long)nc_hash(menu_text_buffer, BUFFER_CAP));
        nc_line("  scratch %016llx", (unsigned long long)nc_hash(menu_text_scratch, SCRATCH_CAP));
    }
    return 0;
}
