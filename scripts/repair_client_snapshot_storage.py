"""Restore camera snapshot quaternions, rotation storage and discarded results."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects


def repair(source):
    pe=pinned_pe()
    check(pe,0x3c16e,'e81d4300008b0dbb3be843')
    check(pe,0x419dc,'e8afebfeff4c8b7c2428')
    check(pe,0x41a34,'e857ebfefff20f100d97722300')
    check(pe,0x31511,'e80a761c00')
    check(pe,0x3148a,'f20f5fd0f20f5dd1660f5ad2')
    if source.count(b'sub_140040490(')!=2 or source.count(b'sub_140030590(')!=4:
        raise ValueError('Snapshot caller inventory changed')
    a,b,body=region(source,0x40490)
    old=b'  result = sub_140030590(v46);'
    if body.count(old)!=1:raise ValueError('Snapshot forwarded compatibility result changed')
    body=body.replace(old,b'  sub_140030590(v46);\n  result = 0; /* native tick discards this result */')
    source=source[:a]+body+source[b:]
    a,b,body=region(source,0x30590)
    body=objects(body,[('  _Alignas(16) unsigned sr_snapshot_quaternions[8];',[
        ('v117','(*(float *)(void *)(sr_snapshot_quaternions+0))'),
        ('v118','(*(float *)(void *)(sr_snapshot_quaternions+1))'),
        ('v119','((_QWORD *)(void *)(sr_snapshot_quaternions+2))')]),
        ('  _Alignas(8) unsigned sr_snapshot_axis[3];',[
        ('v120','(*(unsigned **)(void *)sr_snapshot_axis)'),
        ('v121','(*(float *)(void *)(sr_snapshot_axis+2))')]),
        ('  _Alignas(16) unsigned sr_snapshot_rotation[12];',[
        ('v123','(*(__int128 *)(void *)sr_snapshot_rotation)'),
        ('v124','(*(__int128 *)(void *)(sr_snapshot_rotation+4))'),
        ('v125','sr_snapshot_rotation[8]')])])
    old=b'return sub_1401F8B20((unsigned __int64)&v116 ^ v126);'
    if body.count(old)!=1:raise ValueError('Snapshot cookie exit changed')
    body=body.replace(old,b'return 0; /* both native callers discard EAX */')
    old=b'fmin(fmax(v88 * -0.39269908169875, v114), v88 * 0.39269908169875)'
    if body.count(old)!=1:raise ValueError('Snapshot angular clamp changed')
    # MINSD/MAXSD preserve the native unordered and equal-operand behavior.
    body=body.replace(old,b'sr_export_float_lane_container(COERCE_UNSIGNED_INT(_mm_cvtss_f32(_mm_cvtpd_ps(\n'
        b'        _mm_min_sd(_mm_max_sd(_mm_set_sd(v88 * -0.39269908169875), _mm_set_sd(v114)),\n'
        b'                   _mm_set_sd(v88 * 0.39269908169875))))))')
    return source[:a]+body+source[b:],{'recovered_camera_snapshot_objects':3,'recovered_camera_snapshot_discarded_results':2,'recovered_camera_snapshot_angle_abi':1}
