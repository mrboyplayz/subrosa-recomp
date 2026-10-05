# Supplied Format and Networking References

The user supplied two local HTML references on 2026-09-30. They are research
inputs, not build instructions or evidence that every description matches the
installed `subrosa.exe`. The HTML files stay outside Git; these hashes identify
the versions read:

| File in `C:/Users/junin/Downloads` | SHA256 |
| --- | --- |
| `formats.html` | `1b5bfb99f2021e07f6a768fbe37e1c281e8ea495f933ca8a540da6e6f03756c0` |
| `networking(1).html` | `346573b42dd2fa0c73d6e2e8efcce239eb7b264c119a12867e8e13922495c125` |

## Format crosswalk

The format reference covers building `.sbb`, city `.sbc`, two uses of `.sbl`
(portal and building block), character `.cmc`, item/model `.cmo`, and archive
`.csx`. Its CSX description identifies a version-38 resource bundle containing
blocks, buildings, and textures. This agrees with the independently observed
`data/<map>/test.csx` role in [map-pipeline.md](../specs/map-pipeline.md). The
previous extension index's “scene/map script or config” label was misleading.

The reference says `.sbb` length and width are stored one less than their
effective values, and distinguishes portal `buildblock` references from block
geometry. Compare those claims with the installed version-12-to-14 samples and
the round-trip parser before changing the `.sbb` decoder. Likewise, keep the
two `.sbl` loaders separate; the existing map-pipeline notes already document
that distinction. The HTML's ImHex patterns are useful field-name hypotheses,
while the local binary and byte-exact sample round trips remain the check for
this installation.

## Networking crosswalk

The networking reference describes a regular UDP frame with `7DFP` magic,
one packet-type byte, little-endian multibyte fields, and bitfields consumed
least-significant-bit first. It claims a 1200-byte regular-packet limit. Split
frames use `7DFF`, a 16-bit packet id, fragment index and count bytes, and up
to 1024 payload bytes per fragment. These give concrete signatures to locate
and verify in the client send/receive functions. A byte search of the pinned
installed `subrosa.exe` found `7DFP` once at file offset `0x2b0c58` and `7DFF`
once at `0x2b0cc0`; this confirms the markers are present, not their parser
semantics.

For the 38e/38f protocol described there, client-to-server connection init is
type `0x02`, client game updates are type `0x04`, server initial sync is type
`0x06`, and server game updates are type `0x05`. The reference labels protocol
version 71 (`0x47`) for those builds. Do not hardcode these values into the
recompiled client until the installed binary's protocol path and a local packet
capture or equivalent test confirm they apply to this build. In particular,
auth fields in the reference are descriptive layout data, not test credentials.

Next verification targets for the client: identify the `7DFP`/`7DFF` parser
and writer, confirm the size limits and bit order from code, then test packet
round trips with synthetic data before implementing game-state messages.
