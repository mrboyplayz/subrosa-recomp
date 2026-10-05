/* Diagnostic DLL: ask the driver for messages; never linked into the client. */
#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef void *(*get_proc_t)(const char *);
typedef void (*debug_callback_t)(unsigned,unsigned,unsigned,unsigned,int,const char *,const void *);
static FILE *output;
static get_proc_t get;
static char capture_path[2048];
static char texture_path[2048];
static unsigned char captured_programs[4096];
static unsigned draw_serial;
static unsigned stop_serial;
static unsigned stop_array;
static unsigned stop_program;
__declspec(dllexport) void sr_gl_debug_stop_at(unsigned serial){stop_serial=serial;}
__declspec(dllexport) void sr_gl_debug_stop_array(unsigned id){stop_array=id;}
__declspec(dllexport) void sr_gl_debug_stop_program(unsigned id){stop_program=id;}
static void (*draw_arrays)(unsigned,int,int);
static void (*draw_elements)(unsigned,int,unsigned,const void *);
static void (*multi_draw)(unsigned,const int *,unsigned,const void *const *,int,const int *);
static void (*base_draw)(unsigned,int,unsigned,const void *,int);
static void (*finish_draw)(void);
__declspec(dllexport) void sr_gl_debug_snapshot(void);
__declspec(dllexport) void sr_gl_debug_frame(const char *path,int width,int height)
{
    void (*pixels)(int,int,int,int,unsigned,unsigned,void *)=get("glReadPixels");
    void (*integer)(unsigned,int *)=get("glGetIntegerv");
    void (*pack)(unsigned,int)=get("glPixelStorei");
    void (*bind)(unsigned,unsigned)=get("glBindFramebuffer");
    void (*read_buffer)(unsigned)=get("glReadBuffer");
    if(!pixels||width<=0||height<=0||width>8192||height>8192)return;
    size_t size=(size_t)width*height*4;unsigned char *data=malloc(size);if(!data)return;
    int alignment=4,framebuffer=0,previous_buffer=0;
    integer(0x0d05,&alignment);integer(0x8caa,&framebuffer);integer(0x0c02,&previous_buffer);
    bind(0x8ca8,0);read_buffer(0x405);pack(0x0d05,4);
    pixels(0,0,width,height,0x80e1,0x1401,data);pack(0x0d05,alignment);
    bind(0x8ca8,framebuffer);read_buffer(previous_buffer);
    BITMAPFILEHEADER file={0};BITMAPINFOHEADER info={0};
    file.bfType=0x4d42;file.bfOffBits=sizeof file+sizeof info;file.bfSize=file.bfOffBits+(DWORD)size;
    info.biSize=sizeof info;info.biWidth=width;info.biHeight=height;info.biPlanes=1;info.biBitCount=32;info.biSizeImage=(DWORD)size;
    FILE *capture=fopen(path,"wb");if(capture){fwrite(&file,sizeof file,1,capture);fwrite(&info,sizeof info,1,capture);fwrite(data,size,1,capture);fclose(capture);}
    free(data);
}

static void draw_begin(const char *name,unsigned mode,int count,unsigned type,const void *offset)
{
    int array=0,elements=0,program=0,asize=0,esize=0;
    void (*integer)(unsigned,int *)=get("glGetIntegerv");
    void (*buffer)(unsigned,unsigned,int *)=get("glGetBufferParameteriv");
    integer(0x8894,&array);integer(0x8895,&elements);integer(0x8b8d,&program);
    if(array)buffer(0x8892,0x8764,&asize);if(elements)buffer(0x8893,0x8764,&esize);
    fprintf(output,"DRAW %u %s mode=%x count=%d type=%x offset=%p program=%d array=%d elements=%d asize=%d esize=%d\n",
            ++draw_serial,name,mode,count,type,offset,program,array,elements,asize,esize);
    fflush(output);
    if(name[0]=='e' && (unsigned)array==stop_array && (!stop_program || (unsigned)program==stop_program))stop_serial=draw_serial;
}

static void wrapped_arrays(unsigned mode,int first,int count)
{
    draw_begin("arrays",mode,count,0,(void *)(intptr_t)first);
    draw_arrays(mode,first,count);finish_draw();
    fprintf(output,"DRAW %u complete\n",draw_serial);fflush(output);
}

static void wrapped_elements(unsigned mode,int count,unsigned type,const void *offset)
{
    draw_begin("elements",mode,count,type,offset);
    sr_gl_debug_snapshot();
    if(draw_serial==stop_serial)DebugBreak();
    char diagnostic_mask[8]={0};int program=0,mask_location=-1,previous_mask=0;
    if(GetEnvironmentVariableA("SR_GL_DIAGNOSTIC_MASK",diagnostic_mask,sizeof diagnostic_mask)){
        void (*integer)(unsigned,int *)=get("glGetIntegerv");integer(0x8b8d,&program);
        int (*location)(unsigned,const char *)=get("glGetUniformLocation");mask_location=location(program,"land_usemask");
        if(mask_location>=0){void (*uniform)(unsigned,int,int *)=get("glGetUniformiv");uniform(program,mask_location,&previous_mask);
            void (*set)(int,int)=get("glUniform1i");set(mask_location,diagnostic_mask[0]-'0');}
    }
    char clone[8]={0};int saved_array=0;unsigned cloned_array=0;
    if(GetEnvironmentVariableA("SR_GL_DIAGNOSTIC_CLONE_VBO",clone,sizeof clone)){
        void (*integer)(unsigned,int *)=get("glGetIntegerv");integer(0x8894,&saved_array);
        if(saved_array==2658){
            void (*gen)(int,unsigned *)=get("glGenBuffers");void (*bind)(unsigned,unsigned)=get("glBindBuffer");
            void (*read)(unsigned,ptrdiff_t,ptrdiff_t,void *)=get("glGetBufferSubData");
            void (*data)(unsigned,ptrdiff_t,const void *,unsigned)=get("glBufferData");
            void (*attribute)(unsigned,int,unsigned,unsigned char,int,const void *)=get("glVertexAttribPointer");
            unsigned char vertices[8664];read(0x8892,0,sizeof vertices,vertices);
            gen(1,&cloned_array);bind(0x8892,cloned_array);data(0x8892,sizeof vertices,vertices,0x88e8);
            attribute(0,3,0x1406,0,24,0);attribute(1,3,0x1406,0,24,(void *)12);
            fprintf(output,"DIAGNOSTIC cloned VBO %d -> %u\n",saved_array,cloned_array);fflush(output);
        }
    }
    draw_elements(mode,count,type,offset);finish_draw();
    if(cloned_array){
        void (*bind)(unsigned,unsigned)=get("glBindBuffer");void (*remove)(int,const unsigned *)=get("glDeleteBuffers");
        void (*attribute)(unsigned,int,unsigned,unsigned char,int,const void *)=get("glVertexAttribPointer");
        bind(0x8892,saved_array);attribute(0,3,0x1406,0,24,0);attribute(1,3,0x1406,0,24,(void *)12);remove(1,&cloned_array);
    }
    if(mask_location>=0){void (*set)(int,int)=get("glUniform1i");set(mask_location,previous_mask);}
    fprintf(output,"DRAW %u complete\n",draw_serial);fflush(output);
}

static void wrapped_multi(unsigned mode,const int *counts,unsigned type,const void *const *offsets,int count,const int *bases)
{
    draw_begin("multi",mode,count,type,offsets);
    fprintf(output,"MULTI pointers counts=%p offsets=%p bases=%p\n",counts,offsets,bases);
    if(count>0 && count<=16384){
        for(int i=0;i<count;i++)
            fprintf(output,"MULTI %d count=%d offset=%p base=%d\n",i,counts[i],offsets[i],bases?bases[i]:0);
    }
    fflush(output);
    sr_gl_debug_snapshot();
    if(draw_serial==stop_serial)DebugBreak();
    multi_draw(mode,counts,type,offsets,count,bases);finish_draw();
    fprintf(output,"DRAW %u complete\n",draw_serial);fflush(output);
}

static void wrapped_base(unsigned mode,int count,unsigned type,const void *offset,int base)
{
    draw_begin("base",mode,count,type,offset);
    fprintf(output,"BASE %u vertex=%d\n",draw_serial,base);fflush(output);
    if(draw_serial==stop_serial)DebugBreak();
    base_draw(mode,count,type,offset,base);finish_draw();
    fprintf(output,"DRAW %u complete\n",draw_serial);fflush(output);
}

__declspec(dllexport) void sr_gl_debug_wrap_base(void **slot)
{
    base_draw=get("glDrawElementsBaseVertex");
    if(output&&base_draw&&finish_draw){*slot=wrapped_base;fprintf(output,"Base-vertex diagnostic wrapper installed\n");fflush(output);}
}

__declspec(dllexport) void sr_gl_debug_wrap_draws(void **arrays_slot,void **elements_slot,void **multi_slot)
{
    draw_arrays=get("glDrawArrays");draw_elements=get("glDrawElements");
    multi_draw=get("glMultiDrawElementsBaseVertex");finish_draw=get("glFinish");
    if(output&&draw_arrays&&draw_elements&&multi_draw&&finish_draw){
        *arrays_slot=wrapped_arrays;*elements_slot=wrapped_elements;*multi_slot=wrapped_multi;
        fprintf(output,"Synchronous diagnostic draw wrappers installed\n");fflush(output);
    }
}

static void message(unsigned source,unsigned type,unsigned id,unsigned severity,
                    int length,const char *text,const void *user)
{
    (void)user;
    if (!output) return;
    fprintf(output,"source=%x type=%x id=%u severity=%x %.*s\n",
            source,type,id,severity,length,text);
    if (type==0x824c || severity==0x9146) {
        void *frames[24];USHORT count=CaptureStackBackTrace(0,24,frames,NULL);
        for (USHORT i=0;i<count;i++) fprintf(output,"  frame %u %p\n",i,frames[i]);
    }
    fflush(output);
}

__declspec(dllexport) void sr_gl_debug_start(get_proc_t get_proc,const char *path)
{
    get=get_proc;snprintf(capture_path,sizeof capture_path,"%s.elements.bin",path);
    snprintf(texture_path,sizeof texture_path,"%s.textures.bin",path);
    void (*enable)(unsigned)=get_proc("glEnable");
    void (*callback)(debug_callback_t,const void *)=get_proc("glDebugMessageCallback");
    void (*control)(unsigned,unsigned,unsigned,int,const unsigned *,unsigned char)=get_proc("glDebugMessageControl");
    output=fopen(path,"w");
    if (!output) return;
    fprintf(output,"GL diagnostic output: enable=%p callback=%p control=%p\n",enable,callback,control);
    fflush(output);
    if (!enable || !callback || !control) return;
    callback(message,NULL);
    control(0x1100,0x1100,0x1100,0,NULL,1);
    enable(0x92e0);
    enable(0x8242);
    fprintf(output,"GL diagnostic callback enabled\n");fflush(output);
}

__declspec(dllexport) void sr_gl_debug_textures(const uint32_t *records,unsigned count)
{
    if (!output) return;
    FILE *f=fopen(texture_path,"wb");if(f){fwrite(records,176,count,f);fclose(f);}
    for(unsigned i=0;i<count;i++){
        const uint32_t *r=records+44*i;unsigned id=r[31];
        if(id==54||id==186||id==187||id==806||id==807||id==878||id==879)
            fprintf(output,"TEXTURE slot=%u id=%u name=%.80s width=%u height=%u levels=%u format=%u internal=%u\n",i,id,(const char *)r,r[20],r[21],r[22],r[23],r[24]);
    }
    fflush(output);
}

__declspec(dllexport) void sr_gl_debug_snapshot(void)
{
    static int captured_array=-1,captured_elements=-1;
    if (!output || !get) return;
    void (*integer)(unsigned,int *)=get("glGetIntegerv");
    void (*buffer)(unsigned,unsigned,int *)=get("glGetBufferParameteriv");
    void (*attrib)(unsigned,unsigned,int *)=get("glGetVertexAttribiv");
    void (*pointer)(unsigned,unsigned,void **)=get("glGetVertexAttribPointerv");
    void (*readback)(unsigned,ptrdiff_t,ptrdiff_t,void *)=get("glGetBufferSubData");
    int program=0,array=0,elements=0,asize=0,esize=0;
    integer(0x8b8d,&program);integer(0x8894,&array);integer(0x8895,&elements);
    if(array)buffer(0x8892,0x8764,&asize);if(elements)buffer(0x8893,0x8764,&esize);
    fprintf(output,"SNAPSHOT program=%d array=%d elements=%d array-size=%d element-size=%d\n",program,array,elements,asize,esize);
    int framebuffer=0;integer(0x8ca6,&framebuffer);
    unsigned (*fbo_status)(unsigned)=get("glCheckFramebufferStatus");
    fprintf(output,"FRAMEBUFFER %d status=%x\n",framebuffer,fbo_status(0x8d40));
    if(framebuffer){
        void (*attachment)(unsigned,unsigned,unsigned,int *)=get("glGetFramebufferAttachmentParameteriv");
        unsigned attachments[]={0x8ce0,0x8ce1,0x8ce2,0x8ce3,0x8d00,0x8d20};
        for(unsigned i=0;i<6;i++){
            int kind=0,name=0,level=0,layer=0;
            attachment(0x8d40,attachments[i],0x8cd0,&kind);
            if(kind){attachment(0x8d40,attachments[i],0x8cd1,&name);if(kind==0x1702){attachment(0x8d40,attachments[i],0x8cd2,&level);attachment(0x8d40,attachments[i],0x8cd4,&layer);}}
            fprintf(output,"ATTACHMENT %x kind=%x name=%d level=%d layer=%d\n",attachments[i],kind,name,level,layer);
            if(kind==0x1702){
                void (*query)(unsigned,int,unsigned,int *)=get("glGetTextureLevelParameteriv");
                unsigned fields[]={0x1000,0x1001,0x1003,0x9106};int v[4]={0};
                if(query){for(int j=0;j<4;j++)query(name,level,fields[j],v+j);fprintf(output,"ATTACHMENT_TEXTURE %x width=%d height=%d format=%x samples=%d\n",attachments[i],v[0],v[1],v[2],v[3]);}
            }else if(kind==0x8d41){
                void (*query)(unsigned,unsigned,int *)=get("glGetNamedRenderbufferParameteriv");
                unsigned fields[]={0x8d42,0x8d43,0x8d44,0x8cab};int v[4]={0};
                if(query){for(int j=0;j<4;j++)query(name,fields[j],v+j);fprintf(output,"ATTACHMENT_RENDERBUFFER %x width=%d height=%d format=%x samples=%d\n",attachments[i],v[0],v[1],v[2],v[3]);}
            }
        }
    }
    void (*floating)(unsigned,float *)=get("glGetFloatv");
    unsigned char (*enabled)(unsigned)=get("glIsEnabled");
    unsigned float_states[]={0x0b21,0x0b11,0x8038,0x2a00,0x0b70,0x0c22};
    unsigned int_states[]={0x0ba2,0x0c10,0x0b40,0x0b74,0x0b72,0x0c23,0x0b45,0x0b46,0x0c01,0x0c02,0x85b5,0x9126,0x821e,0x8e28,0x80a9,0x80a8,0x935c,0x935d,0x0d33,0x8c8f};
    unsigned enable_states[]={0x0b71,0x0b44,0x0be2,0x0c11,0x8037,0x8c89,0x8642,0x8db9,0x809d,0x0b90,0x8f9d,0x864f,0x8d69};
    for(unsigned i=0;i<sizeof float_states/sizeof *float_states;i++){float v[4]={0};floating(float_states[i],v);fprintf(output,"STATE %x floats=%a,%a,%a,%a\n",float_states[i],(double)v[0],(double)v[1],(double)v[2],(double)v[3]);}
    for(unsigned i=0;i<sizeof int_states/sizeof *int_states;i++){int v[4]={0};integer(int_states[i],v);fprintf(output,"STATE %x ints=%d,%d,%d,%d\n",int_states[i],v[0],v[1],v[2],v[3]);}
    for(unsigned i=0;i<sizeof enable_states/sizeof *enable_states;i++)fprintf(output,"ENABLED %x=%u\n",enable_states[i],enabled(enable_states[i]));
    int (*location)(unsigned,const char *)=get("glGetUniformLocation");
    void (*uniform_int)(unsigned,int,int *)=get("glGetUniformiv");
    void (*uniform_float)(unsigned,int,float *)=get("glGetUniformfv");
    if(program>0 && program<4096 && !captured_programs[program]){
        void (*programiv)(unsigned,unsigned,int *)=get("glGetProgramiv");
        void (*attached)(unsigned,int,int *,unsigned *)=get("glGetAttachedShaders");
        void (*shaderiv)(unsigned,unsigned,int *)=get("glGetShaderiv");
        void (*source)(unsigned,int,int *,char *)=get("glGetShaderSource");
        unsigned shaders[16]={0};int count=0;attached(program,16,&count,shaders);
        for(int i=0;i<count;i++){
            int size=0,kind=0;shaderiv(shaders[i],0x8b88,&size);shaderiv(shaders[i],0x8b4f,&kind);
            if(size>0 && size<0x100000){char *data=VirtualAlloc(NULL,size,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);int used=0;
                if(data){source(shaders[i],size,&used,data);char path[2048];snprintf(path,sizeof path,"%s.program-%d.shader-%x.txt",capture_path,program,kind);
                    FILE *f=fopen(path,"wb");if(f){fwrite(data,1,used,f);fclose(f);}VirtualFree(data,0,MEM_RELEASE);}}
        }
        int size=0;programiv(program,0x8741,&size);
        if(size>0 && size<0x1000000){void *data=VirtualAlloc(NULL,size,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
            void (*binary)(unsigned,int,int *,unsigned *,void *)=get("glGetProgramBinary");unsigned format=0;int used=0;
            if(data&&binary){binary(program,size,&used,&format,data);char path[2048];snprintf(path,sizeof path,"%s.program-%d.bin",capture_path,program);
                FILE *f=fopen(path,"wb");if(f){fwrite(data,1,used,f);fclose(f);}VirtualFree(data,0,MEM_RELEASE);fprintf(output,"PROGRAM_BINARY %d format=%x size=%d\n",program,format,used);}}
        captured_programs[program]=1;
    }
    if(program>0){
        void (*programiv)(unsigned,unsigned,int *)=get("glGetProgramiv");
        void (*activeuniform)(unsigned,unsigned,int,int *,int *,unsigned *,char *)=get("glGetActiveUniform");
        int count=0;programiv(program,0x8b86,&count);
        for(int i=0;i<count;i++){
            char name[256]={0};int length=0,size=0,iv[16]={0};unsigned type=0;float fv[16]={0};
            activeuniform(program,i,sizeof name,&length,&size,&type,name);int loc=location(program,name);
            fprintf(output,"ACTIVE_UNIFORM %s type=%x size=%d location=%d",name,type,size,loc);
            if(loc>=0){
                if(type==0x1406 || (type>=0x8b50 && type<=0x8b52) || (type>=0x8b5a && type<=0x8b5c)){
                    uniform_float(program,loc,fv);for(int j=0;j<16;j++)fprintf(output," %a",(double)fv[j]);
                }else{uniform_int(program,loc,iv);for(int j=0;j<4;j++)fprintf(output," %d",iv[j]);}
            }
            fprintf(output,"\n");
        }
    }
    const char *int_names[]={"tex_mask","land_usemask","islandscape"};
    const char *matrix_names[]={"modelviewmatrix","modelviewprojectionmatrix"};
    for(unsigned i=0;i<3;i++){
        int loc=location(program,int_names[i]),value=0;
        if(loc>=0){uniform_int(program,loc,&value);fprintf(output,"UNIFORM %s location=%d value=%d\n",int_names[i],loc,value);}
    }
    for(unsigned i=0;i<2;i++){
        int loc=location(program,matrix_names[i]);float values[16]={0};
        if(loc>=0){uniform_float(program,loc,values);fprintf(output,"MATRIX %s",matrix_names[i]);
            for(unsigned j=0;j<16;j++)fprintf(output," %a",(double)values[j]);fprintf(output,"\n");}
    }
    void (*active)(unsigned)=get("glActiveTexture");
    void (*texlevel)(unsigned,int,unsigned,int *)=get("glGetTexLevelParameteriv");
    void (*texparam)(unsigned,unsigned,int *)=get("glGetTexParameteriv");
    int saved_active=0;integer(0x84e0,&saved_active);
    for(unsigned unit=0;unit<8;unit++){
        int id=0,width=0,height=0,format=0;active(0x84c0+unit);integer(0x8069,&id);
        if(id){texlevel(0x0de1,0,0x1000,&width);texlevel(0x0de1,0,0x1003,&format);}
        fprintf(output,"UNIT %u texture2d=%d width=%d internal=%x\n",unit,id,width,format);
        int sampler=0;integer(0x8919,&sampler);fprintf(output,"SAMPLER %u %d\n",unit,sampler);
        if(id){int v[4]={0};texparam(0x0de1,0x2801,v);texparam(0x0de1,0x2800,v+1);texparam(0x0de1,0x813c,v+2);texparam(0x0de1,0x813d,v+3);fprintf(output,"TEXPARAM %u min=%x mag=%x base=%d max=%d\n",unit,v[0],v[1],v[2],v[3]);}
        if(id){unsigned fields[]={0x2802,0x2803,0x884c,0x884d,0x8e46,0x8e42,0x8e43,0x8e44,0x8e45};for(int j=0;j<9;j++){int v[4]={0};texparam(0x0de1,fields[j],v);fprintf(output,"TEXFIELD %u %x %x,%x,%x,%x\n",unit,fields[j],v[0],v[1],v[2],v[3]);}}
        if(unit==0 && format==0x8234){
            texlevel(0x0de1,0,0x1001,&height);
            void (*texread)(unsigned,int,unsigned,unsigned,void *)=get("glGetTexImage");
            size_t bytes=(size_t)width*height*2;
            if(bytes && bytes<=0x1000000){void *data=VirtualAlloc(NULL,bytes,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
                if(data){texread(0x0de1,0,0x8d94,0x1403,data);char path[2048];snprintf(path,sizeof path,"%s.mask.bin",capture_path);
                    FILE *f=fopen(path,"wb");if(f){fwrite(data,1,bytes,f);fclose(f);}VirtualFree(data,0,MEM_RELEASE);}}
        }
    }
    active(saved_active);
    for(unsigned i=0;i<16;i++) {
        int enabled=0,binding=0,size=0,stride=0,type=0;void *offset=0;
        attrib(i,0x8622,&enabled);attrib(i,0x889f,&binding);attrib(i,0x8623,&size);
        attrib(i,0x8624,&stride);attrib(i,0x8625,&type);pointer(i,0x8645,&offset);
        fprintf(output,"ATTR %u enabled=%d binding=%d size=%d stride=%d type=%x offset=%p\n",i,enabled,binding,size,stride,type,offset);
        int normalized=0,integer_type=0,divisor=0;attrib(i,0x886a,&normalized);attrib(i,0x88fd,&integer_type);attrib(i,0x88fe,&divisor);
        fprintf(output,"ATTR_EXTRA %u normalized=%d integer=%d divisor=%d\n",i,normalized,integer_type,divisor);
        if(!enabled){float values[4]={0};void (*attribfloat)(unsigned,unsigned,float *)=get("glGetVertexAttribfv");attribfloat(i,0x8626,values);fprintf(output,"ATTR_CURRENT %u %a %a %a %a\n",i,(double)values[0],(double)values[1],(double)values[2],(double)values[3]);}
    }
    if(elements && elements!=captured_elements && esize>0 && esize<=0x8000000 && readback) {
        void *data=VirtualAlloc(NULL,esize,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
        if(data){readback(0x8893,0,esize,data);FILE *f=fopen(capture_path,"wb");if(f){fwrite(data,1,esize,f);fclose(f);}VirtualFree(data,0,MEM_RELEASE);captured_elements=elements;}
    }
    if(array && array!=captured_array && asize>0 && asize<=0x8000000 && readback) {
        void *data=VirtualAlloc(NULL,asize,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
        if(data){readback(0x8892,0,asize,data);char path[2048];snprintf(path,sizeof path,"%s.vertices.bin",capture_path);FILE *f=fopen(path,"wb");if(f){fwrite(data,1,asize,f);fclose(f);}VirtualFree(data,0,MEM_RELEASE);captured_array=array;}
    }
    fflush(output);
}
