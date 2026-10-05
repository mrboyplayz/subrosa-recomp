"""Compare startup window calls with the original native instruction sequence."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_sdl_window import PROJECT, BODY


class SDLWindow(unittest.TestCase):
    def test_native_window_sequence(self):
        source = read_client_source()
        self.assertIn(BODY, source)
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        native = pe.get_data(0x17c8, 0x191d - 0x17c8)
        title = pe.get_data(0x2768b0, 9)
        text = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned int *dword_140404A6C;
struct record { int attrs[11][2], n, x,y,w,h; unsigned flags; uintptr_t window; int sizes,contexts; char title[16]; };
static struct record calls;
static uintptr_t handle, context;
static int failure, sizew, sizeh;
int SDL_Init(unsigned f) { return 0; }
int SDL_ShowCursor(int f) { return 0; }
int SDL_GL_SetAttribute(int a,int b) { if(calls.n>=11) ExitProcess(40); calls.attrs[calls.n][0]=a; calls.attrs[calls.n++][1]=b; return -1; }
void *SDL_CreateWindow(const char *t,int x,int y,int w,int h,unsigned f) {
 strcpy(calls.title,t); calls.x=x; calls.y=y; calls.w=w; calls.h=h; calls.flags=f;
 return (void *)(failure==1 ? 0 : handle);
}
void SDL_GetWindowSize(void *p,int *w,int *h) { calls.sizes++; calls.window=(uintptr_t)p; *w=sizew; *h=sizeh; }
void *SDL_GL_CreateContext(void *p) { calls.contexts++; calls.window=(uintptr_t)p; return (void *)(failure==2 ? 0 : context); }
int SDL_GL_SetSwapInterval(int f) { return 0; }
'''.encode() + BODY + r'''
__attribute__((naked)) static int native_call(void *p) {
 __asm__("push %rsi; sub $0x30,%rsp; mov %rcx,%rax; xor %ecx,%ecx; mov $8,%edx; mov $1,%esi; jmp *%rax");
}
static void jump(unsigned char *a, unsigned char *b) { a[0]=0xe9; int32_t d=(int32_t)(b-a-5); memcpy(a+1,&d,4); }
static unsigned char *slots;
static void thunk(unsigned char *a,void *p) { a[0]=0xff;a[1]=0x25; int32_t d=(int32_t)(slots-a-6);memcpy(a+2,&d,4);memcpy(slots,&p,8);slots+=8; }
static void commit(unsigned char *a,size_t n) { if(!VirtualAlloc(a,n,MEM_COMMIT,PAGE_EXECUTE_READWRITE)) ExitProcess(41); }
static unsigned indices[]={280648148,280648149,280648141,280648142,280648151,137297751,137297753,137297755,137297756,137297759,137297760};
static void reset(int seed,int full,int depth,int stencil) {
 memset(&calls,0,sizeof calls);
 for(unsigned j=0;j<sizeof(indices)/sizeof(*indices);j++) { dword_140404A6C[indices[j]]=0x5a5a5a5a; dword_140404A6C[indices[j]+1]=0x5a5a5a5a; }
 dword_140404A6C[280648148]=depth; dword_140404A6C[280648149]=stencil;
 dword_140404A6C[280648141]=(unsigned[]){0,640,1920,0xffffffff,3840,1}[seed];
 dword_140404A6C[280648142]=(unsigned[]){0,480,1080,0x80000000,2160,1}[seed];
 dword_140404A6C[280648151]=full ? (seed&1 ? 0xffffffff : 1) : 0;
}
int main(void) {
 unsigned char *arena=VirtualAlloc(0,0x44000000,MEM_RESERVE,PAGE_NOACCESS); if(!arena) return 9;
 dword_140404A6C=(unsigned int *)(arena+0x404a6c);
 commit(arena+0x1000,0x2000); commit(arena+0x198000,0x2000); commit(arena+0x276000,0x1000);
 for(unsigned j=0;j<sizeof(indices)/sizeof(*indices);j++) commit(arena+((0x404a6c+4ULL*indices[j])&~4095ULL),4096);
'''.encode()
        text += ('unsigned char code[]={' + ','.join(map(str, native)) + '}; memcpy(arena+0x17c8,code,sizeof code);\n').encode()
        text += ('unsigned char title[]={' + ','.join(map(str, title)) + '}; memcpy(arena+0x2768b0,title,sizeof title);\n').encode()
        text += r'''
 slots=arena+0x199800;
 thunk(arena+0x198ee1,SDL_GL_SetAttribute); thunk(arena+0x198ec3,SDL_CreateWindow);
 thunk(arena+0x198ecf,SDL_GetWindowSize); thunk(arena+0x198ee7,SDL_GL_CreateContext);
 unsigned char cleanup[]={0x48,0x83,0xc4,0x30,0x5e,0xc3}; memcpy(arena+0x2020,cleanup,sizeof cleanup);
 arena[0x2000]=0xb8; *(int32_t *)(arena+0x2001)=1; jump(arena+0x2005,arena+0x2020);
 arena[0x2010]=0xb8; *(int32_t *)(arena+0x2011)=2; jump(arena+0x2015,arena+0x2020);
 arena[0x2030]=0x31; arena[0x2031]=0xc0; jump(arena+0x2032,arena+0x2020);
 jump(arena+0x18f1,arena+0x2000); jump(arena+0x1918,arena+0x2010); jump(arena+0x191d,arena+0x2030);
 FlushInstructionCache(GetCurrentProcess(),arena,0x44000000);
 int count=0;
 for(int seed=0;seed<6;seed++) for(int full=0;full<2;full++) for(int dep=0;dep<3;dep++)
 for(int sten=0;sten<3;sten++) for(failure=0;failure<3;failure++) for(int dim=0;dim<4;dim++) {
  handle=(uintptr_t)0x1234567800000000ULL+seed+1; context=(uintptr_t)0x2345678900000000ULL+dim+1;
  sizew=(int[]){0,800,2560,-1}[dim]; sizeh=(int[]){0,600,1440,-1}[dim];
  int depth=(int[]){0,24,-1}[dep], stencil=(int[]){0,8,-1}[sten];
  reset(seed,full,depth,stencil); int nr=native_call(arena+0x17c8); struct record expected=calls;
  unsigned words[11][2]; for(unsigned j=0;j<11;j++) memcpy(words[j],&dword_140404A6C[indices[j]],8);
  reset(seed,full,depth,stencil); int cr=sr_create_startup_window();
  if(cr!=nr || memcmp(&expected,&calls,sizeof calls)) { printf("call mismatch %d %d %d %d %d %d\n",seed,full,dep,sten,failure,dim); return 1; }
  for(unsigned j=0;j<11;j++) if(memcmp(words[j],&dword_140404A6C[indices[j]],8)) { printf("storage mismatch %u\n",j); return 2; }
  count++;
 }
 VirtualFree(arena,0,MEM_RELEASE); printf("%d native SDL window/attribute/context boundary comparisons pass\n",count); return 0;
}
'''.encode()
        directory = PROJECT / 'reports/client-sdl-window-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'window_fixture.c'
        fixture.write_bytes(text)
        exe = directory / 'window_fixture.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture), '-O0',
                                 '-fno-strict-aliasing', '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
