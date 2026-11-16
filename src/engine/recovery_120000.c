#include "recovery_120000.h"
#include "memory.h"

/* The original's own chdir, 0x14024C22C (crt_chdir in the client). */
extern long long crt_chdir(char *path);

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
