# Computer mission screens — 2026-10-12

Four more routines are readable C in `src/engine/items/computer_mission.c`.
The legacy entry points in `client_terminal.c` and
`client_recovery_0c0000.c` call these implementations.

| Original address | Readable routine | Behavior |
| --- | --- | --- |
| `0x1400C6AB0` | `computer_write_padded_line` | text copy, space padding, color and terminator |
| `0x1400C7890` | `computer_draw_mission_menu` | intel state, seven project rows and selection |
| `0x1400C7FC0` | `computer_draw_mission_document` | project title, status rows and Back |
| `0x1400C86D0` | `computer_draw_mission_upload` | paged files, Cancel and upload progress |

`items/items.h` names the mission storage and screen fields. Project
records are `0x21D74` bytes apart; team status records are `0x86C` bytes
apart. The disk-name accessor and screen-link helper are existing restored
code, executed in both images.

## Behavior preserved

The row helper copies bytes in their original order, including when the
source overlaps the destination or its colors. A NUL stops advancing the
source; remaining columns become spaces. A zero or negative width writes
only the first NUL. It changes no colors beyond the specified width. Its
native return is the base of the entire screen table, which the wrapper
preserves; comparison normalizes this pointer to the mapped table base.

The menu retains the intel-state distinctions, selected-row color 232,
32-column rows, 16-column heading and 24-column project prefix before
appending team status. The project number starts at one. Its title/status
string copies retain the original unbounded behavior. Empty rows clear
only their first text byte, leaving trailing text and colors intact.

The document view exits for no team or any negative project selection.
It uses 20 columns for the title and `STATUS`, up to four 60-column status
rows, and 16 columns for Back. The original draws Back on row 12; an unused
Upload string in the original stack setup is not drawn. Team is cached,
while the selected project is reloaded for later status rows. Back's
highlight follows the field already named `computer_mission_scroll`.

The upload screen distinguishes the file listing from a positive connection
timer. File pages contain 16 entries, followed by Cancel when its index is
visible. Filenames, selected-row color 184 and header/progress color 240
match the original. Progress uses wrapping subtraction, arithmetic shift
and an inclusive threshold: column zero is filled at timer 255. The timer
is read again after formatting the heading. The listing heading uses 20
columns; progress and file rows use 16.

All three screens publish rows 0 through 23, in order, with the real
`computer_line_link`. The three legacy screen return registers were already
discarded by reviewed callers and remain compatibility zero; their readable
interfaces are void. The padded-row helper's used return is preserved.

## Verification

`missionscreens` and `missionscreens_wrapped` each compare 5,000 cases per
routine against the original executable: **40,000 routine comparisons and
208,654 identical output lines**, plus repeated draws within the fixtures.
They cover first/last item indices, intel boundaries, known/unknown and long
project names, negative selections, status counts, row widths, overlapping
copies, all relevant highlights, file pages/cancellation, timer boundaries,
and unchanged rows being shared again.

The formatter is the only controlled boundary in the screen suite. It
records formats and arguments and formats with the host runtime identically
in both images. Directed cases give it state changes to expose native cached
arguments and reloads; production formatting normally has no such effects.
Checks include full selected item records, text records, change counters,
callback order/arguments, the row return and MXCSR. Final checks also hash
the complete item and text tables.

All **41 deliberate mutations** build and produce differing output against
an identical 500-case baseline. None is missed; none requires a fault or
timeout. These cover row padding/copy/return, publication count, intel
states, project selection and prefix, status rows, cached team, colors,
page indexing, Cancel and progress thresholds.

Seven related suites compare 5,000 cases each: `computerjobs`,
`computerjobs_wrapped`, `itemtick`, `terminal`, `cipher`, `snake`, and
`linelink`. The composed computer-job fixture now executes the real mission
screens rather than their obsolete recording hooks. It seeds raw mission
records and accepts integer/string formatter arguments. Input and document
decoding remain controlled callbacks there. Old computer-job mutation
baselines need regeneration after this fixture change.

The engine module compiles with `-O2 -Wall -Wextra -Werror`. The private
client build links with zero unresolved symbols and zero duplicate
definitions, with 2,470 existing compiler warnings. The frozen executable
is `reports/codex-missionscreens-20261012/integrated-link-probe.exe`.
Results, source/build hashes and the final comparison status are recorded
in that report directory's `verification.json`.

The first 5,000-case invocation completed every comparison but encountered
a shell parsing error afterward because the running shared script was
edited. The final invocation uses the frozen `run.sh` in the report directory
and exits zero. All nine suites compare **429,554 identical lines** in total.

The engine source/header match their tested snapshot and captured client
build inputs. The main session subsequently moved other bucket routines
into subject files, changing both wrapper modules as whole files. All four
owned wrapper bodies still match their captured compiled `.i` input after
removing whitespace/comments; those hashes are recorded separately.

These are finite routine comparisons, not a complete-game equivalence claim
or an in-game smoke test of this batch. This restoration did not install
the new executable or restart the user's running game. Terminal input
`0x1400C6D90`, drive-path formatting `0x1400C6B30` and document decoding
`0x140195FB0` remain useful nearby targets.

## Reproduction (PowerShell)

```powershell
$env:TESTS = 'missionscreens missionscreens_wrapped computerjobs computerjobs_wrapped itemtick terminal cipher snake linelink'
$env:CASES = '5000'
$env:NATIVE_COMPARE_OUT = "$PWD/build/native-compare-codex-missionscreens-reproduction"
$env:NATIVE_COMPARE_ENGINE_DIR = "$PWD/build/codex-missionscreens-engine-final"
$env:RECOMP_EXE = "$PWD/reports/codex-missionscreens-20261012/integrated-link-probe.exe"
& 'C:/Program Files/Git/bin/bash.exe' reports/codex-missionscreens-20261012/run.sh
```

Mutation results and provenance are in
`build/native-compare-codex-missionscreens-mutations/mut/missionscreens/results.json`.
The mutation runner changes private copies only. The default suite list now
includes `missionscreens`.
