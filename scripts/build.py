"""Build the recompiled Sub Rosa client.

    python scripts/build.py [--assets GAME_FOLDER] [--jobs N]

Compiles src/client (the recompiled game, built as the decompiler left it:
unoptimized, with its pointer/integer conversions downgraded to warnings),
src/engine (the readable rewrite, optimized), the data and machine code
recovered into src/rebuild/client_link, and the small hand-written runtime
pieces; links them into dist/subrosa-recomp.exe; and builds SDL2.dll from the
official SDL source (release-2.0.12, the version the game shipped with; with
2.32 about half of all launches end in heap corruption during audio start-up).
Nothing is read from an installed copy of the game.

The game's own files must sit next to the executable to run it: data/, font/,
sound/, texture/, the config_*.txt files, subrosa.bmp, gamecontrollerdb.txt,
default-48000.mhr and steam_api64.dll with steam_appid.txt. --assets links the
asset folders of an installed game into dist/ (directory junctions) and copies
the small files; it never takes subrosa.exe or the game's SDL2.dll.

gcc, dlltool, cmake, ninja and git must be on PATH. Compiler output goes to
build/client/; warnings of each file are kept in its .log there.
"""
import argparse
import os
import shutil
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
SRC = PROJECT / 'src'
BUILD = PROJECT / 'build/client'
DIST = PROJECT / 'dist'
SDL_TAG = 'release-2.0.12'
SDL_SOURCE = PROJECT / 'build/sdl2012-src'
SDL_BUILD = PROJECT / 'build/sdl2012-build'

COMMON = ['-x', 'c', '-std=gnu11', '-msse4.2', '-mcmodel=large', '-fno-strict-aliasing', '-g']
# The recompiled client: the decompiler's output stores pointers through
# integer views and calls functions it never declared, which GCC treats as
# errors by default.
CLIENT_FLAGS = COMMON + ['-O0', '-fms-extensions', '-Wa,-mbig-obj', '-DSR_CLIENT_DEBUG_CONSOLE',
                         '-I', str(SRC / 'client'), '-I', str(SRC / 'rebuild'),
                         '-include', str(SRC / 'rebuild/export_compat.h'),
                         '-Wno-error=int-conversion', '-Wno-error=incompatible-pointer-types',
                         '-Wno-error=pointer-to-int-cast', '-Wno-error=int-to-pointer-cast',
                         '-Wno-error=implicit-function-declaration', '-Wno-error=return-mismatch',
                         '-Wno-error=implicit-int']
# The engine is ordinary C. Contraction would fuse multiplies and adds that
# the original rounds separately.
ENGINE_FLAGS = COMMON + ['-O2', '-ffp-contract=off', '-Wall', '-Wextra']
# The small hand-written runtime pieces.
LEAF_FLAGS = ['-O0', '-mcmodel=large']
WINDOW_FLAGS = ['-std=gnu11', '-O0', '-g', '-mcmodel=large']
IMPORT_SHIM_FLAGS = ['-std=gnu11', '-fms-extensions', '-mcmodel=large', '-I', str(SRC / 'client'), '-I', str(SRC / 'rebuild'),
                                     '-include', str(SRC / 'rebuild/export_compat.h'),
                                     '-include', str(SRC / 'client/recovered_imports.h')]
LINK_LIBRARIES = ['-mwindows', '-static', '-static-libgcc', '-lkernel32', '-luser32', '-lshell32', '-lwsock32',
                  '-lwinmm', '-lopengl32', '-lm']
# Assembled in this order, ahead of the C runtime pieces (link order as the
# original layout was recovered with).
LINKED_DATA = ('math_constants', 'storage_aliases', 'pointer_storage', 'named_data', 'spelling_table',
               'startup_storage')


def fail(message):
    sys.exit('build failed: ' + message)


def run(command, log=None, cwd=PROJECT, env=None):
    result = subprocess.run(command, cwd=cwd, env=env, capture_output=log is not None, text=True, errors='replace')
    if log is not None:
        log.write_text(result.stdout + result.stderr, encoding='utf-8')
    return result.returncode


def compile_c(source, flags, objects):
    target = objects / (source.stem + '.obj')
    if run(['gcc', *flags, '-c', str(source), '-o', str(target)], objects / (source.stem + '.log')):
        return None, source
    return target, source


def compile_all(jobs):
    objects = BUILD / 'objects'
    objects.mkdir(parents=True, exist_ok=True)
    work = [(s, CLIENT_FLAGS) for s in sorted((SRC / 'client').glob('client_*.c'))]
    work += [(s, ENGINE_FLAGS) for s in sorted((SRC / 'engine').glob('*.c'))]
    work += [(SRC / 'recovered/client_leaf.c', LEAF_FLAGS), (SRC / 'client/import_shim.c', IMPORT_SHIM_FLAGS),
             (SRC / 'recovered/client_dname.c', LEAF_FLAGS), (SRC / 'rebuild/client_window_mode.c', WINDOW_FLAGS),
             (SRC / 'rebuild/client_debug_console.c', WINDOW_FLAGS + ['-Wall', '-Wextra', '-Werror'])]
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        results = list(pool.map(lambda item: compile_c(item[0], item[1], objects), work))
    failed = [source.name for target, source in results if target is None]
    if failed:
        fail('could not compile %s (see the .log files in %s)' % (', '.join(failed), objects))
    return [target for target, source in results]


def assemble_linked_data():
    objects = BUILD / 'objects'
    names = list(LINKED_DATA) + ['codec_storage', 'time_vtable', 'client_native_gaps']
    for name in names:
        if run(['gcc', '-c', str(SRC / 'rebuild/client_link' / (name + '.s')), '-o', str(objects / (name + '.obj'))],
               objects / (name + '.log')):
            fail('could not assemble %s.s' % name)
    return {name: objects / (name + '.obj') for name in names}


def import_libraries():
    libraries = []
    for definition in sorted((SRC / 'rebuild').glob('*.def')):
        library = BUILD / ('lib' + definition.stem + '.a')
        if run(['dlltool', '-m', 'i386:x86-64', '-d', str(definition), '-l', str(library)],
               BUILD / (definition.stem + '-imports.log')):
            fail('dlltool failed for ' + definition.name)
        libraries.append(library)
    return libraries


def link(objects, data, libraries):
    by_stem = {o.stem: o for o in objects}
    runtime = ['client_leaf', 'import_shim']
    late = ['client_dname']
    tail = ['client_window_mode', 'client_debug_console']
    leading = [o for o in objects if o.stem not in runtime + late + tail]
    command = (['gcc'] + [str(o) for o in leading] + [str(data[n]) for n in LINKED_DATA]
               + [str(by_stem[n]) for n in runtime] + [str(data['codec_storage']), str(data['time_vtable'])]
               + [str(by_stem[n]) for n in late] + [str(data['client_native_gaps'])]
               + [str(by_stem[n]) for n in tail] + [str(l) for l in libraries]
               # The recompiled WinMain was renamed so that it does not clash with the C runtime's.
               + ['-Wl,--defsym,WinMain=WinMain_sr', '-o', str(BUILD / 'subrosa-recomp.exe')] + LINK_LIBRARIES)
    if run(command, BUILD / 'link.log'):
        fail('link failed (see %s)' % (BUILD / 'link.log'))
    return BUILD / 'subrosa-recomp.exe'


def build_sdl():
    if (SDL_BUILD / 'SDL2.dll').is_file():
        return SDL_BUILD / 'SDL2.dll'
    if not SDL_SOURCE.is_dir():
        if run(['git', 'clone', '--depth', '1', '--branch', SDL_TAG, 'https://github.com/libsdl-org/SDL.git',
                str(SDL_SOURCE)]):
            fail('could not fetch SDL ' + SDL_TAG)
    # SDL 2.0.12's CMake looks for the old DirectX SDK; MinGW's own DirectX headers do.
    env = dict(os.environ, DXSDK_DIR=str(Path(shutil.which('gcc')).resolve().parent.parent / 'x86_64-w64-mingw32'))
    if run(['cmake', '-S', str(SDL_SOURCE), '-B', str(SDL_BUILD), '-G', 'Ninja', '-DCMAKE_POLICY_VERSION_MINIMUM=3.5',
            '-DCMAKE_BUILD_TYPE=Release', '-DCMAKE_C_COMPILER=gcc', '-DSDL_SHARED=ON', '-DSDL_STATIC=OFF',
            '-DCMAKE_SHARED_LINKER_FLAGS=-static-libgcc',
            '-DCMAKE_C_FLAGS=-fcommon -Wno-incompatible-pointer-types -Wno-int-conversion '
            '-Wno-implicit-function-declaration'], env=env):
        fail('could not configure SDL')
    if run(['cmake', '--build', str(SDL_BUILD), '-j', str(os.cpu_count() or 4)]):
        fail('could not build SDL')
    return SDL_BUILD / 'SDL2.dll'


ASSET_FOLDERS = ('data', 'font', 'sound', 'texture')
ASSET_FILES = ('config_round.txt', 'config_versus.txt', 'config_world.txt', 'subrosa.bmp', 'gamecontrollerdb.txt',
               'default-48000.mhr', 'steam_api64.dll', 'steam_appid.txt')


def link_assets(game):
    for name in ASSET_FOLDERS:
        target, junction = game / name, DIST / name
        if not target.is_dir():
            fail('%s has no %s folder' % (game, name))
        if not junction.exists():
            subprocess.run(['cmd', '/c', 'mklink', '/J', str(junction), str(target)], check=True,
                           stdout=subprocess.DEVNULL)
    for name in ASSET_FILES:
        if (game / name).is_file():
            shutil.copyfile(game / name, DIST / name)


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--assets', type=Path, help='installed game folder whose asset files dist/ should use')
    parser.add_argument('--jobs', type=int, default=os.cpu_count() or 4)
    args = parser.parse_args()

    BUILD.mkdir(parents=True, exist_ok=True)
    print('== Compiling', flush=True)
    objects = compile_all(args.jobs)
    data = assemble_linked_data()
    print('== Linking', flush=True)
    exe = link(objects, data, import_libraries())
    print('== SDL2', flush=True)
    sdl = build_sdl()

    DIST.mkdir(exist_ok=True)
    try:
        shutil.copyfile(exe, DIST / 'subrosa-recomp.exe')
        shutil.copyfile(sdl, DIST / 'SDL2.dll')
    except PermissionError:
        fail('dist/ is in use (is the game running?); the new build is in ' + str(BUILD))
    print('== Built', DIST / 'subrosa-recomp.exe', 'and', DIST / 'SDL2.dll')
    if args.assets:
        link_assets(args.assets)
        print('== dist/ is runnable: start', DIST / 'subrosa-recomp.exe')


if __name__ == '__main__':
    main()
