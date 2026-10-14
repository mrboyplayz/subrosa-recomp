#!/bin/bash
# Compares the clean engine modules in src/engine with the original executable.
#
# Each test program runs twice with identical inputs: once calling the original
# routines inside re/binaries/subrosa-vanilla.exe, once calling the engine
# functions against the recompiled client's memory. Their outputs (results,
# resulting state, and every OpenGL call with its arguments) must be identical.
#
# Needs x86-64 Linux/WSL with gcc, python3 and llvm-nm or a PE-aware nm, or Windows
# with an x64 MinGW gcc/nm and Python under Git Bash/MSYS2.
# Run from anywhere:  tools/native-compare/run.sh
#   NATIVE_EXE  original client       (default re/binaries/subrosa-vanilla.exe)
#   RECOMP_EXE  a linked recomp build (default reports/current/link/client-link-probe.exe)
#   NATIVE_COMPARE_OUT  separate build/output folder for concurrent comparisons
#   NATIVE_COMPARE_ENGINE_DIR  engine source snapshot (default src/engine)
set -e -o pipefail
ROOT=$(cd "$(dirname "$0")/../.." && pwd); HERE=$ROOT/tools/native-compare; OUT=${NATIVE_COMPARE_OUT:-$ROOT/build/native-compare}
NATIVE=${NATIVE_EXE:-$ROOT/re/binaries/subrosa-vanilla.exe}
RECOMP=${RECOMP_EXE:-$ROOT/reports/current/link/client-link-probe.exe}
ENGINE_DIR=${NATIVE_COMPARE_ENGINE_DIR:-$ROOT/src/engine}
NM=$(command -v llvm-nm || command -v nm)
PY=$(for p in python3 python; do "$p" -c "" >/dev/null 2>&1 && { command -v "$p"; break; }; done)
# On Windows the loaded image occupies 0x140000000, the default base of a MinGW program, so the
# test programs are linked lower and without relocation.
case "$(uname -s)" in
  MINGW*|MSYS*|CYGWIN*) TEST_LDFLAGS="-Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase -D__USE_MINGW_ANSI_STDIO=1";;
  *) TEST_LDFLAGS="-no-pie";;
esac
mkdir -p "$OUT"
"$NM" "$RECOMP" > "$OUT/recomp.nm"
"$PY" "$HERE/mkmap.py" "$OUT/recomp.nm" "$OUT/recomp.map"

# The engine is built with the flags of scripts/check-rebuild.py plus the Windows calling convention.
FLAGS="-x c -std=gnu11 -mabi=ms -O2 -g -msse4.2 -mcmodel=large -fno-strict-aliasing -ffp-contract=off -fno-pie -fno-stack-protector -Wall -Wextra"
objs=()
for f in "$ENGINE_DIR"/*.c "$ENGINE_DIR"/items/*.c; do [ -e "$f" ] || continue; o="$OUT/$(basename "${f%.c}").o"; gcc $FLAGS -c "$f" -o "$o"; objs+=("$o"); done

# Point the engine's references to client storage at the loaded recomp image.
"$PY" - "$OUT" "${objs[@]}" <<'P'
import subprocess, sys
out, objects = sys.argv[1], sys.argv[2:]
symbols = {}
for line in open(out + '/recomp.nm'):
    part = line.split()
    if len(part) == 3 and part[1] in 'TtDdBbRrCc':
        symbols.setdefault(part[2], int(part[0], 16))
def names(flag):
    found = set()
    for o in objects:
        for line in subprocess.run(['nm', flag, o], capture_output=True, text=True).stdout.splitlines():
            found.add(line.split()[-1])
    return found
# Only client storage and routines (named after their original address, or sr_*) come from the recomp image; C library
# functions such as memcpy are linked from the host runtime.
import re
# Client routines the engine calls that carry a name of their own.
NAMED = {'asset_load_building_sbb_candidate', 'set_statfp', 'handle_errorf', 'handle_nanf_sr'}
# Original Winsock boundaries used by net_transport.c.
NAMED |= {'socket_sr', 'bind_sr', 'ioctlsocket_sr', 'closesocket_sr', 'htonl_sr', 'htons_sr', 'ntohl_sr', 'ntohs_sr', 'recvfrom_sr', 'sendto_sr'}
# C library names the client defines itself (the original's own routines): the engine's references to them are
# renamed in its objects, so the test program's own calls still reach the host library.
CLIENT_LIBM = {'acos': 'sr_client_acos', 'sin': 'sr_client_sin', 'cosf': 'sr_client_cosf', 'cos': 'sr_client_cos', 'rand': 'sr_client_rand', 'tan': 'sr_client_tan'}
for o in objects:
    undefined = {line.split()[-1] for line in subprocess.run(['nm', '-u', o], capture_output=True, text=True).stdout.splitlines()}
    renames = [a for n, alias in CLIENT_LIBM.items() if n in undefined for a in ('--redefine-sym', n + '=' + alias)]
    if renames:
        subprocess.run(['objcopy', *renames, o], check=True)
for n, alias in CLIENT_LIBM.items():
    if n in symbols:
        symbols[alias] = symbols[n]
NAMED |= set(CLIENT_LIBM.values())
wanted = sorted(n for n in names('-u') - names('--defined-only') if re.search(r'_1[0-9A-F]{8}$', n) or n.startswith('sr_') or n in NAMED)
missing = [n for n in wanted if n not in symbols]
open(out + '/engine.ld', 'w').write(''.join('%s = 0x%x;\n' % (n, symbols[n]) for n in wanted if n in symbols))
if missing:
    sys.exit('engine references symbols the recomp image does not define: ' + ', '.join(missing))
P

status=0
for t in ${TESTS:-renderer math camera text physics solve tick grid rotation sincos items vehicles crt frame ragdoll streets street_mesh collide trainhit rayhit wheelray vehsweep meshhit meshparts contact humanbounds vehexpire points itemremove blocks wheels drive walk body health feet legs hits steps particles balance swing particledraw stand jump bonehits itemactions itemblockpart iteminventory iteminventory_real itemphysics collisionhelpers collisionhelpers_real normalizeflags streetquery arms smalls levelsweep segtri models terrain cellmesh shapes layers softveh blockedit faces place patches shapebuild shapefinish patchmesh cubequads blockmore outline levelinit gridrebuild outlinebox netbits vehdamage vehcontrols vehwheel vehtrain vehtick vehhull vehheli vehwheeltri vehwheellevel vehwheelwhole vehwheelblocks vehwheellayer physcreate vehspawn trafficroute computerjobs itemtick missionscreens bot botroute player playerinput stocks playerteam inventory chat carshop nettransport computerpath netreplication trafficcar traffictick trafficspawn trafficnet vehremove vehbuild}; do
  gcc -O1 -g -fno-pie $TEST_LDFLAGS -I "$HERE" -o "$OUT/t_${t}_native" "$HERE/t_$t.c" -lm
  # (MinGW ld warns that the absolute client addresses do not fit the COFF symbol table; harmless.)
  gcc -O1 -g -fno-pie $TEST_LDFLAGS -I "$HERE" -DENGINE -o "$OUT/t_${t}_engine" "$HERE/t_$t.c" "${objs[@]}" "$OUT/engine.ld" -lm 2>&1 | { grep -v 'non-representable symbol' >&2 || true; }
  "$OUT/t_${t}_native" "$NATIVE" "" ${CASES:-} > "$OUT/${t}_native.txt"
  "$OUT/t_${t}_engine" "$RECOMP" "$OUT/recomp.map" ${CASES:-} > "$OUT/${t}_engine.txt"
  if cmp -s "$OUT/${t}_native.txt" "$OUT/${t}_engine.txt"; then
    echo "$t: identical ($(wc -l < "$OUT/${t}_native.txt") lines compared)"
  else
    echo "$t: DIFFERENT, first differences:"; diff "$OUT/${t}_native.txt" "$OUT/${t}_engine.txt" | head -20; status=1
  fi
done
exit $status
