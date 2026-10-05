"""Recover FFT analysis scratch bindings and the native void exit."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001401ED2D0)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Audio window requires pinned vanilla client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x1ed728,'b8000f0000482be0488d442450'),
                  (0x1ed741,'b8000f0000482be0488d442450'),
                  (0x1ed757,'b8c0030000482be0488d442450'),
                  (0x1ed770,'b8c0030000482be0488d442450'),
                  (0x1f0301,'488b8df00800004833cde810880000')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native audio window changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in ((b'v135 = &v35;',b'v135 = (char *)v12;'),
                    (b'v39 = (CGlobalUtils *)&v34;',b'v39 = (CGlobalUtils *)v13;'),
                    (b'v82 = &v33;',b'v82 = (char *)v14;'),
                    (b'v136 = &v32;',b'v136 = (char *)v15;'),
                    (b'return sub_1401F8B20((unsigned __int64)&i ^ v162);',b'return; /* native void analysis updater */')):
        expected=2 if old.startswith(b'return ') else 1
        if body.count(old)!=expected:raise ValueError('Audio window expression changed '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_1401ED2D0('
    if source.count(sig)!=2:raise ValueError('Audio window signature changed')
    return source.replace(sig,b'void               sub_1401ED2D0('),{
        'recovered_audio_window_scratch_pointers':4,
        'recovered_audio_window_void_result':2,
    }
