"""Recover Character preview stack objects and signed viewport arithmetic."""
import re
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects


def repair(source):
    pe = pinned_pe()
    for rva, data in [
        (0xfbad6, 'f30f103546c71700'),
        (0xfbade, '0f57db0f28d60f28ce0f28c6'),
        (0xfbbd6, '4889759789759f0f1145a7c745c70000803f0f1145b7'),
        (0xfbc09, '897527c7452b3333333fc7452f3333333f'),
        (0xfbc62, '4c8d4597'), (0xfbc75, '4c8d4da7'),
        (0xfbc8b, '4c8d4527'), (0xfbe2a, '488d55d7'),
        (0xfbe55, '0f294507'), (0xfc0bd, '488d55d7'),
        (0x7a63a, '660f6ec00f5bc0f30f59c2f30f2cd0'),
        (0x7a6ca, '0fafc1660f6ec08bc10f5bc0'),
        (0x2f6188, '000000000000803f00000000'),
    ]:
        check(pe, rva, data)
    a, b, body = region(source, 0xfba50)
    body = objects(body, [
        ('  _Alignas(8) unsigned sr_character_position[3];', [
            ('v22', '(*(int64_t *)(void *)sr_character_position)'),
            ('v23', 'sr_character_position[2]')]),
        ('  _Alignas(16) unsigned sr_character_rotation[12];', [
            ('v24', '(*(__int128 *)(void *)sr_character_rotation)'),
            ('v25', '(*(__int128 *)(void *)(sr_character_rotation+4))'),
            ('v26', 'sr_character_rotation[8]')]),
        ('  _Alignas(16) unsigned sr_character_transform[16];', [
            ('v27', '(*(int64_t *)(void *)sr_character_transform)'),
            ('v28', 'sr_character_transform[2]'),
            ('v29', 'sr_character_transform[3]'),
            ('v30', 'sr_character_transform[4]'),
            ('v31', '(*(int64_t *)(void *)(sr_character_transform+5))'),
            ('v32', 'sr_character_transform[7]'),
            ('v33', '(*(int64_t *)(void *)(sr_character_transform+8))'),
            ('v34', 'sr_character_transform[10]'),
            ('v35', 'sr_character_transform[11]'),
            ('v36', '(*(__int128 *)(void *)(sr_character_transform+12))')]),
        ('  unsigned sr_character_light[3];', [
            ('v38', 'sr_character_light[0]'),
            ('v39', '(sr_character_light+1)')]),
    ])
    # The export split the shared unit-Y vector into independently linked
    # scalars. Recover the original 12-byte constant for this preview draw.
    old = b'(float *)&dword_1402F6188'
    if body.count(old) != 1:
        raise ValueError('Character rotation axis call changed')
    body = body.replace(old, b'sr_character_axis')
    body = body.replace(b'  unk_140404718(36160,',
                        b'  static const float sr_character_axis[3] = {0.0f,1.0f,0.0f};\n\n  unk_140404718(36160,', 1)
    # The native memcpy covers two words, not sizeof a decayed pointer.
    body = body.replace(b'sizeof((sr_character_light+1))', b'8')
    old = b'(*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v2, v1, v3, v4);'
    if body.count(old) != 1:
        raise ValueError('Character clear color changed')
    body = body.replace(old, b'(*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.125f,0.125f,0.125f,0.0f);')
    source = source[:a] + body + source[b:]

    # IMUL leaves a 32-bit word; CVTDQ2PS interprets it as signed. The
    # decompiled unsigned globals otherwise turn a negative Y into 65536.
    a, b, body = region(source, 0x7a570)
    body, n = re.subn(rb'\(float\)\((a[134] \* dword_140404A6C\[\d+\])\)',
                     rb'(float)(int32_t)(uint32_t)(\1)', body)
    if n != 5:
        raise ValueError('Perspective viewport product inventory changed: ' + str(n))
    body, n = re.subn(rb'\(float\)\((dword_140404A6C\[1372977(?:62|56)\]\s*\* \(int\)\(float\)\([^\n]+ - v8\))\)',
                     rb'(float)(int32_t)(uint32_t)(\1)', body)
    if n != 2:
        raise ValueError('Perspective viewport Y inventory changed: ' + str(n))
    return source[:a] + body + source[b:], {
        'recovered_character_preview_objects': 4,
        'recovered_character_preview_clear_color': 1,
        'recovered_character_preview_axis': 1,
        'recovered_perspective_viewport_signed_products': 7,
    }
