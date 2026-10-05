"""Restore native audio startup imports, spec objects and callback addresses."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140069630)'
BODY=b'''typedef struct {
 int freq; unsigned short format; unsigned char channels,silence;
 unsigned short samples,padding; unsigned int size;
 void (*callback)(void *,unsigned char *,int); void *userdata;
} sr_startup_audio_spec;
_Static_assert(sizeof(sr_startup_audio_spec)==32,"SDL audio spec");
extern int sr_audio_count(int) __asm__("SDL_GetNumAudioDevices");
extern const char *sr_audio_name(int,int) __asm__("SDL_GetAudioDeviceName");
extern void *sr_audio_semaphore(unsigned) __asm__("SDL_CreateSemaphore");
extern void *sr_audio_thread(void *,const char *,void *,void *,void *) __asm__("SDL_CreateThread");
extern unsigned sr_audio_open(const char *,int,const sr_startup_audio_spec *,sr_startup_audio_spec *,int) __asm__("SDL_OpenAudioDevice");
extern void sr_audio_pause(unsigned,int) __asm__("SDL_PauseAudioDevice");
'''
TAIL=b'''  {
    void *semaphore=sr_audio_semaphore(0);
    void *thread;
    sr_startup_audio_spec desired,obtained;
    __builtin_memcpy(&dword_140404A6C[1],&semaphore,8);
    thread=sr_audio_thread((void *)(uintptr_t)sub_14006BB10,"cs_audio_updatethread",NULL,
       (void *)(uintptr_t)sub_14023D25C,(void *)(uintptr_t)sub_14023D33C);
    __builtin_memcpy(&dword_140404A6C[3],&thread,8);
    memset(&desired,0,32);
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_140069400;
    v12=sr_audio_open(NULL,0,&desired,&obtained,0);
    dword_140404A6C[8]=obtained.samples;
    if(obtained.channels!=2 || obtained.samples!=1024)v12=0;
    dword_140404A6C[7]=v12;
    memset(&desired,0,32);memset(&obtained,0,32);
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_14006A380;
    v13=sr_audio_open(sr_audio_name(0,1),1,&desired,&obtained,0);
  }
  dword_140404A6C[5] = 1124856083;
  *(_OWORD *)&dword_140404A6C[18198549] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[18198553] = xmmword_140278D30;
  dword_140404A6C[18198557] = 1065353216;
  dword_140404A6C[196619] = v13;
  if(!dword_140404A6C[7])return 0;
  sr_audio_pause(dword_140404A6C[7],0);
  sr_audio_pause(dword_140404A6C[196619],0);
  return 1;
}
'''

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Audio startup requires pinned original')
    pe=pefile.PE(str(binary));imports={i.address:i.name for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports}
    for rva,name in [(0x198e7b,'SDL_GetNumAudioDevices'),(0x198e81,'SDL_GetAudioDeviceName'),(0x198e5d,'SDL_CreateSemaphore'),(0x198e6f,'SDL_CreateThread'),(0x198e87,'SDL_OpenAudioDevice'),(0x198e8d,'SDL_PauseAudioDevice')]:
        code=pe.get_data(rva,6);target=0x140000000+rva+6+int.from_bytes(code[2:],'little',signed=True)
        if code[:2]!=b'\xff\x25' or imports.get(target)!=name.encode():raise ValueError('Audio import changed')
    if pe.get_data(0x273830,22)!=b'cs_audio_updatethread\0':raise ValueError('Audio thread name changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    if region.count(b'sub_140198E7B()')!=2 or region.count(b'sub_140198E81()')!=3:raise ValueError('Audio enumeration calls changed')
    region=region.replace(b'sub_140198E7B()',b'sr_audio_count(0)',1).replace(b'sub_140198E7B()',b'sr_audio_count(1)',1)
    region=region.replace(b'sub_140198E81()',b'sr_audio_name(v1,0)',1).replace(b'sub_140198E81()',b'sr_audio_name(v7,1)',1)
    start=region.index(b'  *(_QWORD *)&dword_140404A6C[1] = sub_140198E5D();')
    end=region.index(b'// 1400697ED:',start)
    region=region[:start]+TAIL+region[end:]
    source=source[:a]+BODY+region+source[b:]
    # 0x69a00's return is unused. Native cookie check has no behavior in C.
    a=source.index(b'//----- (0000000140069A00)');b=source.index(b'//----- (',a+10);region=source[a:b]
    cookie=b'return sub_1401F8B20((unsigned __int64)&v35 ^ v40);'
    if region.count(cookie)!=1:raise ValueError('HRTF epilogue changed')
    region=region.replace(b'__int64 sub_140069A00()',b'void sub_140069A00()').replace(cookie,b'return;')
    source=source[:a]+region+source[b:]
    source=source.replace(b'__int64 sub_140069A00();',b'void sub_140069A00();')
    source,extra=repair_voice_queue_exit(source,pe)
    return source,{'recovered_audio_startup_calls':12,'recovered_audio_spec_bytes':64,'removed_hrtf_cookie_artifact':1,**extra}

def repair_voice_queue_exit(source,pe=None):
    """The voice queue has no result; its callers use only its state changes."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned original')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x9e569,'488b8c24300f00004833cce8a7a515004881c4500f0000415f415d5bc3')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native voice exit changed')
    marker=b'//----- (000000014009E210)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)v24 ^ v26);'
    if body.count(old)!=3:raise ValueError('Voice queue exits changed')
    body=body.replace(old,b'return; /* original state-only voice queue exit */')
    source=source[:a]+body+source[b:];sig=b'__int64            sub_14009E210('
    if source.count(sig)!=2:raise ValueError('Voice queue signature changed')
    return source.replace(sig,b'void               sub_14009E210('),dict(recovered_voice_queue_void_exits=3)
