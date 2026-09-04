# Roadmap

## Phase 0: Inventory

- Record hashes, sizes, timestamps, and extension counts.
- Identify exact Steam build and update cadence.
- Keep analyzer database files outside Git.

## Phase 1: Static Triage

- Find `WinMain`/SDL setup and the main frame loop.
- Label wrappers for allocation, file IO, logging, assertions, time, and random.
- Split function namespaces by subsystem prefixes:
  - `app_`
  - `render_`
  - `audio_`
  - `input_`
  - `net_`
  - `asset_`
  - `world_`
  - `entity_`
  - `vehicle_`
  - `item_`
  - `ui_`
  - `steam_`

## Phase 2: Data Formats

- Document magic values, headers, counts, endianness, offsets, and string encodings.
- Prioritize `.csx`, `.sbc`, `.sbl`, `.sbb`, `.cmo`, `.cmc`, `.itm`, `.it3`, `.sis`, `.sbv`.
- Build parsers against local samples and synthetic fixtures.

## Phase 3: Runtime Behavior

- Map world tick order.
- Map entity spawn/despawn and network serialization.
- Map vehicle physics state and item/firearm state.
- Map client/server protocol at the message level.

## Phase 4: Clean-Room Implementation

- Turn specs into independent code in a separate source repo.
- Use only documented behavior, synthetic tests, and notes.
- Keep one person/package responsible for extracting facts and another for implementation when practical.
