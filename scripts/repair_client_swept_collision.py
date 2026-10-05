"""Recover swept sphere collision results and shared vector workspaces."""
import re
from repair_client_menu_actions import pinned_pe, region, check


def objects(body, groups):
    body=body.replace(b'\r',b'')
    for declaration, aliases in groups:
        for i,(name,expression) in enumerate(aliases):
            pattern=rb'^  [^\n;]+\b'+name.encode()+rb'(?:\[\d+\])?; // \[rsp[^\n]+\n'
            body,n=re.subn(pattern,(declaration+'\n').encode() if i==0 else b'',body,flags=re.M)
            if n!=1:raise ValueError('Swept collision local changed: '+name)
        for name,expression in aliases:
            body=re.sub(rb'\b'+name.encode()+rb'\b',expression.encode(),body)
    return body


def vector(name, first):
    return ('  float '+name+'[3];',[(f'v{i}',f'{name}[{i-first}]') for i in range(first,first+3)])


def less_than_limit(value, above=False):
    return (b'unsigned char sr_swept_hit;\n'
            b'  __asm__ volatile("comiss %2, %1; '+(b'seta' if above else b'setb')+b' %0" : "=qm"(sr_swept_hit)\n'
            b'    : "x"(_mm_set_ss('+(b'65536.0f' if above else value)+b')), "x"(_mm_set_ss('+(value if above else b'65536.0f')+b')) : "cc");\n'
            b'  return sr_swept_hit;')


def repair(source):
    pe=pinned_pe()
    check(pe,0x32d88,'410f2f45000f87c200000033c0')
    check(pe,0x32e55,'b801000000e936ffffff')
    check(pe,0x3430e,'f30f10058605a5110f2f05bf472400410f92c7418bc7')
    a,b,body=region(source,0x31530)
    body=objects(body,[vector('sr_swept_position',253),vector('sr_swept_normal',256),
        vector('sr_swept_origin',266),
        ('  int sr_swept_cell[3];',[(f'v{i}',f'sr_swept_cell[{i-271}]') for i in range(271,274)]),
        ('  unsigned sr_swept_displaced_cell[3];',[(f'v{i}',f'sr_swept_displaced_cell[{i-276}]') for i in range(276,279)]),
        ('  float sr_swept_mesh_result[8];',[('v284','sr_swept_mesh_result'),('v285','sr_swept_mesh_result[7]')]),
        ('  _Alignas(16) float sr_swept_rotation[12];',[
            ('v288','(*(__int128 *)(void *)sr_swept_rotation)'),
            ('v289','(*(__int128 *)(void *)(sr_swept_rotation+4))'),
            ('v290','sr_swept_rotation[8]')])])
    old=b'return sub_1401F8B20((unsigned __int64)&v247 ^ v292);'
    if body.count(old)!=9:raise ValueError('Swept block return inventory changed')
    body=body.replace(old,b'return 0;',7).replace(old,b'return 1;',1).replace(old,less_than_limit(b'*a3',above=True))
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x33fe0)
    # Hex-Rays assigned the distance to a spill 0x1213c bytes beyond the result.
    # The native consumer reads the eighth float of the 32-byte result at RSP+70.
    body=objects(body,[vector('sr_swept_lower',26),vector('sr_swept_upper',29),
        ('  _Alignas(16) unsigned sr_swept_result[8];',[
            ('v33','(*(__int128 *)(void *)sr_swept_result)'),('v34','sr_swept_result[4]'),
            ('v35','sr_swept_result[5]'),('v36','(*(float *)&sr_swept_result[7])')])])
    old=b'return sub_1401F8B20((unsigned __int64)&v25 ^ v38);'
    if body.count(old)!=1:raise ValueError('Swept world return changed')
    body=body.replace(old,less_than_limit(b'*(float *)&dword_140404A6C[73006988]'))
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x32e60)
    body=objects(body,[
        ('  _Alignas(8) unsigned sr_swept_surface_normal[3];',[
            ('v71','(*(int64_t *)(void *)sr_swept_surface_normal)'),('v72','(*(float *)&sr_swept_surface_normal[2])')]),
        ('  int sr_swept_surface_point[3];',[(f'v{i}',f'sr_swept_surface_point[{i-73}]') for i in range(73,76)])])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x337b0)
    body=objects(body,[
        ('  _Alignas(8) unsigned sr_swept_triangle_normal[3];',[
            ('v47','(*(int64_t *)(void *)sr_swept_triangle_normal)'),('v48','(*(float *)&sr_swept_triangle_normal[2])')]),
        ('  int sr_swept_triangle_point[3];',[(f'v{i}',f'sr_swept_triangle_point[{i-49}]') for i in range(49,52)]),
        ('  float sr_swept_triangle_vertex[3];',[('v52','sr_swept_triangle_vertex'),('v53','sr_swept_triangle_vertex[2]')])])
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x35690)
    body=objects(body,[vector('sr_swept_leaf_point',54),
        ('  unsigned sr_swept_leaf_normal[3];',[('v57','(*(float *)&sr_swept_leaf_normal[0])'),('v58','sr_swept_leaf_normal[1]'),('v59','sr_swept_leaf_normal[2]')])])
    source=source[:a]+body+source[b:]
    return source,{'recovered_swept_collision_return_sites':10,'recovered_swept_collision_objects':17}
