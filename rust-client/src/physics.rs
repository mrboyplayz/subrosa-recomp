//! Narrow recovered constraint kernels, not replacement engine physics.
//! Anchor correction: original 14001cbb0, joint-work kind 7.
use core::arch::x86_64::{_mm_cvtss_f32, _mm_set_ss, _mm_sqrt_ss};

/// Original 188-byte rigid-body record; unknown fields retain their raw bits.
#[repr(C)]
#[derive(Clone, Copy)]
pub struct RigidBodyRecord { pub words: [u32; 47] }
const _: () = assert!(core::mem::size_of::<RigidBodyRecord>() == 188);

/// Inputs copied by the original rigid-body allocator (14005cf80). Storage
/// names describe their observed use; shape/inertia units remain unestablished.
#[repr(C)]
#[derive(Clone, Copy)]
pub struct RigidBodySetup {
    pub owner: u32,
    pub position: [u32;3],
    pub orientation: [u32;9],
    pub velocity: [u32;3],
    pub mass: u32,
    pub diagonal: [u32;3],
    pub has_velocity: u32,
}

/// Allocate the first inactive record, clearing everything after its active
/// word, then populate the original fields/defaults. The original capacity is
/// 8192; a shorter pool is supported for isolated scenes. Exhaustion is inert.
pub fn create_body(bodies: &mut [RigidBodyRecord], setup: RigidBodySetup) -> Option<usize> {
    let index = bodies.iter().take(8192).position(|b| b.words[0] == 0)?;
    let b = &mut bodies[index];
    b.words[1..].fill(0);
    b.words[0] = 1;
    b.words[1] = setup.owner;
    b.words[5] = setup.mass;
    b.words[6..9].copy_from_slice(&setup.position);
    b.words[15..24].copy_from_slice(&setup.orientation);
    if setup.has_velocity != 0 { b.words[9..12].copy_from_slice(&setup.velocity); }
    b.words[33..36].copy_from_slice(&setup.diagonal);
    for i in 0..3 {
        let d = f32::from_bits(setup.diagonal[i]);
        b.words[36+i] = (if d <= 0.0 { 0.0 } else { 1.0/d }).to_bits();
    }
    let mut minimum = f32::from_bits(setup.diagonal[0]);
    b.words[39] = setup.diagonal[0];
    for i in 1..3 {
        let d = f32::from_bits(setup.diagonal[i]);
        if d < minimum { minimum = d; b.words[39] = setup.diagonal[i]; }
    }
    b.words[43] = 0.5f32.to_bits();
    b.words[44] = 0.25f32.to_bits();
    b.words[45] = 0.5f32.to_bits();
    Some(index)
}

/// # Safety
/// Bodies holds count aligned writable records; setup is readable and does
/// not overlap bodies. Inputs are snapshotted before pool mutation.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_create_body(bodies: *mut RigidBodyRecord, count: usize,
    setup: *const RigidBodySetup) -> i32 {
    unsafe { create_body(core::slice::from_raw_parts_mut(bodies,count),*setup).map_or(-1,|i| i as i32) }
}

/// Linear portion of original 140116210, before angular integration. Values
/// remain in original per-update units. This does not select a real-time tick
/// rate or perform the separately recovered angular/body/collision passes.
pub fn advance_linear_bodies(bodies: &mut [RigidBodyRecord]) {
    for body in bodies {
        if body.words[0] != 0 && body.words[2] == 0 {
            body.words[10] = (f32::from_bits(body.words[10])-f32::from_bits(0x3b326750)).to_bits();
            for i in 0..3 { body.words[6+i] = (f32::from_bits(body.words[9+i])+f32::from_bits(body.words[6+i])).to_bits(); }
        }
    }
}

/// # Safety
/// Bodies holds count aligned writable records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_advance_linear_bodies(bodies: *mut RigidBodyRecord,count: usize) {
    unsafe { advance_linear_bodies(core::slice::from_raw_parts_mut(bodies,count)); }
}

/// Clear each active body's accumulated deltas at the start of a constraint
/// iteration (14001d9d4..14001db46). Unlike accumulation, the +8 flag does not
/// suppress clearing.
pub fn clear_body_deltas(bodies: &mut [RigidBodyRecord]) {
    for body in bodies {
        if body.words[0] != 0 {
            body.words[12..15].fill(0);
            body.words[30..33].fill(0);
        }
    }
}

/// # Safety
/// Bodies holds count aligned, writable records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_clear_body_deltas(bodies: *mut RigidBodyRecord, count: usize) {
    unsafe { clear_body_deltas(core::slice::from_raw_parts_mut(bodies,count)); }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ConstraintStepError { WorkPoolLength, PointWorkLength, UnsupportedKind, BodyIndex, PointIndex, SameBody }

#[repr(C)]
#[derive(Clone, Copy)]
pub struct PointConstraintVelocity { pub velocity: [f32;3], pub delta: [f32;3] }

/// Recovered 32-iteration path for scenes containing only kind-10 joints.
/// Unsupported active kinds are rejected before mutation. Point constraints,
/// contacts and vehicle callbacks are outside this restricted scene contract.
pub fn step_kind10(joints: &mut [crate::joints::JointRecord],
    work: &mut [crate::joints::JointWork], bodies: &mut [RigidBodyRecord])
    -> Result<(), ConstraintStepError> {
    if joints.iter().any(|j| j.words[0] != 0 && j.words[1] != 10) {
        return Err(ConstraintStepError::UnsupportedKind);
    }
    step_rigid_constraints(joints,work,bodies)
}

/// Recovered rigid constraint path for kinds 4, 7, 8 and 10. Point constraints,
/// contact generation and vehicle passes are not yet implemented here.
pub fn step_rigid_constraints(joints: &mut [crate::joints::JointRecord],
    work: &mut [crate::joints::JointWork], bodies: &mut [RigidBodyRecord])
    -> Result<(), ConstraintStepError> {
    step_rigid_constraints_with_mode(joints,work,bodies,false)
}

pub fn step_rigid_constraints_with_mode(joints: &mut [crate::joints::JointRecord],
    work: &mut [crate::joints::JointWork], bodies: &mut [RigidBodyRecord], angular_mode: bool)
    -> Result<(), ConstraintStepError> {
    step_constraints(joints,work,bodies,&mut [],&mut [],angular_mode)
}

/// Restricted original constraint pass with point links and recovered rigid
/// joint kinds. The scratch pool belongs to the caller, avoiding hidden allocs.
pub fn step_constraints(joints: &mut [crate::joints::JointRecord],
    work: &mut [crate::joints::JointWork], bodies: &mut [RigidBodyRecord],
    points: &mut [crate::point_state::PointState], point_work: &mut [PointConstraintVelocity],
    angular_mode: bool) -> Result<(), ConstraintStepError> {
    if joints.len() != work.len() { return Err(ConstraintStepError::WorkPoolLength); }
    if points.len() != point_work.len() { return Err(ConstraintStepError::PointWorkLength); }
    for (index,joint) in joints.iter().enumerate().filter(|(_,j)| j.words[0] != 0) {
        if matches!(joint.words[1],5|6) {
            let (a,b) = ((work[index].words[0]&0xffff) as usize,(work[index].words[0]>>16) as usize);
            if a >= bodies.len() || (joint.words[1] == 6 && b >= bodies.len()) { return Err(ConstraintStepError::BodyIndex); }
            if joint.words[1] == 6 && a == b { return Err(ConstraintStepError::SameBody); }
            continue;
        }
        if joint.words[1] == 3 {
            if joint.words[6..10].iter().any(|&id| id as usize >= points.len()) {
                return Err(ConstraintStepError::PointIndex);
            }
            continue;
        }
        if matches!(joint.words[1],0|1|2) {
            let (a,b) = (joint.words[6] as usize,joint.words[7] as usize);
            if a >= points.len() || (joint.words[1] != 1 && b >= points.len()) { return Err(ConstraintStepError::PointIndex); }
            if joint.words[1] != 1 && a == b { return Err(ConstraintStepError::SameBody); }
            continue;
        }
        if !matches!(joint.words[1],4|7|8|9|10) { return Err(ConstraintStepError::UnsupportedKind); }
        let (a,b) = (joint.words[38] as usize,joint.words[39] as usize);
        if a >= bodies.len() || (!matches!(joint.words[1],4|9) && b >= bodies.len()) { return Err(ConstraintStepError::BodyIndex); }
        if !matches!(joint.words[1],4|9) && a == b { return Err(ConstraintStepError::SameBody); }
    }
    for (joint, output) in joints.iter_mut().zip(work.iter_mut()) {
        if joint.words[0] != 0 {
            if (joint.words[4] as i32) < 256 {
                if joint.words[1] == 0 { prepare_point_link(joint,output,points); }
                else if joint.words[1] == 4 { prepare_kind4(joint,output,bodies); }
                else if joint.words[1] == 7 { prepare_kind7(joint, output, bodies); }
                else if joint.words[1] == 8 { prepare_kind8(joint,output,bodies); }
                else if joint.words[1] == 10 { prepare_anchor(joint, output, bodies); }
            }
            output.words[2] = joint.words[4];
            output.words[3] = joint.words[1];
        }
    }
    for (point,scratch) in points.iter().zip(point_work.iter_mut()) {
        scratch.velocity = core::array::from_fn(|i| f32::from_bits(point.words[17+i]));
    }
    for body in bodies.iter_mut() {
        if body.words[0] != 0 { body.words[46] = 0; }
    }
    for iteration in 0u32..32 {
        clear_body_deltas(bodies);
        for point in point_work.iter_mut() { point.delta = [0.0;3]; }
        for (joint, input) in joints.iter().zip(work.iter()) {
            if joint.words[0] != 0 && input.words[2]&iteration == input.words[2] {
                if input.words[3] == 0 { solve_point_link(input,point_work); }
                else if input.words[3] == 1 { crate::contacts::solve_point_contact(joint,point_work); }
                else if input.words[3] == 2 { crate::contacts::solve_point_pair_contact(joint,points,point_work); }
                else if input.words[3] == 3 { crate::contacts::solve_point_surface_contact(joint,points,point_work); }
                else if input.words[3] == 4 { solve_kind4(input,bodies); }
                else if input.words[3] == 5 { crate::contacts::solve_rigid_contact(input,bodies); }
                else if input.words[3] == 6 { crate::contacts::solve_rigid_pair_contact(input,bodies); }
                else if input.words[3] == 7 { solve_prepared_anchor(input,bodies); }
                else if input.words[3] == 8 { solve_kind8(joint,input,bodies,angular_mode); }
                else if input.words[3] == 9 { crate::contacts::solve_biased_body_contact(joint,bodies); }
                else { solve_kind10(joint, input, bodies); }
            }
        }
        for point in point_work.iter_mut() {
            for i in 0..3 { point.velocity[i] = point.delta[i]+point.velocity[i]; }
        }
        apply_body_deltas(bodies);
    }
    for (point,scratch) in points.iter_mut().zip(point_work.iter()) {
        for i in 0..3 { point.words[17+i] = scratch.velocity[i].to_bits(); }
    }
    for joint in joints {
        if joint.words[0] != 0 && joint.words[3] == 0 { joint.words[0] = 0; }
    }
    Ok(())
}

/// # Safety
/// All pools hold their supplied counts of aligned and mutually disjoint records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_step_constraints(joints: *mut crate::joints::JointRecord,
    work: *mut crate::joints::JointWork, joint_count: usize, bodies: *mut RigidBodyRecord,
    body_count: usize, points: *mut crate::point_state::PointState,
    point_work: *mut PointConstraintVelocity, point_count: usize, angular_mode: u32) -> i32 {
    unsafe { i32::from(step_constraints(core::slice::from_raw_parts_mut(joints,joint_count),
        core::slice::from_raw_parts_mut(work,joint_count),core::slice::from_raw_parts_mut(bodies,body_count),
        core::slice::from_raw_parts_mut(points,point_count),core::slice::from_raw_parts_mut(point_work,point_count),angular_mode!=0).is_ok()) }
}

pub fn prepare_point_link(joint: &crate::joints::JointRecord, work: &mut crate::joints::JointWork,
    points: &[crate::point_state::PointState]) -> bool {
    let (ai,bi) = (joint.words[6] as usize,joint.words[7] as usize);
    let (Some(a),Some(b)) = (points.get(ai),points.get(bi)) else { return false; };
    let delta: [f32;3] = core::array::from_fn(|i| f32::from_bits(b.words[11+i])-f32::from_bits(a.words[11+i]));
    let length = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(
        (delta[1]*delta[1]+delta[0]*delta[0])+delta[2]*delta[2]))) };
    let normal: [f32;3] = if length <= f32::from_bits(0x37800000) { [0.0;3] } else {
        let inverse = 1.0/length;
        core::array::from_fn(|i| inverse*delta[i])
    };
    let mass_a = f32::from_bits(a.words[8]);
    let mass_b = f32::from_bits(b.words[8]);
    let inverse = 1.0/(mass_a+mass_b);
    work.words[0] = (ai as u32 & 0xffff)|((bi as u32 & 0xffff)<<16);
    for i in 0..3 { work.words[4+i] = normal[i].to_bits(); }
    work.words[7] = ((length-f32::from_bits(joint.words[25]))*f32::from_bits(joint.words[28])).to_bits();
    work.words[15] = (mass_b*inverse).to_bits();
    work.words[16] = (mass_a*inverse).to_bits();
    work.words[17] = joint.words[29];
    true
}

pub fn solve_point_link(work: &crate::joints::JointWork, points: &mut [PointConstraintVelocity]) -> bool {
    let (ai,bi) = ((work.words[0]&0xffff) as usize,(work.words[0]>>16) as usize);
    if ai == bi || ai >= points.len() || bi >= points.len() { return false; }
    let wf = |i: usize| f32::from_bits(work.words[i]);
    let relative: [f32;3] = core::array::from_fn(|i| points[bi].velocity[i]-points[ai].velocity[i]);
    let error = ((relative[1]*wf(5)+relative[0]*wf(4))+relative[2]*wf(6))*wf(17)+wf(7);
    let a = error*wf(15);
    let b = sign_flip(error*wf(16));
    for i in 0..3 {
        points[ai].delta[i] = a*wf(4+i)+points[ai].delta[i];
        points[bi].delta[i] = b*wf(4+i)+points[bi].delta[i];
    }
    true
}

/// # Safety
/// The three pools hold their supplied counts of aligned, disjoint records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_step_rigid_constraints_mode(joints: *mut crate::joints::JointRecord,
    work: *mut crate::joints::JointWork, joint_count: usize, bodies: *mut RigidBodyRecord,
    body_count: usize, angular_mode: u32) -> i32 {
    unsafe { i32::from(step_rigid_constraints_with_mode(core::slice::from_raw_parts_mut(joints,joint_count),
        core::slice::from_raw_parts_mut(work,joint_count),core::slice::from_raw_parts_mut(bodies,body_count),angular_mode!=0).is_ok()) }
}

/// # Safety
/// The three pools hold their supplied counts of aligned, disjoint records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_step_rigid_constraints(joints: *mut crate::joints::JointRecord,
    work: *mut crate::joints::JointWork, joint_count: usize, bodies: *mut RigidBodyRecord,
    body_count: usize) -> i32 {
    unsafe { i32::from(step_rigid_constraints(core::slice::from_raw_parts_mut(joints,joint_count),
        core::slice::from_raw_parts_mut(work,joint_count),core::slice::from_raw_parts_mut(bodies,body_count)).is_ok()) }
}

/// # Safety
/// The three pools hold their supplied counts of aligned, disjoint records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_step_kind10(joints: *mut crate::joints::JointRecord,
    work: *mut crate::joints::JointWork, joint_count: usize, bodies: *mut RigidBodyRecord,
    body_count: usize) -> i32 {
    unsafe { i32::from(step_kind10(core::slice::from_raw_parts_mut(joints,joint_count),
        core::slice::from_raw_parts_mut(work,joint_count),core::slice::from_raw_parts_mut(bodies,body_count)).is_ok()) }
}

/// Body accumulation pass inside 14001d080, instructions 14001f794..14001f96e.
/// Called after a constraint iteration. Deltas remain stored until the next
/// iteration's clearing pass; this routine does not advance body positions.
pub fn apply_body_deltas(bodies: &mut [RigidBodyRecord]) {
    for body in bodies {
        if body.words[0] == 0 || body.words[2] != 0 { continue; }
        for i in 0..3 {
            body.words[9+i] = (f32::from_bits(body.words[12+i])+f32::from_bits(body.words[9+i])).to_bits();
        }
        let mut state: [f32; 3] = core::array::from_fn(|i|
            f32::from_bits(body.words[30+i])+f32::from_bits(body.words[24+i]));
        let squared = (state[1]*state[1]+state[0]*state[0])+state[2]*state[2];
        let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(squared))) };
        let maximum = f32::from_bits(body.words[39])*8.0;
        if maximum < magnitude {
            let scale = maximum/magnitude;
            for v in &mut state { *v = *v*scale; }
        }
        for i in 0..3 { body.words[24+i] = state[i].to_bits(); }
        let f = |i: usize| f32::from_bits(body.words[i]);
        // Project onto the body basis, apply diagonal factors, project back.
        // The original instruction grouping differs between the first row
        // and the remaining rows and is retained here.
        let x = ((state[0]*f(15)+state[1]*f(16))+state[2]*f(17))*f(36);
        let y = ((state[1]*f(19)+state[0]*f(18))+state[2]*f(20))*f(37);
        let z = ((state[1]*f(22)+state[0]*f(21))+state[2]*f(23))*f(38);
        let angular = [
            (f(18)*y+x*f(15))+f(21)*z,
            (y*f(19)+x*f(16))+z*f(22),
            (y*f(20)+x*f(17))+z*f(23),
        ];
        for i in 0..3 { body.words[27+i] = angular[i].to_bits(); }
    }
}

/// # Safety
/// Bodies holds count aligned, writable records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_apply_body_deltas(bodies: *mut RigidBodyRecord, count: usize) {
    unsafe { apply_body_deltas(core::slice::from_raw_parts_mut(bodies,count)); }
}

/// Kind-7 preparation embedded in 14001d080. Converts local anchors and
/// subtracts rest length; body categories select the original gains and cap.
pub fn prepare_kind7(joint: &mut crate::joints::JointRecord,
    work: &mut crate::joints::JointWork, bodies: &[RigidBodyRecord]) -> bool {
    let (ai,bi) = (joint.words[38] as usize,joint.words[39] as usize);
    let (Some(a),Some(b)) = (bodies.get(ai),bodies.get(bi)) else { return false; };
    let jf = |i: usize| f32::from_bits(joint.words[i]);
    let af = |i: usize| f32::from_bits(a.words[i]);
    let bf = |i: usize| f32::from_bits(b.words[i]);
    let mut ra = [0.0; 3];
    let mut rb = [0.0; 3];
    let mut delta = [0.0; 3];
    for i in 0..3 {
        ra[i] = (jf(15)*af(18+i)+jf(14)*af(15+i))+jf(16)*af(21+i);
        // The original first output lane reverses the first two products.
        rb[i] = if i == 0 { (jf(17)*bf(15)+jf(18)*bf(18))+jf(19)*bf(21) }
            else { (jf(18)*bf(18+i)+jf(17)*bf(15+i))+jf(19)*bf(21+i) };
        delta[i] = (ra[i]+af(6+i))-(rb[i]+bf(6+i));
    }
    let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(
        (delta[0]*delta[0]+delta[1]*delta[1])+delta[2]*delta[2]))) };
    let normalized: [f32;3] = if magnitude == 0.0 { [0.0;3] } else {
        let inverse = 1.0/magnitude;
        core::array::from_fn(|i| delta[i]*inverse)
    };
    let negative_rest = sign_flip(jf(25));
    for i in 0..3 { delta[i] = normalized[i]*negative_rest+delta[i]; }
    let special = a.words[1] == 1 && b.words[1] == 1;
    let position_gain = if special { 0.00390625 } else { 0.1875 };
    let velocity_gain = if special { 0.125 } else { 0.1875 };
    if b.words[1] == 3 {
        let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(
            (delta[1]*delta[1]+delta[0]*delta[0])+delta[2]*delta[2]))) };
        if 0.125 < magnitude {
            let scale = 0.125/magnitude;
            for v in &mut delta { *v = *v*scale; }
        }
    }
    let inverse_mass_sum = 1.0/(bf(5)+af(5));
    work.words[0] = (ai as u32 & 0xffff)|((bi as u32 & 0xffff)<<16);
    for i in 0..3 {
        work.words[8+i] = ra[i].to_bits();
        work.words[11+i] = rb[i].to_bits();
        work.words[4+i] = (delta[i]*position_gain).to_bits();
    }
    work.words[15] = (inverse_mass_sum*bf(5)).to_bits();
    work.words[16] = (inverse_mass_sum*af(5)).to_bits();
    work.words[17] = f32::to_bits(velocity_gain);
    joint.words[28] = f32::to_bits(position_gain);
    joint.words[29] = f32::to_bits(velocity_gain);
    true
}

/// Kind-4 single-body anchor preparation in 14001d080.
pub fn prepare_kind4(joint: &crate::joints::JointRecord,
    work: &mut crate::joints::JointWork, bodies: &[RigidBodyRecord]) -> bool {
    let ai = joint.words[38] as usize;
    let Some(a) = bodies.get(ai) else { return false; };
    let jf = |i: usize| f32::from_bits(joint.words[i]);
    let af = |i: usize| f32::from_bits(a.words[i]);
    work.words[0] = (work.words[0]&0xffff0000)|(ai as u32 & 0xffff);
    for i in 0..3 {
        let anchor = if i == 0 { (jf(14)*af(15)+jf(15)*af(18))+jf(16)*af(21) }
            else { (jf(15)*af(18+i)+jf(14)*af(15+i))+jf(16)*af(21+i) };
        work.words[8+i] = anchor.to_bits();
        work.words[4+i] = (((anchor+af(6+i))-jf(11+i))*jf(28)).to_bits();
    }
    work.words[17] = joint.words[29];
    true
}

/// Kind-4 correction. Native subtracts directly, without the pairwise
/// solver's mass ratios or magnitude clamp.
pub fn solve_kind4(work: &crate::joints::JointWork, bodies: &mut [RigidBodyRecord]) -> bool {
    let ai = (work.words[0]&0xffff) as usize;
    let Some(body) = bodies.get_mut(ai) else { return false; };
    let wf = |i: usize| f32::from_bits(work.words[i]);
    let angular: [f32;3] = core::array::from_fn(|i| f32::from_bits(body.words[27+i]));
    let linear: [f32;3] = core::array::from_fn(|i| f32::from_bits(body.words[9+i]));
    let r = [wf(8),wf(9),wf(10)];
    let x = ((angular[2]*r[1]-r[2]*angular[1])+linear[0])*wf(17)+wf(4);
    let y = ((r[2]*angular[0]-angular[2]*r[0])+linear[1])*wf(17)+wf(5);
    let z = ((angular[1]*r[0]-angular[0]*r[1])+linear[2])*wf(17)+wf(6);
    let delta = [x,y,z];
    let angular_delta = [y*r[2]-z*r[1],z*r[0]-x*r[2],x*r[1]-y*r[0]];
    for i in 0..3 {
        body.words[12+i] = (f32::from_bits(body.words[12+i])-delta[i]).to_bits();
        body.words[30+i] = (f32::from_bits(body.words[30+i])-angular_delta[i]).to_bits();
    }
    true
}

/// Kind-8 angular preparation, embedded in the original constraint pass.
/// Native MINSS selects an angular scale which multiplies both mass ratios;
/// the decompiler's recovered C omitted these final multiplications.
pub fn prepare_kind8(joint: &crate::joints::JointRecord,
    work: &mut crate::joints::JointWork, bodies: &[RigidBodyRecord]) -> bool {
    let (ai,bi) = (joint.words[38] as usize,joint.words[39] as usize);
    let (Some(a),Some(b)) = (bodies.get(ai),bodies.get(bi)) else { return false; };
    let mass_a = f32::from_bits(a.words[5]);
    let mass_b = f32::from_bits(b.words[5]);
    let inverse = 1.0/(mass_a+mass_b);
    let ratio_a = mass_b*inverse;
    let ratio_b = mass_a*inverse;
    let cap_a = (ratio_a+ratio_a)*f32::from_bits(a.words[39]);
    let cap_b = (ratio_b+ratio_b)*f32::from_bits(b.words[39]);
    work.words[0] = (ai as u32 & 0xffff)|((bi as u32 & 0xffff)<<16);
    for i in 4..7 { work.words[i] = (f32::from_bits(work.words[i])*0.875).to_bits(); }
    let cap = if cap_a <= cap_b { cap_a } else { cap_b };
    work.words[15] = (ratio_a*cap).to_bits();
    work.words[16] = (ratio_b*cap).to_bits();
    work.words[17] = 0.875f32.to_bits();
    true
}

/// Kind-8 angular solve, including the original global-mode alternative.
pub fn solve_kind8(joint: &crate::joints::JointRecord, work: &crate::joints::JointWork,
    bodies: &mut [RigidBodyRecord], alternate_mode: bool) -> bool {
    let (ai,bi) = ((work.words[0]&0xffff) as usize,(work.words[0]>>16) as usize);
    if ai == bi || ai >= bodies.len() || bi >= bodies.len() { return false; }
    let a: [f32;3] = core::array::from_fn(|i| f32::from_bits(bodies[ai].words[27+i]));
    let b: [f32;3] = core::array::from_fn(|i| f32::from_bits(bodies[bi].words[27+i]));
    let relative: [f32;3] = core::array::from_fn(|i| b[i]-a[i]);
    let wf = |i: usize| f32::from_bits(work.words[i]);
    let mut correction: [f32;3] = core::array::from_fn(|i| (a[i]*sign_flip(wf(17))+wf(4+i))+b[i]*wf(17));
    if work.words[23] != 0 {
        let projection = sign_flip((correction[0]*wf(24)+correction[1]*wf(25))+correction[2]*wf(26));
        for i in 0..3 { correction[i] = correction[i]+projection*wf(24+i); }
    }
    let length = |v: &[f32;3]| unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(
        (v[1]*v[1]+v[0]*v[0])+v[2]*v[2]))) };
    if !alternate_mode {
        let maximum = f32::from_bits(joint.words[34]);
        if maximum != 0.0 {
            let magnitude = length(&correction);
            if maximum < magnitude {
                let scale = maximum/magnitude;
                for v in &mut correction { *v = *v*scale; }
            }
            for i in 0..3 { correction[i] = correction[i]+relative[i]*0.125; }
        }
    } else if bodies[bi].words[1] == 0 {
        let mut maximum = if matches!(bodies[ai].words[4],6|9) { 0.00390625 } else { 0.25 };
        let kind = bodies[bi].words[4];
        if kind.wrapping_sub(1) < 3 { maximum = 0.015625; }
        if kind.wrapping_sub(2) < 2 { maximum = 0.0078125; }
        if kind == 3 { maximum = 0.00390625; }
        let magnitude = length(&correction);
        if maximum < magnitude {
            let scale = maximum/magnitude;
            for v in &mut correction { *v = *v*scale; }
        }
        let mut damping: [f32;3] = core::array::from_fn(|i| relative[i]*0.125);
        let squared = ((relative[1]*relative[1]+relative[0]*relative[0])+relative[2]*relative[2])*0.015625;
        let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(squared))) };
        if maximum < magnitude {
            let scale = maximum/magnitude;
            for v in &mut damping { *v = scale * *v; }
        }
        for i in 0..3 { correction[i] = correction[i]+damping[i]; }
    }
    if work.words[19] != 0 {
        let axis = [wf(20),wf(21),wf(22)];
        let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(
            (axis[0]*axis[0]+axis[1]*axis[1])+axis[2]*axis[2]))) };
        let normal: [f32;3] = if magnitude == 0.0 { [0.0;3] } else {
            let inverse = 1.0/magnitude;
            core::array::from_fn(|i| inverse*axis[i])
        };
        let projection = (normal[0]*relative[0]+normal[1]*relative[1])+normal[2]*relative[2];
        for i in 0..3 { correction[i] = correction[i]+(projection*normal[i]+axis[i])*wf(17); }
    }
    for i in 0..3 {
        bodies[ai].words[30+i] = (wf(15)*correction[i]+f32::from_bits(bodies[ai].words[30+i])).to_bits();
        bodies[bi].words[30+i] = (sign_flip(wf(16))*correction[i]+f32::from_bits(bodies[bi].words[30+i])).to_bits();
    }
    true
}

/// Kind-10 anchor-work preparation 14001c780. This is a preparatory pass, not a
/// complete constraint solve. Invalid IDs are rejected without writes.
pub fn prepare_anchor(joint: &crate::joints::JointRecord,
    work: &mut crate::joints::JointWork, bodies: &[RigidBodyRecord]) -> bool {
    let ai = joint.words[38] as usize;
    let bi = joint.words[39] as usize;
    let (Some(a), Some(b)) = (bodies.get(ai), bodies.get(bi)) else { return false; };
    let jf = |i: usize| f32::from_bits(joint.words[i]);
    let af = |i: usize| f32::from_bits(a.words[i]);
    let bf = |i: usize| f32::from_bits(b.words[i]);
    let mut ra = [0.0; 3];
    let mut rb = [0.0; 3];
    let mut delta = [0.0; 3];
    for i in 0..3 {
        ra[i] = (jf(15)*af(18+i) + jf(14)*af(15+i)) + jf(16)*af(21+i);
        rb[i] = (jf(18)*bf(18+i) + jf(17)*bf(15+i)) + jf(19)*bf(21+i);
        delta[i] = (ra[i] + af(6+i)) - (rb[i] + bf(6+i));
    }
    let length = |v: &[f32; 3]| unsafe {
        _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((v[1]*v[1]+v[0]*v[0])+v[2]*v[2])))
    };
    let magnitude = length(&delta);
    if 0.0625 < magnitude {
        let inverse = 1.0 / magnitude;
        for v in &mut delta { *v = (*v*inverse)*0.0625; }
    }
    if joint.words[41] == 0x457 {
        let magnitude = length(&delta);
        if 0.015625 < magnitude {
            let inverse = 1.0 / magnitude;
            for v in &mut delta { *v = (inverse * *v)*0.015625; }
        }
    }
    let inverse_mass_sum = 1.0 / (bf(5)+af(5));
    let ratio_a = inverse_mass_sum*bf(5);
    let ratio_b = inverse_mass_sum*af(5);
    let cap_b = (ratio_b+ratio_b)*bf(39);
    let cap_a = (ratio_a+ratio_a)*af(39);
    let cap = if cap_a <= cap_b { cap_a } else { cap_b };
    work.words[0] = (ai as u32 & 0xffff) | ((bi as u32 & 0xffff)<<16);
    for i in 0..3 {
        work.words[8+i] = ra[i].to_bits();
        work.words[11+i] = rb[i].to_bits();
        work.words[27+i] = (delta[i]*0.1875).to_bits();
        work.words[30+i] = (f32::from_bits(work.words[4+i])*0.875).to_bits();
    }
    work.words[15] = ratio_a.to_bits();
    work.words[16] = ratio_b.to_bits();
    work.words[17] = 0x3e400000;
    work.words[33] = cap.to_bits();
    true
}

/// # Safety
/// Joint, writable work and body array must be valid, aligned and disjoint.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_prepare_anchor(joint: *const crate::joints::JointRecord,
    work: *mut crate::joints::JointWork, bodies: *const RigidBodyRecord, count: usize) -> i32 {
    unsafe { i32::from(prepare_anchor(&*joint, &mut *work, core::slice::from_raw_parts(bodies,count))) }
}

/// Layout used by isolated comparisons, independent of original body storage.
#[repr(C)]
#[derive(Clone, Copy)]
pub struct BodyVelocity {
    pub linear: [f32; 3],
    pub angular: [f32; 3],
    pub linear_delta: [f32; 3],
    pub angular_state_delta: [f32; 3],
}

#[repr(C)]
#[derive(Clone, Copy)]
pub struct AnchorWork {
    pub anchor_a: [f32; 3],
    pub anchor_b: [f32; 3],
    pub desired: [f32; 3],
    pub gain: f32,
    pub ratio_a: f32,
    pub ratio_b: f32,
}

fn sign_flip(value: f32) -> f32 { f32::from_bits(value.to_bits() ^ 0x80000000) }

pub fn solve_anchor(work: &AnchorWork, a: &mut BodyVelocity, b: &mut BodyVelocity) {
    let r = work.anchor_a;
    let s = work.anchor_b;
    let av = a.linear;
    let aw = a.angular;
    let bv = b.linear;
    let bw = b.angular;
    let negative_gain = sign_flip(work.gain);
    let mut x = ((aw[2]*r[1]-aw[1]*r[2])+av[0])*work.gain + work.desired[0]
        + ((bw[2]*s[1]-bw[1]*s[2])+bv[0])*negative_gain;
    let mut y = ((aw[0]*r[2]-aw[2]*r[0])+av[1])*work.gain + work.desired[1]
        + ((bw[0]*s[2]-bw[2]*s[0])+bv[1])*negative_gain;
    let mut z = ((aw[1]*r[0]-aw[0]*r[1])+av[2])*work.gain + work.desired[2]
        + ((bw[1]*s[0]-bw[0]*s[1])+bv[2])*negative_gain;
    let squared = (y*y + x*x) + z*z;
    let length = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(squared))) };
    let maximum = f32::from_bits(0x3d088889);
    if maximum < length {
        let scale = maximum / length;
        x = scale*x; y = scale*y; z = scale*z;
    }
    let negative_a = sign_flip(work.ratio_a);
    a.linear_delta[0] = x*negative_a + a.linear_delta[0];
    a.linear_delta[1] = y*negative_a + a.linear_delta[1];
    a.linear_delta[2] = z*negative_a + a.linear_delta[2];
    a.angular_state_delta[0] = (r[2]*y-r[1]*z)*negative_a + a.angular_state_delta[0];
    a.angular_state_delta[1] = (r[0]*z-r[2]*x)*negative_a + a.angular_state_delta[1];
    a.angular_state_delta[2] = (r[1]*x-r[0]*y)*negative_a + a.angular_state_delta[2];
    b.linear_delta[0] = work.ratio_b*x + b.linear_delta[0];
    b.linear_delta[1] = work.ratio_b*y + b.linear_delta[1];
    b.linear_delta[2] = work.ratio_b*z + b.linear_delta[2];
    b.angular_state_delta[0] = (s[2]*y-s[1]*z)*work.ratio_b + b.angular_state_delta[0];
    b.angular_state_delta[1] = (s[0]*z-s[2]*x)*work.ratio_b + b.angular_state_delta[1];
    b.angular_state_delta[2] = (s[1]*x-s[0]*y)*work.ratio_b + b.angular_state_delta[2];
}

/// Apply prepared work to the original rigid-body storage. The native solver
/// reads derived angular velocity (+6c), then accumulates angular state (+78).
/// Distinct bodies are required; aliased-body native ordering is unrecovered.
pub fn solve_prepared_anchor(work: &crate::joints::JointWork, bodies: &mut [RigidBodyRecord]) -> bool {
    apply_anchor_component(work, bodies, 4)
}

fn apply_anchor_component(work: &crate::joints::JointWork, bodies: &mut [RigidBodyRecord], desired_base: usize) -> bool {
    let ai = (work.words[0]&0xffff) as usize;
    let bi = (work.words[0]>>16) as usize;
    if ai == bi || ai >= bodies.len() || bi >= bodies.len() { return false; }
    let read_velocity = |body: &RigidBodyRecord| BodyVelocity {
        linear: core::array::from_fn(|i| f32::from_bits(body.words[9+i])),
        angular: core::array::from_fn(|i| f32::from_bits(body.words[27+i])),
        linear_delta: core::array::from_fn(|i| f32::from_bits(body.words[12+i])),
        angular_state_delta: core::array::from_fn(|i| f32::from_bits(body.words[30+i])),
    };
    let wf = |i: usize| f32::from_bits(work.words[i]);
    let input = AnchorWork {
        anchor_a: core::array::from_fn(|i| wf(8+i)),
        anchor_b: core::array::from_fn(|i| wf(11+i)),
        desired: core::array::from_fn(|i| wf(desired_base+i)),
        gain: wf(17), ratio_a: wf(15), ratio_b: wf(16),
    };
    let mut a = read_velocity(&bodies[ai]);
    let mut b = read_velocity(&bodies[bi]);
    solve_anchor(&input, &mut a, &mut b);
    for (id, output) in [(ai, a), (bi, b)] {
        for i in 0..3 {
            bodies[id].words[12+i] = output.linear_delta[i].to_bits();
            bodies[id].words[30+i] = output.angular_state_delta[i].to_bits();
        }
    }
    true
}

/// Kind-10 solver 14001bf70, including angular cap, damping and axis bias.
pub fn solve_kind10(joint: &crate::joints::JointRecord, work: &crate::joints::JointWork,
    bodies: &mut [RigidBodyRecord]) -> bool {
    if !apply_anchor_component(work, bodies, 27) { return false; }
    let ai = (work.words[0]&0xffff) as usize;
    let bi = (work.words[0]>>16) as usize;
    let a: [f32; 3] = core::array::from_fn(|i| f32::from_bits(bodies[ai].words[27+i]));
    let b: [f32; 3] = core::array::from_fn(|i| f32::from_bits(bodies[bi].words[27+i]));
    let wf = |i: usize| f32::from_bits(work.words[i]);
    let mut correction: [f32; 3] = core::array::from_fn(|i| (wf(30+i)-a[i]*0.875)+b[i]*0.875);
    let maximum = f32::from_bits(joint.words[34]);
    if maximum != 0.0 {
        let squared = (correction[1]*correction[1]+correction[0]*correction[0])+correction[2]*correction[2];
        let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(squared))) };
        if maximum < magnitude {
            let scale = maximum/magnitude;
            for v in &mut correction { *v = scale * *v; }
        }
        let damping = if wf(35) == 0.0 { 0.125 } else { wf(35) };
        for i in 0..3 { correction[i] = correction[i]+(b[i]-a[i])*damping; }
    }
    if work.words[19] != 0 {
        let axis = [wf(20),wf(21),wf(22)];
        let squared = (axis[0]*axis[0]+axis[1]*axis[1])+axis[2]*axis[2];
        let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(squared))) };
        let normalized = if magnitude == 0.0 { [0.0; 3] } else {
            let inverse = 1.0/magnitude;
            core::array::from_fn(|i| axis[i]*inverse)
        };
        let projection = ((b[0]-a[0])*normalized[0]+(b[1]-a[1])*normalized[1])+(b[2]-a[2])*normalized[2];
        for i in 0..3 { correction[i] = correction[i]+((projection*normalized[i])*0.875+axis[i]*0.875); }
    }
    let factor = wf(33);
    let negative_b = sign_flip(wf(16));
    for i in 0..3 {
        let old_a = f32::from_bits(bodies[ai].words[30+i]);
        let old_b = f32::from_bits(bodies[bi].words[30+i]);
        bodies[ai].words[30+i] = ((correction[i]*factor)*wf(15)+old_a).to_bits();
        let delta_b = negative_b*(correction[i]*factor);
        bodies[bi].words[30+i] = (delta_b+old_b).to_bits();
    }
    true
}

/// # Safety
/// All pointers must be aligned, valid and mutually disjoint.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_solve_kind10(joint: *const crate::joints::JointRecord,
    work: *const crate::joints::JointWork, bodies: *mut RigidBodyRecord, count: usize) -> i32 {
    unsafe { i32::from(solve_kind10(&*joint,&*work,core::slice::from_raw_parts_mut(bodies,count))) }
}

/// # Safety
/// Readable work and writable body array must be valid, aligned and disjoint.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_solve_prepared_anchor(work: *const crate::joints::JointWork,
    bodies: *mut RigidBodyRecord, count: usize) -> i32 {
    unsafe { i32::from(solve_prepared_anchor(&*work,core::slice::from_raw_parts_mut(bodies,count))) }
}

/// # Safety
/// Pointers must be aligned, valid and disjoint; a/b must be writable.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_solve_anchor(work: *const AnchorWork,
    a: *mut BodyVelocity, b: *mut BodyVelocity) {
    unsafe { solve_anchor(&*work, &mut *a, &mut *b); }
}
