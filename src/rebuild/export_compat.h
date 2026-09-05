#ifndef SR_EXPORT_COMPAT_H
#define SR_EXPORT_COMPAT_H

#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <time.h>
#include <intrin.h>
#include <corecrt_startup.h>
#include "vector_views.h"

/* Hex-Rays uses assignable byte/word views rather than Win32's value macros. */
#undef LOBYTE
#undef HIBYTE
#undef LOWORD
#undef HIWORD
#include <defs.h>

#if defined(__SIZEOF_INT128__)
typedef unsigned __int128 _OWORD;
#else
#error "The raw export currently requires a compiler with 128-bit integer support"
#endif

struct __crt_locale_pointers;

#ifndef __cplusplus
#define nullptr ((void *)0)
#define true 1
#define false 0
#endif

#endif
