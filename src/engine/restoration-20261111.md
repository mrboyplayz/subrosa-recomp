# Sound, curves, parser, packet decode and particle restoration, 2026-11-11

Twenty-two client routines now call typed engine implementations.
Eleven leave the address-ordered recovery files (369 remain); the rest
gain verified engine bodies inside their modules. The batch covers the
game's sound pipeline, the Bézier curve and random seed, the embedded
config text parser, the packet decode and replication layer, and the
draw of one flying particle piece.

| Original address | Client entry point | Engine implementation |
| --- | --- | --- |
| `0x14007D610` | `sr_audio_allocate_sound_buffer` | `audio.c`: sound record buffer allocation (frees the old buffer) |
| `0x140069930` | `sr_audio_load_pcm16` | `audio.c`: 16-bit PCM to the float wave buffer |
| `0x14006A140` | `sr_audio_channel_play` | `audio_mixer.c`: start a sound on a channel, no position |
| `0x14006A240` | `sr_audio_channel_play_at` | `audio_mixer.c`: start a positional (spatialized) sound |
| `0x14006B4C0` | `sr_audio_mix_channel` | `audio_mixer.c`: per-voice resampling and interpolation into the channel ring |
| `0x14006B6F0` | `sr_audio_mix_emitter` | `audio_mixer.c`: per-emitter clear, remix and release pass |
| `0x14008EC40` | `sr_math_curve_point` | `math_curve.c`: Bernstein-basis point, degrees 1-3 |
| `0x140187180` | `sr_math_curve_point_route` | `math_curve.c`: byte-identical twin of the curve point |
| `0x1401872F0` | `sr_math_curve_derivative` | `math_curve.c`: same curve's derivative |
| `0x1400C2D50` | `sr_math_seed_random` | `math_random.c`: Mersenne Twister seeding (624-word state, index 624) |
| `0x14003C6F0` | `sr_parser_token_matches` | `text_parser.c`: token prefix matches the parse cursor |
| `0x140091DF0` | `sr_parser_skip_to_token` | `text_parser.c`: advance until a token matches |
| `0x140115360` | `sr_parser_read_number` | `text_parser.c`: read a 32-bit number token |
| `0x140115410` | `sr_parser_read_number64` | `text_parser.c`: read a 64-bit number token |
| `0x14018D440` | `sr_net_read_angle` | `net_decode.c`: sign-magnitude angle over a full turn from n bits |
| `0x140192560` | `sr_net_read_scaled_fraction` | `net_decode.c`: signed fraction of a scale from n bits |
| `0x14018D510` | `sr_net_read_delta` | `net_decode.c`: adaptive 1/9/raw-bit delta around a base |
| `0x1401060F0` | `sr_net_replication_track_value` | `net_replication.c`: per-peer replication ring append |
| `0x140105AB0` | `sr_net_replication_queue_event` | `net_replication.c`: per-peer event slot find and append |
| `0x14010EF40` | `sr_net_replication_write_item_state` | `net_replication.c`: item state written as bits |
| `0x14018DB20` | `sr_net_replication_read_item_state` | `net_replication.c`: the stream's read twin |
| `0x140124840` | `sr_world_draw_particle_piece` | `world_particles.c`: one flying piece on the lit, land-mask and stencil passes |

## Native behavior retained

Sound. The pitch argument of the channel twins is float bits in a
stack word; `sr_audio_channel_play_at` keeps the `unsigned` parameter
and unpacks the bits like the original. The skip paths of the play
twins leave the original's result register unset; the ports return the
channel and no caller reads a result there. `sr_audio_mix_emitter`
calls the still-unported spatializer `sub_14006A5F0` at its address,
which the comparison executes as the original machine code in both
builds. Raw negative mix cursors are exercised because they clobber
voice words and prove the playback-position re-read of the original.
In the comparison harness the original's `_malloc_base` (0x14023ACF8)
and `free` (0x14023ACE4) thunks and the engine's `crt_malloc`/
`crt_free` are redirected to deterministic recording stubs in both
builds, so allocation sizes, pointers and record contents still
compare exactly.

Curves and the seed. Degrees outside 1..3 leave the original's result
register uninitialized; the engine returns a defined 0.0 there and the
driver stays inside degrees 1..3, as the game's curve records do. The
twin 0x140187180 shares the engine body with 0x14008EC40; their natives
are instruction-identical.

Parser. `parser_read_number64` on an empty run reads the original's
uninitialized stack slot; the engine zero-fills to stay UB-free and
diverges only on malformed config text. The original sscanf `%I64u`
overflow path (>19 digits) cannot run inside the harness; the driver
caps 64-bit cases at 18 digits. The 32-bit reader's `%u` wrap and the
255-byte copy cap are exercised directly.

Packet decode. The angle decodes the magnitude as the double product
`6.28318530718/(float)sign` rounded once to float, and negates by
sign-bit flip, like the original. First-read failures of the angle and
fraction decoders (and the delta's first flag) consumed the original's
uninitialized stack slot and are excluded from the driver as
nondeterministic; follow-up failures are compared exactly.
`queue_event` with a wild negative head is a genuine crash of the
installed original; the suite replays aliasing heads with small words.

Particles. The piece draw keeps the three pass orders (lit, land-mask,
stencil): which texture units are bound, which uniform is fed, which
attribute arrays are enabled. The mesh's stride and triangle count are
read from the loaded mesh record, the buffer name through the per-mesh
slot table. Afterward the model matrix resets to the identity (the four
xmmwords of 0x140278D30, 0x140278D80, 0x140278E20, 0x140279490) and
both matrix products are recomputed, as in the original. The original's
result register is never read on the lit pass (it leaks the tail
`glActiveTexture` call), so the comparison does not print it.

## Verification

The original executable has SHA-256
`cc667f7d3c765a36940a8fcc583c7ee189fd1bdbf167e56e59ac3a9f6873ad12`.

Every suite ran against the engine build and, through
`--client-wrappers`, against the real client wrappers compiled with the
client flags. Final re-verification after wrapper parameters received
role names (2,000 cases per suite, `particlepieces` 2,000):

    audiobuffer    9,231 identical lines
    audioemitter  25,000 identical lines
    curve         12,001 identical lines
    randomseed     4,001 identical lines
    parsernumber   2,001 identical lines
    packetdecode  12,001 identical lines
    replication   16,001 identical lines
    particlepieces 34,433 identical lines

Mutation checks plant **154 deliberate bugs** across the eight new
suites: 18 (audiobuffer), 47 (audioemitter), 13 (curve), 9
(randomseed), 13 (parsernumber), 23 (packetdecode), 19 (replication),
12 (particlepieces) — all detected at 1,500 cases. Three candidates
were proven equivalent and replaced: a stereo-cursor advance the
spatializer never reads, a commutative degree-3 head summand, and the
stencil pass's independent bind order (whose two calls produce no
other observable); a fourth (a kept-constant scope) became a real
single-precision chain change.

Regression suites all match: `audioalloc audioavailable audiocapture`
(114,004 lines), `math rotationangles interpolation texthelpers random`
(62,005 lines), `packetbits packetangle packetvector packetbytes`
(40,004 lines), and the full 50-suite battery at 1,000 cases. Two
pre-existing exceptions: `effectsdraw` and `effectsupdate` diverge on
this toolchain by a single MXCSR precision-flag bit in one case. The
same divergence is reproduced on this machine on the tree before this
batch (verified by stashing the whole batch) and is documented here as
an environment issue, not reviewed otherwise.

The structural validators pass: 4,229 original addresses occur exactly
once, the module and local-name tables are consistent, the CMake source
list matches. The complete client compiles and links to
`dist/subrosa-recomp.exe` with `dist/SDL2.dll`. Gameplay has not been
manually tested for this batch.

Reproduce from the project directory in PowerShell:

```powershell
$env:SUBROSA_GAME_DIR = (Resolve-Path '..').Path
python tools/cleanup/split_client_modules.py --check
python tools/cleanup/recover_client_locals.py --check
python tools/native-compare/run.py audiobuffer audioemitter curve randomseed parsernumber packetdecode replication particlepieces --cases 2000
python tools/native-compare/run.py audiobuffer audioemitter curve randomseed parsernumber packetdecode replication particlepieces --cases 2000 --client-wrappers --out build/restoration-20261111/wrappers
python scripts/build.py --jobs 8
```
