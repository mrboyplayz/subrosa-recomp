/* Run-time library routines of the original that are written out here, and
 * the ones still in src/client/ that they call.
 */
#ifndef SR_ENGINE_CRT_H
#define SR_ENGINE_CRT_H

#include <stddef.h>
#include <stdint.h>

/* crt_string.c */
size_t crt_strnlen(const char *text, size_t limit);                 /* 0x140254CCC */
size_t crt_wcsnlen(const uint16_t *text, size_t limit);             /* 0x140254F48 */

/* Still in src/client/. */
extern long long sub_14023E640(char *expression, char *file, int line);   /* _wassert */
extern long long sr_path_malloc(unsigned long long size);                 /* malloc, 0x14023ACF8 */
extern void free(void *block);                                            /* 0x14023ACE4 */

/* crt_math.c */
float crt_asinf(float x);                                           /* 0x14023EB20 */

/* The original's own math routines, needed where results must match it bit
   for bit: acos 0x14023E7D4 and sin 0x1402431F0 (named so in the client),
   and the double sine/cosine 0x1401F8A50 (sine in lane 0, cosine in lane 1,
   declared where used). */
extern double crt_acos(double x) __asm__("acos");
extern double crt_sin(double x) __asm__("sin");
extern float crt_atan2f(float y, float x) __asm__("sub_14023F704");   /* atan2f */

/* Error handling of the math routines, still in src/client/: set_statfp
   0x14024DF30 raises floating-point status flags, handle_errorf 0x14025C2F8
   reports a domain error, handle_nanf_sr 0x14025C448 returns a NaN input. */
extern void set_statfp(char flags);
extern float handle_errorf(const char *name, short type, int nan_bits, int a4, char a5, unsigned int a6,
                           float argument, float argument_2, int a9);
extern float handle_nanf_sr(int bits);

#define crt_wassert(expression, file, line) sub_14023E640((char *)(expression), (char *)(file), (line))
#define crt_malloc(size) ((void *)(uintptr_t)sr_path_malloc(size))
#define crt_free(block) free(block)

#endif
