"""Restore the position, rotation, velocity and inertia objects used by spawning."""
from repair_client_menu_actions import pinned_pe, region, check
from repair_client_swept_collision import objects


def pair(name, first, second, tail_type='float', words=3):
    tail = f'(*(float *)(void *)({name}+2))' if tail_type == 'float' else f'{name}[2]'
    return (f'  _Alignas(8) unsigned {name}[{words}];', [
        (first, f'(*(int64_t *)(void *){name})'), (second, tail)])


def rotation(name, first, second, last):
    return (f'  _Alignas(16) unsigned {name}[12];', [
        (first, f'(*(__int128 *)(void *){name})'),
        (second, f'(*(__int128 *)(void *)({name}+4))'),
        (last, f'{name}[8]')])


def repair(source):
    pe = pinned_pe()
    check(pe, 0x12a075, 'f20f11442460')
    check(pe, 0x12a08d, '89442468')
    check(pe, 0x12a0c7, '0f1185800300000f118590030000')
    check(pe, 0x53910, '4c897c243044897c2438')
    check(pe, 0x5c402, 'f30f114c2444f30f114c2448')
    check(pe, 0x619d6, '0f114c2440c74424600000803f0f114c2450')
    a, b, body = region(source, 0x127910)
    body = objects(body, [
        ('  _Alignas(8) unsigned sr_reset_spawn_position[4];', [
            ('v212', '(*(int64_t *)(void *)sr_reset_spawn_position)'),
            ('v213', '(*(int64_t *)(void *)(sr_reset_spawn_position+2))')]),
        pair('sr_reset_player_position', 'v214', 'v215'),
        rotation('sr_reset_spawn_rotation', 'v219', 'v220', 'v221')])
    source = source[:a]+body+source[b:]
    a, b, body = region(source, 0x53840)
    body = objects(body, [pair('sr_human_spawn_velocity', 'v42', 'v43', 'int')])
    source = source[:a]+body+source[b:]
    a, b, body = region(source, 0x5bca0)
    body = objects(body, [pair('sr_vehicle_spawn_inertia', 'v111', 'v112'),
        ('  _Alignas(8) unsigned sr_vehicle_joint_offset[3];', [
            ('v114', '(*(char **)(void *)sr_vehicle_joint_offset)'),
            ('v115', 'sr_vehicle_joint_offset[2]')])])
    source = source[:a]+body+source[b:]
    a, b, body = region(source, 0x61950)
    body = objects(body, [('  _Alignas(16) unsigned sr_train_spawn_rotation[12];', [
        ('v8', '((_OWORD *)(void *)sr_train_spawn_rotation)'),
        ('v9', 'sr_train_spawn_rotation[8]')])])
    axis = b'(float *)&dword_1402F6188'
    if body.count(axis) != 1:
        raise ValueError('Train spawn axis changed')
    body = body.replace(b'  v0 = 0;', b'  const float sr_train_spawn_axis[3] = {0.0f, 1.0f, 0.0f};\n  v0 = 0;', 1)
    body = body.replace(axis, b'(float *)sr_train_spawn_axis')
    return source[:a]+body+source[b:], {'recovered_practice_spawn_objects': 7,
                                      'recovered_train_spawn_axis': 1}
