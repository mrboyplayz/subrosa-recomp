"""Recover sphere/world collision query results and contiguous output objects."""
import re
from repair_client_menu_actions import pinned_pe, region, check


def objects(body, groups):
    body = body.replace(b'\r', b'')
    for decl, aliases in groups:
        for n, (name, expr) in enumerate(aliases):
            pattern = rb'^  (?:float|unsigned int|unsigned __int64|__int64|int|__int128) '+name.encode()+rb'(?:\[(?:3|12435)\])?; // \[rsp[^\n]+\n'
            body, count = re.subn(pattern, (decl+'\n').encode() if n == 0 else b'', body, flags=re.M)
            if count != 1:
                raise ValueError('Collision query workspace changed: '+name)
        for name, expr in aliases:
            body = re.sub(rb'\b'+name.encode()+rb'\b', expr.encode(), body)
    return body


def repair(source):
    pe = pinned_pe()
    for rva, h in [(0x3d798, 'f30f10053cb32300410f2f0424'),
                   (0x3d7c6, '7607b801000000eb0233c0'),
                   (0x3e0b3, 'f30f1005e167a4110f2f051aaa2300400f92c68bc6'),
                   (0x3df78, '488d4c2468'), (0x3df86, 'f30f105584'),
                   (0x3df98, '0f10442468'), (0x3dff1, '4c8d442460'),
                   (0x3dffb, '488d542440'), (0x3e008, '488d4c2450'),
                   (0x3d023, '89442438'), (0x3d51a, '89442438'),
                   (0x3cbc0, '488d542470'), (0x3cbd0, '488d4c2460'),
                   (0x3cba4, '488d4598'), (0x3d523, '488d45b0'),
                   (0x10d47c, '488d4c2440'), (0x10d4b2, '488d542450'),
                   (0x10d52e, '488d4c2468'), (0x10d542, '4c8d442474'),
                   (0x10d573, 'f30f5c5d84')]:
        check(pe, rva, h)
    a, b, body = region(source, 0x3c760)
    body = objects(body, [
        ('  float sr_collision_position[3];', [(f'v{i}', f'sr_collision_position[{i-181}]') for i in range(181,184)]),
        ('  float sr_collision_normal[3];', [(f'v{i}', f'sr_collision_normal[{i-184}]') for i in range(184,187)]),
        ('  int sr_collision_cell[3];', [(f'v{i}', f'sr_collision_cell[{i-192}]') for i in range(192,195)]),
        ('  unsigned sr_collision_displaced_cell[3];', [(f'v{i}', f'sr_collision_displaced_cell[{i-196}]') for i in range(196,199)])])
    for name in ('v79', 'v147'):
        old = b'unsigned __int16 '+name.encode()+b';'
        if body.count(old) != 1:
            raise ValueError('Displaced cell material width changed')
        body = body.replace(old, b'unsigned int '+name.encode()+b';')
    old = b'return sub_1401F8B20((unsigned __int64)&v174 ^ v206);'
    if body.count(old) != 8:
        raise ValueError('Collision query return inventory changed')
    # Six bounding rejections and the empty interval return EAX=0. The
    # completed query returns whether the selected distance is below 65536.
    body = body.replace(old, b'return 0;', 7)
    body = body.replace(old, b'unsigned char sr_collision_hit;\n'
                            b'  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_collision_hit)\n'
                            b'                   : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");\n'
                            b'  return sr_collision_hit;')
    source = source[:a]+body+source[b:]
    a, b, body = region(source, 0x3de80)
    body = objects(body, [
        ('  float sr_collision_upper[3];', [(f'v{i}', f'sr_collision_upper[{i-15}]') for i in range(15,18)]),
        ('  uint32_t sr_collision_lower[3];', [('v18', 'sr_collision_lower[0]'), ('v19', '(*(float *)&sr_collision_lower[1])'), ('v20', '(*(float *)&sr_collision_lower[2])')]),
        ('  _Alignas(16) uint32_t sr_collision_result[8];', [
            ('v22', '(*(__int128 *)(void *)sr_collision_result)'),
            ('v23', 'sr_collision_result[4]'), ('v24', 'sr_collision_result[5]'),
            ('v25', '(*(float *)&sr_collision_result[7])')])])
    old = b'return sub_1401F8B20((unsigned __int64)&v13 ^ v27);'
    if body.count(old) != 1:
        raise ValueError('Combined collision query return changed')
    body = body.replace(old, b'unsigned char sr_collision_hit;\n'
                            b'  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_collision_hit)\n'
                            b'                   : "x"(_mm_set_ss(*(float *)&dword_140404A6C[73006988])),\n'
                            b'                     "x"(_mm_set_ss(65536.0f)) : "cc");\n'
                            b'  return sr_collision_hit;')
    source = source[:a]+body+source[b:]
    a, b, body = region(source, 0x10d0d0)
    body = body.replace(b'\r', b'')
    old = b'*(float *)&v57[12432]'
    if body.count(old) != 1:
        raise ValueError('Actor contact distance alias changed')
    body = body.replace(old, b'sr_actor_contact_result[7]')
    body = objects(body, [
        ('  _Alignas(8) uint32_t sr_actor_contact_point[3];', [
            ('v50', '(*(uint64_t *)(void *)sr_actor_contact_point)'),
            ('v51', '(*(float *)&sr_actor_contact_point[2])')]),
        ('  _Alignas(8) uint32_t sr_actor_contact_offset[3];', [
            ('v52', '(*(int64_t *)(void *)sr_actor_contact_offset)'),
            ('v53', '(*(float *)&sr_actor_contact_offset[2])')]),
        ('  float sr_actor_contact_result[8];', [
            ('v56', 'sr_actor_contact_result'),
            ('v57', '((unsigned *)(void *)(sr_actor_contact_result+3))')])])
    source = source[:a]+body+source[b:]
    return source, {'recovered_collision_query_result_sites': 9,
                    'recovered_collision_query_workspace_objects': 10,
                    'recovered_collision_query_workspace_bytes': 160,
                    'recovered_collision_query_material_widths': 2,
                    'recovered_actor_contact_distance_alias': 1}
