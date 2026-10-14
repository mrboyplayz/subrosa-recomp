# Routine restoration — 2026-10-14

26 original routines now have readable engine implementations and client
adapters: 17 event constructors, seven packet serializers and two record
allocators. Their addresses are listed in `README.md` and their headers.

## Behavior preserved

- Event records reuse a 65,536-entry ring. Unwritten fields stay unchanged.
  Disabled event generation does not dereference vector or string inputs.
  Optional vectors become zero; vector copies preserve every bit and their
  original word order, including overlapping input and destination.
- Coordinate and player fields use wrapping integer addition and shifts.
  Mission time uses signed division by 60. Mission text emits the original
  extra chunk when its zero terminator lies at byte 63, 127, and so on.
- The stock event converts all six prices to integer tenths, while its
  payload carries only the first five conversions.
- Packet routines retain the original initial-position and read-length
  checks. Scaled writes overwrite at bit zero and OR into partial bytes;
  ordinary writes clear their selected bits first. The two write adapters
  return success even when the underlying write rejects a full buffer.
- Angle serialization uses the native 64-bit truncating conversion and
  sets the sign bit for negative or unordered input. Its client declaration
  is corrected from `char` to `int`: the original consumes all of EDX.
- Disk allocation clears the complete record after its used flag. Raw
  item text records preserve unused text and colour bytes, set their kind
  word to zero, and read from item offset `0x368`, twelve bytes before the
  normal screen-text accessor. A full pool returns zero-extended
  `0xFFFFFFFF`.

## Verification

The oracle is the local original `subrosa.exe`, SHA-256
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
These comparisons execute original machine code; they do not compare two
copies of decompiled C. Native memory-copy routines run without stubs.

Final results:

| Check | Result |
|---|---|
| Direct event, packet and allocation suites | 26,000 cases, identical |
| Existing item text-link and phone-event suites | 2,000 cases, identical |
| Actual client adapters | 60,500 cases, identical |
| Event mutations | 29/29 detected |
| Packet mutations | 12/12 detected |
| Disk and raw text-record mutations | 8/8 detected |
| Full client compile and link | Passed; new/extended engine files emitted no warnings |

Final direct output hashes reported by `run.py`: eventrecords
`9523bd0ce3c716d3`, packetbits `2efaeef075d03e53`, recordalloc
`c7b49e98fe8e2692`, itemtext `690a9cfa63fca7a9`, itemphone
`27451e9ee868c1ca`. Adapter output hashes: eventrecords
`af4dd46b8541d037`, packetbits `9a1bf0442952236b`, recordalloc
`d6d41ff73edc9072`.

```powershell
$env:SUBROSA_GAME_DIR = 'D:\SteamLibrary\steamapps\common\Sub Rosa'
python tools/native-compare/run.py eventrecords packetbits recordalloc itemtext itemphone --cases 1000 --out build/routine-restoration-final
python tools/native-compare/run.py eventrecords packetbits --client-wrappers --cases 2500 --out build/routine-restoration-wrapped
python tools/native-compare/run.py recordalloc --client-wrappers --cases 250 --out build/routine-restoration-wrapped
python tools/native-compare/mutate.py eventrecords events.c tools/native-compare/eventrecords.mutations --cases 64
python tools/native-compare/mutate.py packetbits net_bits.c tools/native-compare/packetbits.mutations --cases 2500
python tools/native-compare/mutate.py recordalloc disk.c tools/native-compare/recordalloc-disk.mutations --cases 32
python tools/native-compare/mutate.py recordalloc item_text.c tools/native-compare/recordalloc-text.mutations --cases 32
```

`--client-wrappers` extracts the actual current client signatures and
adapter bodies, compiles them at the client's `-O0`, and enters them in the
comparison. This checks the adapter ABI as well as the engine code. It
accepts only explicitly marked restored adapters inventoried by the
fixture's `CALL` entries.

Event fixtures compare complete records, neighboring ring slots, source
records, cursor state and FP status. Packet fixtures compare return values,
output arguments, both cursors, buffer bytes and FP status, including full
buffers, crossing the buffer boundary, unusual bit positions, counts from
negative through 256, aliases and exceptional floats. Allocation fixtures
hash entire pools and check first/last/free/full behavior and untouched bytes.

## Limits

These are finite differential tests, not an exhaustive proof. Text copy
lengths are nonnegative, source strings terminate in accessible storage,
and indices reference mapped records. Division by zero and arbitrary
invalid pointers are not tested. The original packet routines can cross
their nominal buffer boundary; that behavior is preserved rather than
adding a new bounds policy.

The signed and sentinel packet-read adapters at `0x140115BD0` and
`0x140115D20` remain in the decompiled client: they use an uninitialized
stack value after a failed read. They were not silently replaced with
invented failure behavior. Event return registers are not an API result;
legacy integer-typed client adapters return zero after the void engine call.
The semantic purpose of event type 21 and the disk's `+4` word remains
unresolved and is named accordingly.

The full client is compiled and linked separately under
`build/routine-restoration-client/`. Its executable is 11,786,333 bytes,
SHA-256 `670fc4a4d580342d8afce331b4f1ebaa852a15b9c9a9c9460a4d03e427fc6a65`.
No gameplay or rendering smoke test has been performed for this batch.
