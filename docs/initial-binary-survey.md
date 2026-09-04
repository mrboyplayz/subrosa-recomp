# Initial Binary Survey

Survey date: 2026-09-04

Analyzed file: `../subrosa.exe`

## Metadata

- SHA256: `e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`
- MD5 reported by IDA: `a9357b3e9ba684dc18591a8552b065fe`
- Architecture: 64-bit
- Image base: `0x140000000`
- Entry point: `0x1401f9460` (`start`)
- IDA functions: 3,906
- Named functions: 900
- Unnamed functions: 2,995
- Strings: 3,441
- Segments: 6

## Segment Layout

| Segment | Start | End | Perms |
| --- | --- | --- | --- |
| `.text` | `0x140001000` | `0x14026e000` | `rx` |
| `.idata` | `0x14026e000` | `0x14026e688` | `r` |
| `.rdata` | `0x14026e688` | `0x1402b2000` | `r` |
| `.data` | `0x1402b2000` | `0x1b475d000` | `rw` |
| `.pdata` | `0x1b475d000` | `0x1b476e000` | `r` |
| `_RDATA` | `0x1b476e000` | `0x1b4793000` | `r` |

## Import Themes

- SDL2: windowing, OpenGL context, input, audio, joystick/controller, threading, timers.
- WSOCK32: sockets, bind/connect, send/recv, select, host lookup.
- steam_api64: initialization, callbacks, user interface lookup.
- Kernel32/User32/Shell32: filesystem, threading, process, Unicode conversion, DPI, shell launch.

## Useful String Breadcrumbs

- `C:\visualc2010\code\csl03\stb/stb_truetype.h`
- `C:\visualc2010\code\subrosa12\stb/stb_image_write.h`
- `C:\visualc2010\code\csl03\stb/stb_image.h`
- `modelviewprojectionmatrix`
- `lightdirection`
- `tex_color`

These suggest a Visual C++ 2010-era codebase using SDL2, stb image/font utilities, OpenGL shader uniforms, Winsock networking, and Steam integration.

## High-Xref Functions To Triage

| Address | Current Name | Notes |
| --- | --- | --- |
| `0x14006d930` | `sub_14006D930` | 604 bytes, 323 xrefs |
| `0x14007b2a0` | `sub_14007B2A0` | 552 bytes, 262 xrefs |
| `0x140054130` | `sub_140054130` | 1,554 bytes, 141 xrefs |
| `0x140115ae0` | `sub_140115AE0` | 237 bytes, 243 xrefs |
| `0x140158ab0` | `sub_140158AB0` | 93 bytes, 226 xrefs |

Start by classifying whether these are allocators, logging helpers, asset table lookups, math helpers, or entity accessors before renaming aggressively.
