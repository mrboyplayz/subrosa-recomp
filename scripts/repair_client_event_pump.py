"""Recover native SDL event union, window operation arguments and void return."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (000000014007CC30)'
PREFIX=b'''extern int sr_event_poll(void *) __asm__("SDL_PollEvent");
extern int sr_event_fullscreen(void *, unsigned int) __asm__("SDL_SetWindowFullscreen");
extern void sr_event_restore(void *) __asm__("SDL_RestoreWindow");
extern void sr_event_size(void *, int *, int *) __asm__("SDL_GetWindowSize");
extern void sr_event_set_size(void *, int, int) __asm__("SDL_SetWindowSize");
'''


def repair_mouse_arguments(source):
    """Restore SDL output pointers and the keyboard's null length pointer."""
    from repair_client_menu_actions import pinned_pe,check,region
    pe=pinned_pe()
    rows=[(0x7ca90,0x7ca99,'33c9e859c41100',b'(__int128 *)sub_140198EF9()',b'(__int128 *)((const unsigned char *(*)(int *))sub_140198EF9)(NULL)'),
          (0x7cb30,0x7cb39,'488d542438488d4c2430e8b7c31100',b'sub_140198EFF()',b'((unsigned (*)(int *, int *))sub_140198EFF)(&v7, &v8)'),
          (0x7cbc0,0x7cbc9,'488d542438488d4c2430e82dc31100',b'sub_140198F05()',b'((unsigned (*)(int *, int *))sub_140198F05)(&v5, &v6)')]
    for fn,rva,data,old,new in rows:
        check(pe,rva,data);a,b,body=region(source,fn)
        if body.count(old)!=1:raise ValueError('SDL input argument inventory changed')
        source=source[:a]+body.replace(old,new)+source[b:]
    return source,{'recovered_sdl_input_arguments':3}


def repair_live_mouse_arguments(source):
    from repair_client_menu_actions import pinned_pe,check,region
    pe=pinned_pe()
    specs=[(0x9f050,[(0x9f0dd,'488d55c8'),(0x9f0e8,'488d4dc4')],['&v76, (int *)&v77']),
           (0x9fe00,[(0xa0736,'488d542454'),(0xa0742,'488d4c2450'),(0xa0832,'488d542450488d4c2454')],['&v75, &v76','&v76, &v75']),
           (0xfcff0,[(0xfd201,'488d542438488d4c2430')],['&v10, &v11'])]
    for fn,pins,args in specs:
        for rva,data in pins:check(pe,rva,data)
        a,b,body=region(source,fn)
        if body.count(b'sub_140198F05()')!=len(args):raise ValueError('Live relative mouse inventory changed')
        for values in args:body=body.replace(b'sub_140198F05()',('sr_menu_relative_mouse('+values+')').encode(),1)
        source=source[:a]+body+source[b:]
    return source,{'recovered_live_mouse_arguments':4}


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Event pump requires pinned client')
    pe=pefile.PE(str(binary))
    imports={x.address:x.name for desc in pe.DIRECTORY_ENTRY_IMPORT for x in desc.imports}
    for rva,name in ((0x198f8f,b'SDL_PollEvent'),(0x198ec9,b'SDL_SetWindowSize'),(0x198ecf,b'SDL_GetWindowSize'),(0x198ed5,b'SDL_RestoreWindow'),(0x198edb,b'SDL_SetWindowFullscreen')):
        code=pe.get_data(rva,6);target=0x140000000+rva+6+int.from_bytes(code[2:],'little',signed=True)
        if code[:2]!=b'\xff\x25' or imports.get(target)!=name:raise ValueError('Event SDL import changed')
    for rva,h in ((0x7cc4b,'488d4c2428'),(0x7ccda,'488b0de77af420'),
                  (0x7cdf0,'488d15e179f420'),(0x7ced3,'4c8d442424488d542420'),
                  (0x7cf46,'488d4c2428'),(0x7cf78,'488b4c24604833cce89bbb1700'),
                  (0x968c8,'e86363feff833dcc91e24300')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native event object or argument changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    old=b'  dword_140404A6C[468760166] ='
    body=body.replace(old,b'  _Alignas(8) unsigned char sr_event[56];\n  void *sr_event_window;\n  memcpy(&sr_event_window, &dword_140404A6C[137297751], 8);\n'+old,1)
    old=b'while ( (unsigned int)sub_140198F8F() )\n  {'
    new=b'''while ( sr_event_poll(sr_event) )
  {
    memcpy(&v11, sr_event, 4);
    v12 = (char)sr_event[12];
    memcpy(&v13, sr_event + 16, 4);
    memcpy(&v14, sr_event + 20, 4);
    memcpy(&v15, sr_event + 24, 2);'''
    if body.count(old)!=1:raise ValueError('Event poll inventory changed')
    body=body.replace(old,new)
    changes=((b'sub_140198EDB();',b'sr_event_fullscreen(sr_event_window, dword_140404A6C[137297766] ? 0x1001u : 0);',1),
             (b'sub_140198EDB();',b'sr_event_fullscreen(sr_event_window, 0x1001u);',1),
             (b'sub_140198ED5();',b'sr_event_restore(sr_event_window);',1),
             (b'sub_140198ECF();',b'sr_event_size(sr_event_window, (int *)&dword_140404A6C[137297755], (int *)&dword_140404A6C[137297756]);',1),
             (b'sub_140198ECF();',b'sr_event_size(sr_event_window, &v9, &v10);',1),
             (b'sub_140198EC9();',b'sr_event_set_size(sr_event_window, v9, v10);',1),
             (b'return sub_1401F8B20((unsigned __int64)&v8 ^ v16);',b'return;',1))
    for old,new,count in changes:
        if body.count(old)<count:raise ValueError('Event operation inventory changed '+repr(old))
        body=body.replace(old,new,count)
    if any(x in body for x in (b'sub_140198EDB();',b'sub_140198ECF();')):raise ValueError('Event operation remains unrecovered')
    source=source[:a]+PREFIX+body+source[b:]
    sig=b'__int64 input_poll_events_candidate()'
    if source.count(sig)!=2:raise ValueError('Event pump signature changed')
    source,counts=repair_mouse_arguments(source.replace(sig,b'void input_poll_events_candidate()'))
    source,live_counts=repair_live_mouse_arguments(source)
    return source,{**counts,**live_counts,'recovered_sdl_event_object':1,'recovered_sdl_event_calls':7,'recovered_event_pump_void_return':1}
