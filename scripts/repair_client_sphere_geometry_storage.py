"""Restore sphere narrowphase vectors and the native voxel geometry tables."""
import struct
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector


def repair(source):
    pe=pinned_pe();count=0
    for rva,firsts in [(0x152750,[78,81,84,87]),(0x153850,[95,98,101,104]),
                       (0x1543c0,[142,145,148]),
                       (0x1564a0,[323,327,345,348,352,355,358,363,366,369])]:
        a,b,body=region(source,rva)
        groups=[vector(f'sr_sphere_{rva:x}_vector_{first}',first) for first in firsts]
        if rva==0x1564a0:
            groups.append(('  _Alignas(8) unsigned sr_sphere_mesh_offset[3];',[
                ('v343','(*(uint64_t *)(void *)sr_sphere_mesh_offset)'),
                ('v344','(*(float *)(void *)(sr_sphere_mesh_offset+2))')]))
        body=objects(body,groups);count+=len(groups)
        if rva==0x1543c0:
            declarations=[]
            for symbol,name,start,words,offset in [('dword_1402B34F0','sr_static_voxel_vertices',0x2b34f0,24,0),
                ('dword_1402B3558','sr_static_voxel_normals',0x2b3550,18,2),
                ('dword_1402B3664','sr_static_voxel_faces',0x2b3660,24,1)]:
                values=struct.unpack('<'+str(words)+'I',pe.get_data(start,words*4))
                declarations.append(f'  static const unsigned {name}[{words}] = {{'+','.join(f'0x{x:08x}u' for x in values)+'};\n')
                body=body.replace(symbol.encode(),f'({name}+{offset})'.encode() if offset else name.encode())
            old=b'  v8 = (sr_static_voxel_faces+1);'
            if body.count(old)!=1:raise ValueError('Static voxel table entry changed')
            body=body.replace(old,''.join(declarations).encode()+old,1)
        source=source[:a]+body+source[b:]
    return source,{'recovered_sphere_narrowphase_objects':count,'recovered_static_voxel_tables':3}
