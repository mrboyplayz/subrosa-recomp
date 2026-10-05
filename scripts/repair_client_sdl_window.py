"""Recover the startup SDL window/context call ABI from the pinned client."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (0000000140001330)'
BODY = b'''/* Startup-only typed SDL imports; window/context handles retain all 64 bits. */
extern int sr_window_init(unsigned int) __asm__("SDL_Init");
extern int sr_window_cursor(int) __asm__("SDL_ShowCursor");
extern int sr_window_attribute(int, int) __asm__("SDL_GL_SetAttribute");
extern void *sr_window_create(const char *, int, int, int, int, unsigned int) __asm__("SDL_CreateWindow");
extern void sr_window_size(void *, int *, int *) __asm__("SDL_GetWindowSize");
extern void *sr_window_context(void *) __asm__("SDL_GL_CreateContext");
extern int sr_window_swap(int) __asm__("SDL_GL_SetSwapInterval");
static int sr_create_startup_window(void)
{
  void *window;
  void *context;
  sr_window_attribute(0, 8);
  sr_window_attribute(1, 8);
  sr_window_attribute(2, 8);
  sr_window_attribute(3, 8);
  sr_window_attribute(6, (int)dword_140404A6C[280648148]);
  sr_window_attribute(7, (int)dword_140404A6C[280648149]);
  sr_window_attribute(5, 1);
  sr_window_attribute(20, 2);
  sr_window_attribute(21, 1);
  sr_window_attribute(17, 3);
  sr_window_attribute(18, 3);
  window = sr_window_create("Sub Rosa", 16, 16,
      (int)dword_140404A6C[280648141], (int)dword_140404A6C[280648142],
      dword_140404A6C[280648151] ? 0x1023u : 0x22u);
  __builtin_memcpy(&dword_140404A6C[137297751], &window, 8);
  if (dword_140404A6C[280648151])
  {
    sr_window_size(window, (int *)&dword_140404A6C[137297755],
                           (int *)&dword_140404A6C[137297756]);
    dword_140404A6C[137297759] = dword_140404A6C[137297755];
    dword_140404A6C[137297760] = dword_140404A6C[137297756];
    __builtin_memcpy(&window, &dword_140404A6C[137297751], 8);
  }
  if (!window) return 1;
  context = sr_window_context(window);
  __builtin_memcpy(&dword_140404A6C[137297753], &context, 8);
  if (!context) return 2;
  return 0;
}
'''


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('SDL window recovery requires pinned original')
    pe = pefile.PE(str(binary))
    imports = {i.address: i.name for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports}
    for rva, name in [(0x198fad, b'SDL_Init'), (0x198f11, b'SDL_ShowCursor'),
                      (0x198ee1, b'SDL_GL_SetAttribute'), (0x198ec3, b'SDL_CreateWindow'),
                      (0x198ecf, b'SDL_GetWindowSize'), (0x198ee7, b'SDL_GL_CreateContext'),
                      (0x198eed, b'SDL_GL_SetSwapInterval')]:
        code = pe.get_data(rva, 6)
        target = 0x140000000 + rva + 6 + int.from_bytes(code[2:], 'little', signed=True)
        if code[:2] != b'\xff\x25' or imports.get(target) != name:
            raise ValueError('SDL window import thunk changed')
    if pe.get_data(0x2768b0, 9) != b'Sub Rosa\0':
        raise ValueError('Native window title changed')
    if pe.get_data(0x16fe, 5) != bytes.fromhex('b931220000'):
        raise ValueError('Native SDL initialization flags changed')
    start = source.index(MARKER)
    end = source.index(b'//----- (', start + len(MARKER))
    region = source[start:end]
    for old, new in [(b'sub_140198FAD();', b'sr_window_init(0x2231u);'),
                     (b'sub_140198F11();', b'sr_window_cursor(0);'),
                     (b'sub_140198EED();', b'sr_window_swap(dword_140404A6C[280648151] ? (int)dword_140404A6C[73991643] : 0);')]:
        if region.count(old) != 1:
            raise ValueError('Startup SDL call inventory changed')
        region = region.replace(old, new)
    first = region.index(b'  sub_140198EE1();')
    last = region.index(b'  v31 = ', first)
    old = region[first:last]
    if old.count(b'sub_140198EE1();') != 11 or old.count(b'sub_140198EC3();') != 2 or old.count(b'sub_140198ECF();') != 1 or old.count(b'sub_140198EE7();') != 1:
        raise ValueError('Startup window call sequence changed')
    region = region[:first] + b'''  v28 = sr_create_startup_window();
  if (v28)
  {
    v29 = v28 == 1 ? "Couldn't create window" : "Couldn't create OpenGL context";
    v30 = "Error";
LABEL_60:
    sub_140198F95(16, (__int64)v30, (__int64)v29);
    return sub_1401F8B20((unsigned __int64)&v40 ^ v45);
  }
''' + region[last:]
    return source[:start] + BODY + region + source[end:], {'recovered_sdl_window_calls': 18}
