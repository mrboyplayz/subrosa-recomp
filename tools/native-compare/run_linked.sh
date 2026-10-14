#!/bin/bash
# Runs comparison suites through a linked client's own entry points.
#
# run.sh links the engine objects into the test program; this instead builds each test the way its "native" side is
# built (calls by original address) and runs that one program on both images: the original executable and a linked
# recompiled client, where the address leads to the client's wrapper and from there into the engine. It shows that the
# wrappers pass their arguments and results correctly and that the build really contains the port.
#
#   RECOMP_EXE=<linked client> NATIVE_COMPARE_OUT=<dir> TESTS="a b c" [CASES=n] tools/native-compare/run_linked.sh
set -e -o pipefail
ROOT=$(cd "$(dirname "$0")/../.." && pwd); HERE=$ROOT/tools/native-compare; OUT=${NATIVE_COMPARE_OUT:-$ROOT/build/native-compare}
NATIVE=${NATIVE_EXE:-$ROOT/re/binaries/subrosa-vanilla.exe}
RECOMP=${RECOMP_EXE:-$ROOT/reports/current/link/client-link-probe.exe}
NM=$(command -v llvm-nm || command -v nm)
PY=$(for p in python3 python; do "$p" -c "" >/dev/null 2>&1 && { command -v "$p"; break; }; done)
case "$(uname -s)" in
  MINGW*|MSYS*|CYGWIN*) TEST_LDFLAGS="-Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase -D__USE_MINGW_ANSI_STDIO=1";;
  *) TEST_LDFLAGS="-no-pie";;
esac
mkdir -p "$OUT/linked"
"$NM" "$RECOMP" > "$OUT/linked/recomp.nm"
"$PY" "$HERE/mkmap.py" "$OUT/linked/recomp.nm" "$OUT/linked/recomp.map"
status=0
for t in $TESTS; do
  gcc -O1 -g -fno-pie $TEST_LDFLAGS -I "$HERE" -o "$OUT/linked/t_$t" "$HERE/t_$t.c" -lm
  "$OUT/linked/t_$t" "$NATIVE" "" ${CASES:-} > "$OUT/linked/${t}_original.txt"
  "$OUT/linked/t_$t" "$RECOMP" "$OUT/linked/recomp.map" ${CASES:-} > "$OUT/linked/${t}_client.txt"
  if cmp -s "$OUT/linked/${t}_original.txt" "$OUT/linked/${t}_client.txt"; then
    echo "$t (linked client): identical ($(wc -l < "$OUT/linked/${t}_original.txt") lines compared)"
  else
    echo "$t (linked client): DIFFERENT, first differences:"; diff "$OUT/linked/${t}_original.txt" "$OUT/linked/${t}_client.txt" | head -10 | cut -c1-300; status=1
  fi
done
exit $status
