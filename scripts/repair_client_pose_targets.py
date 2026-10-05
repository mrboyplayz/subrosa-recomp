"""Restore the pose-target float argument and contiguous quaternion workspace."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects


def repair_skeleton(source):
    pe = pinned_pe()
    check(pe, 0xab7cb, '4883ec30')
    a, b, body = region(source, 0xab7b0)
    body = objects(body, [('  unsigned sr_skeleton_anchor[3];', [
        ('v23', 'sr_skeleton_anchor[0]'), ('v24', 'sr_skeleton_anchor[1]'),
        ('v25', 'sr_skeleton_anchor[2]')])])
    return source[:a] + body + source[b:]


def repair(source):
    pe = pinned_pe()
    check(pe, 0xad05e, '440f28c1')
    check(pe, 0xae27f, 'f30f104d9c8b4d98e8a4edffff')
    check(pe, 0xad0c9, 'f30f1145e44c8d45e00fc6c001')
    check(pe, 0xad1c9, 'f3440f5905feb91c00')
    if source.count(b'sub_1400AD030(') != 3:
        raise ValueError('Pose target caller inventory changed')
    old = b'_UNKNOWN **           sub_1400AD030(int a1, __int64 a2, double a3)'
    if source.count(old) != 2:
        raise ValueError('Pose target signature changed')
    source = source.replace(old, b'void sub_1400AD030(int a1, float sr_pose_angle)')
    a, b, body = region(source, 0xad030)
    body = objects(body, [('  unsigned sr_pose_quaternion[4];', [
        ('v27', 'sr_pose_quaternion[0]'), ('v28', 'sr_pose_quaternion[1]'),
        ('v29', 'sr_pose_quaternion[2]'), ('v30', 'sr_pose_quaternion[3]')])])
    for old, new in [
        (b'  float v3; // xmm1_4\n', b''),
        (b'  v5 = v3;', b'  v5 = sr_pose_angle;'),
        (b'  _UNKNOWN **result; // rax\n', b''),
        (b'  result = sub_140105930(', b'  sub_140105930('),
        (b'  return result;', b'  return;')]:
        if body.count(old) != 1:
            raise ValueError('Pose target body contract changed: ' + repr(old))
        body = body.replace(old, new)
    import re
    body, count = re.subn(rb'sub_1401F8AC0\((v\d+), v\d+|sub_1401F8AC0\((v9), a2',
                         lambda m: b'sub_1401F8AC0(' + (m[1] or m[2]) + b', 0', body)
    if count != 5:
        raise ValueError('Pose trig register placeholders changed')
    # The compatibility wrapper consumes only XMM0's low float lane.
    body = body.replace(b', v21, a3)', b', 0, 0)').replace(b', a3)', b', 0)')
    old = b'COERCE_UNSIGNED_INT(v5 * -0.5)'
    if body.count(old) != 1:
        raise ValueError('Pose float trig payload changed')
    body = body.replace(old, b'COERCE_UNSIGNED_INT(v5 * -0.5f)')
    source = source[:a] + body + source[b:]
    a, b, body = region(source, 0xad2b0)
    old = b'sub_1400AD030(v465, v150, v139);'
    if body.count(old) != 1:
        raise ValueError('Native pose float caller changed')
    body = body.replace(old, b'sub_1400AD030(v465, COERCE_FLOAT(LODWORD(v139)));')
    source = repair_skeleton(source[:a] + body + source[b:])
    return source, {
        'recovered_pose_target_float_argument': 1,
        'recovered_pose_target_quaternion_workspace': 1,
        'recovered_skeleton_anchor_workspace': 1}
