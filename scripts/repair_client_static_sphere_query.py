"""Recover the static-world sphere query's workspaces and Boolean results."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects, vector, less_than_limit


def repair(source):
    pe=pinned_pe()
    check(pe,0x1525a6,'410f2f04240f87c100000033c0')
    check(pe,0x152672,'b801000000e937ffffff')
    check(pe,0x151451,'0f8f5a110000')
    a,b,body=region(source,0x151190)
    body=objects(body,[vector('sr_static_sphere_point',231),
        vector('sr_static_sphere_normal',234),vector('sr_static_sphere_origin',241),
        ('  int sr_static_sphere_cell[3];',[(f'v{i}',f'sr_static_sphere_cell[{i-248}]') for i in range(248,251)]),
        ('  _Alignas(8) unsigned sr_static_sphere_displaced_cell[4];',[
            ('v252','sr_static_sphere_displaced_cell[0]'),('v253','sr_static_sphere_displaced_cell[1]'),
            ('v254','(*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2))')]),
        ('  _Alignas(8) unsigned sr_static_sphere_center[4];',[
            ('v261','((float *)(void *)sr_static_sphere_center)'),
            ('v262','(*(int64_t *)(void *)(sr_static_sphere_center+2))')]),
        ('  _Alignas(16) unsigned sr_static_sphere_rotation[12];',[
            ('v263','(*(__int128 *)(void *)sr_static_sphere_rotation)'),
            ('v264','(*(__int128 *)(void *)(sr_static_sphere_rotation+4))'),
            ('v265','(*(float *)(void *)(sr_static_sphere_rotation+8))')])])
    old=b'return sub_1401F8B20((unsigned __int64)&v229 ^ v266);'
    if body.count(old)!=10:raise ValueError('Static sphere query exits changed')
    body=body.replace(old,b'return 0;',7).replace(old,b'{ '+less_than_limit(b'*a3',above=True)+b' }',1).replace(old,b'return 1;')
    axis=b'(float *)&dword_1402F6188'
    if body.count(axis)!=5:raise ValueError('Static sphere axis inventory changed')
    body=body.replace(b'  v6 = *(float *)&a6;',b'  const float sr_static_sphere_axis[3] = {0.0f, 1.0f, 0.0f};\n  v6 = *(float *)&a6;',1).replace(axis,b'(float *)sr_static_sphere_axis')
    return source[:a]+body+source[b:],{'recovered_static_sphere_objects':7,'recovered_static_sphere_returns':10,'recovered_static_sphere_axis_sites':5}
