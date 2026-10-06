"""Export original active-ragdoll code through the installed IDA Pro library.

Does not save changes to the input database or executable. Every exported
function chunk is checked against the pinned original executable.
"""
import os
import sys
from pathlib import Path

IDA = Path(r'C:\Program Files\IDA Professional 9.3')
os.environ['IDADIR'] = str(IDA)
sys.path.insert(0, str(IDA / 'idalib/python'))
import idapro
import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import ida_nalt
import idautils
import idc
import hashlib
import json
import pefile

PROJECT = Path(__file__).resolve().parents[1]
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
FUNCTIONS = [
    (0x138770, 'bone_templates'), (0x53840, 'human_create'),
    (0x5cf80, 'rigid_body_create'), (0xab7b0, 'skeleton_create'),
    (0x55fa0, 'human_joint_create'), (0xaaaa0, 'human_collision_setup'),
    (0xa21b0, 'player_input'), (0xbe010, 'human_update'),
    (0xad2b0, 'upper_body_control'), (0xbca30, 'balance_leg_control'),
    (0xba210, 'ragdoll_leg_control'), (0xb78f0, 'climb_leg_control'),
    (0xb9d90, 'vehicle_leg_control'), (0xb1450, 'limb_ik_drive'),
    (0xa9940, 'joint_limits'), (0xb2bf0, 'relative_velocity_limit'),
    (0xa9ef0, 'joint_target_store'), (0xac890, 'support_query'),
    (0xb2440, 'pelvis_support'), (0xb40b0, 'limb_support'),
    (0xbaa40, 'leg_ground_query'), (0xbb6b0, 'foot_ground_query'),
    (0xbbf30, 'leg_orientation'), (0xabb10, 'human_mean_pose'),
    (0xb2e70, 'human_world_contacts'), (0xb91e0, 'ground_ray'),
    (0xdc050, 'scene_ray'), (0xd6b60, 'map_grid_ray'),
    (0xdc650, 'cell_ray_intersection'), (0x77fa0, 'triangle_ray_intersection'),
    (0xd1830, 'terrain_ray'), (0x116210, 'simulation_tick'),
    (0x12b2d0, 'angular_integration'), (0x1c780, 'joint_prepare'),
    (0x1bf70, 'joint_solve'), (0x1cbb0, 'anchor_solve'),
    (0x1d080, 'physics_step'), (0x932d0, 'pose_interpolate'),
    (0x22df0, 'character_pose_assemble'), (0xc2f90, 'orientation_blend'),
]


def main():
    original = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest() != PIN:
        raise ValueError('Original executable hash mismatch')
    pe = pefile.PE(str(original), fast_load=True)
    database = PROJECT / 'work/model-pipeline.i64'
    if idapro.open_database(str(database), False):
        raise RuntimeError('IDA could not open the original database')
    try:
        if not ida_hexrays.init_hexrays_plugin():
            raise RuntimeError('Hex-Rays decompiler unavailable')
        out = PROJECT / 'reports/active-ragdoll-ida-20261006'
        out.mkdir(parents=True, exist_ok=True)
        rows = []
        for rva, label in FUNCTIONS:
            address = 0x140000000 + rva
            func = ida_funcs.get_func(address)
            if not func or func.start_ea != address:
                raise ValueError(f'Unexpected function at {address:x}')
            chunks = list(idautils.Chunks(address))
            for start, end in chunks:
                data = ida_bytes.get_bytes(start, end - start)
                if data != pe.get_data(start - 0x140000000, end - start):
                    raise ValueError(f'Database bytes differ at {start:x}')
            stem = f'{address:016x}_{label}'
            cfunc = ida_hexrays.decompile(address)
            if cfunc is None:
                raise ValueError(f'Cannot decompile {address:x}')
            (out / (stem + '.c')).write_text(str(cfunc), encoding='utf-8')
            assembly = []
            calls = []
            for ea in idautils.FuncItems(address):
                if not ida_bytes.is_code(ida_bytes.get_flags(ea)):
                    continue
                assembly.append(f'{ea:016x}\t{ida_lines.tag_remove(idc.generate_disasm_line(ea, 0))}')
                if idc.print_insn_mnem(ea).lower() == 'call':
                    targets = list(idautils.CodeRefsFrom(ea, False))
                    calls.append({'site': hex(ea), 'targets': [hex(t) for t in targets],
                                  'instruction': assembly[-1].split('\t', 1)[1]})
            (out / (stem + '.asm.tsv')).write_text('\n'.join(assembly) + '\n', encoding='utf-8')
            rows.append({'address': hex(address), 'label': label, 'name': idc.get_func_name(address),
                         'chunks': [[hex(a), hex(b)] for a, b in chunks],
                         'callers': [hex(ea) for ea in idautils.CodeRefsTo(address, False)],
                         'calls': calls, 'bytes_match_original': True, 'instructions': len(assembly)})
            print(f'{label}: {len(assembly)} original instructions exported', flush=True)
        result = {'original_sha256': PIN, 'ida_version': idapro.get_library_version(),
                  'database_input': ida_nalt.get_input_file_path(), 'functions': rows}
        (out / 'manifest.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
        print(f'{len(rows)} active-ragdoll functions exported and byte-verified', flush=True)
    finally:
        idapro.close_database(False)


if __name__ == '__main__':
    main()
