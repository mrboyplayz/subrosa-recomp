/* Text formatting: sr_text_format_variadic (0x14007C920, capacity 1,024) and
 * sr_text_format (0x14006E530) against sr_text_draw_variadic's formatting.
 * All directives (/i /u /x /l /L /f /h /s /c /b /I, //, unknown), lengths up
 * to and past the 1,024-character capacity, formats that end inside a
 * directive, empty and NUL-embedded formats, arguments that are zero,
 * negative, huge and garbage, /s strings that are long, empty and NULL, /c
 * zeroes, /b edge bits, and /I's comma boundaries. The output buffer (its
 * full 1,024+ bytes) is hashed, and text_format's return value printed. */
// NC_WRAPPERS: 14007C920
#include <string.h>
#include <stdarg.h>
#include <windows.h>
#include "nc.h"
#include "text.h"

#ifdef NC_NATIVE
/* The original's formatter at 0x14006E530 and the 0x14007C920 helper, called
   at their addresses so nothing here is linked against the port. */
#define format_variadic ((void *(*)(char *, const char *, ...))NC_ADDR(0x14007C920))
#define format_capacity(out, fmt, cap, args) \
    ((int (*)(char *, char *, int, unsigned long long))NC_ADDR(0x14006E530)) \
        ((out), (char *)(fmt), (cap), (unsigned long long)(uintptr_t)(args))
#elif defined(NC_CLIENT_WRAPPERS)
/* The real client entry point wraps sr_text_format, which text.c defines. */
extern char *sr_text_format_variadic(char *, const char *, ...);
#define format_variadic sr_text_format_variadic
#define format_capacity(out, fmt, cap, args) text_format((out), (fmt), (cap), (args))
#else
#define format_variadic text_format_variadic
#define format_capacity(out, fmt, cap, args) text_format((out), (fmt), (cap), (args))
#endif

/* 4,096 bytes: the original runs past its capacity when a directive appends
   (a 2,000-character /s at length 1,023 writes ~3,024 bytes), and the whole
   buffer is hashed, so it must hold the overflow identically in both builds. */
static char buffer[4096];

/* The original's sprintf (0x140158AB0, %f path) calls into the CRT's locale
   init the fixture never runs, and dies there in both builds (t_textrow.c
   never reaches it; every other suite compares its own engine code). The
   numbers must still come out the way the original prints them, so the
   redirection mirrors the port's declaration of crt_sprintf (text.c): the
   MSVCRT printf on the %f/%e/%g/%I64 paths, which the original's sprintf
   forwarded to. */
static void fixture_sprintf(char *buffer, const char *format, ...)
{
    va_list args;

    va_start(args, format);
    _vsnprintf(buffer, 1024, format, args);
    va_end(args);
}

/* One directive's rendering at a fixed capacity, hashed. */
static void line_directive(int n, const char *name, const char *fmt,
                           const unsigned long long *args)
{
    memset(buffer, 0x5A, sizeof buffer);
    int length = format_capacity(buffer, fmt, 1024, args);
    nc_line("n%d %s len %d state %016llx", n, name, length, (unsigned long long)nc_hash(buffer, sizeof buffer));
    fflush(stdout);
}

int main(void)
{
    static const unsigned long long no_arguments[8];
    /* The original's sprintf (0x140158AB0) asks for the last error on its
       float path. */
    /* The original's sprintf (0x140158AB0) asks for the last error on its
       float path and dies in the CRT init the fixture never runs, so it is
       redirected to the MSVCRT printf it forwarded to (see above); the
       nc_redirect'd callee is the same replacement in both builds. */
    nc_bind_import("KERNEL32.dll", "GetLastError", (void *)GetLastError);
    nc_map_image();
    nc_redirect(0x140158AB0, (void *)fixture_sprintf);
    nc_line("start");    for (int n = 0; n < nc_cases(2000); n++) {
        nc_seed((uint64_t)n);

        /* Every directive with one argument, given as raw 64-bit slots.
           /s is covered separately: a random slot would be a garbage
           pointer, and the original dereferences it. */
        static const char *directives[] = {
            "/i", "/u", "/x", "/l", "/L", "/f", "/h", "/c", "/b", "/I",
            "//", "/z", "/", "i", "", "/i/i", "/c/c",
        };
        for (size_t d = 0; d < sizeof directives / sizeof *directives; d++) {
            unsigned long long args[8];
            for (size_t k = 0; k < 8; k++)
                args[k] = nc_rand();
            nc_line("n%d begin %s", n, directives[d]);
            line_directive(n, directives[d], directives[d], args);
        }

        /* Directive edges: zero, one, all bits, comma boundaries, doubles. */
        static const unsigned long long edges[] = {
            0, 1, 9, 10, 999, 1000, 1001, 999999, 1000000, 1000001, 0x7FFFFFFF,
            0x80000000, 0xFFFFFFFF, 0x100000000ULL, 0x7FFFFFFFFFFFFFFFULL,
            0x8000000000000000ULL, 0xFFFFFFFFFFFFFFFFULL, 0x5A5A5A5A5A5A5A5AULL,
        };
        for (size_t e = 0; e < sizeof edges / sizeof *edges; e++) {
            line_directive(n, "i", "/i", &edges[e]);
            line_directive(n, "u", "/u", &edges[e]);
            line_directive(n, "x", "/x", &edges[e]);
            line_directive(n, "I", "/I", &edges[e]);
            line_directive(n, "b", "/b", &edges[e]);
            line_directive(n, "l", "/l", &edges[e]);
            line_directive(n, "f", "/f", &edges[e]);
            line_directive(n, "h", "/h", &edges[e]);
        }

        /* /s with the argument as a pointer to a generated string: empty,
           short, and up to the 1,024-byte piece buffer the original copies
           through (longer strings overflow its stack and kill it), and NULL. */
        char text[1024];
        int length = (n % 4 == 3) ? (int)nc_rand_below(4) : 1 + (int)nc_rand_below(1023);
        for (int k = 0; k < length; k++)
            text[k] = (char)('A' + nc_rand_below(26));
        text[length] = 0;
        unsigned long long string_args[2] = { (uintptr_t)text, 0 };
        line_directive(n, "s", "/s", string_args);
        line_directive(n, "s0", "/s/s", string_args);

        /* Random formats and arguments, including NULs inside the format.
           No 's': a random slot would be a garbage pointer. */
        char fmt[300];
        static const char alphabet[] = "/iulLfhcbIAz 0123456789-";
        int fmt_length = (int)nc_rand_below(60);
        for (int k = 0; k < fmt_length; k++) {
            char picked = alphabet[nc_rand_below((int)(sizeof alphabet - 1))];
            fmt[k] = (nc_chance(4) && picked != '/') ? '\0' : picked;
        }
        fmt[fmt_length] = 0;
        unsigned long long args[8];
        for (size_t k = 0; k < 8; k++)
            args[k] = nc_rand();
        line_directive(n, "rand", fmt, args);

        /* Capacities: 0, 1, mid, 1,023, 1,024, 1,025, and huge. The string
           is 1,023 characters (the piece buffer's limit), so most capacities
           land mid-string. */
        char long_text[1024];
        memset(long_text, 'q', sizeof long_text);
        long_text[sizeof long_text - 1] = 0;
        unsigned long long long_args[2] = { (uintptr_t)long_text, 0 };
        static const int capacities[] = { 0, 1, 2, 17, 512, 1023, 1024, 1025, 1100, 2047 };
        for (size_t c = 0; c < sizeof capacities / sizeof *capacities; c++) {
            memset(buffer, 0x5A, sizeof buffer);
            int written = format_capacity(buffer, "/s/i/u/x/l", capacities[c], long_args);
            nc_line("n%d cap %d len %d state %016llx", n, capacities[c], written,
                    (unsigned long long)nc_hash(buffer, sizeof buffer));
        }

        /* The empty format and the exact 1,024-character one. */
        memset(buffer, 0x5A, sizeof buffer);
        nc_line("n%d empty len %d state %016llx", n, format_capacity(buffer, "", 1024, no_arguments),
                (unsigned long long)nc_hash(buffer, sizeof buffer));
        char exact[1025];
        memset(exact, 'k', 1024);
        exact[1024] = 0;
        memset(buffer, 0x5A, sizeof buffer);
        nc_line("n%d exact len %d state %016llx", n, format_capacity(buffer, exact, 1024, no_arguments),
                (unsigned long long)nc_hash(buffer, sizeof buffer));

        /* The real entry point: out returned, capacity 1,024, va_list args. */
        memset(buffer, 0x5A, sizeof buffer);
        char *returned = format_variadic(buffer, "/i=/x=/f=/s", 3, -7, 0x4059000000000000ULL, (uintptr_t)"va");
        nc_line("n%d variadic same %d len %d state %016llx", n, returned == buffer,
                (int)strlen(buffer), (unsigned long long)nc_hash(buffer, sizeof buffer));
        memset(buffer, 0x5A, sizeof buffer);
        format_variadic(buffer, "/I", 987654321);
        nc_line("n%d variadic big state %016llx", n, (unsigned long long)nc_hash(buffer, sizeof buffer));
        memset(buffer, 0x5A, sizeof buffer);
        format_variadic(buffer, "");
        nc_line("n%d variadic empty state %016llx", n, (unsigned long long)nc_hash(buffer, sizeof buffer));
    }
    return 0;
}
