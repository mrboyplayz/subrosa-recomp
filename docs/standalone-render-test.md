# Standalone C rendering test

`D:/SteamLibrary/steamapps/common/Sub Rosa/subrosa-render-test.exe` is a
separate renderer. It creates its own Windows OpenGL context and does not load
the client executable or run the game simulation. Its shaders and optional
Practice replay data are embedded during the local build.

Double-click the EXE for the terrain viewer. Space cycles between terrain
lighting, vertex normals and the original shadow shader; Escape closes it.
The title shows the test result. The log is saved beside the EXE as
`subrosa-render-test.log`.

Run the automated GPU checks without showing the viewer:

```powershell
& './subrosa-render-test.exe' --test
```

Optional arguments are `--frames N` for a bounded viewer run, `--log path`
for a report destination, and `--screenshot file.bmp` for the terrain image.
`--view terrain|normals|shadow` chooses the initial view.
Exit codes are 0 for success, 1 for a test failure, and 2 for setup or usage
errors. Windows PowerShell starts GUI executables asynchronously; use
`Start-Process -Wait -PassThru -WindowStyle Hidden` to inspect their exit code.

The suite compiles and links all 27 original GLSL stages in 13 programs,
checks FBO/VAO/buffer/integer texture creation, renders through indexed,
array, base-vertex and multi-draw APIs, verifies pixel readback, tests the
original shadow shader with and without its integer mask, and draws the
captured Practice terrain. The replay uses 361 original vertices, 1,944
indices, a 1024-square R16UI mask and the captured camera matrices. A GPU
finish and GL error check follow each test. The replay can validly draw no
pixels for an offscreen captured camera; the other draw tests require pixels.

On 2026-10-04 the suite passed on the installed NVIDIA RTX 3060 Ti driver:
`reports/render-test-20261004/test.log`, with zero failures. The captured
shadow replay drew 1,268 colored pixels; the terrain viewer drew 109,483.
The screenshot is `reports/render-test-20261004/terrain.png`.
The bounded windowed viewer also passes with GPU completion, GL error checks
and framebuffer presentation: `reports/render-test-20261004/viewer.log`.
The optional CMake target and its `standalone_render` CTest pass as well.

Rebuild from the decompilation directory:

```powershell
python scripts/build_render_test.py
```

The script verifies the original EXE hash before extracting shaders. By
default it embeds the original capture in
`reports/client-reference-mask-20261004`; `--capture` selects another capture.
If none is available, synthetic terrain is used and the captured replay is
omitted. Generated shaders, replay headers and EXEs stay outside tracked
sources. This validates selected graphics paths; it does not establish that
the entire rebuilt client renderer or Practice simulation is correct.
