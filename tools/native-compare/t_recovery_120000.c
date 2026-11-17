// NC_WRAPPERS: 140127900 14012C450 14012FB60
#include <string.h>
#include <stdarg.h>
#include "nc.h"

#ifdef NC_NATIVE
#define return_second(a, b) ((long long (*)(long long, long long))NC_ADDR(0x140127900))(a, b)
#define dirs_reset() ((long long (*)(void))NC_ADDR(0x14012C450))()
#define text_append(a, b) ((long long (*)(void *, long long))NC_ADDR(0x14012FB60))((void *)(uintptr_t)(a), (long long)(uintptr_t)(b))
#elif defined(NC_CLIENT_WRAPPERS)
__int64 sub_140127900(__int64 a1, __int64 a2);
__int64 sub_14012C450();
__int64 sub_14012FB60(_BYTE *a1, __int64 a2);
#define return_second(a, b) sub_140127900(a, b)
#define dirs_reset() sub_14012C450()
#define text_append(a, b) sub_14012FB60((void *)(uintptr_t)(a), (long long)(uintptr_t)(b))
#else
#include "recovery_120000.h"
#define return_second(a, b) recovery_return_second(a, b)
#define dirs_reset() recovery_reset_dirs()
#define text_append(a, b) recovery_append_file_text((char *)(a), (b))
#endif

/* The directories the reset routine reads live in the shared game state. */
#include "memory.h"
#define name_directory SR_GLOBAL(char, 0x182A7D140ULL)
#define documents_directory SR_GLOBAL(char, 0x182A7D340ULL)

/* Both builds: the original's own chdir 0x14024C22C, sprintf 0x140158AB0 and
 * rand 0x14023B1B0 run behind these definitions (see the redirects in main),
 * so the port build resolves them and the native build's in-image calls land
 * on the same code. The chdir result counts calls, so a dropped call shows up
 * in the value the reset routine returns. */
static long long chdir_result;

long long crt_chdir(char *path)
{
    nc_line("call crt_chdir %s", path);
    return chdir_result++;
}

void crt_sprintf(char *buffer, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vsprintf(buffer, format, args);
    va_end(args);
}

int rand(void)
{
    return (int)nc_rand_below(0x8000);
}

static char out[600];

int main(void)
{
    nc_map_image();
    nc_redirect(0x14024C22C, (void *)crt_chdir);
    nc_redirect(0x140158AB0, (void *)crt_sprintf);
    nc_redirect(0x14023B1B0, (void *)rand);
    nc_save(&name_directory, 0x200);
    nc_save(&documents_directory, 0x200);

    /* 0x140127900: the second argument comes back whatever the first is. */
    for (int n = 0; n < nc_cases(400); n++) {
        nc_seed(n);
        long long a = (long long)nc_rand();
        long long b = (long long)nc_rand();
        long long r = return_second(a, b);
        nc_line("second %lld %lld -> %lld", a, b, r);
    }

    /* 0x14012C450: two directory changes, the second result in rax. The
       paths come from the shared state and are logged by crt_chdir. */
    for (int n = 0; n < nc_cases(4); n++) {
        nc_restore();
        nc_seed(n);
        for (int k = 0; k < 0x3F; k += 3) {
            *(&name_directory + k) = (char)(n * 7 + k + 1);
            *(&documents_directory + k) = (char)(n * 5 + k + 2);
        }
        *(&name_directory + 0x3F) = 0;
        *(&documents_directory + 0x3F) = 0;
        if (n % 2 == 0) {
            strcpy(&name_directory, "data");
            strcpy(&documents_directory, "mission");
        }
        long long r = dirs_reset();
        nc_line("dirs %d -> %lld", n, r);
    }

    /* 0x14012FB60: a randomly chosen phrase is appended to the text. The
       choice comes from the redirected rand; the append walks back from
       the terminator the caller provided. */
    for (int n = 0; n < nc_cases(400); n++) {
        nc_seed(n * 3 + 1);
        memset(out, 0, sizeof out);
        if (n % 2)
            strcpy(out, "Notes: ");
        const char *name = n % 3 == 0 ? "replay001.srp"
                                      : (n % 3 == 1 ? "a"
                                                    : "some_long_file_name_for_the_phrase");
        nc_line("name %s", name);
        text_append(out, name);
        nc_line("len %zu", strlen(out));
        nc_bytes("after", out, strlen(out));
        nc_line("tail %d", out[strlen(out)]);
    }
    return 0;
}
