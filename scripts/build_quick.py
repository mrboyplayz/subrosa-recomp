"""Incremental developer build: python scripts/build_quick.py [--assets GAME_DIR].

Minimal symbols (-g1) keep line numbers and stack traces; --full-symbols keeps
local variables too. Engine optimization and FP flags match the normal build.
"""
import argparse
import json
import shutil
import shlex
import subprocess
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

import build

QUICK = build.PROJECT / 'build/quick'
OUTPUT = build.PROJECT / 'dist/quick'


def dependency_paths(depfile):
    # GCC escapes spaces and emits forward slashes even on Windows. A drive
    # colon is followed by '/', whereas the Make rule separator has whitespace.
    text = depfile.read_text().replace('\\\n', ' ')
    body = text.split(': ', 1)[1]
    return [Path(p.replace('$$', '$')) for p in shlex.split(body, comments=False)]


def signature(paths):
    return {str(p.resolve()): [p.stat().st_mtime_ns, p.stat().st_size] for p in paths}


def cached_step(target, inputs, args, label, depfile=None, dry_run=False, force=False):
    args = [str(a).replace('\\', '/') for a in args]
    stamp = target.with_suffix(target.suffix + '.cache.json')
    try:
        old = json.loads(stamp.read_text())
        dependencies = [Path(p) for p in old['inputs']]
        fresh = (not force and target.is_file() and old['command'] == args and
                 old['inputs'] == signature(dependencies) and
                 old['output'] == signature([target]))
        if fresh:
            return False
    except (OSError, ValueError, KeyError, TypeError):
        pass
    print(label, flush=True)
    if dry_run:
        return True
    stamp.unlink(missing_ok=True)
    result = subprocess.run(args, cwd=build.PROJECT, capture_output=True, text=True, errors='replace')
    target.with_suffix(target.suffix + '.log').write_text(result.stdout + result.stderr, encoding='utf-8')
    if result.returncode:
        raise RuntimeError(label + ' failed; see ' + str(target.with_suffix(target.suffix + '.log')))
    dependencies = list(inputs) + [Path(args[0])]
    if depfile:
        dependencies += dependency_paths(depfile)
    record = {'command': args, 'inputs': signature(dependencies), 'output': signature([target])}
    stamp.write_text(json.dumps(record), encoding='utf-8')
    return True


def compile_incremental(jobs=4, full_symbols=False, dry_run=False):
    QUICK.mkdir(parents=True, exist_ok=True)
    folder = QUICK / 'objects'
    folder.mkdir(exist_ok=True)
    tools = {}
    for name in ('gcc', 'dlltool'):
        found = shutil.which(name)
        if not found:
            build.fail(name + ' must be on PATH')
        tools[name] = Path(found).resolve()
    objects, tasks = [], []
    for source, flags in build.compilation_units():
        obj = folder / (source.stem + '.obj')
        if obj in objects:
            build.fail('duplicate object filename: ' + str(obj))
        objects.append(obj)
        flags = [('-g1' if f == '-g' and not full_symbols else f) for f in flags]
        dep = obj.with_suffix('.d')
        args = [tools['gcc'], *flags, '-MMD', '-MF', dep, '-MT', 'object', '-c', source, '-o', obj]
        tasks.append((obj, [source], args, 'CC ' + source.name, dep))
    data = {}
    for name in list(build.LINKED_DATA) + ['codec_storage', 'time_vtable', 'client_native_gaps']:
        source = build.SRC / 'rebuild/client_link' / (name + '.s')
        obj = folder / (name + '.obj')
        data[name] = obj
        tasks.append((obj, [source], [tools['gcc'], '-c', source, '-o', obj], 'AS ' + name, None))
    libraries = []
    for definition in sorted((build.SRC / 'rebuild').glob('*.def')):
        library = QUICK / ('lib' + definition.stem + '.a')
        libraries.append(library)
        tasks.append((library, [definition], [tools['dlltool'], '-m', 'i386:x86-64', '-d', definition,
                                              '-l', library], 'IMPORT ' + definition.stem, None))
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        changed = list(pool.map(lambda t: cached_step(*t, dry_run=dry_run), tasks))
    exe = QUICK / 'subrosa-recomp.exe'
    # Response file avoids Windows command-line length limits.
    link_args = build.link_command(objects, data, libraries, exe)[1:]
    response = QUICK / 'link.rsp'
    contents = subprocess.list2cmdline([str(a).replace('\\', '/') for a in link_args])
    if not response.exists() or response.read_text() != contents:
        response.write_text(contents, encoding='utf-8')
    linked = cached_step(exe, objects + list(data.values()) + libraries + [response],
                         [tools['gcc'], '@' + str(response)], 'LINK subrosa-recomp.exe',
                         dry_run=dry_run, force=any(changed))
    action = ('would link' if dry_run else 'linked') if linked else 'no link needed'
    print('%d compile/import steps; %s' % (sum(changed), action))
    return exe


def copy_changed(source, target):
    if target.exists() and (source.stat().st_size, source.stat().st_mtime_ns) == (
            target.stat().st_size, target.stat().st_mtime_ns):
        return
    shutil.copy2(source, target)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--jobs', type=int, default=4, help='parallel jobs (default: 4 to limit compiler memory)')
    parser.add_argument('--assets', type=Path, help='installed game directory; linked into dist/quick')
    parser.add_argument('--full-symbols', action='store_true', help='full symbols instead of lightweight -g1')
    parser.add_argument('--compile-only', action='store_true', help='compile/link without SDL downloads or packaging')
    parser.add_argument('--dry-run', action='store_true', help='show what would rebuild')
    args = parser.parse_args()
    if args.jobs < 1:
        parser.error('--jobs must be positive')
    started = time.perf_counter()
    try:
        exe = compile_incremental(args.jobs, args.full_symbols, args.dry_run)
    except RuntimeError as error:
        build.fail(str(error))
    if args.dry_run:
        return
    if not args.compile_only:
        sdl = next((p for p in [build.SDL_BUILD / 'SDL2.dll', build.DIST / 'SDL2.dll',
                                OUTPUT / 'SDL2.dll'] if p.is_file()), None)
        if sdl is None:
            sdl = build.build_sdl()
        OUTPUT.mkdir(parents=True, exist_ok=True)
        try:
            copy_changed(exe, OUTPUT / exe.name)
            if sdl.resolve() != (OUTPUT / 'SDL2.dll').resolve():
                copy_changed(sdl, OUTPUT / 'SDL2.dll')
        except PermissionError:
            build.fail('close the quick-build game before replacing it; linked executable is in ' + str(QUICK))
        if args.assets:
            build.DIST = OUTPUT
            build.link_assets(args.assets.resolve())
        exe = OUTPUT / exe.name
    print('Ready: %s (%.2f seconds)' % (exe, time.perf_counter() - started))


if __name__ == '__main__':
    main()
