"""Restore the native rotational integrator's workspaces and float operations."""
import re
from repair_client_menu_actions import pinned_pe, region, check


def repair(source):
    if source.count(b'sub_14012B2D0(') != 4 or source.count(b'sub_14012B220(') != 2:
        raise ValueError('Rotation caller inventory changed; review return consumers')
    pe = pinned_pe()
    for rva, h in [(0x12b55f, '488d542448'), (0x12b568, '488d4c2470'),
                   (0x12b808, '488d542448'), (0x12b811, '488d4c2470'),
                   (0x12ba6f, '488d542448'), (0x12ba78, '488d4c2470'),
                   (0x12bccb, '488b4d984833cce849ce0c00'),
                   (0x12b2b8, '488b5c2440488b7424480f287424204883c4305fc3'),
                   (0x7b446, '410f2ed07422'), (0x7b44c, '410f28c9f30f5eca'),
                   (0x278240, 'abaa2a3e'), (0x27816c, '3a8ee33c'), (0x278058, '00008037')]:
        check(pe, rva, h)
    a, b, body = region(source, 0x12b2d0)
    body = body.replace(b'\r', b'')
    # Native RDX points at rsp+48, containing three adjacent float words.
    # RCX points at rsp+70, containing nine adjacent float words.
    aliases = [('v76', 'sr_rotation_axis[0]'), ('v77', 'sr_rotation_axis[1]'),
               ('v78', 'sr_rotation_axis[2]'), ('v85', 'sr_rotation_matrix[0]'),
               ('v86', '(*(uint64_t *)(void *)&sr_rotation_matrix[1])')]
    aliases += [(f'v{i}', f'sr_rotation_matrix[{i-84}]') for i in range(87, 93)]
    for name, expr in aliases:
        decl = b'  float sr_rotation_axis[3];\n' if name == 'v76' else b'  float sr_rotation_matrix[9];\n' if name == 'v85' else b''
        body, count = re.subn(rb'^  (?:float|unsigned __int64) '+name.encode()+rb'; // \[rsp[^\n]+\n', decl, body, flags=re.M)
        if count != 1:
            raise ValueError('Rotation workspace declaration changed: '+name)
    for name, expr in aliases:
        body = re.sub(rb'\b'+name.encode()+rb'\b', expr.encode(), body)
    old = b'return sub_1401F8B20((unsigned __int64)&v67 ^ v93);'
    if body.count(old) != 1:
        raise ValueError('Rotation cookie export changed')
    body = body.replace(old, b'return; /* native cookie check has no game result */')
    body = re.sub(rb'__int64\s+sub_14012B2D0', b'void sub_14012B2D0', body, count=1)
    # Each DIVSS and MULSS rounds to float, including the final 1/6 and 1/36.
    body = body.replace(b'1.0 /', b'1.0f /').replace(b'0.5;', b'0.5f;')
    body = body.replace(b'0.16666667', b'0x1.555556p-3f').replace(b'0.02777778', b'0x1.c71c74p-6f')
    body = body.replace(b'  __int64 v93; // [rsp+A0h] [rbp-68h]\n', b'  unsigned char sr_rotation_skip;\n')
    # COMISS/JBE skips zero, small and unordered norms. Preserve its flags.
    for name in ('v31', 'v47', 'v57', 'v65'):
        old = (f'  if ( *(float *)&{name} '+('>' if name=='v65' else '<=')+' 0.000015258789 )').encode()
        asm = (f'  __asm__ volatile("comiss %2, %1; setbe %0" : "=qm"(sr_rotation_skip)\n'
               f'                   : "x"(_mm_set_ss(*(float *)&{name})), "x"(_mm_set_ss(0x1p-16f)) : "cc");\n'
               f'  if ( '+('!sr_rotation_skip' if name=='v65' else 'sr_rotation_skip')+' )').encode()
        if body.count(old) != 1:
            raise ValueError('Rotation norm branch changed: '+name)
        body = body.replace(old, asm)
    source = source[:a]+body+source[b:]
    source, count = re.subn(rb'__int64\s+sub_14012B2D0\(unsigned int \*a1, float \*a2, float \*a3, float \*a4\);',
                            b'void sub_14012B2D0(unsigned int *a1, float *a2, float *a3, float *a4);', source)
    if count != 1:
        raise ValueError('Rotation prototype changed')
    # Its standalone update loop has no return value either. No callers in
    # the recognized export consume this loop's incidental RAX register.
    a, b, body = region(source, 0x12b220)
    body = body.replace(b'\r', b'')
    body = body.replace(b'__int64 sub_14012B220()', b'void sub_14012B220()')
    for old, new in [(b'  __int64 result; // rax\n', b''),
                     (b'result = sub_14012B2D0(', b'sub_14012B2D0('),
                     (b'return result;', b'return;')]:
        if body.count(old) != 1:
            raise ValueError('Rotation loop return changed')
        body = body.replace(old, new)
    source = source[:a]+body+source[b:]
    source = source.replace(b'__int64 sub_14012B220();', b'void sub_14012B220();')
    # The called matrix rotation uses the same native float reciprocal and
    # UCOMISS/JE zero-or-unordered exit; its exported double division differs.
    a, b, body = region(source, 0x7b2a0)
    body = body.replace(b'\r', b'')
    old = b'    if ( v22 == 0.0 )'
    if body.count(old) != 1:
        raise ValueError('Axis rotation normalization changed')
    body = body.replace(b'  float v23; // xmm6_4', b'  unsigned char sr_rotation_zero;\n  float v23; // xmm6_4')
    body = body.replace(old, b'    __asm__ volatile("ucomiss %2, %1; sete %0" : "=qm"(sr_rotation_zero)\n'
                            b'                     : "x"(_mm_set_ss(v22)), "x"(_mm_setzero_ps()) : "cc");\n'
                            b'    if ( sr_rotation_zero )')
    if body.count(b'1.0 / v22') != 3:
        raise ValueError('Axis rotation reciprocal changed')
    body = body.replace(b'1.0 / v22', b'1.0f / v22')
    source = source[:a]+body+source[b:]
    return source, {'recovered_rotation_step_workspace_objects': 2,
                    'recovered_rotation_step_workspace_bytes': 48,
                    'recovered_rotation_step_void_returns': 2,
                    'recovered_rotation_float_normalization_helpers': 2}
