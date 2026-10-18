"""Name the shader programs and their uniform locations in state_names.tsv.

The client keeps 32 shader program records of 240 bytes from 0x1515ACFC0:
the program, its vertex, fragment and geometry shader, then the locations of
the program's uniforms (each program uses its own slots). Programs are named
below after what they draw (judged by their uniforms); a uniform location is
named after its program and the uniform's name in the shader, as the code
looks it up: x = glGetUniformLocation(world_program, "clipplane") names x
world_u_clipplane.

    python tools/cleanup/shader_names.py && python tools/cleanup/state_names.py
"""
import re
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
CLIENT = PROJECT / 'src/client'
TABLE = CLIENT / 'state_names.tsv'
FIRST, SIZE, COUNT = 0x1515ACFC0, 240, 32
PROGRAMS = {
    0: 'world',          # city geometry from the texture atlas, shadows, reflections, clip plane
    1: 'object',         # the same lighting without the atlas
    2: 'lit',            # plain lit pieces with a cube map (effect pieces, world_effects_draw.c)
    3: 'model',          # a model placed by position and orientation
    4: 'skin',           # bone transforms (transform feedback)
    5: 'land_mask',      # land use mask
    6: 'sky',            # atmosphere scattering
    7: 'blur',           # separable blur
    8: 'terrain',        # terrain with detail, normal and mask textures
    9: 'shadow',         # shadow volumes
    10: 'texture_lod',   # a texture drawn at a chosen level of detail
    11: 'hdr',           # HDR colour and bloom composition
    12: 'water',         # water surface
}
SHADERS = ('program', 'vertex_shader', 'fragment_shader', 'geometry_shader')


def main():
    table = TABLE.read_text(encoding='utf-8')
    rows = {}
    for line in table.splitlines():
        if line and not line.startswith('#'):
            fields = line.split('\t')
            rows[int(fields[0], 16)] = fields
    names = {}   # address -> name
    for index, base in PROGRAMS.items():
        for k, what in enumerate(SHADERS):
            names[FIRST + SIZE * index + 4 * k] = '%s_%s' % (base, what)
    program_of = {name: base for address, name in names.items() for base in [name.rsplit('_program', 1)[0]]
                  if name.endswith('_program')}
    old_names = {fields[1]: address for address, fields in rows.items()}
    lookups = 0
    code = ''.join(p.read_text(encoding='utf-8') for p in sorted(CLIENT.glob('client_*.c')))
    for m in re.finditer(r'\b(\w+) = glGetUniformLocation\((\w+), "(\w+)"\)', code):
        target, program, uniform = m.groups()
        program_name = names.get(old_names.get(program), program)
        if target in old_names and program_name in program_of:
            names[old_names[target]] = '%s_u_%s' % (program_of[program_name], uniform)
            lookups += 1
    for address, name in names.items():
        if address in rows:
            rows[address][1] = name
    header = [l for l in table.splitlines() if l.startswith('#')]
    TABLE.write_text('\n'.join(header + ['\t'.join(rows[a]) for a in sorted(rows)]) + '\n', encoding='utf-8',
                     newline='\n')
    print('%d names (%d uniform locations)' % (len(names), lookups))


if __name__ == '__main__':
    main()
