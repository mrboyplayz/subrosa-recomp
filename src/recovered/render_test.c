/* Standalone rendering tests. The game simulation and client are not loaded. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include "recovered_shaders.h"
#include "render_test_capture.h"

static FILE *report;
static unsigned failures, mode;
static int closing;
static HWND window;
static PFNGLCREATESHADERPROC create_shader;
static PFNGLSHADERSOURCEPROC shader_source;
static PFNGLCOMPILESHADERPROC compile_shader;
static PFNGLGETSHADERIVPROC shader_iv;
static PFNGLGETSHADERINFOLOGPROC shader_log;
static PFNGLDELETESHADERPROC delete_shader;
static PFNGLCREATEPROGRAMPROC create_program;
static PFNGLATTACHSHADERPROC attach_shader;
static PFNGLLINKPROGRAMPROC link_program;
static PFNGLGETPROGRAMIVPROC program_iv;
static PFNGLGETPROGRAMINFOLOGPROC program_log;
static PFNGLDELETEPROGRAMPROC delete_program;
static PFNGLUSEPROGRAMPROC use_program;
static PFNGLGETUNIFORMLOCATIONPROC uniform_location;
static PFNGLUNIFORMMATRIX4FVPROC matrix_uniform;
static PFNGLUNIFORM1IPROC integer_uniform;
static PFNGLGENBUFFERSPROC gen_buffers;
static PFNGLBINDBUFFERPROC bind_buffer;
static PFNGLBUFFERDATAPROC buffer_data;
static PFNGLDELETEBUFFERSPROC delete_buffers;
static PFNGLGENVERTEXARRAYSPROC gen_arrays;
static PFNGLBINDVERTEXARRAYPROC bind_array;
static PFNGLDELETEVERTEXARRAYSPROC delete_arrays;
static PFNGLVERTEXATTRIBPOINTERPROC attribute;
static PFNGLENABLEVERTEXATTRIBARRAYPROC enable_attribute;
static PFNGLDISABLEVERTEXATTRIBARRAYPROC disable_attribute;
static PFNGLGENFRAMEBUFFERSPROC gen_fbos;
static PFNGLBINDFRAMEBUFFERPROC bind_fbo;
static PFNGLFRAMEBUFFERTEXTURE2DPROC attach_texture;
static PFNGLCHECKFRAMEBUFFERSTATUSPROC check_fbo;
static PFNGLDELETEFRAMEBUFFERSPROC delete_fbos;
static PFNGLBLITFRAMEBUFFERPROC blit_framebuffer;
static PFNGLACTIVETEXTUREPROC active_texture;
static PFNGLDRAWELEMENTSBASEVERTEXPROC draw_base_vertex;
static PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC multi_draw;
static PFNGLDEBUGMESSAGECALLBACKPROC debug_callback;
static GLuint originals[13], diagnostic, vao, buffers[2], framebuffer, target, mask_texture;
static float terrain[361][6], view[16];
static uint32_t terrain_indices[1944];
static const float identity[16]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};

static void log_line(const char *format,...)
{
    va_list args;va_start(args,format);vprintf(format,args);va_end(args);
    if(report){va_start(args,format);vfprintf(report,format,args);va_end(args);fflush(report);}
    fflush(stdout);
}

static void APIENTRY driver_message(GLenum source,GLenum type,GLuint id,GLenum severity,
                                    GLsizei length,const GLchar *text,const void *user)
{
    (void)source;(void)severity;(void)user;
    if(type==GL_DEBUG_TYPE_ERROR){log_line("FAIL driver message %u: %.*s\n",id,length,text);failures++;}
}

#define LOAD(slot,name) do { \
    PROC address=wglGetProcAddress(name);uintptr_t bits=0;memcpy(&bits,&address,sizeof bits); \
    if(!address || bits<=3 || bits==UINTPTR_MAX){log_line("FAIL missing %s\n",name);return 0;} \
    memcpy(&slot,&address,sizeof slot); \
} while(0)

static int load_gl(void)
{
    LOAD(create_shader,"glCreateShader");LOAD(shader_source,"glShaderSource");
    LOAD(compile_shader,"glCompileShader");LOAD(shader_iv,"glGetShaderiv");
    LOAD(shader_log,"glGetShaderInfoLog");LOAD(delete_shader,"glDeleteShader");
    LOAD(create_program,"glCreateProgram");LOAD(attach_shader,"glAttachShader");
    LOAD(link_program,"glLinkProgram");LOAD(program_iv,"glGetProgramiv");
    LOAD(program_log,"glGetProgramInfoLog");LOAD(delete_program,"glDeleteProgram");
    LOAD(use_program,"glUseProgram");LOAD(uniform_location,"glGetUniformLocation");
    LOAD(matrix_uniform,"glUniformMatrix4fv");LOAD(integer_uniform,"glUniform1i");
    LOAD(gen_buffers,"glGenBuffers");LOAD(bind_buffer,"glBindBuffer");LOAD(buffer_data,"glBufferData");
    LOAD(delete_buffers,"glDeleteBuffers");LOAD(gen_arrays,"glGenVertexArrays");
    LOAD(bind_array,"glBindVertexArray");LOAD(delete_arrays,"glDeleteVertexArrays");
    LOAD(attribute,"glVertexAttribPointer");LOAD(enable_attribute,"glEnableVertexAttribArray");
    LOAD(disable_attribute,"glDisableVertexAttribArray");LOAD(gen_fbos,"glGenFramebuffers");
    LOAD(bind_fbo,"glBindFramebuffer");LOAD(attach_texture,"glFramebufferTexture2D");
    LOAD(check_fbo,"glCheckFramebufferStatus");LOAD(delete_fbos,"glDeleteFramebuffers");
    LOAD(blit_framebuffer,"glBlitFramebuffer");LOAD(active_texture,"glActiveTexture");
    LOAD(draw_base_vertex,"glDrawElementsBaseVertex");LOAD(multi_draw,"glMultiDrawElementsBaseVertex");
    PROC callback=wglGetProcAddress("glDebugMessageCallback");
    if(callback){memcpy(&debug_callback,&callback,sizeof callback);debug_callback(driver_message,NULL);glEnable(GL_DEBUG_OUTPUT);glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);}
    return 1;
}

static GLuint stage(GLenum type,const char *text,int size)
{
    GLuint shader=create_shader(type);shader_source(shader,1,&text,&size);compile_shader(shader);
    GLint ok=0;shader_iv(shader,GL_COMPILE_STATUS,&ok);
    if(!ok){char message[8192];GLsizei n=0;shader_log(shader,sizeof message-1,&n,message);message[n]=0;log_line("FAIL shader %x: %s\n",type,message);failures++;}
    return shader;
}

static int finish_program(GLuint program,const char *label)
{
    link_program(program);GLint ok=0;program_iv(program,GL_LINK_STATUS,&ok);
    if(!ok){char message[8192];GLsizei n=0;program_log(program,sizeof message-1,&n,message);message[n]=0;log_line("FAIL %s link: %s\n",label,message);failures++;}
    else log_line("PASS %s compile/link\n",label);
    return ok;
}

static int shaders(void)
{
    for(unsigned p=0;p<13;p++){
        originals[p]=create_program();
        for(unsigned i=0;i<sizeof sr_extracted_shaders/sizeof sr_extracted_shaders[0];i++){
            const SrExtractedShader *s=&sr_extracted_shaders[i];if(s->program!=p)continue;
            GLuint object=stage(s->type,(const char *)s->source,s->size);attach_shader(originals[p],object);delete_shader(object);
        }
        char label[64];snprintf(label,sizeof label,"original program %02u",p);finish_program(originals[p],label);
    }
    const char *vert="#version 330 core\nlayout(location=0) in vec3 position;layout(location=1) in vec3 normal;uniform mat4 camera;out vec3 n;void main(){gl_Position=camera*vec4(position,1);n=normal;}";
    const char *frag="#version 330 core\nin vec3 n;uniform int mode;out vec4 color;void main(){vec3 v=normalize(n);color=mode==1?vec4(v*.5+.5,1):vec4(vec3(.13,.65,.77)*(.35+.65*abs(dot(v,normalize(vec3(.4,1,.3))))),1);}";
    diagnostic=create_program();GLuint vs=stage(GL_VERTEX_SHADER,vert,(int)strlen(vert)),fs=stage(GL_FRAGMENT_SHADER,frag,(int)strlen(frag));
    attach_shader(diagnostic,vs);attach_shader(diagnostic,fs);delete_shader(vs);delete_shader(fs);finish_program(diagnostic,"diagnostic terrain");
    return failures==0;
}

static int gl_ok(const char *label)
{
    glFinish();GLenum error;unsigned bad=0;
    while((error=glGetError())!=GL_NO_ERROR){log_line("FAIL %s GL error 0x%x\n",label,error);bad++;}
    failures+=bad;if(!bad)log_line("PASS %s\n",label);return bad==0;
}

static void mesh(const void *vertices,size_t bytes,const uint32_t *indices,size_t index_bytes)
{
    bind_array(vao);bind_buffer(GL_ARRAY_BUFFER,buffers[0]);buffer_data(GL_ARRAY_BUFFER,(GLsizeiptr)bytes,vertices,GL_STATIC_DRAW);
    bind_buffer(GL_ELEMENT_ARRAY_BUFFER,buffers[1]);buffer_data(GL_ELEMENT_ARRAY_BUFFER,(GLsizeiptr)index_bytes,indices,GL_STATIC_DRAW);
    enable_attribute(0);enable_attribute(1);attribute(0,3,GL_FLOAT,GL_FALSE,24,0);attribute(1,3,GL_FLOAT,GL_FALSE,24,(const void *)12);
}

static void diagnostic_uniforms(const float *camera,unsigned display_mode)
{
    use_program(diagnostic);matrix_uniform(uniform_location(diagnostic,"camera"),1,GL_FALSE,camera);integer_uniform(uniform_location(diagnostic,"mode"),(int)display_mode);
}

static void original_uniforms(const float *model,const float *projection,int use_mask)
{
    use_program(originals[5]);matrix_uniform(uniform_location(originals[5],"modelviewmatrix"),1,GL_FALSE,model);
    matrix_uniform(uniform_location(originals[5],"modelviewprojectionmatrix"),1,GL_FALSE,projection);
    integer_uniform(uniform_location(originals[5],"tex_mask"),0);integer_uniform(uniform_location(originals[5],"land_usemask"),use_mask);
    active_texture(GL_TEXTURE0);glBindTexture(GL_TEXTURE_2D,mask_texture);
}

static unsigned read_pixels(const char *label,int require_pixels)
{
    unsigned char *pixels=malloc(512*512*4);if(!pixels){failures++;return 0;}
    glReadPixels(0,0,512,512,GL_RGBA,GL_UNSIGNED_BYTE,pixels);unsigned colored=0;
    for(unsigned i=0;i<512*512;i++)if(pixels[4*i]||pixels[4*i+1]||pixels[4*i+2])colored++;
    free(pixels);log_line("%s: %u colored pixels\n",label,colored);
    if(require_pixels && !colored){log_line("FAIL expected visible pixels\n");failures++;}
    return colored;
}

static void terrain_data(void)
{
#if SR_CAPTURE_AVAILABLE
    memcpy(terrain,sr_capture_vertices,sizeof terrain);memcpy(terrain_indices,sr_capture_indices,sizeof terrain_indices);
#else
    for(unsigned z=0;z<19;z++)for(unsigned x=0;x<19;x++){
        float *v=terrain[z*19+x];v[0]=(float)x;v[1]=sinf(x*.4f)*cosf(z*.3f)*.5f;v[2]=(float)z;v[3]=0;v[4]=1;v[5]=0;
    }
    unsigned n=0;for(unsigned z=0;z<18;z++)for(unsigned x=0;x<18;x++){
        unsigned a=z*19+x;uint32_t tri[]={a,a+19,a+1,a+1,a+19,a+20};memcpy(terrain_indices+n,tri,sizeof tri);n+=6;
    }
#endif
    float low[3]={terrain[0][0],terrain[0][1],terrain[0][2]},high[3]={low[0],low[1],low[2]};
    for(unsigned i=0;i<361;i++)for(unsigned j=0;j<3;j++){if(terrain[i][j]<low[j])low[j]=terrain[i][j];if(terrain[i][j]>high[j])high[j]=terrain[i][j];}
    float extent=fmaxf(high[0]-low[0],high[2]-low[2]);if(extent<1)extent=1;
    float cx=(low[0]+high[0])*.5f,cy=(low[1]+high[1])*.5f,cz=(low[2]+high[2])*.5f,s=1.25f/extent;
    memset(view,0,sizeof view);view[0]=s;view[8]=-s;view[1]=-.5f*s;view[5]=1.25f*s;view[9]=-.5f*s;
    view[2]=-.25f*s;view[6]=-.5f*s;view[10]=-.25f*s;view[15]=1;
    view[12]=-s*cx+s*cz;view[13]=.5f*s*(cx+cz)-1.25f*s*cy;view[14]=.25f*s*(cx+cz)+.5f*s*cy;
    log_line("Terrain: 361 vertices, 1944 uint indices, native capture=%d\n",SR_CAPTURE_AVAILABLE);
}

static int resources(void)
{
    gen_arrays(1,&vao);bind_array(vao);gen_buffers(2,buffers);
    gen_fbos(1,&framebuffer);bind_fbo(GL_FRAMEBUFFER,framebuffer);
    glGenTextures(1,&target);glBindTexture(GL_TEXTURE_2D,target);glTexImage2D(GL_TEXTURE_2D,0,GL_RGBA8,512,512,0,GL_RGBA,GL_UNSIGNED_BYTE,NULL);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    attach_texture(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,target,0);
    if(check_fbo(GL_FRAMEBUFFER)!=GL_FRAMEBUFFER_COMPLETE){log_line("FAIL framebuffer incomplete\n");failures++;return 0;}
    uint16_t *mask=malloc(1024*1024*2);if(!mask)return 0;
    for(unsigned i=0;i<1024*1024;i++)mask[i]=65535;
    glGenTextures(1,&mask_texture);glBindTexture(GL_TEXTURE_2D,mask_texture);glTexImage2D(GL_TEXTURE_2D,0,GL_R16UI,1024,1024,0,GL_RED_INTEGER,GL_UNSIGNED_SHORT,mask);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP_TO_EDGE);glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP_TO_EDGE);free(mask);
    terrain_data();return gl_ok("buffer, VAO, FBO and integer texture creation");
}

static void render_tests(void)
{
    static const float triangle[3][6]={{-.8f,-.8f,0,0,1,0},{.8f,-.8f,0,0,1,0},{0,.8f,0,0,1,0}};
    static const uint32_t indices[3]={0,1,2};
    glViewport(0,0,512,512);glDisable(GL_DEPTH_TEST);glDisable(GL_CULL_FACE);glDisable(GL_BLEND);glClearColor(0,0,0,1);
    mesh(triangle,sizeof triangle,indices,sizeof indices);diagnostic_uniforms(identity,0);
    glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,3,GL_UNSIGNED_INT,NULL);gl_ok("indexed triangle");read_pixels("indexed triangle",1);
    glClear(GL_COLOR_BUFFER_BIT);glDrawArrays(GL_TRIANGLES,0,3);gl_ok("array triangle");read_pixels("array triangle",1);
    glClear(GL_COLOR_BUFFER_BIT);draw_base_vertex(GL_TRIANGLES,3,GL_UNSIGNED_INT,NULL,0);gl_ok("base-vertex triangle");read_pixels("base-vertex triangle",1);
    GLsizei counts[1]={3};const void *offsets[1]={0};GLint bases[1]={0};
    glClear(GL_COLOR_BUFFER_BIT);multi_draw(GL_TRIANGLES,counts,GL_UNSIGNED_INT,offsets,1,bases);gl_ok("multi-draw triangle");read_pixels("multi-draw triangle",1);
    original_uniforms(identity,identity,0);glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,3,GL_UNSIGNED_INT,NULL);gl_ok("original shadow shader without mask");read_pixels("original shadow shader without mask",1);
    original_uniforms(identity,identity,1);glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,3,GL_UNSIGNED_INT,NULL);gl_ok("original shadow shader with R16UI mask");read_pixels("original shadow shader with R16UI mask",1);
    mesh(terrain,sizeof terrain,terrain_indices,sizeof terrain_indices);diagnostic_uniforms(view,0);
    glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,1944,GL_UNSIGNED_INT,NULL);gl_ok("Practice terrain indexed draw");read_pixels("Practice terrain indexed draw",1);
#if SR_CAPTURE_AVAILABLE
    uint16_t *mask=malloc(1024*1024*2);unsigned n=0;
    if(!mask){failures++;return;}
    for(unsigned i=0;i<sizeof sr_capture_mask_runs/sizeof sr_capture_mask_runs[0];i+=2){
        unsigned count=sr_capture_mask_runs[i];if(count>1024*1024-n){free(mask);failures++;return;}
        for(unsigned j=0;j<count;j++)mask[n++]=(uint16_t)sr_capture_mask_runs[i+1];
    }
    if(n!=1024*1024){free(mask);failures++;return;}
    glBindTexture(GL_TEXTURE_2D,mask_texture);glTexSubImage2D(GL_TEXTURE_2D,0,0,0,1024,1024,GL_RED_INTEGER,GL_UNSIGNED_SHORT,mask);free(mask);
    original_uniforms((const float *)sr_capture_model,(const float *)sr_capture_projection,1);
    glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,1944,GL_UNSIGNED_INT,NULL);gl_ok("captured Practice shadow draw replay");read_pixels("captured Practice shadow draw replay",0);
#endif
    log_line("GPU checks: %s (%u failures)\n",failures?"FAIL":"PASS",failures);
}

static void save_bitmap(const char *path)
{
    unsigned char *pixels=malloc(512*512*4);if(!pixels){failures++;return;}
    glReadPixels(0,0,512,512,GL_BGRA,GL_UNSIGNED_BYTE,pixels);
    BITMAPFILEHEADER file={0};BITMAPINFOHEADER info={0};file.bfType=0x4d42;file.bfOffBits=sizeof file+sizeof info;file.bfSize=file.bfOffBits+512*512*4;
    info.biSize=sizeof info;info.biWidth=info.biHeight=512;info.biPlanes=1;info.biBitCount=32;info.biSizeImage=512*512*4;
    FILE *out=fopen(path,"wb");if(out){fwrite(&file,sizeof file,1,out);fwrite(&info,sizeof info,1,out);fwrite(pixels,1,512*512*4,out);fclose(out);log_line("Screenshot: %s\n",path);}else{log_line("FAIL cannot write screenshot\n");failures++;}free(pixels);
}

static LRESULT CALLBACK window_proc(HWND handle,UINT message,WPARAM key,LPARAM detail)
{
    if(message==WM_CLOSE){closing=1;return 0;}
    if(message==WM_KEYDOWN){if(key==VK_ESCAPE)closing=1;if(key==VK_SPACE)mode=(mode+1)%3;return 0;}
    return DefWindowProcA(handle,message,key,detail);
}

int main(int argc,char **argv)
{
    int test_only=0;unsigned frames=0;const char *screenshot=NULL,*log_path=NULL;
    for(int i=1;i<argc;i++){
        if(!strcmp(argv[i],"--test"))test_only=1;
        else if(!strcmp(argv[i],"--frames") && i+1<argc)frames=(unsigned)strtoul(argv[++i],NULL,10);
        else if(!strcmp(argv[i],"--screenshot") && i+1<argc)screenshot=argv[++i];
        else if(!strcmp(argv[i],"--log") && i+1<argc)log_path=argv[++i];
        else if(!strcmp(argv[i],"--view") && i+1<argc){const char *name=argv[++i];
            if(!strcmp(name,"terrain"))mode=0;else if(!strcmp(name,"normals"))mode=1;else if(!strcmp(name,"shadow"))mode=2;
            else {fprintf(stderr,"Unknown view: %s\n",name);return 2;}}
        else {fprintf(stderr,"Usage: subrosa-render-test.exe [--test] [--frames N] [--view terrain|normals|shadow] [--screenshot file.bmp] [--log file]\n");return 2;}
    }
    char default_log[MAX_PATH];if(!log_path){GetModuleFileNameA(NULL,default_log,sizeof default_log);char *slash=strrchr(default_log,'\\');if(slash)strcpy(slash+1,"subrosa-render-test.log");else strcpy(default_log,"subrosa-render-test.log");log_path=default_log;}
    report=fopen(log_path,"w");if(!report)return 2;
    HINSTANCE instance=GetModuleHandleA(NULL);WNDCLASSA wc={0};wc.style=CS_OWNDC;wc.lpfnWndProc=window_proc;wc.hInstance=instance;wc.lpszClassName="SrStandaloneRenderTest";wc.hCursor=LoadCursor(NULL,IDC_ARROW);
    if(!RegisterClassA(&wc)){fclose(report);return 2;}
    window=CreateWindowA(wc.lpszClassName,"Sub Rosa rendering test",WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,1040,800,NULL,NULL,instance,NULL);
    HDC dc=window?GetDC(window):NULL;HGLRC context=NULL;int result=2;
    PIXELFORMATDESCRIPTOR pf={0};pf.nSize=sizeof pf;pf.nVersion=1;pf.dwFlags=PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|PFD_DOUBLEBUFFER;pf.iPixelType=PFD_TYPE_RGBA;pf.cColorBits=32;pf.cDepthBits=24;
    int format=dc?ChoosePixelFormat(dc,&pf):0;
    if(!format || !SetPixelFormat(dc,format,&pf) || !(context=wglCreateContext(dc)) || !wglMakeCurrent(dc,context)){log_line("FAIL cannot create OpenGL context: %lu\n",GetLastError());goto cleanup;}
    log_line("Standalone C rendering tests\nGL %s\nGPU %s\nVendor %s\n",glGetString(GL_VERSION),glGetString(GL_RENDERER),glGetString(GL_VENDOR));
    if(!load_gl() || !shaders() || !resources())goto cleanup;
    render_tests();result=failures?1:0;
    mesh(terrain,sizeof terrain,terrain_indices,sizeof terrain_indices);
    if(mode<2)diagnostic_uniforms(view,mode);else original_uniforms(identity,view,0);
    glClear(GL_COLOR_BUFFER_BIT);glDrawElements(GL_TRIANGLES,1944,GL_UNSIGNED_INT,NULL);glFinish();
    if(screenshot)save_bitmap(screenshot);
    if(!test_only){ShowWindow(window,SW_SHOW);unsigned frame=0;
        while(!closing && (!frames || frame<frames)){
            MSG message;while(PeekMessageA(&message,NULL,0,0,PM_REMOVE)){TranslateMessage(&message);DispatchMessageA(&message);}
            bind_fbo(GL_FRAMEBUFFER,framebuffer);glViewport(0,0,512,512);glClearColor(.025f,.035f,.06f,1);glClear(GL_COLOR_BUFFER_BIT);
            if(mode<2)diagnostic_uniforms(view,mode);else original_uniforms(identity,view,0);
            glDrawElements(GL_TRIANGLES,1944,GL_UNSIGNED_INT,NULL);
            bind_fbo(GL_READ_FRAMEBUFFER,framebuffer);bind_fbo(GL_DRAW_FRAMEBUFFER,0);RECT area;GetClientRect(window,&area);
            blit_framebuffer(0,0,512,512,0,0,area.right,area.bottom,GL_COLOR_BUFFER_BIT,GL_NEAREST);
            glFinish();GLenum error;
            while((error=glGetError())!=GL_NO_ERROR){log_line("FAIL viewer frame %u GL error 0x%x\n",frame,error);failures++;}
            if(!SwapBuffers(dc)){log_line("FAIL viewer swap: %lu\n",GetLastError());failures++;closing=1;}
            char title[192];snprintf(title,sizeof title,"Sub Rosa rendering test | %s | %s | Space: change view | Esc: exit",failures?"FAIL":"PASS",mode==0?"Practice terrain":mode==1?"Vertex normals":"Original shadow shader");SetWindowTextA(window,title);Sleep(16);frame++;
        }
    }
    if(failures)result=1;
cleanup:
    if(context){if(delete_program){for(unsigned i=0;i<13;i++)if(originals[i])delete_program(originals[i]);if(diagnostic)delete_program(diagnostic);}
        if(delete_buffers)delete_buffers(2,buffers);
        if(delete_arrays && vao)delete_arrays(1,&vao);
        if(delete_fbos && framebuffer)delete_fbos(1,&framebuffer);
        if(target)glDeleteTextures(1,&target);
        if(mask_texture)glDeleteTextures(1,&mask_texture);
        wglMakeCurrent(NULL,NULL);wglDeleteContext(context);}
    if(dc)ReleaseDC(window,dc);
    if(window)DestroyWindow(window);
    UnregisterClassA(wc.lpszClassName,instance);
    log_line("RESULT: %s (%u failures)\n",result==0?"PASS":"FAIL",failures);
    log_line("Exit code: %d\n",result);fclose(report);return result;
}
