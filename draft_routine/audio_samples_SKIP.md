# audio_samples module — verified skip (nothing to recover)

Module: `src/client/client_audio_samples.c` — one `//-----` block, and its body is
already a short delegate into the engine port, so per the task discipline this
routine is **wrapped, not unwrapped**; porting it again would only duplicate work.

## Routine checked

- **0x140069930 → `sr_audio_load_pcm16`** (unsigned int sound_id, int byte_count,
  int16_t *pcm_samples, float sound_gain)

## Evidence

1. **Wrapper is a delegate.** `src/client/client_audio_samples.c` contains exactly
   one `//-----` block; its body is a single call:
   `audio_load_pcm16(sound_id, byte_count, (const int16_t *)pcm_samples, sound_gain);`
2. **Engine port exists and matches the disassembly.** `src/engine/audio.c:82`
   `audio_load_pcm16` re-implements 0x140069930 exactly as `objdump -d
   --start-address=0x140069930 --stop-address=0x140069A60 subrosaactual/subrosa.exe`
   shows:
   - `if (sound > 0xFFF) return;` — the `cmp $0xfff,%ecx / ja` unsigned guard;
   - stores `record->gain = gain`, `record->loaded = 1`,
     `record->sample_count = byte_count / 2` (the `cltd/sub/sar $1` signed div);
   - `crt_free(previous)` (thunk 0x14023ACE4) then `crt_malloc(sample_count << 2)`
     (thunk 0x14023ACF8) with the result kept in `record->samples`;
   - conversion loop scaling each int16 sample by `0.000030517578125f` (= 1/32768)
     into the new float buffer, byte cursor += 4 per sample.
   - `audio_sounds` records live at 0x140404A70 (stride 0x20 = 32 bytes).
3. **Comparison suite already covers it.** `tools/native-compare/t_audiobuffer.c`
   lists `140069930` in its `NC_WRAPPERS` line and has a port/native/entry-point
   tri-build with malloc/free stubs; `audiobuffer.mutations` carries 11 pcm-only
   mutants (count rounding, zero-extend cast, scale digit, store offset, buffer
   lost, loop bound, gain drop, free skip).
4. **Scoped-local names stay.** `src/client/local_names.tsv` rows 123–126
   (`140069930 a1..a4`) belong to the *active* wrapper's signature, not to a
   wrapped-away routine — nothing to delete.

## Conclusion

No engine file, no wrapper edit, no new suite is created; `src/engine/audio_samples.c/.h`
would only duplicate `src/engine/audio.c`. Landing an empty duplicate would touch
files owned by an earlier session (0x140069930 was already recovered in commit
ddcc2bb, 2026-11-11) for zero behavior change.
