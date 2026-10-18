"""Give the client's OpenGL function pointers their names and prototypes.

The client loads every OpenGL function into a pointer (client_gl_loader.c:
slot = a1("glUseProgram")). The decompiler left those pointers named after
their address, typed by guesses, and called through casts:

    qword_1404042E0(renderer_ui_program);
    (*(void (**)(__int64))(unsigned int *)&g_144980D68)(3042);

This tool renames each pointer after the function it holds, gives it the
function's real type (PFNGL...PROC from MinGW's GL/glcorearb.h, or glext.h
for the few compatibility-profile functions), and rewrites the calls:

    glUseProgram(renderer_ui_program);
    glEnable(3042);

A call keeps its old cast when the decompiler's types put an argument in a
different kind of register (integer or floating point) than the real
prototype does, since only then would the rewrite change what is passed.
Otherwise the rewrite can change only how wide an integer argument is
written, which the callee does not look at.

Pointers kept in separate variables become variables named after the
function (src/client/client_data.c, declared in client_gl.h); the 26 OpenGL
1.0 pointers inside the state array become names in state_names.tsv.

    python tools/cleanup/gl_names.py      (then tools/cleanup/state_names.py)
"""
import re
import shutil
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent.parent
CLIENT = PROJECT / 'src/client'
GL_INCLUDE = Path(shutil.which('gcc')).resolve().parent.parent / 'x86_64-w64-mingw32/include/GL'
LOADER_LINE = re.compile(r'^(\s*)(?P<slot>\w+) = (?:\([^;]*\))?a1\("(?P<name>gl\w+)"\);', re.M)
TYPEDEF = re.compile(r'^typedef (?P<ret>[^;]*?)\s*\(APIENTRYP (?P<pfn>PFNGL\w+PROC)\) \((?P<params>[^;]*)\);$', re.M)
FLOATS = {'GLfloat', 'GLdouble', 'GLclampf', 'GLclampd', 'float', 'double'}


def kinds(params):
    """'F' for each floating-point parameter, 'I' for any other; None for (void)."""
    params = params.strip()
    if params in ('', 'void'):
        return ''
    out = []
    for p in params.split(','):
        p = p.strip()
        words = re.sub(r'\b(const|volatile)\b', '', p).replace('*', ' * ').split()
        if '*' in words:
            out.append('I')
            continue
        out.append('F' if any(w in FLOATS for w in words) else 'I')
    return ''.join(out)


def prototypes():
    core = (GL_INCLUDE / 'glcorearb.h').read_text(encoding='utf-8', errors='replace')
    ext = (GL_INCLUDE / 'glext.h').read_text(encoding='utf-8', errors='replace')
    found = {}
    for source, text in (('core', core), ('ext', ext)):
        for m in TYPEDEF.finditer(text):
            name = 'gl' + m.group('pfn')[5:-4]
            if m.group('pfn') not in {v[0] for v in found.values()}:
                ret = m.group('ret').strip()
                ret_kind = 'V' if ret == 'void' else 'F' if ret in ('GLfloat', 'GLdouble') else 'I'
                found.setdefault(m.group('pfn'), (m.group('pfn'), source, m.group(0), kinds(m.group('params')),
                                                  ret_kind))
    return found


def pfn_of(name):
    return 'PFN' + name.upper() + 'PROC'


def split_args(text):
    """Top-level comma split of a parameter list."""
    depth, out, cur = 0, [], ''
    for ch in text:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out


def cast_kinds(cast):
    """Kinds of a function-pointer cast's parameters: '... (**)(A, B)' or '... (*)(A, B)'."""
    m = re.search(r'\(\s*\*+\s*\)\s*\((.*)\)\s*$', cast.strip())
    if not m:
        return None
    return kinds(','.join(split_args(m.group(1))))


def main():
    loader = (CLIENT / 'client_gl_loader.c').read_text(encoding='utf-8')
    slots = {}
    for m in LOADER_LINE.finditer(loader):
        if re.fullmatch(r'[va]\d+', m.group('slot')):   # a local, not a slot
            continue
        slots.setdefault(m.group('slot'), m.group('name'))
    protos = prototypes()
    missing = [n for n in slots.values() if pfn_of(n) not in protos]
    if missing:
        sys.exit('no prototype for ' + ', '.join(missing))
    in_array = {s: n for s, n in slots.items() if s.startswith('g_')}
    symbols = {s: n for s, n in slots.items() if not s.startswith('g_')}

    # Declared kinds of the separate pointer variables.
    header_path = CLIENT / 'shared_client.h'
    header = header_path.read_bytes().decode('utf-8')
    declared, declared_types = {}, {}
    for m in re.finditer(r'^extern (?P<ret>[^;\n]*?)\(\s*\*(?P<sym>\w+)\)\((?P<params>[^;\n]*)\);', header, re.M):
        if m.group('sym') in symbols:
            declared[m.group('sym')] = kinds(m.group('params'))
            declared_types[m.group('sym')] = '%s (*)(%s)' % (m.group('ret').strip(), m.group('params'))

    # client_gl.h: the prototypes used, and the pointer variables.
    used = sorted(set(slots.values()))
    lines = ['/* OpenGL function pointers of the client, loaded by client_gl_loader.c.',
             ' * Generated by tools/cleanup/gl_names.py. Types come from MinGW\'s',
             ' * GL/glcorearb.h; the few compatibility-profile functions it lacks are',
             ' * typed from GL/glext.h below. The OpenGL 1.0 functions live in the shared',
             ' * state array and are named in client_state.h. */',
             '#ifndef SR_CLIENT_GL_H', '#define SR_CLIENT_GL_H', '', '#include <GL/glcorearb.h>', '']
    for name in used:
        pfn, source, text = protos[pfn_of(name)][:3]
        if source == 'ext':
            lines.append(text)
    lines.append('')
    for sym, name in sorted(symbols.items(), key=lambda kv: kv[1]):
        lines.append('extern %s %s;%s' % (pfn_of(name), name, ' ' * max(1, 40 - len(pfn_of(name) + name))
                                         + '/* %s */' % sym.split('_')[-1]))
    lines += ['', '#endif', '']
    (CLIENT / 'client_gl.h').write_text('\n'.join(lines), encoding='utf-8', newline='\n')

    # Declarations and definitions of the separate variables.
    for sym, name in symbols.items():
        header = re.sub(r'^extern [^;\n]*\b%s\b[^;\n]*;\n' % sym, '', header, flags=re.M)
    header = header.replace('#include "client_state.h"', '#include "client_gl.h"\n#include "client_state.h"')
    header_path.write_bytes(header.encode('utf-8'))
    data_path = CLIENT / 'client_data.c'
    data = data_path.read_bytes().decode('utf-8')
    for sym, name in symbols.items():
        # Whatever the decompiler typed the slot (a function pointer, an
        # integer, or _UNKNOWN, which is a char), it becomes the pointer it
        # holds; an initialized one stays initialized (in .data).
        data, n = re.subn(r'^(?!//)[^;\n]*\b%s\b[^;=\n]*(?P<init>= [^;\n]+)?;' % sym,
                          lambda m: '%s %s%s;' % (pfn_of(name), name, ' = NULL' if m.group('init') else ''),
                          data, flags=re.M)
        if n != 1:
            sys.exit('definition of %s not found' % sym)
    data_path.write_bytes(data.encode('utf-8'))

    # State-array slots: names and types in the table.
    table_path = CLIENT / 'state_names.tsv'
    table = table_path.read_text(encoding='utf-8')
    for slot, name in in_array.items():
        table, n = re.subn(r'^%s\t%s\t[^\t\n]+' % (slot[2:], slot), '%s\t%s\t%s' % (slot[2:], name, pfn_of(name)),
                           table, flags=re.M)
        if n != 1:
            sys.exit('state slot %s not in the table' % slot)
    table_path.write_text(table, encoding='utf-8', newline='\n')

    # Calls and other references in the code.
    kept = []

    def is_statement(text, start):
        """Whether the call at start stands as a statement of its own."""
        line_start = text.rfind('\n', 0, start) + 1
        before = text[line_start:start].strip()
        return before == '' or before.endswith((';', '{', '}')) or before == 'else'

    def arguments_end(text, open_paren):
        """Index of the parenthesis closing the one at open_paren."""
        depth, i, quote = 0, open_paren, None
        while i < len(text):
            ch = text[i]
            if quote:
                if ch == '\\':
                    i += 1
                elif ch == quote:
                    quote = None
            elif ch in '"\'':
                quote = ch
            elif ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
                if depth == 0:
                    return i
            i += 1
        raise ValueError('unbalanced call')

    def rewrite(text, start, open_paren, name, call_kinds, call_return, fallback):
        """The call text from start to its closing parenthesis, rewritten."""
        close = arguments_end(text, open_paren)
        args = split_args(text[open_paren + 1:close])
        real, real_return = protos[pfn_of(name)][3], protos[pfn_of(name)][4]
        if call_kinds is not None and call_kinds != real and call_kinds.startswith(real) and all(
                re.fullmatch(r'\s*(\w+|-?\d+)\s*', a) for a in args[len(real):]):
            # The decompiler passed registers the function does not read.
            args, call_kinds = args[:len(real)], real
        if call_kinds != real:
            kept.append((name, 'argument kinds %s' % call_kinds))
        elif not is_statement(text, start) and (real_return == 'V' or call_return != real_return):
            kept.append((name, 'value used'))
        else:
            return name + '(' + ','.join(args).strip() + ')', close
        return fallback + text[open_paren:close + 1], close

    def return_kind(ret):
        ret = ret.strip()
        if ret == 'void':
            return 'V'
        return 'F' if ret in ('float', 'double') else 'I'

    def cast_return(cast):
        m = re.match(r'\s*(.*?)\s*\(\s*\*+\s*\)', cast)
        return return_kind(m.group(1)) if m else None

    def rewrite_calls(text, pattern, resolve):
        out, pos = [], 0
        for m in pattern.finditer(text):
            if m.start() < pos:
                continue
            name, call_kinds, call_return, fallback = resolve(m)
            replacement, close = rewrite(text, m.start(), m.end() - 1, name, call_kinds, call_return, fallback)
            out.append(text[pos:m.start()])
            out.append(replacement)
            pos = close + 1
        out.append(text[pos:])
        return ''.join(out)

    def call_in_array(m):
        slot, cast = m.group('slot'), m.group('cast')
        return in_array[slot], cast_kinds(cast), cast_return(cast), m.group(0)[:-1].replace(slot, in_array[slot])

    def call_cast_symbol(m):
        sym, cast = m.group('sym'), m.group('cast')
        return symbols[sym], cast_kinds(cast), cast_return(cast), '((%s)%s)' % (cast, symbols[sym])

    def call_symbol(m):
        sym = m.group('sym')
        return (symbols[sym], declared.get(sym), return_kind(declared_types[sym].split('(*)')[0]),
                '((%s)%s)' % (declared_types[sym], symbols[sym]))

    sym_alt = '|'.join(map(re.escape, symbols))
    slot_alt = '|'.join(map(re.escape, in_array))
    # Casts never span lines; a pattern that could would swallow the code between.
    in_array_call = re.compile(r'\(\*\((?P<cast>[^&;\n]*?)\)\(unsigned int \*\)&(?P<slot>%s)\)\(' % slot_alt)
    cast_symbol_call = re.compile(r'\(\((?P<cast>[^;\n]*?\(\s*\*\s*\)\s*\([^;\n]*?\))\)(?P<sym>%s)\)\(' % sym_alt)
    symbol_call = re.compile(r'(?<![\w&*])(?P<sym>%s)\(' % sym_alt)
    any_symbol = re.compile(r'\b(%s)\b' % sym_alt)
    loader_assign = re.compile(r'^([ \t]*)(?P<slot>%s|%s) = (?:\([^;\n]*\))?a1\("(?P<name>gl\w+)"\);'
                               % (sym_alt, slot_alt), re.M)
    changed = 0
    for path in sorted(CLIENT.glob('*.c')):
        if path.name == 'client_data.c':
            continue
        text = path.read_bytes().decode('utf-8')
        new = loader_assign.sub(lambda m: '%s%s = (%s)a1("%s");' % (m.group(1), m.group('name'),
                                                                   pfn_of(m.group('name')), m.group('name')), text)
        new = rewrite_calls(new, in_array_call, call_in_array)
        new = rewrite_calls(new, cast_symbol_call, call_cast_symbol)
        new = rewrite_calls(new, symbol_call, call_symbol)
        new = any_symbol.sub(lambda m: symbols[m.group(1)], new)
        if new != text:
            path.write_bytes(new.encode('utf-8'))
            changed += 1
    # The pointer variables' original addresses, for tools that resolve names.
    names_path = CLIENT / 'names.tsv'
    names = names_path.read_text(encoding='utf-8')
    rows = ''.join('%s\t%s\n' % (sym.split('_')[-1], name) for sym, name in sorted(symbols.items())
                   if '\t%s\n' % name not in names)
    if rows:
        names_path.write_text(names.rstrip('\n') + '\n# OpenGL function pointers (tools/cleanup/gl_names.py)\n' + rows,
                              encoding='utf-8', newline='\n')
    print('%d OpenGL functions (%d in the state array); %d files changed; %d calls keep a cast'
          % (len(slots), len(in_array), changed, len(kept)))
    for (name, why), count in sorted(__import__('collections').Counter(kept).items()):
        print('  kept %3d: %s (%s)' % (count, name, why))


if __name__ == '__main__':
    main()
