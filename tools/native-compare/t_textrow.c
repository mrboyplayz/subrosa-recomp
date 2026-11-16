/* Filling a row of an item's text: text copied until its NUL, then spaces, a
 * colour byte per cell, the row ended after `count` cells (a count of zero or
 * less ends it at once). Texts shorter than, equal to and longer than the
 * count, counts up to 70 (past the 64-byte line), signed bytes and signed
 * colours. The two lines around the target and their colour rows are hashed. */
// NC_WRAPPERS: 1400C6AB0
#include <string.h>
#include "nc.h"
#include "item.h"

#ifdef NC_NATIVE
#define fill(i, l, t, c, n) ((void (*)(int, int, const char *, char, int))NC_ADDR(0x1400C6AB0))(i, l, t, c, n)
#elif defined(NC_CLIENT_WRAPPERS)
void *sub_1400C6AB0(int, int, char *, char, int);
#define fill(i, l, t, c, n) sub_1400C6AB0(i, l, (char *)(t), c, n)
#else
#define fill item_text_fill_row
#endif

int main(void)
{
    nc_map_image();
    nc_save(item_text_line(0, 0), 0x1B80 * 2);
    for (int n = 0; n < nc_cases(5000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        uint8_t *base = (uint8_t *)item_text_line(0, 0);
        for (size_t k = 0; k < 0x1B80 * 2; k++)
            base[k] = (uint8_t)nc_rand();
        char text[100];
        int length = (int)nc_rand_below(90);
        for (int k = 0; k < length; k++)
            text[k] = (char)(1 + nc_rand_below(255));
        text[length] = 0;
        int item = (int)nc_rand_below(2);
        int line = 1 + (int)nc_rand_below(20);
        int count = (int)nc_rand_below(74) - 3;
        char colour = (char)nc_rand();
        fill(item, line, text, colour, count);
        nc_line("n%d item %d line %d count %d len %d state %016llx", n, item, line, count, length,
                (unsigned long long)nc_hash(base, 0x1B80 * 2));
    }
    return 0;
}
