# Sandium references for vanilla C recovery

Reviewed again 2026-10-04. The current target is the Windows client in C;
Rust remains deferred. Sandium supplies names, layout candidates and runtime
observations. See the detailed current
[Sandium recompilation reference](sandium-recomp-reference-20261004.md).
Reference executable SHA256:
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.

## Useful sources

| Sandium source | Recovery use | Verification boundary |
| --- | --- | --- |
| `Sandium/Addresses.cpp`, `Addresses.hpp`, `Address.hpp` | Windows globals, named functions and proposed ABIs | `DYNADDR` selects its first argument on Windows. Use the client branch. Match machine code before adopting a signature. |
| `Sandium/structs/ItemType.hpp` | 5,072-byte item type records, mass, name, grip, gun and bounds fields | CustomData and expanded counts are mod additions. Existing full native item-loader comparisons establish the record stride independently. |
| `Sandium/structs/VehicleType.hpp`, `Human.hpp`, `Item.hpp`, `Vehicle.hpp` | Candidate entity layouts and field names | Padding, custom data and packed members need offset checks against native accesses. |
| `Sandium/structs/CSTexture.hpp` | Atlas width/height and GL texture ID at offset 32 | Its total packed size disagrees with the original native atlas stride; see below. |
| `Sandium/hooks/ClientMain.hpp` | Context/window lifetime and SDL/GL integration clues | Hook additions initialize mods; their order is not evidence for vanilla startup order. |
| `Tools/cmc_notes.md`, `PaperdollGeometry.hpp` | Character-model parsing and geometry clues | The notes identify tentative regions and refer to this recovery's decompilation. They are not independent confirmation of every field. |
| `Sandium/Addresses.hpp` audio declarations | PCM registration and positioned-sound candidate ABIs | RVA 0x69930 and 0x69FA0 require native caller verification; WAV loading at 0xEE400 is a separate routine. |

## Atlas layout discrepancy already checked

Sandium maps `CSTextures` at RVA `0x67971DA0`, matching the original atlas routines.
Its packed declaration contains 8 bytes of dimensions, 24 padding bytes, a
4-byte GL ID and 49,130 padding bytes: total **49,166 bytes**.

The original packer at `0x140068FC0` multiplies the atlas index by **0x30038 =
196,664 bytes**. The recovered C export expresses that as 49,166 **32-bit words**.
The native layout has width/height at 0/4, GL ID at 32, upload pointer at 40,
entry count at 48 and 4,096 entries of 48 bytes starting at 56. Thus
`56 + 4096 * 48 == 196664`. First-record fields can be useful while typed
indexing through Sandium's current CSTexture declaration has the wrong stride.
Do not import that padding size into the recompilation or change Sandium here.

## Immediate names to reuse after native verification

| Name | Client RVA |
| --- | --- |
| ClientMain | 0x96440 |
| LoadCMO | 0xE9A60 |
| BindItemModel | 0x13FCD0 |
| LoadTexture | 0xEDED0 |
| RegisterSoundPCM | 0x69930 |
| PlayPositionedSound | 0x69FA0 |
| HumanLimbIK | 0xB1450 |
| LineIntersectLevel | 0xDC050 |
| CreateEventBulletHit | 0x512D0 |

The version gate uses RVAs 0x2B231C/0x2B23DC. The address collector checks
candidate RVAs against PE section bounds and records source hashes and lines;
this establishes address provenance, not behavioral parity.

### PCM registration ABI checked against the original

The original entry at RVA 0x69930 checks ECX against 4,095, takes signed byte
length in EDX, sample pointer in R8, and reference distance in XMM3. It indexes
32-byte sound records at RVA 0x4950AB0, stores reference distance at offset 24,
stores signed `byteLength / 2` at offset 4, replaces the pointer at offset 8,
and converts signed 16-bit samples to floats using the native scale constant.
This agrees with Sandium's RegisterSoundPCM signature and the recovered C
routine. This is a register/field check; allocator and mixer behavior have not
been established by a full comparison for this entry.

Run `python scripts/collect_sandium_references.py` to regenerate
`reports/sandium-reference/client-addresses.json`.

## C recovery priority (historical startup results)

Startup now passes the integer-parser LocaleUpdate repair, WAV loading and
procedural audio generation. The next observed failure was the SBB loader's
synthetic stack-cookie return. Its two void exits are restored, pass 360
native loader comparisons and pass production startup. The building catalog
then exposed a split find-data object and synthetic cookie return. Recovery
passes 128 complete native catalog comparisons and production startup. The
next observed fault is the master HTTP connection's synthetic cookie result;
its recovery passes 144 native exchange comparisons and production startup.
Five native 24-byte Steam caches were exported as single eight-byte pointers;
restoration passes 1,920 comparisons using the bundled Steam context API and
native callbacks, and passes production startup. The next startup repair
relocates three absolute friend-ID output destinations into rebuilt global
storage. It passes 144 full native friend-wrapper/record comparisons and
production startup. The client now reaches its main loop; the event pump loses
the SDL output-object/window arguments. Recovery passes 480 full native event
comparisons and is being rebuilt. A usable menu is still unverified.

The startup paragraph above describes the earlier 2026-10-03 checkpoint.
The current candidate reaches Practice world rendering but aborts in the
NVIDIA driver during a terrain shadow draw, before its first Practice swap.
See [current Practice recovery](client-practice-recovery-20261004.md).

Use Sandium names and layouts to guide entity, rendering,
audio, networking and menu recovery as those paths become reachable. Keep
mod-specific Lua, hooks, resource expansion and gameplay changes out of vanilla
behavior. The custom lua51.dll remains excluded.

## Supplied building format reference

`C:/Users/junin/Downloads/formats.html` documents SBB versions, 64-byte names,
dimensions, four name tables, tiles and version-14 waypoint groups. The native
loader at RVA 0x26830 independently confirms versions 12..14, offsets in version
13+, and tile loops including width/length endpoints. On disk, tile fields are
reordered when stored in the in-memory record: buildBlock precedes block and
interiorBlock in memory, despite being third on disk. The C fixture compares the
whole 47,360,000-byte destination, read counts/positions, close operations and
finalizer dispatch across versions 11..15, header-only/full loads, dimensions
0..2, waypoint flags and missing files. File and finalizer boundaries are
controlled; malformed/truncated files and finalizer internals are not covered.

## Supplied networking reference for later parity work

### Master-server return discrepancy checked

Sandium names client RVA 0xA3F30 ConnectMasterServerFunc but declares it as
VoidFuncType. Native failure sets EAX=0 at RVA 0xA41DA; success sets EAX=1 at
0xA43FB. The vanilla callers use this result. Preserve the bool-like C result.
The function retrieves `/anewzero/serverinfo.php` over HTTP from
`www.crypticsea.com` and parses tab-separated IP/port/server-list fields. This
is separate from the supplied document's UDP game packet protocol.

The recovered function passes 144 complete native comparisons with controlled
Winsock, delay, formatting and integer scanning boundaries, including socket/
DNS failure, service fallback, send/receive retry exhaustion, valid/invalid IP,
ports and server lists. Paths depending on the native uninitialized pre-retry
stack counter are excluded; they are not claimed equivalent.

`C:/Users/junin/Downloads/networking(1).html` describes `7DFP` regular packets,
`7DFF` fragments, little-endian fields and bit reads from the least significant
bit. It gives a 1,200-byte regular-packet limit, 1,024-byte fragment payloads,
a 16-bit packet ID and byte-sized fragment index/count. Its angle pseudocode
uses sign/magnitude encoding and mentions the native reciprocal-tau constant;
the exact arithmetic order must be preserved when verified against instructions.

These remain protocol candidates for native comparison, not implemented fixes.
The document describes a maximum as both 65,535 and 0x10000, which differ by one;
recover actual buffer capacity and accepted packet-length bounds separately.
Its pseudocode also switches from signBitmask to undefined negativeBitmask.
Do not copy that typo into a parser. Extracted readable reference text is saved
in reports/networking-reference-text-20261003.txt.

## Master authentication reference (2026-10-03)

Sandium Tools/cs_auth_re_notes.md identifies the H/I exchange handled by
sub_14006BED0 through receive pump sub_14011C760, separate from gameplay packet
parsing. Native comparisons verify H (72) token/accept/phone replies and I (73)
confirmation replies, transitions between states 0/1/2/-1, and the strict
greater-than-1,000-ms retry threshold. The recovered C routine passes 1,536
complete native state/dispatch/packet/guard comparisons across two frames.

The notes contain unfinished and contradictory earlier hypotheses, plus custom
master endpoints, forced readiness and direct-join gates. Those modifications
are not vanilla evidence and are excluded from recovery. Truncated replies are
not covered by the current fixture; no equivalence is claimed for them.
