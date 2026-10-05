"""Recover master-server connection results and contiguous network objects."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001400A3F30)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Master connection requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0xa41da,'33c0'),(0xa43fb,'418d4201e9d8fdffff'),
                  (0xa436c,'0f8468feffff'),(0xa4020,'41b810000000488d9560010000'),
                  (0xa40a9,'0f1149f04883ea0175ad488b00'),
                  (0xa4276,'4c8d442430'),(0xa4346,'4c8d442430')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native master-connect ABI changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    old=b'return sub_1401F8B20((unsigned __int64)&v37 ^ v48);'
    if body.count(old)!=3:raise ValueError('Master connection return inventory changed')
    body=body.replace(old,b'return 0;',2).replace(old,b'return sr_connected;')
    body=body.replace(b'  int v0; // edi',b'  unsigned int sr_connected = 0;\n  int v0; // edi',1)
    body=body.replace(b'if ( dword_140404A6C[280649181] != -1 )\n        {',b'if ( dword_140404A6C[280649181] != -1 )\n        {\n          sr_connected = 1;',1)
    if body.count(b'sr_connected = 1;')!=1:raise ValueError('Master success marker changed')
    body,n=re.subn(rb'  _WORD name\[2\];([^\r\n]*)\r?\n  int name_4;[^\r\n]*',rb'  _Alignas(4) _WORD name[8];\1',body)
    if n!=1 or body.count(b'name_4 =')!=1:raise ValueError('Master sockaddr storage changed')
    body=body.replace(b'name_4 =',b'*(_DWORD *)&name[2] =')
    start=body.index(b'        v4 = writefds;');end=body.index(b'        *(_QWORD *)v4 = *(_QWORD *)v5;',start)
    end+=len(b'        *(_QWORD *)v4 = *(_QWORD *)v5;')
    body=body[:start]+b'        LODWORD(readfds[0]) = 1;\n        memcpy(writefds, readfds, 520); /* native MOVUPS copy of Win64 fd_set */'+body[end:]
    if body.count(b'(unsigned int)&v38')!=2:raise ValueError('Master scanner argument inventory changed')
    body=body.replace(b'(unsigned int)&v38',b'(uintptr_t)&v38')
    return source[:a]+body+source[b:],{'recovered_master_connect_returns':3,'recovered_master_sockaddr_object':1,'recovered_master_fdset_copy':1,'recovered_master_scan_pointers':2}
