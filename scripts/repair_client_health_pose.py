"""Restore the HUD's 16-bone pose arrays and capsule float arguments."""
import re
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects


def repair(source):
    pe = pinned_pe()
    check(pe, 0x7a0b6, 'f30f10442420f3410f114320')
    for rva, expected in [(0xa7d1c, '48c7459000000000c7459800000000'),
                          (0xa7d62, '488d4d50e80531fdff'),
                          (0xa7d75, '4c8d75a441bc0f000000488d757c'),
                          (0xa7d8a, '4c8d7d74'),
                          (0xa77fb, '440f28ca'), (0xa7804, '440f28d1'),
                          (0xa82e3, '0f28d7'), (0xa82ef, '410f28cb')]:
        check(pe, rva, expected)
    a, b, body = region(source, 0x7a010)
    body = objects(body, [('  _Alignas(16) unsigned sr_pose_product[9];', [
        ('v14', '((__int128 *)(void *)sr_pose_product)'), ('v15', 'sr_pose_product[8]')])])
    source = source[:a] + body + source[b:]
    a, b, body = region(source, 0xa7c70)
    body = objects(body, [
        ('  _Alignas(16) unsigned sr_health_basis[9];', [
            ('v93', '((__int128 *)(void *)sr_health_basis)'),
            ('v94', 'sr_health_basis[8]')]),
        ('  float sr_health_positions[16 * 3];', [
            ('v95', '(*(int64_t *)(void *)sr_health_positions)'),
            ('v96', '(sr_health_positions + 2)'),
            ('v97', '(*(char *)(void *)(sr_health_positions + 5))')]),
        ('  float sr_health_rotations[16 * 9];', [
            ('v98', 'sr_health_rotations'),
            ('v99', '(*(char *)(void *)(sr_health_rotations + 9))'),
            ('v100', '(*(char *)(void *)(sr_health_rotations + 11))')]),
        ('  float sr_health_vertex[3];', [
            ('v85', 'sr_health_vertex[0]'), ('v86', 'sr_health_vertex[1]'),
            ('v87', 'sr_health_vertex[2]')])])
    old = b'sub_1400A77C0(v49, v79, v80, v50, v47);'
    if body.count(old) != 1: raise ValueError('Health capsule caller changed')
    body = body.replace(old, b'sub_1400A77C0(v49, v48, v51, v50, v47);')
    # All three native health color multiplications use MULSS, not double math.
    if body.count(b' * 0.02') != 3: raise ValueError('Health color scalar inventory changed')
    body = body.replace(b' * 0.02', b' * 0.02f')
    source = source[:a] + body + source[b:]
    old = b'void            sub_1400A77C0(float a1, __int64 a2, __int64 a3, float a4, float a5)'
    if source.count(old) != 2: raise ValueError('Health capsule signature changed')
    source = source.replace(old, b'void sub_1400A77C0(float a1, float a2, float a3, float a4, float a5)')
    a, b, body = region(source, 0xa77c0)
    body = objects(body, [('  float sr_capsule_vertex[3];', [
        ('v38', 'sr_capsule_vertex[0]'), ('v39', 'sr_capsule_vertex[1]'),
        ('v40', '(*(int *)(void *)&sr_capsule_vertex[2])')])])
    for old, new in [(b'  float v5; // xmm1_4\n', b''), (b'  float v6; // xmm2_4\n', b'')]:
        if body.count(old) != 1: raise ValueError('Health capsule export changed: ' + repr(old))
        body = body.replace(old, new)
    body = re.sub(rb'\bv5\b', b'a2', body)
    body = re.sub(rb'\bv6\b', b'a3', body)
    return source[:a] + body + source[b:], {
        'recovered_health_pose_16_bone_arrays': 2, 'recovered_health_basis': 1,
        'recovered_health_vertex_workspaces': 2, 'recovered_health_capsule_float_abi': 1,
        'recovered_health_color_float_operations': 3, 'recovered_matrix_product_workspace': 1}
