"""Build typed GL-call wrappers and GDB recipes for original/rebuilt Practice.

Wrappers forward calls with the signatures from the checked-in Khronos/GLAD
header. The DLL is diagnostic only and is never linked into either game.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
import pefile
from repair_client_menu_actions import pinned_pe

PROJECT=Path(__file__).resolve().parents[1]

def entries():
    source=(PROJECT/'src/client/client_recovery_0e0000.c').read_text()
    declarations=(PROJECT/'src/client/shared_client.h').read_text()
    found={}
    for line in source.splitlines():
        name=re.search(r'a1\("(gl\w+)"\)',line)
        if not name:continue
        lhs=line.split('=',1)[0].strip()
        array=re.search(r'&(dword_140404A6C|flt_140384000)\[(\d+)\]',lhs)
        symbol=re.fullmatch(r'(?:qword|unk)_140[0-9A-Fa-f]+',lhs)
        if array:
            base=0x404a6c if array[1]=='dword_140404A6C' else 0x384000
            row=dict(name=name[1],rva=base+4*int(array[2]),expression='&'+array[0][1:])
        elif symbol:
            row=dict(name=name[1],rva=int(lhs.split('_')[1],16)-0x140000000,expression='&'+lhs)
            row['recomp_placeholder']=bool(re.search(r'extern _UNKNOWN '+re.escape(lhs)+r';',declarations))
        else:continue
        if name[1] in found and found[name[1]]['rva']!=row['rva']:raise ValueError('Ambiguous GL slot '+name[1])
        found[name[1]]=row
    found['glClipControl']=dict(name='glClipControl',rva=0x404a60,expression='&unk_140404A60')
    found['glMultiDrawElementsBaseVertex']=dict(name='glMultiDrawElementsBaseVertex',rva=0x404808,expression='&unk_140404808')
    inventory=set(re.findall(r'a1\(\s*"(gl\w+)"\s*\)',source))
    if inventory!=set(found):raise ValueError('Unrecorded GL loader entries: '+str(inventory-set(found)))
    return sorted(found.values(),key=lambda r:r['rva'])

def main():
    p=argparse.ArgumentParser();p.add_argument('--output',type=Path,default=PROJECT/'reports/gl-differential-20261005')
    p.add_argument('--recomp',type=Path,default=PROJECT.parent/'subrosa-recomp.exe');p.add_argument('--frames',type=int,default=2)
    p.add_argument('--capture-frame',action='store_true',help='read each recorded back buffer into a BMP before its swap')
    p.add_argument('--inspect-resources',action='store_true',help='read texture sizes and bounded image data at world entry without changing bindings')
    p.add_argument('--inspect-errors',action='store_true',help='attribute driver errors to each forwarded GL call')
    p.add_argument('--capture-passes',action='store_true',help='capture outgoing framebuffer attachments at pass boundaries')
    args=p.parse_args();out=args.output.resolve();out.mkdir(parents=True,exist_ok=True)
    original=pinned_pe();rebuilt=pefile.PE(str(args.recomp.resolve()),fast_load=False)
    header=PROJECT/'third_party/suitium/Modules/glad/include/glad/glad.h';h=header.read_text()
    types={m[2]:(m[1].strip(),m[3]) for m in re.finditer(r'typedef\s+([^;\n]+?)\s*\(APIENTRYP\s+(PFNGL\w+PROC)\)\((.*?)\);',h)}
    types['PFNGLCLIPCONTROLPROC']=('void','GLenum origin, GLenum depth')
    rows=entries();missing=[r['name'] for r in rows if 'PFN'+r['name'].upper()+'PROC' not in types]
    if missing:raise ValueError('Missing authoritative GL signatures: '+str(missing))
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <xmmintrin.h>
#include "glad/glad.h"
static FILE *log_file;static unsigned frame,frame_limit,serial;static char folder[2048];
static void **slots[512];static void *saved[512];static unsigned slot_count;static int recording;
static void assign_slot(void **slot,void *value){DWORD previous,ignored;if(!VirtualProtect(slot,sizeof(void*),PAGE_READWRITE,&previous))abort();*slot=value;VirtualProtect(slot,sizeof(void*),previous,&ignored);}
static uint32_t bits(float f){uint32_t u;memcpy(&u,&f,4);return u;}
static uint64_t dbits(double f){uint64_t u;memcpy(&u,&f,8);return u;}
static void begin(const char *name,void *caller){if(recording)fprintf(log_file,"{\"frame\":%u,\"serial\":%u,\"call\":\"%s\",\"caller\":\"%p\",\"mxcsr\":%u,\"args\":[",frame,serial++,name,caller,_mm_getcsr());}
static void number(uint64_t n,int comma){if(recording)fprintf(log_file,"%s%llu",comma?",":"",(unsigned long long)n);}
static void pointer(const void *p,int comma){if(recording)fprintf(log_file,"%s\"pointer\"",comma?",":"");}
static void payload(const void *p,size_t n){
 if(!recording||!p||!n||n>128*1024*1024)return;
 uint64_t hash=14695981039346656037ULL;const unsigned char *b=p;for(size_t i=0;i<n;i++){hash^=b[i];hash*=1099511628211ULL;}
 fprintf(log_file,"],\"payload_bytes\":%llu,\"payload_hash\":\"%016llx\",\"payload_bits\":[",(unsigned long long)n,(unsigned long long)hash);
 if(n<=64)for(size_t i=0;i+4<=n;i+=4){uint32_t u;memcpy(&u,b+i,4);number(u,i!=0);}
 if(frame==0&&n<=16*1024*1024){char path[2048];snprintf(path,sizeof path,"%s/%u.bin",folder,serial-1);FILE *f=fopen(path,"wb");if(f){fwrite(p,1,n,f);fclose(f);}}
}
static void end(void){if(recording){fputs("]}\n",log_file);if((serial&255)==0)fflush(log_file);}}
static void inspect_resources(void);
static void inspect_draw(void);
static void inspect_pass(void);
'''
    wrappers=[]
    for i,row in enumerate(rows):
        name=row['name'];ret,params=types['PFN'+name.upper()+'PROC']
        parts=[] if params.strip()=='void' else [v.strip() for v in params.split(',')]
        names=[re.search(r'(\w+)\s*$',v)[1] for v in parts]
        row['signature']=ret+' ('+params+')'
        c+=f'static {ret} (APIENTRY *fn_{i})({params});\nstatic {ret} APIENTRY wrap_{i}({params}){{\n'
        c+=f'begin("{name}",__builtin_return_address(0));\n'
        for j,(part,n) in enumerate(zip(parts,names)):
            if '*' in part or 'GLDEBUGPROC' in part or 'GLsync' in part:
                # Vertex/index pointers are offsets while their buffers are bound.
                offset=name in ('glVertexAttribPointer','glVertexAttribIPointer','glVertexAttribLPointer','glDrawElements','glDrawElementsBaseVertex')
                c+=(f'number((uintptr_t){n},{j!=0:d});' if offset else f'pointer((const void*){n},{j!=0:d});')+'\n'
            elif re.search(r'\b(GLfloat|GLclampf)\b',part):c+=f'number(bits({n}),{j!=0:d});\n'
            elif re.search(r'\b(GLdouble|GLclampd)\b',part):c+=f'number(dbits({n}),{j!=0:d});\n'
            else:c+=f'number((uint64_t){n},{j!=0:d});\n'
        uniform=re.fullmatch(r'glUniform([1-4]|Matrix[2-4](?:x[2-4])?)([fdiu])v',name)
        if uniform:
            shape=uniform[1];dimensions=list(map(int,re.findall(r'\d',shape)));width=dimensions[0] if 'Matrix' not in shape else dimensions[0]*(dimensions[1] if len(dimensions)>1 else dimensions[0])
            c+=f'if(count>0&&count<=65536)payload(value,(size_t)count*{width}*sizeof(*value));\n'
        if name in ('glBufferData','glBufferSubData'):
            c+='if(size>0)payload(data,(size_t)size);\n'
        attribute=re.fullmatch(r'glVertexAttrib([1-4])([fdis])v',name)
        if attribute:
            c+=f'payload(v,{attribute[1]}*sizeof(*v));\n'
        c+='end();\n'
        if (args.inspect_resources or args.capture_passes) and name=='glBindFramebuffer':c+='if(target==0x8d40)inspect_pass();\n'
        if (args.inspect_resources or args.capture_passes) and name=='glFramebufferTexture2D':c+='inspect_pass();\n'
        c+=(('return ' if ret!='void' else '')+f'fn_{i}('+','.join(names)+');')
        if args.inspect_errors or (args.inspect_resources and (name.startswith('glDraw') or name=='glMultiDrawElementsBaseVertex')):
            c+='inspect_draw();'
        if (args.inspect_resources or args.capture_passes) and name=='glUseProgram':c+='if(program==0)inspect_pass();'
        c+='}\n'
        wrappers.append('wrap_'+str(i))
    c+=r'''
static void inspect_resources(void){
 typedef void *(*proc_t)(const char *);
 proc_t get=(proc_t)GetProcAddress(GetModuleHandleA("SDL2.dll"),"SDL_GL_GetProcAddress");
 if(!get)return;
 void (*level)(unsigned,int,unsigned,int*)=get("glGetTextureLevelParameteriv");
 void (*read)(unsigned,int,unsigned,unsigned,int,void*)=get("glGetTextureImage");
 unsigned (*error)(void)=get("glGetError");
 if(!level||!read||!error)return;
 char path[2048];snprintf(path,sizeof path,"%s/resources.jsonl",folder);FILE *f=fopen(path,"w");if(!f)return;
 unsigned textures[]={1,2,3,8,9,14,15,42,2054};
 while(error()){}
 for(unsigned i=0;i<sizeof textures/sizeof *textures;i++){
  int w=0,h=0,d=0,format=0;unsigned id=textures[i];
  level(id,0,0x1000,&w);level(id,0,0x1001,&h);level(id,0,0x8071,&d);level(id,0,0x1003,&format);
  unsigned e=error();size_t n=(size_t)w*h*(d?d:1)*4;
  fprintf(f,"{\"texture\":%u,\"width\":%d,\"height\":%d,\"depth\":%d,\"format\":%d,\"error\":%u",id,w,h,d,format,e);
  if(!e&&n&&n<=16*1024*1024){void *data=malloc(n);if(data){
   read(id,0,0x1908,0x1401,(int)n,data);unsigned read_error=error();
   unsigned char *p=data;size_t nonzero=0;for(size_t j=0;j<n;j++)if(p[j])nonzero++;
   fprintf(f,",\"read_error\":%u,\"nonzero_bytes\":%llu",read_error,(unsigned long long)nonzero);
   if(!read_error){snprintf(path,sizeof path,"%s/texture-%u.rgba",folder,id);FILE *b=fopen(path,"wb");if(b){fwrite(data,1,n,b);fclose(b);}}free(data);
  }}fputs("}\n",f);
 }
 void (*buffer_size)(unsigned,unsigned,int*)=get("glGetNamedBufferParameteriv");
 void (*buffer_read)(unsigned,intptr_t,intptr_t,void*)=get("glGetNamedBufferSubData");
 if(buffer_size&&buffer_read){unsigned buffers[]={1,2,3,2606,2608,2796};
  for(unsigned i=0;i<sizeof buffers/sizeof *buffers;i++){
   int n=0;unsigned id=buffers[i];buffer_size(id,0x8764,&n);unsigned e=error();
   fprintf(f,"{\"buffer\":%u,\"bytes\":%d,\"error\":%u}\n",id,n,e);
   if(!e&&n>0&&n<=64*1024*1024){void *data=malloc(n);if(data){buffer_read(id,0,n,data);
    snprintf(path,sizeof path,"%s/buffer-%u.bin",folder,id);FILE *b=fopen(path,"wb");if(b){fwrite(data,1,n,b);fclose(b);}free(data);}}
  }
 }fclose(f);
}
static void inspect_draw(void){
 if(!recording)return;
 typedef void *(*proc_t)(const char *);static unsigned (*error)(void);static FILE *f;
 if(!error){proc_t get=(proc_t)GetProcAddress(GetModuleHandleA("SDL2.dll"),"SDL_GL_GetProcAddress");if(!get)return;error=get("glGetError");
  char path[2048];snprintf(path,sizeof path,"%s/draw-errors.jsonl",folder);f=fopen(path,"w");}
 if(!error||!f)return;unsigned e;while((e=error())){fprintf(f,"{\"frame\":%u,\"serial\":%u,\"error\":%u}\n",frame,serial-1,e);fflush(f);}
}
static void inspect_pass(void){
 if(!recording)return;
 typedef void *(*proc_t)(const char *);proc_t get=(proc_t)GetProcAddress(GetModuleHandleA("SDL2.dll"),"SDL_GL_GetProcAddress");if(!get)return;
 void (*integer)(unsigned,int*)=get("glGetIntegerv");void (*attachment)(unsigned,unsigned,unsigned,int*)=get("glGetFramebufferAttachmentParameteriv");
 void (*read)(unsigned,int,unsigned,unsigned,int,void*)=get("glGetTextureImage");void (*level)(unsigned,int,unsigned,int*)=get("glGetTextureLevelParameteriv");
 int fb=0,id=0,w=0,h=0,d=0;integer(0x8ca6,&fb);if(!fb)return;attachment(0x8d40,0x8ce0,0x8cd1,&id);if(!id)return;
 level(id,0,0x1000,&w);level(id,0,0x1001,&h);size_t n=(size_t)w*h*4;
 level(id,0,0x8071,&d);size_t capacity=n*(d>6?d:6);
 if(w<=0||h<=0||capacity>192*1024*1024)return;void *p=calloc(1,capacity);if(!p)return;read(id,0,0x1908,0x1401,capacity,p);
 char path[2048];snprintf(path,sizeof path,"%s/pass-%u-fb-%d-%dx%d.rgba",folder,serial-1,fb,w,h);FILE *f=fopen(path,"wb");if(f){fwrite(p,1,n,f);fclose(f);}free(p);
}
'''
    if args.capture_frame:
        ids={row['name']:'fn_'+str(i) for i,row in enumerate(rows)}
        capture=r'''
static void capture_frame(void){
 int viewport[4]={0},fb=0,rb=0,pack=0;
 GET(0x0ba2,viewport);GET(0x8caa,&fb);GET(0x0c02,&rb);GET(0x0d02,&pack);
 int width=viewport[2],height=viewport[3];if(width<=0||height<=0||width>8192||height>8192)return;
 size_t bytes=(size_t)width*height*4;void *pixels=malloc(bytes);if(!pixels)return;
 BIND(0x8ca8,0);READ(0x405);PACK(0x0d02,0);PIXELS(0,0,width,height,0x80e1,0x1401,pixels);
 PACK(0x0d02,pack);BIND(0x8ca8,fb);READ(rb);
 BITMAPFILEHEADER file={0};BITMAPINFOHEADER info={0};file.bfType=0x4d42;
 file.bfOffBits=sizeof file+sizeof info;file.bfSize=file.bfOffBits+(DWORD)bytes;
 info.biSize=sizeof info;info.biWidth=width;info.biHeight=height;info.biPlanes=1;info.biBitCount=32;info.biSizeImage=(DWORD)bytes;
 char path[2048];snprintf(path,sizeof path,"%s/frame-%u.bmp",folder,frame);FILE *f=fopen(path,"wb");
 if(f){fwrite(&file,sizeof file,1,f);fwrite(&info,sizeof info,1,f);fwrite(pixels,bytes,1,f);fclose(f);}free(pixels);
}
'''
        for macro,name in [('GET','glGetIntegerv'),('BIND','glBindFramebuffer'),('READ','glReadBuffer'),('PACK','glPixelStorei'),('PIXELS','glReadPixels')]:
            capture=re.sub(r'\b'+macro+r'(?=\()',ids[name],capture)
        c+=capture
    c+='static void (*real_swap)(void*);static void traced_swap(void *window){\n'
    if args.capture_frame:c+='if(recording)capture_frame();\n'
    c+='if(recording){fprintf(log_file,"{\\\"frame\\\":%u,\\\"call\\\":\\\"SDL_GL_SwapWindow\\\",\\\"args\\\":[]}\\n",frame);fflush(log_file);if(++frame>=frame_limit){recording=0;for(unsigned i=0;i<slot_count;i++)assign_slot(slots[i],saved[i]);}}real_swap(window);}\n'
    # Use literal JSON syntax, not extra escaping in the generated C string.
    c=c.replace('\\\\\\"','\\"')
    c+='__declspec(dllexport) int sr_trace_start(void ***addresses,const char *path,unsigned frames){\n'
    c+='if(recording)return 0;slot_count=frame=serial=0;snprintf(folder,sizeof folder,"%s",path);char name[2048];snprintf(name,sizeof name,"%s/calls.jsonl",path);log_file=fopen(name,"w");if(!log_file)return 0;frame_limit=frames;\n'
    for i,row in enumerate(rows):
        c+=f'if(addresses[{i}]&&*addresses[{i}]){{fn_{i}=(void*)*addresses[{i}];slots[slot_count]=addresses[{i}];saved[slot_count++]=*addresses[{i}];assign_slot(addresses[{i}],wrap_{i});}}\n'
    c+=f'real_swap=(void*)*addresses[{len(rows)}];slots[slot_count]=addresses[{len(rows)}];saved[slot_count++]=*addresses[{len(rows)}];assign_slot(addresses[{len(rows)}],traced_swap);recording=1;'
    if args.inspect_resources:c+='inspect_resources();'
    c+='return slot_count;}\n'
    for helper in ['begin','end','pointer','number','payload','bits','dbits']:
        c=re.sub(r'\b'+helper+r'(?=\()', 'sr_trace_'+helper, c)
    src=out/'tracer.c';src.write_text(c);dll=out/'gl-tracer.dll'
    run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-shared','-O0','-msse2','-I',str(header.parent.parent),str(src),'-o',str(dll)],capture_output=True,text=True)
    (out/'build.txt').write_text(run.stdout+run.stderr);run.check_returncode()
    def swap_rva(pe):
        pe.parse_data_directories()
        return next(s.address-pe.OPTIONAL_HEADER.ImageBase for entry in pe.DIRECTORY_ENTRY_IMPORT for s in entry.imports if s.name==b'SDL_GL_SwapWindow')
    for reference,pe in [(True,original),(False,rebuilt)]:
        tag='original' if reference else 'recomp';dest=out/tag;dest.mkdir(exist_ok=True)
        base='$sr_reference_base' if reference else '$trace_image_base'
        cmds=[] if reference else ['set $trace_image_base = ((void *(*)(const char *))GetModuleHandleA)(0)']
        cmds+=['set $trace_slots = ((void *(*)(void *,unsigned long long,unsigned int,unsigned int))VirtualAlloc)(0,8192,12288,4)']
        for i,row in enumerate(rows):
            expr='(void *)('+base+'+'+str(row['rva'])+')' if reference else '0' if row.get('recomp_placeholder') else '(void *)('+row['expression']+')'
            cmds.append(f'set ((void**)$trace_slots)[{i}] = {expr}')
        cmds.append(f'set ((void**)$trace_slots)[{len(rows)}] = (void *)({base}+{swap_rva(pe)})')
        cmds+=['set $trace_dll = ((void *(*)(const char *))LoadLibraryA)("'+dll.as_posix()+'")',
               'set $trace_start = ((void *(*)(void *,const char *))GetProcAddress)($trace_dll,"sr_trace_start")',
               'call ((int (*)(void *,const char *,unsigned))$trace_start)($trace_slots,"'+dest.as_posix()+'",'+str(args.frames)+')']
        bp='*($sr_reference_base+0x11fd00)' if reference else 'sub_14011FD00'
        gdb='break '+bp+'\ncommands\nsilent\ndisable $_hit_bpnum\n'+'\n'.join(cmds)+'\ncontinue\nend\n'
        (out/(tag+'.gdb')).write_text(gdb)
    (out/'manifest.json').write_text(json.dumps({'reference_sha256':hashlib.sha256((PROJECT.parent/'subrosa.exe').read_bytes()).hexdigest(),
        'header_sha256':hashlib.sha256(header.read_bytes()).hexdigest(),'entries':rows,'scope':'loaded GL function slots; typed forwarding; uniform/buffer input bits; first requested Practice frames; excludes internal driver calls and startup shader creation'},indent=2)+'\n')
    print(f'{len(rows)} typed GL wrappers built; recipes: {out}')

if __name__=='__main__':main()
