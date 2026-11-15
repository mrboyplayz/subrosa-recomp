# Slot searches and random values

Six additional routines retain their existing client entry points and now
delegate to readable engine C. Total progress is 282 of 1,119 game routines.

## Slot searches

- 0x1400A4560 scans 256 twelve-byte item tracking records at 0x182A7D580.
- 0x140132E00 scans 256 eighty-byte replication snapshot records at 0x1A8E379E0.

Both return the first record with a zero active word, or zero-extended
UINT32_MAX when full, without modifying the pool. Layouts and addresses
are in `record_slots.h`; unclassified snapshot fields retain unknown names.
Native comparison covers every first-free position, full pools, high-bit
and arbitrary nonzero active words, multiple holes and hashes of all records.

## Random double helpers

The four helpers call the existing generator at 0x14009DE80. Disassembly
shows that 0x14009DFB0, 0x14009DFD0 and 0x14009DFF0 zero-extend its low
32 bits before conversion, despite the previous decompiler bodies using
a signed cast. They implement the closed, half-open and open unit ranges.

0x14009E020 consumes two draws, taking 27 and 26 high bits respectively.
Its previous decimal scale compiled to 0x3CA0000000000002, whereas the
executable stores 0x3CA0000000000000 (exactly 2^-53). The restored code
uses hexadecimal floating constants to preserve the native bit patterns.
The other scale constants were also checked against the executable.

The random fixture redirects only the generator to a deterministic recording
stub. It compares call order/count, double result bits and MXCSR status under
all four rounding modes. Inputs include zero, maximum unsigned values,
the signed boundary, discarded-bit boundaries and random 64-bit returns
whose upper bits must be ignored. This verifies the adapters, not the
underlying generator's statistical properties or state transition.

## Validation

With SUBROSA_GAME_DIR pointing to the installed game:

```
python tools/native-compare/run.py recordslots randomdouble --cases 4096 --client-wrappers
python tools/native-compare/mutate.py recordslots record_slots.c tools/native-compare/recordslots.mutations --cases 1028
python tools/native-compare/mutate.py randomdouble math_random_double.c tools/native-compare/randomdouble.mutations --cases 500
```

Wrapper comparisons matched 4,097 slot-suite lines (digest
`c98a7f1f7b6553b0`) and 36,865 random-suite lines (digest
`721d0985d2ee6e17`).
All nine mutations were detected: four slot-search mutations and five
random-value mutations, including reintroducing the signed conversions
and the inaccurate decimal scale from the decompiler.

The complete client compiled and linked successfully; both new engine
translation units compiled without warnings. Interactive gameplay was not
validated. SDL packaging remains subject to the previously observed
GitHub download failure in this environment.

The module checker passes uniqueness, ownership and CMake source checks,
then reports the existing unapplied local name `140115BD0 v3 encoded_bit_count`.
