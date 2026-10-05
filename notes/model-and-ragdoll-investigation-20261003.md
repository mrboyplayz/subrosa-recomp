# Model and ragdoll investigation

Follow-up trace: `../docs/human-pose-trace.md` now records native caller order,
joint-work versus body-pool identity, solver consumption, snapshot interpolation,
character pose assembly and transform-feedback skinning. It includes 20,088
byte-checked instructions from 25 functions and structural checks of 61 models.
The unresolved questions below are retained as the original investigation state;
the follow-up document identifies which have been resolved and which remain.

Status: initial source/decompiler observations, not complete behavior recovery.

## Model loader, 0x1400e9a60

Fresh vanilla CLI export shows three parameters and file loading followed by
model-resource processing. Its version guard appears to accept versions 1..3,
where the old CMO spec only described a version-3 sample.

The read sequence distinguishes positions, version-3 additional two-word
data, and one further word per vertex. Faces have a count followed by a loop
reading that many indices and additional fields, one conditional on version.
This means the old fixed 24-byte face description cannot be adopted as a
universal format contract. Inspect native read calls, all installed versions
and downstream field uses before assigning final meanings.

The inferred read sequence structurally consumes all 48 installed `.cmo`
files exactly, with zero trailing bytes. Samples include versions 1, 2 and 3
and faces with three or four indices. Each sample's hash and parsed counts are
recorded in `reports/model-loader-asset-crosscheck-20261003.json`. This supports
the layout hypothesis; it does not verify vertex/face field semantics, loader
side effects, malformed-file behavior or whether these installed files are
unmodified vanilla assets.

Evidence: `reports/ghidra-cli-model-loader-20261003.json`;
existing partial description: `specs/cmo-model.md`.

## Human limb IK, 0x1400b1450

Sandium supplies a named entry and a candidate signature. Fresh vanilla Ghidra
decompilation infers a void return; Sandium declares int64. Verify the native
caller and epilogue before adopting either signature in a replacement.

The export contains a human stride of 0x6ff8 and bone stride of 0x138 (312),
matching the size implied by Sandium's packed Bone fields. It clamps a vector
length to the supplied reach, performs vector/matrix operations and branches
on flag bits 2 and 4. It writes multiple global tables. Their ownership and
full semantics remain unresolved; do not label every output a rigid-body field
based on a similar-looking address or stride.

The existing allocator fixture describes a separate 188-byte rigid-body
record. Establish table identity and links before combining that layout with
the limb solver's outputs.

Next: native stride/field validation, caller tracing, CMC/bone binding,
target generation, joint/motor updates, contacts and render pose propagation.
No evidence yet establishes the complete active ragdoll equations or their
timing. The 16-bone Human declaration is a useful reference, not verification
of all character behavior.

Evidence: `reports/ghidra-cli-human-limb-ik-20261003.json`,
`sandium/Sandium/structs/Human.hpp`, `sandium/Sandium/Addresses.hpp`,
and `src/recovered/rigid_body.h`.
