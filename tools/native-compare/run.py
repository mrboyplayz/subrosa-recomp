"""Build and run native comparisons (see nc.h).

    python tools/native-compare/run.py [suite ...] [--cases N] [--out DIR]
    python tools/native-compare/run.py physicsmotion --client-wrappers

A suite is tools/native-compare/t_<suite>.c. Each is built as a native
program (original machine code) and a port program (src/engine/), both are
run, and their outputs must be identical line for line. Exit status is 0
only if every suite matched.

The installed game is found through SUBROSA_GAME_DIR (default:
subrosaactual/ in the repository). gcc and nm must be on PATH.
"""
import argparse
import difflib
import hashlib
import importlib.util
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROJECT = HERE.parent.parent
GAME_DIR = Path(os.environ.get('SUBROSA_GAME_DIR') or PROJECT / 'subrosaactual')
ENGINE_FLAGS = ['-std=gnu11', '-O2', '-msse4.2', '-mcmodel=large', '-fno-strict-aliasing',
                '-ffp-contract=off']
HARNESS_FLAGS = ['-std=gnu11', '-O1', '-msse4.2', '-mcmodel=large', '-fno-strict-aliasing',
                 '-ffp-contract=off', '-Wall', '-Wno-unused-function']
LINK_FLAGS = ['-Wl,--image-base,0x1B5000000', '-Wl,--disable-dynamicbase',
              '-Wl,--disable-high-entropy-va', '-static', '-lm']
COMPILER = ['ccache', 'gcc'] if shutil.which('ccache') else ['gcc']
# Symbols named after an original address resolve to that address.
ADDRESS_SYMBOL = re.compile(r'^(?:sub|dword|qword|byte|word|flt|dbl|unk|off|xmmword|stru|asc|loc)_(1[0-9A-Fa-f]{8})$')


def run(command, **kw):
    result = subprocess.run(command, capture_output=True, text=True, errors='replace', **kw)
    if result.returncode:
        sys.stderr.write(' '.join(map(str, command)) + '\n' + result.stdout + result.stderr)
        raise SystemExit('command failed')
    return result


def compile_objects(sources, flags, directory, defines):
    objects = []
    for source in sources:
        obj = directory / (source.stem + '.o')
        run(COMPILER + ['-c', str(source), '-o', str(obj), '-I', str(HERE), '-I', str(PROJECT / 'src/engine')]
            + flags + defines)
        objects.append(obj)
    return objects


def undefined(objects):
    names, defined = set(), set()
    for line in run(['nm'] + [str(o) for o in objects]).stdout.splitlines():
        parts = line.split()
        if len(parts) == 2 and parts[0] == 'U':
            names.add(parts[1])
        elif len(parts) == 3 and parts[1] != 'U':
            defined.add(parts[2])
    return names - defined


def client_function_names():
    """Names given to original functions (src/client/names.tsv): name -> address."""
    names = {}
    for line in (PROJECT / 'src/client/names.tsv').read_text(encoding='utf-8').splitlines():
        if line.strip() and not line.startswith('#'):
            address, name = line.split()
            names[name] = address
    return names


def link(objects, program, directory, port):
    """Link; in the port build address-named symbols become absolute and any
    other unresolved name becomes a trap that reports the call."""
    # Both builds: the fixture reaches state through the engine's headers.
    # Names given to original functions and pointers (src/client/names.tsv) too.
    named = client_function_names()
    defsyms = ['-Wl,--defsym,%s=0x%s' % (n, ADDRESS_SYMBOL.match(n).group(1) if ADDRESS_SYMBOL.match(n) else named[n])
               for n in sorted(undefined(objects)) if ADDRESS_SYMBOL.match(n) or n in named]
    command = ['gcc'] + [str(o) for o in objects] + ['-o', str(program)] + LINK_FLAGS + defsyms
    result = subprocess.run(command, capture_output=True, text=True, errors='replace')
    if result.returncode and port:
        missing = sorted(set(re.findall(r"undefined reference to `([^']+)'", result.stderr)))
        if missing:
            stub = directory / 'traps.c'
            stub.write_text('#include <stdio.h>\n#include <stdlib.h>\n' + ''.join(
                'void %s(void){fflush(stdout);printf("trap: unresolved %s\\n");exit(3);}\n' % (n, n)
                for n in missing), encoding='utf-8')
            objects = list(objects) + compile_objects([stub], HARNESS_FLAGS, directory, [])
            (directory / 'traps.txt').write_text('\n'.join(missing) + '\n', encoding='utf-8')
            command = ['gcc'] + [str(o) for o in objects] + ['-o', str(program)] + LINK_FLAGS + defsyms
            result = subprocess.run(command, capture_output=True, text=True, errors='replace')
    if result.returncode:
        sys.stderr.write(result.stderr[-4000:])
        raise SystemExit('link failed: ' + program.name)


def compile_client_wrappers(test, directory):
    """Compile the real client entry points requested by a fixture.

    Select definitions by their original-address comments, as client names
    may have changed. Keep their includes and use the game's compiler flags.
    The wrapper bodies themselves are never copied into a maintained fixture.
    """
    marker = re.search(r'^// NC_WRAPPERS: (.+)$', test.read_text(encoding='utf-8'), re.M)
    if not marker:
        raise SystemExit('suite does not declare NC_WRAPPERS: ' + test.name)
    sources = [p.read_text(encoding='utf-8') for p in sorted((PROJECT / 'src/client').glob('client_*.c'))]
    includes, definitions = [], []
    for address in marker.group(1).split():
        pattern = re.compile(r'^//----- \(0*' + re.escape(address) + r'\)[^\n]*\n'
                             r'(?://[^\n]*\n)*([^\n]+(?:\n[ \t]+[^\n]+)*\n\{\n.*?^\})', re.M | re.S)
        matches = [(source, match) for source in sources for match in pattern.finditer(source)]
        if len(matches) != 1:
            raise SystemExit('expected one client definition for ' + address)
        source, match = matches[0]
        for include in re.findall(r'^#include [^\n]+', source[:source.index('//-----')], re.M):
            if include not in includes:
                includes.append(include)
        definitions.append(match.group(1))
    wrapper = directory / 'client_wrappers.c'
    wrapper.write_text('\n'.join(includes + definitions) + '\n', encoding='utf-8')
    spec = importlib.util.spec_from_file_location('client_build', PROJECT / 'scripts/build.py')
    client_build = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(client_build)
    return compile_objects([wrapper], client_build.CLIENT_FLAGS, directory, [])


def build(suite, out, engine_dir, client_wrappers=False):
    test = HERE / ('t_%s.c' % suite)
    define = ['-DNC_GAME_EXE="%s"' % (GAME_DIR / 'subrosa.exe').as_posix()]
    programs = {}
    for mode in ('native', 'port'):
        directory = out / suite / mode
        directory.mkdir(parents=True, exist_ok=True)
        flags = define + (['-DNC_NATIVE'] if mode == 'native' else [])
        if client_wrappers and mode == 'port':
            flags += ['-DNC_CLIENT_WRAPPERS']
        objects = compile_objects([test, HERE / 'nc.c'], HARNESS_FLAGS, directory, flags)
        if mode == 'port':
            objects += compile_objects(sorted(engine_dir.glob('*.c')), ENGINE_FLAGS, directory, [])
            if client_wrappers:
                objects += compile_client_wrappers(test, directory)
        program = directory / ('t_%s_%s.exe' % (suite, mode))
        link(objects, program, directory, mode == 'port')
        programs[mode] = program
    return programs


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('suites', nargs='*')
    parser.add_argument('--cases', type=int, default=1000)
    parser.add_argument('--out', type=Path, default=PROJECT / 'build/native-compare')
    parser.add_argument('--engine-dir', type=Path, default=PROJECT / 'src/engine')
    parser.add_argument('--client-wrappers', action='store_true',
                        help='compare actual client entry points (suite must declare NC_WRAPPERS)')
    parser.add_argument('--timeout', type=int, default=300, help='seconds per program run')
    args = parser.parse_args()
    suites = args.suites or sorted(p.stem[2:] for p in HERE.glob('t_*.c'))
    env = dict(os.environ, CASES=str(args.cases))
    failed = []
    for suite in suites:
        programs = build(suite, args.out, args.engine_dir, args.client_wrappers)
        outputs = {}
        for mode, program in programs.items():
            try:
                result = subprocess.run([str(program)], capture_output=True, text=True, errors='replace', env=env,
                                        cwd=str(program.parent), timeout=args.timeout)
                text = result.stdout + ('exit %d\n' % result.returncode)
            except subprocess.TimeoutExpired as hung:
                # A program that does not finish differs from one that does.
                out = hung.stdout.decode(errors='replace') if isinstance(hung.stdout, bytes) else (hung.stdout or '')
                text = out + 'timeout after %d s\n' % args.timeout
            (program.parent / 'output.txt').write_text(text, encoding='utf-8')
            outputs[mode] = text.splitlines()
        if outputs['native'][-1:] != ['exit 0']:
            # The original itself did not run through (no game executable, a crash): nothing was compared.
            failed.append(suite)
            print('%-24s NATIVE FAILED  %s' % (suite, (outputs['native'] or ['no output'])[0]))
        elif outputs['native'] == outputs['port']:
            print('%-24s identical  %d lines  sha256 %s' % (suite, len(outputs['native']),
                  hashlib.sha256('\n'.join(outputs['native']).encode()).hexdigest()[:16]))
        else:
            failed.append(suite)
            diff = list(difflib.unified_diff(outputs['native'], outputs['port'], 'native', 'port', n=2, lineterm=''))
            print('%-24s DIFFERENT  (%d diff lines)' % (suite, len(diff)))
            print('\n'.join(diff[:40]))
    return 1 if failed else 0


if __name__ == '__main__':
    raise SystemExit(main())
