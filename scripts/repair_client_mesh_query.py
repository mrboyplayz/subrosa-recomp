"""Recover transformed mesh vertices, triangle vectors and ray-query result."""
import re
from repair_client_menu_actions import pinned_pe, region, check


def repair(source):
    pe=pinned_pe()
    for rva,h in [(0xe23ab,'488d4de0'),(0xe279f,'4c8d55e0'),
                  (0xe2a57,'488d442450'),(0xe2a69,'488d442478'),
                  (0xe2a73,'488d542440'),(0xe2a81,'488d4c2460'),
                  (0xe2cc1,'f30f1005cf1b9a11410f2fc27307b801000000eb0233c0'),
                  (0x10a7c4,'4c8d85b0070000'),(0x10a80d,'f30f1185a0070000'),
                  (0x10a837,'f30f119da4070000'),(0x10a83f,'f30f11b5a8070000')]:check(pe,rva,h)
    a,b,body=region(source,0xe21f0);body=body.replace(b'\r',b'')
    vertex_aliases=[('v154','(*(int *)(void *)(sr_mesh_vertices+0))'),
                    ('v155','(*(int *)(void *)(sr_mesh_vertices+4))')]
    vertex_aliases += [(f'v{i}',f'(sr_mesh_vertices+{12+4*(i-157)})') if i not in (160,163)
                       else (f'v{i}',f'(*(char *)(sr_mesh_vertices+{12+4*(i-157)}))') for i in range(157,166)]
    vectors=[('normal','v135','v136','__int64'),('third','v137','v138','__int64'),
             ('hit','v139','v140','float *'),('second','v142','v143','float *'),
             ('first','v144','v145','__int64')]
    groups=[('  _Alignas(16) unsigned char sr_mesh_vertices[3072];',vertex_aliases)]
    for name,lo,hi,typ in vectors:
        n='sr_mesh_'+name
        groups.append((f'  _Alignas(8) unsigned char {n}[16];',[
            (lo,f'(*({typ} *)(void *){n})'),
            (hi,f'(*('+('float' if hi in ('v143','v145') else '__int64')+f' *)(void *)({n}+8))')]))
    for decl,aliases in groups:
        for n,(name,expr) in enumerate(aliases):
            pattern=rb'^  (?:int|char|_BYTE|float|float \*|__int64)\s*'+name.encode()+rb'(?:\[(?:4|3028)\])?; // \[rsp[^\n]+\n'
            body,count=re.subn(pattern,(decl+'\n').encode() if n==0 else b'',body,flags=re.M)
            if count!=1:raise ValueError('Mesh query workspace changed: '+name)
        for name,expr in aliases:body=re.sub(rb'\b'+name.encode()+rb'\b',expr.encode(),body)
    old=b'return sub_1401F8B20((unsigned __int64)&v134 ^ v166);'
    if body.count(old)!=7:raise ValueError('Mesh query result inventory changed')
    body=body.replace(old,b'return 0;',6)
    body=body.replace(old,b'unsigned char sr_mesh_found;\n'
                         b'  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_mesh_found)\n'
                         b'                   : "x"(_mm_set_ss(*(float *)&dword_140404A6C[73006987])), "x"(_mm_set_ss(1.0f)) : "cc");\n'
                         b'  return sr_mesh_found;')
    for name in ('v117','v129'):
        body=body.replace(b'1.0 / '+name.encode(),b'1.0f / '+name.encode())
    source=source[:a]+body+source[b:]
    # Two endpoint triplets in the calling collision dispatcher are passed
    # through pointer arguments and must retain their native adjacency.
    a,b,body=region(source,0x108930);body=body.replace(b'\r',b'')
    for start,label in [(290,'start'),(293,'end')]:
        for n in range(3):
            name=f'v{start+n}';pattern=rb'^  float '+name.encode()+rb'; // \[rsp[^\n]+\n'
            body,count=re.subn(pattern,f'  float sr_mesh_ray_{label}[3];\n'.encode() if n==0 else b'',body,flags=re.M)
            if count!=1:raise ValueError('Mesh query endpoint changed')
        for n in range(3):body=re.sub(rb'\bv'+str(start+n).encode()+rb'\b',f'sr_mesh_ray_{label}[{n}]'.encode(),body)
    source=source[:a]+body+source[b:]
    return source,{'recovered_mesh_query_workspace_objects':8,
                   'recovered_mesh_query_workspace_bytes':3176,
                   'recovered_mesh_query_result_sites':7}
