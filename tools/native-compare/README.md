# native-compare

Runs routines of the original `subrosa.exe` and compares them with the clean
engine code in `src/engine/`.

    tools/native-compare/run.sh
    TESTS="math camera" CASES=5000 tools/native-compare/run.sh   # a subset, fewer cases

Requirements: the pinned original client at `re/binaries/subrosa-vanilla.exe`,
a linked recomp build (`reports/current/link/client-link-probe.exe`, or set
`RECOMP_EXE`), and either

- Linux or WSL on x86-64 with gcc, python3 and llvm-nm (or an nm that reads
  Windows executables), or
- Windows with Git Bash or MSYS2, an x64 MinGW gcc and nm on PATH, and
  Python. Each test process maps an image of about 1.8 GB at 0x140000000, so
  the test programs are linked at 0x10000000 instead.

## How it works

- `peload.h` maps a Windows x64 executable into the test process at its
  preferred address and lets C code call any routine in it by address. The
  image is never started, and on Linux no Windows is involved. Imports that a
  test does not provide stop the run with the import's name.
- Each test (`t_*.c`) is built twice. The `native` build loads the original
  and calls its routines. The `engine` build loads the recompiled client (for
  its memory layout) and calls the functions in `src/engine/` instead. Both
  generate the same pseudo-random inputs and print what happened.
- `gltrace.h` replaces every slot of the OpenGL pointer table with a recorder,
  so the output includes each OpenGL call with arguments decoded by its real
  prototype. Pointer arguments are recorded by content. Add a line to
  `gl_record` when a test reaches a function it prints as `??`.
- `run.sh` compares the two outputs. Identical output is the pass condition.

`gl_slots.txt` lists, for every OpenGL function the original loads, the
address of its pointer in the original image and the symbol that holds it in
the recompiled client.

## Adding a test

Write `t_<module>.c` after the existing ones: set up identical state in both
processes, call the original routine by address in the native build and the
engine function in the `ENGINE` build, print results and the state the routine
may touch. Add the name to the loop in `run.sh`.

Check that a new test can fail: change a constant in the engine function,
rerun, and confirm the difference is reported.
