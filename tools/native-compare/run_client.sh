#!/bin/bash
# Compares routines of the recompiled client (src/client) with the original executable, without starting either game.
#
# Each test program is built once and run twice: on the original image, and on the linked recomp image, where F()/D()
# translate original addresses through the recomp's symbol map. Identical output is the pass condition.
#   TESTS="patch" CASES=500 tools/native-compare/run_client.sh
set -e -o pipefail
ROOT=$(cd "$(dirname "$0")/../.." && pwd); HERE=$ROOT/tools/native-compare; OUT=$ROOT/build/native-compare
NATIVE=${NATIVE_EXE:-$ROOT/re/binaries/subrosa-vanilla.exe}
RECOMP=${RECOMP_EXE:-$ROOT/reports/current/link/client-link-probe.exe}
NM=$(command -v llvm-nm || command -v nm)
PY=$(for p in python3 python; do "$p" -c "" >/dev/null 2>&1 && { command -v "$p"; break; }; done)
case "$(uname -s)" in
  MINGW*|MSYS*|CYGWIN*) TEST_LDFLAGS="-Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase -D__USE_MINGW_ANSI_STDIO=1";;
  *) TEST_LDFLAGS="-no-pie";;
esac
mkdir -p "$OUT"
"$NM" "$RECOMP" > "$OUT/recomp.nm"
"$PY" "$HERE/mkmap.py" "$OUT/recomp.nm" "$OUT/recomp.map"
status=0
for t in ${TESTS:-patch}; do
  gcc -O1 -g -fno-pie $TEST_LDFLAGS -I "$HERE" -o "$OUT/c_${t}" "$HERE/t_$t.c" -lm
  "$OUT/c_${t}" "$NATIVE" "" ${CASES:-} > "$OUT/c_${t}_native.txt"
  "$OUT/c_${t}" "$RECOMP" "$OUT/recomp.map" ${CASES:-} > "$OUT/c_${t}_recomp.txt"
  if cmp -s "$OUT/c_${t}_native.txt" "$OUT/c_${t}_recomp.txt"; then
    echo "$t: identical ($(wc -l < "$OUT/c_${t}_native.txt") lines compared)"
  else
    echo "$t: DIFFERENT, first differences:"; diff "$OUT/c_${t}_native.txt" "$OUT/c_${t}_recomp.txt" | head -24; status=1
  fi
done
exit $status
