#include "recovery_120000.h"
#include "memory.h"

#include <stdlib.h>
#include <string.h>

/* The original's own chdir, 0x14024C22C (crt_chdir in the client). */
extern long long crt_chdir(char *path);
/* The original's own sprintf, 0x140158AB0 (crt_sprintf in the client). */
extern void crt_sprintf(char *buffer, const char *format, ...);
/* The original's own rand, 0x14023B1B0. */
extern int rand(void);

//----- (0000000140127900) ----------------------------------------------------
// mov rax, rdx ; ret -- the first argument is unused.
long long recovery_return_second(long long first, long long second)
{
    (void)first;
    return second;
}

//----- (000000014012C450) ----------------------------------------------------
// Two directory changes with no check of the first result; the second result
// stays in rax at the exit.
long long recovery_reset_dirs(void)
{
    crt_chdir(&SR_GLOBAL(char, 0x182A7D340ULL));
    return crt_chdir(&SR_GLOBAL(char, 0x182A7D140ULL));
}

//----- (000000014012FB60) ----------------------------------------------------
// A sentence about `name` is picked with rand() % 3 and appended to the
// text. The append position starts one byte before the text (rsp+20h holds
// the composed sentence), and returns 0.
long long recovery_append_file_text(char *text, const char *name)
{
    static char sentence[512];

    *text = 0;
    int choice = rand() % 3;
    if (choice == 1)
        crt_sprintf(sentence, "the file named %s contains the data. ", name);
    else if (choice == 2)
        crt_sprintf(sentence, "the secret info is located in %s. ", name);
    else
        crt_sprintf(sentence, "the data is stored in the file %s. ", name);

    char *cursor = text - 1;
    while (*++cursor != 0)
        ;
    strcpy(cursor, sentence);
    return 0;
}
