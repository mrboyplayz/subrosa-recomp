"""Exercise borderless transitions, monitor bounds, restoration and persistence."""
import subprocess
import unittest
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent


class Borderless(unittest.TestCase):
    def test_window_modes(self):
        directory = PROJECT / 'reports/client-borderless-tests-20261005'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'window_modes.c'
        fixture.write_text(r'''
#include <windows.h>
#include <stdio.h>
#include "client_window_mode.h"
typedef struct { int x,y,w,h; } rect;
static rect bounds={-2560,0,2560,1440};
static int x=-2200,y=100,w=1024,h=576,bordered=1,resizable=1;
static unsigned flags; static int bad_bounds, fullscreen_error, minimize_hint=-1;
int SDL_GetWindowDisplayIndex(void *p) { return p ? 1 : -1; }
int SDL_GetDisplayBounds(int d,rect *r) { *r=bounds; return bad_bounds; }
void SDL_GetWindowPosition(void *p,int *a,int *b) { *a=x;*b=y; }
void SDL_GetWindowSize(void *p,int *a,int *b) { *a=w;*b=h; }
void SDL_SetWindowPosition(void *p,int a,int b) { x=a;y=b; }
void SDL_SetWindowSize(void *p,int a,int b) { w=a;h=b; }
void SDL_SetWindowBordered(void *p,int b) { bordered=b; }
void SDL_SetWindowResizable(void *p,int b) { resizable=b; }
int SDL_SetWindowFullscreen(void *p,unsigned f) {
 if(fullscreen_error)return -1;
 flags=f;if(f==0x1001){x=bounds.x;y=bounds.y;w=bounds.w;h=bounds.h;}
 return 0;
}
int SDL_SetHintWithPriority(const char *name,const char *value,int priority) {
 if(strcmp(name,"SDL_VIDEO_MINIMIZE_ON_FOCUS_LOSS")||priority!=2)return 0;
 minimize_hint=value[0]=='1';return 1;
}
#define CHECK(e) do { if(!(e)){printf("failure line %d: %s\n",__LINE__,#e);return 1;} }while(0)
int main(void) {
 wchar_t path[MAX_PATH];GetModuleFileNameW(NULL,path,MAX_PATH);
 wcscpy(wcsrchr(path,L'\\')+1,L"recomp-window.ini");DeleteFileW(path);
 void *window=(void *)0x1234567887654321ULL;
 sr_recomp_window_load(); CHECK(sr_recomp_window_mode==1&&minimize_hint==0);
 CHECK(!sr_recomp_window_set(window,1,1));
 CHECK(x==-2560&&y==0&&w==2560&&h==1440&&flags==0x1001&&minimize_hint==0);
 CHECK(sr_borderless_selected&&!sr_fullscreen_selected);
 CHECK(GetPrivateProfileIntW(L"Window",L"Mode",9,path)==1);
 for(int i=0;i<32;i++) {
  CHECK(!sr_recomp_window_toggle(window,0));
  CHECK(x==-2200&&y==100&&w==1024&&h==576&&!flags&&bordered&&resizable);
  CHECK(!sr_recomp_window_toggle(window,0x1001));
  CHECK(x==-2560&&w==2560&&flags==0x1001&&minimize_hint==0&&sr_recomp_window_mode==1);
 }
 CHECK(!sr_recomp_window_set(window,2,1));CHECK(flags==1&&minimize_hint==1);
 CHECK(!sr_borderless_selected&&sr_fullscreen_selected);
 CHECK(!sr_recomp_window_toggle(window,0));CHECK(!flags&&sr_recomp_window_mode==0);
 sr_recomp_window_load();CHECK(sr_recomp_window_mode==0);
 CHECK(!sr_recomp_window_toggle(window,0x1001));CHECK(flags==1&&sr_recomp_window_mode==2);
 CHECK(!sr_recomp_window_set(window,0,1));
 x=-2100;y=150;w=1200;h=675;
 CHECK(!sr_recomp_window_set(window,1,1));CHECK(flags==0x1001);
 CHECK(!sr_recomp_window_set(window,0,1));CHECK(x==-2100&&y==150&&w==1200&&h==675);
 bad_bounds=1;CHECK(sr_recomp_window_set(window,1,1)==-1);CHECK(sr_recomp_window_mode==0);
 bad_bounds=0;CHECK(sr_recomp_window_set(NULL,1,1)==-1);
 fullscreen_error=1;CHECK(sr_recomp_window_set(window,1,1)==-1);CHECK(sr_recomp_window_mode==0&&!flags);
 fullscreen_error=0;
 WritePrivateProfileStringW(L"Window",L"Mode",L"99",path);
 sr_recomp_window_load();CHECK(sr_recomp_window_mode==1);
 CHECK(!sr_recomp_window_set(window,1,1));
 sr_recomp_window_mode=0;sr_recomp_window_load();CHECK(sr_recomp_window_mode==1);
 DeleteFileW(path);puts("PASS: SDL desktop borderless vs exclusive fullscreen, no focus-loss minimization in borderless, 32 toggle cycles, restoration, SDL error handling and saved preferences");
 return 0;
}
''', encoding='utf-8')
        exe = directory / 'window_modes.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-std=gnu11',
            '-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter', str(fixture),
            str(PROJECT / 'src/rebuild/client_window_mode.c'), '-I', str(PROJECT / 'src/rebuild'),
            '-o', str(exe)], capture_output=True, text=True)
        (directory / 'compile.txt').write_text(result.stderr, encoding='utf-8')
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
        (directory / 'stdout.txt').write_text(result.stdout, encoding='utf-8')
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == '__main__':
    unittest.main()
