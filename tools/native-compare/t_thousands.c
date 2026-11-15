// NC_WRAPPERS: 140158B10
/* Thousands-separator formatting: every branch boundary of the signed
   value, unsigned groups, top-bit-set values printing as a plain %d, and
   random values. The original's crt_sprintf (0x140158AB0) is redirected to
   a recording stub in both builds, so the comparison checks the routine's
   own branch and group values; the CRT's integer formatting itself is the
   same code in both programs and is not what this suite proves. The stub
   reads only as many groups as the format asks for. */
#include <string.h>
#include "nc.h"
#include "text_helpers.h"

#ifdef NC_CLIENT_WRAPPERS
void format_with_thousands(void *, unsigned int);
#endif

static void crt_sprintf_recorder(char *out, const char *fmt, long long g1,
                                 long long g2, long long g3, long long g4)
{
    int conversions;
    const char *at;

    (void)out;
    conversions = 0;
    for (at = fmt; *at; at++)
        if (*at == '%')
            conversions++;
    nc_line("sprintf fmt%s n%d", fmt, conversions);
    /* Every group the routine passes is a 32-bit value. The native build
       carries them in 64-bit slots whose high halves hold whatever the
       caller left there, so compare only the low 32 bits. */
    if (conversions > 0)
        nc_line("sprintf g1 %u", (unsigned int)g1);
    if (conversions > 1)
        nc_line("sprintf g2 %u", (unsigned int)g2);
    if (conversions > 2)
        nc_line("sprintf g3 %u", (unsigned int)g3);
    if (conversions > 3)
        nc_line("sprintf g4 %u", (unsigned int)g4);
}

static void run_case(int n)
{
    static const uint32_t values[] = {
        0u, 1u, 999u, 1000u, 1001u, 999999u, 1000000u, 1000001u,
        999999999u, 1000000000u, 1000000001u, 2147483647u,
        2147483648u, 4294967295u
    };
    char buffer[40];
    uint32_t value;
    int i;

    nc_seed((uint64_t)n * 5 + 1);
    if (n % 3 == 0)
        value = values[(n / 3) % 14];
    else
        value = (uint32_t)nc_rand();
    for (i = 0; i < 40; i++)
        buffer[i] = (char)(0xA0 + i % 16);
    if (n % 11 == 0)
        memset(buffer, 0, sizeof buffer);
#ifdef NC_NATIVE
    ((void (*)(void *, unsigned int))NC_ADDR(0x140158B10))(buffer, value);
#elif defined(NC_CLIENT_WRAPPERS)
    format_with_thousands(buffer, value);
#else
    text_format_thousands(buffer, value);
#endif
    nc_line("thousands n%d val%010u", n, value);
    nc_bytes("out", buffer, sizeof buffer);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x140158AB0, crt_sprintf_recorder);
    for (int n = 0; n < nc_cases(2000); n++)
        run_case(n);
    return 0;
}
