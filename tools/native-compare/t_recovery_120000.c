// NC_WRAPPERS: 140127900 14012C450 14012FB60
#include <string.h>
#include "nc.h"

#ifdef NC_NATIVE
#define return_second(a, b) ((long long (*)(long long, long long))NC_ADDR(0x140127900))(a, b)
#define dirs_reset() ((long long (*)(void))NC_ADDR(0x14012C450))()
#define text_append(a, b) ((long long (*)(_BYTE *, long long))NC_ADDR(0x14012FB60))((void *)(uintptr_t)(a), (long long)(uintptr_t)(b))
#elif defined(NC_CLIENT_WRAPPERS)
__int64 sub_140127900(__int64 a1, __int64 a2);
__int64 sub_14012C450();
__int64 sub_14012FB60(_BYTE *a1, __int64 a2);
#define return_second(a, b) sub_140127900(a, b)
#define dirs_reset() sub_14012C450()
#define text_append(a, b) sub_14012FB60((void *)(uintptr_t)(a), (long long)(uintptr_t)(b))
#else
long long recovery_return_second(long long, long long);
long long recovery_reset_dirs(void);
long long recovery_append_file_text(char *text, const char *name);
#define return_second(a, b) recovery_return_second(a, b)
#define dirs_reset() recovery_reset_dirs()
#define text_append(a, b) recovery_append_file_text((char *)(a), (b))
#endif

/* The original keeps the strings these routines read at fixed addresses. */
#define name_directory SR_GLOBAL(char, 0x182A7D140ULL)
#define documents_directory SR_GLOBAL(char, 0x182A7D340ULL)
#define first_choice SR_GLOBAL(const char, 0x1402776A0ULL)

/* Both builds: the in-image rand is put behind the harness generator. */
int rand(void)
{
    return (int)nc_rand_below(0x8000);
}

/* The in-image chdir reaches these KERNEL32 imports; keep them side effect
 * free but deterministic in every build (see nc_map_image). */
static int stub_SetCurrentDirectoryA(const char *path)
{
    nc_line("call SetCurrentDirectoryA %s", path);
    return 1;
}
static unsigned long stub_GetCurrentDirectoryA(unsigned long length, char *buffer)
{
    static const char cwd[] = "C:\\subrosa-temp";
    strncpy(buffer, cwd, length);
    return strlen(buffer);
}
static int stub_SetEnvironmentVariableA(const char *name, const char *value)
{
    nc_line("call SetEnvironmentVariableA %s", name);
    return 1;
}
static unsigned long stub_GetLastError(void)
{
    return 0;
}

static char out[600];

int main(void)
{
    nc_map_image();
    nc_bind_import("KERNEL32.dll", "SetCurrentDirectoryA", (void *)stub_SetCurrentDirectoryA);
    nc_bind_import("KERNEL32.dll", "GetCurrentDirectoryA", (void *)stub_GetCurrentDirectoryA);
    nc_bind_import("KERNEL32.dll", "SetEnvironmentVariableA", (void *)stub_SetEnvironmentVariableA);
    nc_bind_import("KERNEL32.dll", "GetLastError", (void *)stub_GetLastError);
    nc_redirect(0x14023B1B0, (void *)rand);
    nc_save(&first_choice, 0x180);
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
       paths come from the image; SetCurrentDirectoryA is logged. */
    for (int n = 0; n < nc_cases(4); n++) {
        nc_restore();
        nc_seed(n);
        for (int k = 0; k < 0x40; k += 3) {
            name_directory[k] = (char)(n * 7 + k + 1);
            documents_directory[k] = (char)(n * 5 + k + 2);
        }
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
        const char *name = n % 3 == 0 ? "replay001.srp"
                                      : (n % 3 == 1 ? "a"
                                                    : "some_very_long_file_name_that_spans_the_phrase_output");
        nc_line("name %s", name);
        text_append(out, name);
        nc_line("len %zu", strlen(out));
        nc_bytes("after", out, strlen(out));
        nc_line("tail %d", out[strlen(out)]);
    }
    return 0;
}
