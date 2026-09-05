#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sr_play.h"
#include "sr_geometry.h"

static HWND window;
static HDC dc;
static HGLRC context;
static GLuint font;
static SrPlay game;
static SrMesh pistol;
static int width=1280,height=720,paused=1,keys[256],smoke;
static char root[MAX_PATH];

static void capture(int active) {
    paused=!active;
    memset(keys,0,sizeof(keys));
    if(active) {
        RECT r;GetClientRect(window,&r);MapWindowPoints(window,NULL,(POINT*)&r,2);ClipCursor(&r);
        SetCursorPos((r.left+r.right)/2,(r.top+r.bottom)/2);
        while(ShowCursor(FALSE)>=0) {}
    } else {ClipCursor(NULL);while(ShowCursor(TRUE)<0) {}}
}
static void box(float x,float y,float z,float w,float h,float d,float r,float g,float b) {
    const float vertices[8][3]={{-1,-1,-1},{1,-1,-1},{1,1,-1},{-1,1,-1},
                              {-1,-1,1},{1,-1,1},{1,1,1},{-1,1,1}};
    const int faces[6][4]={{0,1,2,3},{5,4,7,6},{4,0,3,7},{1,5,6,2},{3,2,6,7},{4,5,1,0}};
    const float shade[6]={.65f,.85f,.7f,.8f,1,.5f};
    glBegin(GL_QUADS);
    for(int f=0;f<6;f++) {
        glColor3f(r*shade[f],g*shade[f],b*shade[f]);
        for(int j=0;j<4;j++) {const float *v=vertices[faces[f][j]];glVertex3f(x+v[0]*w/2,y+v[1]*h/2,z+v[2]*d/2);}
    }
    glEnd();
}
static void label(float x,float y,const char *s) {
    glRasterPos2f(x,y);glListBase(font);glCallLists((GLsizei)strlen(s),GL_UNSIGNED_BYTE,s);
}
static void mesh(void) {
    glBegin(GL_TRIANGLES);
    for(size_t i=0;i<pistol.face_count;i++) {
        const SrFace *f=&pistol.faces[i];
        if(f->indices[0]>=pistol.vertex_count || f->indices[1]>=pistol.vertex_count || f->indices[2]>=pistol.vertex_count) continue;
        float c=.22f+.045f*(float)(i%5);glColor3f(c,c+.015f,c+.02f);
        for(int j=0;j<3;j++) {const SrVertex *v=&pistol.vertices[f->indices[j]];glVertex3f(v->x,v->y,v->z);}
    }
    glEnd();
}
static void render(void) {
    float aspect=(float)width/height;
    glViewport(0,0,width,height);glClearColor(.54f,.68f,.74f,1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);glLoadIdentity();glFrustum(-.07*aspect,.07*aspect,-.07,.07,.1,200);
    glMatrixMode(GL_MODELVIEW);glLoadIdentity();
    glRotatef(-game.pitch*57.29578f,1,0,0);glRotatef(game.yaw*57.29578f,0,1,0);glTranslatef(-game.x,-game.y,-game.z);
    box(0,-.2f,0,40,.4f,44,.39f,.43f,.4f);
    box(0,.005f,0,13,.01f,44,.23f,.25f,.26f);
    for(int z=-20;z<=20;z+=5) box(0,.015f,(float)z,.14f,.015f,2,.88f,.85f,.64f);
    box(-7,.08f,0,1,.16f,44,.66f,.66f,.62f);box(7,.08f,0,1,.16f,44,.66f,.66f,.62f);
    for(int i=0;i<sr_block_count;i++) {
        const SrBlock *b=&sr_blocks[i];
        box(b->x,b->h/2,b->z,b->w,b->h,b->d,i<4?.62f:.33f,i<4?.63f:.4f,i<4?.59f:.33f);
        if(i<4) for(float y=2;y<b->h;y+=2) for(float z=b->z-b->d/2+1;z<b->z+b->d/2;z+=2)
            box(b->x+(b->x<0?1:-1)*(b->w/2+.01f),y,z,.03f,.9f,1,.2f,.34f,.38f);
    }
    box(0,1,-22,40,2,.2f,.48f,.5f,.49f);box(0,1,22,40,2,.2f,.48f,.5f,.49f);
    box(-20,1,0,.2f,2,44,.48f,.5f,.49f);box(20,1,0,.2f,2,44,.48f,.5f,.49f);
    for(int i=0;i<3;i++) {
        const float *p=sr_targets[i];box(p[0],.4f,p[2],.12f,.8f,.12f,.4f,.4f,.4f);
        if(!game.targets[i]) {box(p[0],p[1],p[2],1.1f,1.5f,.3f,.75f,.26f,.24f);box(p[0],p[1],p[2]+.16f,.35f,.45f,.015f,.9f,.87f,.8f);}
    }
    if(!game.carrying && !game.delivered) {box(-3,.4f,11,.75f,.55f,.3f,.17f,.2f,.19f);box(-3,.74f,11,.28f,.12f,.1f,.55f,.55f,.5f);}
    box(3,.03f,-13,2,.06f,2,.23f,.65f,.4f);
    if(game.delivered) box(3,.35f,-13,.75f,.55f,.3f,.17f,.2f,.19f);
    /* View model gets its own depth range so nearby world surfaces cannot clip it. */
    glClear(GL_DEPTH_BUFFER_BIT);glLoadIdentity();
    glTranslatef(.24f,-.22f-(game.reload>0?.15f:0),-.48f+game.flash);glRotatef(180,0,1,0);glScalef(1.5f,1.5f,1.5f);mesh();
    if(game.flash>0) box(0,.02f,.22f,.035f,.035f,.1f,1,.85f,.3f);
    glDisable(GL_DEPTH_TEST);glMatrixMode(GL_PROJECTION);glLoadIdentity();glOrtho(0,width,height,0,-1,1);
    glMatrixMode(GL_MODELVIEW);glLoadIdentity();glColor3f(.95f,.95f,.95f);
    glBegin(GL_LINES);glVertex2i(width/2-6,height/2);glVertex2i(width/2+6,height/2);glVertex2i(width/2,height/2-6);glVertex2i(width/2,height/2+6);glEnd();
    char text[160];
    label(24,32,"SUB ROSA / PLAYABLE RECONSTRUCTION");
    snprintf(text,sizeof(text),"TARGETS %d / 3",game.hits);label(24,60,text);
    label(24,88,game.delivered?"DELIVERY COMPLETE":game.carrying?"DELIVER CASE TO GREEN MARKER":"COLLECT CASE");
    snprintf(text,sizeof(text),"9MM   %02d / 12%s",game.ammo,game.reload>0?"   RELOADING":"");label((float)width-310,(float)height-28,text);
    if(!game.delivered && ((!game.carrying && hypotf(game.x+3,game.z-11)<2)||(game.carrying && hypotf(game.x-3,game.z+13)<2)))
        label(24,(float)height-60,game.carrying?"DELIVER CASE [E]":"TAKE CASE [E]");
    if(game.hits==3 && game.delivered) label(24,116,"CONTRACT COMPLETE  /  $500");
    if(paused) {
        glEnable(GL_BLEND);glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);glColor4f(0,0,0,.7f);
        glBegin(GL_QUADS);glVertex2i(0,0);glVertex2i(width,0);glVertex2i(width,height);glVertex2i(0,height);glEnd();glDisable(GL_BLEND);
        glColor3f(1,1,1);label(width/2.f-90,height/2.f-30,"PAUSED");label(width/2.f-90,height/2.f,"Resume [Enter]");
        label(width/2.f-90,height/2.f+30,"Restart [F5]");label(width/2.f-90,height/2.f+60,"Quit [F10]");
    }
}
static LRESULT CALLBACK proc(HWND hwnd,UINT msg,WPARAM w,LPARAM l) {
    switch(msg) {
    case WM_GETMINMAXINFO: ((MINMAXINFO*)l)->ptMinTrackSize.x=720;((MINMAXINFO*)l)->ptMinTrackSize.y=480;return 0;
    case WM_SIZE: width=LOWORD(l);height=HIWORD(l);if(width<1)width=1;if(height<1)height=1;if(!paused)capture(1);return 0;
    case WM_KILLFOCUS: capture(0);return 0;
    case WM_KEYDOWN:
        if(w<256)keys[w]=1;
        if(l&(1L<<30))return 0;
        if(w==VK_ESCAPE)capture(paused);
        if(w==VK_RETURN && paused)capture(1);
        if(w==VK_F5)sr_play_reset(&game);
        if(w==VK_F10)DestroyWindow(hwnd);
        if(!paused && w=='E')sr_play_interact(&game);
        if(!paused && w=='R')sr_play_reload(&game);
        return 0;
    case WM_KEYUP: if(w<256)keys[w]=0;return 0;
    case WM_LBUTTONDOWN: if(paused)capture(1);else sr_play_shoot(&game);return 0;
    case WM_CLOSE:DestroyWindow(hwnd);return 0;
    case WM_DESTROY:capture(0);PostQuitMessage(0);return 0;
    }
    return DefWindowProcA(hwnd,msg,w,l);
}
static int load_assets(void) {
    GetModuleFileNameA(NULL,root,MAX_PATH);
    for(int i=0;i<6;i++) {
        char *slash=strrchr(root,'\\');if(!slash)break;*slash=0;
        char path[MAX_PATH];
        if(strlen(root)+24>=MAX_PATH)continue;
        strcpy(path,root);strcat(path,"\\data\\model\\9mm.cmo");
        if(GetFileAttributesA(path)!=INVALID_FILE_ATTRIBUTES)return sr_mesh_load_cmo(path,&pistol);
    }
    return 0;
}
static int screenshot(void) {
    size_t size=(size_t)width*height*3;unsigned char *pixels=malloc(size);if(!pixels)return 0;
    glPixelStorei(GL_PACK_ALIGNMENT,1);glReadBuffer(GL_BACK);glReadPixels(0,0,width,height,GL_RGB,GL_UNSIGNED_BYTE,pixels);
    size_t differing=0;for(size_t i=3;i<size;i+=3)if(memcmp(pixels,pixels+i,3))differing++;
    FILE *f=fopen("sr_play_smoke.ppm","wb");if(!f){free(pixels);return 0;}
    fprintf(f,"P6\n%d %d\n255\n",width,height);
    for(int y=height-1;y>=0;y--)fwrite(pixels+(size_t)y*width*3,1,(size_t)width*3,f);
    fclose(f);free(pixels);return differing>(size_t)width*height/10 && glGetError()==GL_NO_ERROR;
}
int WINAPI WinMain(HINSTANCE instance,HINSTANCE prev,LPSTR cmd,int show) {
    (void)prev;smoke=strstr(cmd,"--smoke-test")!=NULL;
    SetProcessDPIAware();sr_play_reset(&game);
    if(!load_assets()) {MessageBoxA(NULL,"Cannot load data/model/9mm.cmo. Keep this build inside the Sub Rosa folder.","Missing asset",MB_ICONERROR);return 1;}
    WNDCLASSA wc={0};wc.style=CS_OWNDC;wc.lpfnWndProc=proc;wc.hInstance=instance;wc.lpszClassName="SrPlayable";wc.hCursor=LoadCursor(NULL,IDC_ARROW);
    if(!RegisterClassA(&wc))return 2;
    window=CreateWindowA(wc.lpszClassName,"Sub Rosa - Playable Reconstruction",WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,width,height,NULL,NULL,instance,NULL);
    if(!window)return 2;
    dc=GetDC(window);
    PIXELFORMATDESCRIPTOR pf={0};pf.nSize=sizeof(pf);pf.nVersion=1;pf.dwFlags=PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|PFD_DOUBLEBUFFER;pf.iPixelType=PFD_TYPE_RGBA;pf.cColorBits=24;pf.cDepthBits=24;
    int format=ChoosePixelFormat(dc,&pf);
    if(!format || !SetPixelFormat(dc,format,&pf) || !(context=wglCreateContext(dc)) || !wglMakeCurrent(dc,context)) {MessageBoxA(window,"OpenGL initialization failed.","Renderer",MB_ICONERROR);return 3;}
    HFONT face=CreateFontA(-18,0,0,0,FW_NORMAL,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,ANTIALIASED_QUALITY,FIXED_PITCH,"Consolas");
    HGDIOBJ old=SelectObject(dc,face);font=glGenLists(256);BOOL font_ok=wglUseFontBitmapsA(dc,0,256,font);SelectObject(dc,old);DeleteObject(face);
    if(!font_ok)return 4;
    ShowWindow(window,show);UpdateWindow(window);
    LARGE_INTEGER freq,last,now;QueryPerformanceFrequency(&freq);QueryPerformanceCounter(&last);
    MSG msg={0};int running=1,frames=0,result=0;
    while(running) {
        while(PeekMessage(&msg,NULL,0,0,PM_REMOVE)) {if(msg.message==WM_QUIT){running=0;break;}TranslateMessage(&msg);DispatchMessage(&msg);}
        if(!running)break;
        QueryPerformanceCounter(&now);float dt=(float)(now.QuadPart-last.QuadPart)/freq.QuadPart;last=now;
        if(!paused && GetForegroundWindow()==window) {
            POINT center={width/2,height/2},mouse;ClientToScreen(window,&center);GetCursorPos(&mouse);
            game.yaw+=(mouse.x-center.x)*.0025f;game.pitch-=(mouse.y-center.y)*.0025f;
            if(game.pitch>1.45f)game.pitch=1.45f;
            if(game.pitch<-1.45f)game.pitch=-1.45f;
            SetCursorPos(center.x,center.y);
            sr_play_step(&game,(float)(keys['W']-keys['S']),(float)(keys['D']-keys['A']),keys[VK_SHIFT],keys[VK_SPACE],dt);
        }
        if(smoke)paused=0;
        render();
        if(smoke && ++frames==3) {result=screenshot()?0:5;running=0;}
        SwapBuffers(dc);Sleep(8);
    }
    capture(0);glDeleteLists(font,256);wglMakeCurrent(NULL,NULL);wglDeleteContext(context);ReleaseDC(window,dc);if(IsWindow(window))DestroyWindow(window);sr_mesh_free(&pistol);return result;
}
