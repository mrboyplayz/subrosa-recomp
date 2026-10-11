# Human locomotion: what's recovered, what isn't

2026-10-10. found while porting the human to lethal company (SubRosaRagdoll mod, `SrHuman.cs`).
static reading of the exported hex-rays in `src/client/client_humans.c`, no runtime parity claimed.

## new: ground ahead `0x1400AC890`

called from the human update. feels the ground in front of the hips and keeps two eased values per human.

1. basis = identity turned by yaw (Human+0x98).
2. cast from the pelvis (Human+0x224) down 1.75 along -up (`0x1402F6188` is the up vector) through ground probe `0x1400B91E0`.
   hit height comes back in global `0x151A84884`, hit object in `0x151A848F8`. no hit = use pelvis y.
3. direction = walk velocity (Human+0x6884 x, +0x688C z). under 1/60 a tick it gets pushed toward the facing.
4. 4 samples, 2/3 apart along that direction starting at the pelvis xz, each a vertical cast +-0.75 around the last hit height.
   first hit also copies the hit object's velocity and spin into Human+0x686C..+0x6880 (moving platforms).
5. with any hits:
   - `flat = 1 - max(min(|hi - lo|, 0.5), min(|hi - here|, 0.625))`, Human+0x68A8 moves toward it by at most 1/32 a tick
   - `rise = hi - here`, Human+0x68AC moves toward it by at most 1/32 a tick

### where they're used

- **walk point `0x1400B40B0`**: target speed = mode speed x input x **flat** (Human+0x68A8).
  mode is Human+0x60: 0 run = 0.083333336 (1/12), 1 walk = 0.05, 2 aim = 0.025.
  input is Human+0x118, or 1.0 when Human+0x6734 (jump charge) is set.
  direction is yaw + Human+0xF8, from forward Human+0x12C / strafe Human+0x134.
  so stairs (rise past 0.625 in 2 units) drop u to ~37.5% speed.
- **stride planner `0x1400B2440`**: blends its stride length toward `input*0.9375 + 0.3125` by clamp(**rise**, 0, 1).
  base stride is `input*0.21875 + 0.34375` running, `input*0.46875 + 0.125` otherwise, times `(max(cos(Human+0x9C/2) * Human+0x6768, 0.125) + 1)`.

porting just the flat->speed part fixed stair falls in the mod's harness (16/27 -> 27/27 runs stay up), nothing else changed.

## walk point `0x1400B40B0`, fully read

per tick, in this order:
1. input amount Human+0x118 eases to 1 (0.625 if Human+0x214 & 8, crouch) by 1/32, or 1/8 while jump charge Human+0x6734 is set
2. heading basis from yaw, then ground ahead `0x1400AC890`
3. walk velocity (+0x6884..) kept within **1/30** of the body centre velocity, then its y zeroed
4. walk point (+0x6850..) += ground object velocity (+0x686C), then leashed to the body centre: |walk vel| * 1.875 + 0.0625
5. wanted = mode speed x amount x flat, direction = right * Human+0x12C + back * -Human+0x134 from yaw (+Human+0xF8),
   normalized, sideways part cut 25%, and when going backwards the backwards part cut 50%
6. over 0.05 (running): stamina Human+0x1C drops 1 every 16 ticks, under 8 stamina it's clamped to 0.05.
   Human+0x6768 < 0.5 zeroes it
7. lean: Human+0x10C (side) eases toward (wanted - body vel) . right, Human+0x114 (fwd) toward
   (f <= 0 ? f : -f/8) with f = (wanted - body vel) . back. both *1/16 per tick, clamped 1/128 a tick
8. stillness Human+0x68B0 eases toward 1 - min(|walk vel| * 120, 1) by 1/32. walk vel *= 0.96875 - stillness/2
9. walk vel += (wanted - walk vel) capped 1/225 a tick (0 in state 5), y = 0, walk point += walk vel
10. (holding item type 28: pulls the walk point toward it, not ported)
11. calls stride planner `0x1400B2440`

standing legs `0x1400BCA30` lean the target basis by **Human+0x10C * 7.5** about its row 2 then **Human+0x114 * -7.5**
about its row 0, each clamped pi/4. (the LC port had been leaning off walk velocity * 7.5, that was wrong)
stamina regen is in the human update: every 32 ticks +1 toward max Human+0x20 (cap 127).

## human update `0x1400BE010` callees, port status

| function | lines | role (best guess unless decoded) | ported to LC |
|---|---|---|---|
| 0x1400ABB10 | 313 | body centre | yes |
| 0x1400AD2B0 | 21 | look pose (spine/head/arms) | yes (`human_ragdoll.c`) |
| 0x1400A87A0 | 676 | inventory action queue (slot <-> hand moves) | yes, as LC inventory |
| 0x1400BCA30 | 715 | states 0/1, standing/walking legs | yes |
| 0x1400BAA40 / 0x1400BB6B0 | 377 / 248 | when to step / the step | yes |
| 0x1400BBF30 | 397 | planted foot hip target | yes |
| 0x1400B40B0 | 460 | walk point | yes, exact (input driven) |
| 0x1400B78F0 | 893 | state 3, in the air | yes |
| **0x1400AC890** | 165 | ground ahead (above) | **yes, decoded here** |
| 0x1400B2440 | 218 | stride planner, uses rise | no |
| 0x1400B91E0 | 105 | ground probe (calls collision query 0x1400DC050 / 0x1400DC940) | replaced with a raycast |
| 0x1400BA210 | 285 | state 2 (input mask 0x80000) | no |
| 0x1400B9D90 | 219 | state 4 | no |
| 0x1400B2E70 | 510 | touches rigid bodies + 0x151A84880 globals, unknown | no |
| 0x1400B3A80 | 207 | rigid bodies, consts 0.2/0.333, unknown | no |
| 0x1400B5460 | 355 | foot ground contact, called per foot (bones 12/15) when alive, leg health >= 50 and state != 2 | no, next |
| 0x1400B5E70 | 217 | human fields only, unknown | no |
| 0x1400B62E0 | 926 | items (0x1400E35D0), likely grabbing/holding | no |
| 0x1400CE370 / 0x1400CC610 | 548 / 1086 | between human update and physics, unknown | no |

## human field map (dword index - 280651303) * 4

| offset | what |
|---|---|
| +0x60 | movement mode 0 run / 1 walk / 2 aim |
| +0x98 / +0x9C | yaw / pitch |
| +0xF8 | input angle offset |
| +0x118 | input amount |
| +0x12C / +0x134 | forward / strafe input |
| +0x224 | pelvis position (bones start +0x220, position at bone +0x04) |
| +0x6734 | jump charge ticks |
| +0x686C..+0x6880 | velocity/spin of the ground object under u |
| +0x6884 / +0x688C | walk velocity x / z |
| +0x68A8 | ground flat ahead |
| +0x68AC | ground rise ahead |

## next

1. `0x1400B2440` stride planner, then wire rise into stepping
2. `0x1400B91E0` ground probe semantics (what the 6 globals at 0x151A84880.. are, normal? hit body?)
3. `0x1400B5460`, likely what keeps feet on the ground
4. states 2 and 4
5. the two between-passes updates

## 2026-10-11: ported to src/engine, bit-exact against the original

these are no longer just read, they run in the recompiled client and match the original exe result for result
(tools/native-compare suites walk, body, health, feet, legs, hits):

| function | engine | what it turned out to be |
|---|---|---|
| 0x1400B91E0 | `human_probe_ground` | one ray vs the level (0x1400DC050) and vs each vehicle in the human's near list (+0x1F0 count, +0x1F4 x8); nearest wins, vehicle index left in 0x151A848F8 (-1 = level) |
| 0x1400AC890 | `human_feel_ground_ahead` | as decoded above |
| 0x1400B2440 | `human_update_walk_height` | NOT a stride planner: it sets the walk point's height. 8 ground probes along the walk velocity, averaged, plus the height the hips are carried at (the stride formula above), a planted foot caps the samples at its ground height + 1/8 |
| 0x1400B40B0 | `human_update_walk_point` | as decoded above. walk point is +0x6854 (not +0x6850) |
| 0x1400ABB10 | `human_update_centre` | centre (+0x674C) and velocity of pelvis/stomach/chest by bone mass (bone +0x84), smoothed pelvis rotation at +0x6758 with its quaternion at +0x677C. Human+0x6768 is that matrix's [4] = how upright the pelvis is |
| 0x1400B5460 | `human_foot_ground_contact` | per foot: probe from 3/8 above to sin(pitch)*3/16 - 1/32 below, needs the shin upright (shin rot[4] >= 0). makes a bond type 9 on the foot body: depth up to 1/16, stiffness/damping 1/2 (1/64 for leg state 0 or 3), friction 4 (0 loose, 0.1 in human state 2), surface velocity = ground velocity, and an angular target that turns the foot to the leg's yaw/pitch (max 1/4 rad). also where a jump starts (state 3) from a planted foot |
| 0x1400B9D90 / 0x1400BA210 | `human_sit_legs` / `human_lie_legs` | state 4 (in a vehicle) and state 2 (down): leg IK targets relative to the pelvis |
| 0x1400B3A80 | `human_collide_vehicle` | bone capsules vs a vehicle hull, contact + run-over damage (120 off Human+0x3C when the hull moves into the bone faster than 0.2, 1/3 for legs) |
| 0x1400B5E70 | `human_update_health` | health +0x6D50, blood +0x6D54, bleeding +0x6D58, six parts from +0x6D5C |

leg records: two of 0xDC bytes from Human+0x68B8: +0x48 ground bond, +0x54 state (1 planted), +0xC4 ground height, +0xC8 pitch, +0xD0 yaw.

later the same day, also ported and bit-exact (suites steps, balance, swing):

| function | engine | what it turned out to be |
|---|---|---|
| 0x1400BAA40 | `human_plan_steps` | the step state machine. both feet planted: each foot's spot is centre + centre vel*8 + walk vel*16, 3/32 to its side, 1/32 back; a foot or the feet's midpoint more than 1/8 off starts a step with the foot further off, once it has rested 5 ticks. a step at progress 1 lands when a probe finds ground. a planted foot with no contact for 30 ticks goes loose. tipped over (upright < 0.5) and still = state 5, 10 upright ticks to leave it |
| 0x1400BBF30 | `human_balance_on_leg` | per planted leg: wanted centre velocity = (walk point - centre)*3/8 - (centre vel - walk vel)/2, max 1/4 flat and 1/8 up; change limited to 1/8 flat and upward only; times 3. wanted turn = from smoothed pelvis rotation to the target, max 1/4, minus 2x angular velocity, change limited 3/32, times 3. outputs where the hip goes and the hip joint turn |
| 0x1400BB6B0 | `human_swing_step` | the swing: lands beside the centre led by walk vel*7.5 (max 3/16); a cubic arc from the start, lifted by speed (3/8 up leaving, 1/2 up arriving, 1/8 forward kick); progress +1/12 a tick (+1/20 in state 5) |

leg records start at Human+0x68BC (not 0x68B8): +0x44 ground bond, +0x48 rest ticks, +0x50 state (0 loose, 1 planted, 3 stepping), +0x54 air ticks, +0x58 step progress, +0x5C step start, +0x68 swing target, +0x74 planted point, +0xBC contact (0, 1/2, 1), +0xC0 ground height, +0xC4 pitch, +0xCC yaw, +0xD0 landing point.

0x1400BCA30 (states 0/1, standing/walking legs) is ported too: `human_stand_legs` in `src/engine/human_stand.c`, bit-exact (suite stand) and the scripted in-game walk matches the original sample for sample. what it does per tick: state 0 <-> 1 (both legs loose and off the ground or rising = falling; back when on the ground and not rising), walk point, step planning, balance per planted leg / swing per stepping leg, then leg IK per state: planted = ankle over the planted foot at ground height + 1/32, stepping = the swing point, loose = hanging under the hip by input amount * 3/4 (spread along the velocity when falling). the foot's ground bond gets friction 0.9 planted, 0 loose or stepping.
