//! Recovered contact-response equations inside 14001d080.
//! Contact generation and collision geometry remain separate recovery work.
use crate::{joints::{JointRecord,JointWork}, physics::{PointConstraintVelocity,RigidBodyRecord}, point_state::PointState};
use core::arch::x86_64::{_mm_cvtss_f32,_mm_sqrt_ss,_mm_set_ss};

fn length(v: [f32;3]) -> f32 {
    unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((v[1]*v[1]+v[0]*v[0])+v[2]*v[2]))) }
}

pub enum RigidContactSetup {
    Single { body: u16, anchor: [u32;3], normal: [u32;3], depth: f32,
        bias_gain: f32, friction: u32, velocity_gain: u32 },
    Pair { a: usize, b: usize, anchor_a: [u32;3], anchor_b: [u32;3], normal: [u32;3],
        depth: f32, bias_gain: f32, friction: u32, velocity_gain: u32 },
}

/// Original transient contact constructors 140005160/1400052c0. Contacts use
/// first-free allocation, mask 0, and lifetime 0, so the solve pass releases
/// them after response. Collision detection supplies the geometry separately.
pub fn create_rigid_contact(joints: &mut [JointRecord], work: &mut [JointWork],
    bodies: &[RigidBodyRecord], setup: RigidContactSetup) -> Option<usize> {
    if joints.len() != work.len() { return None; }
    if let RigidContactSetup::Pair { a,b,.. } = &setup {
        if *a >= bodies.len() || *b >= bodies.len() { return None; }
    }
    let index = joints.iter().position(|joint| joint.words[0] == 0)?;
    joints[index].words = [0;61];
    work[index].words = [0;36];
    joints[index].words[0] = 1;
    let output = &mut work[index];
    match setup {
        RigidContactSetup::Single { body,anchor,normal,depth,bias_gain,friction,velocity_gain } => {
            joints[index].words[1] = 5;
            output.words[0] = body as u32;
            output.words[8..11].copy_from_slice(&anchor);
            output.words[4..7].copy_from_slice(&normal);
            output.words[7] = (depth*bias_gain).to_bits();
            output.words[17] = velocity_gain;
            output.words[18] = friction;
        }
        RigidContactSetup::Pair { a,b,anchor_a,anchor_b,normal,depth,bias_gain,friction,velocity_gain } => {
            joints[index].words[1] = 6;
            output.words[0] = (a as u32&0xffff)|((b as u32&0xffff)<<16);
            output.words[8..11].copy_from_slice(&anchor_a);
            output.words[11..14].copy_from_slice(&anchor_b);
            output.words[4..7].copy_from_slice(&normal);
            output.words[7] = (depth*bias_gain).to_bits();
            output.words[17] = velocity_gain;
            output.words[18] = friction;
            let mass_a = f32::from_bits(bodies[a].words[5]);
            let mass_b = f32::from_bits(bodies[b].words[5]);
            let inverse = 1.0/(mass_b+mass_a);
            output.words[15] = (mass_b*inverse).to_bits();
            output.words[16] = (mass_a*inverse).to_bits();
        }
    }
    Some(index)
}

/// # Safety
/// Pools are aligned, valid and disjoint. Each vector holds three words.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_create_rigid_contact(joints: *mut JointRecord, work: *mut JointWork,
    count: usize, bodies: *const RigidBodyRecord, body_count: usize, pair: u32,
    a: u32,b: u32,anchor_a: *const u32,anchor_b: *const u32,normal: *const u32,
    depth: f32,bias_gain: f32,friction: u32,velocity_gain: u32) -> i32 {
    unsafe {
        let normal = core::ptr::read_unaligned(normal.cast());
        let anchor = core::ptr::read_unaligned(anchor_a.cast());
        let setup = if pair == 0 { RigidContactSetup::Single { body: a as u16,
            anchor,normal,depth,bias_gain,friction,velocity_gain } } else {
            RigidContactSetup::Pair { a: a as usize,b: b as usize,anchor_a: anchor,
                anchor_b: core::ptr::read_unaligned(anchor_b.cast()),normal,depth,bias_gain,friction,velocity_gain }
        };
        create_rigid_contact(core::slice::from_raw_parts_mut(joints,count),core::slice::from_raw_parts_mut(work,count),
            core::slice::from_raw_parts(bodies,body_count),setup).map(|i| i as i32).unwrap_or(-1)
    }
}

fn friction_response(vector: [f32;3], normal: [f32;3], friction: f32) -> Option<[f32;3]> {
    let projection = (vector[0]*normal[0]+vector[1]*normal[1])+vector[2]*normal[2];
    if !(0.0 < projection) { return None; }
    let mut response: [f32;3] = core::array::from_fn(|i| projection*normal[i]);
    let tangent: [f32;3] = core::array::from_fn(|i| vector[i]-response[i]);
    let tangent_length = length(tangent);
    if 0.0 < tangent_length {
        let inverse = 1.0/tangent_length;
        let limit = length(response)*friction;
        let selected = if tangent_length <= limit { tangent_length } else { limit };
        for i in 0..3 { response[i] = response[i]+(inverse*tangent[i])*selected; }
    }
    Some(response)
}

/// Kind 1: point contact against a target velocity stored in the contact.
pub fn solve_point_contact(joint: &JointRecord, scratch: &mut [PointConstraintVelocity]) -> bool {
    let ai = joint.words[6] as usize;
    let Some(a) = scratch.get_mut(ai) else { return false; };
    let jf = |i: usize| f32::from_bits(joint.words[i]);
    let negative_gain = f32::from_bits(joint.words[29]^0x80000000);
    let bias = jf(25)*jf(28);
    let normal = [jf(30),jf(31),jf(32)];
    let vector = core::array::from_fn(|i| (negative_gain*a.velocity[i]+bias*normal[i])+jf(29)*jf(49+i));
    if let Some(response) = friction_response(vector,normal,jf(33)) {
        for i in 0..3 { a.delta[i] = response[i]+a.delta[i]; }
    }
    true
}

/// Kind 2: pairwise point contact with the original normalization threshold.
pub fn solve_point_pair_contact(joint: &JointRecord, points: &[PointState],
    scratch: &mut [PointConstraintVelocity]) -> bool {
    let (ai,bi) = (joint.words[6] as usize,joint.words[7] as usize);
    if ai == bi || ai >= points.len() || bi >= points.len() || ai >= scratch.len() || bi >= scratch.len() { return false; }
    let jf = |i: usize| f32::from_bits(joint.words[i]);
    let negative_gain = f32::from_bits(joint.words[29]^0x80000000);
    let bias = jf(25)*jf(28);
    let normal = [jf(30),jf(31),jf(32)];
    let vector: [f32;3] = core::array::from_fn(|i|
        (negative_gain*scratch[ai].velocity[i]+bias*normal[i])+jf(29)*scratch[bi].velocity[i]);
    let magnitude = length(vector);
    let direction = if magnitude <= f32::from_bits(0x37800000) { [0.0;3] } else {
        let inverse = 1.0/magnitude;
        core::array::from_fn(|i| inverse*vector[i])
    };
    let mass_a = f32::from_bits(points[ai].words[8]);
    let mass_b = f32::from_bits(points[bi].words[8]);
    let factor = magnitude/(mass_a+mass_b);
    if let Some(response) = friction_response(direction,normal,jf(33)) {
        let a = mass_b*factor;
        let b = f32::from_bits((mass_a*factor).to_bits()^0x80000000);
        for i in 0..3 {
            scratch[ai].delta[i] = a*response[i]+scratch[ai].delta[i];
            scratch[bi].delta[i] = b*response[i]+scratch[bi].delta[i];
        }
    }
    true
}

/// Kind 3: point against a weighted three-point surface. Weights remain in
/// original order; they are not renormalized by this solver.
pub fn solve_point_surface_contact(joint: &JointRecord, points: &[PointState],
    scratch: &mut [PointConstraintVelocity]) -> bool {
    let ids: [usize;4] = core::array::from_fn(|i| joint.words[6+i] as usize);
    if ids.iter().any(|&id| id >= points.len() || id >= scratch.len()) { return false; }
    let jf = |i: usize| f32::from_bits(joint.words[i]);
    let weights = [jf(20),jf(21),jf(22)];
    let coefficients = [weights[0]*jf(29),weights[1]*jf(29),jf(29)*weights[2]];
    let negative_gain = f32::from_bits(joint.words[29]^0x80000000);
    let bias = jf(25)*jf(28);
    let normal = [jf(30),jf(31),jf(32)];
    let vector: [f32;3] = core::array::from_fn(|i|
        (((negative_gain*scratch[ids[0]].velocity[i]+bias*normal[i])+
            coefficients[0]*scratch[ids[1]].velocity[i])+
            coefficients[1]*scratch[ids[2]].velocity[i])+
            coefficients[2]*scratch[ids[3]].velocity[i]);
    let magnitude = length(vector);
    let inverse = 1.0/magnitude;
    let mass = |id: usize| f32::from_bits(points[id].words[8]);
    let weighted_mass = (weights[0]*mass(ids[1])+weights[1]*mass(ids[2]))+weights[2]*mass(ids[3]);
    let factor = magnitude/(weighted_mass+mass(ids[0]));
    let projection = ((normal[0]*inverse)*vector[0]+(normal[1]*inverse)*vector[1])+
        (normal[2]*inverse)*vector[2];
    if 0.0 < projection {
        let mut response: [f32;3] = core::array::from_fn(|i| normal[i]*projection);
        let tangent: [f32;3] = core::array::from_fn(|i| inverse*vector[i]-response[i]);
        let tangent_length = length(tangent);
        if 0.0 < tangent_length {
            let reciprocal = 1.0/tangent_length;
            let maximum = length(response)*jf(33);
            let selected = if tangent_length <= maximum { tangent_length } else { maximum };
            for i in 0..3 { response[i] = response[i]+(tangent[i]*reciprocal)*selected; }
        }
        let a = weighted_mass*factor;
        let other = mass(ids[0])*factor;
        let factors = [a,
            f32::from_bits((weights[0]*other).to_bits()^0x80000000),
            f32::from_bits((weights[1]*other).to_bits()^0x80000000),
            f32::from_bits((weights[2]*other).to_bits()^0x80000000)];
        for k in 0..4 {
            for i in 0..3 { scratch[ids[k]].delta[i] = response[i]*factors[k]+scratch[ids[k]].delta[i]; }
        }
    }
    true
}

fn point_velocity(body: &RigidBodyRecord, r: [f32;3]) -> [f32;3] {
    let b = |i:usize| f32::from_bits(body.words[i]);
    [(b(29)*r[1]-r[2]*b(28))+b(9),
     (r[2]*b(27)-b(29)*r[0])+b(10),
     (r[0]*b(28)-r[1]*b(27))+b(11)]
}

fn apply_rigid_contact(body: &mut RigidBodyRecord, r: [f32;3], response: [f32;3], ratio: f32) {
    let angular = [r[2]*response[1]-response[2]*r[1],
        response[2]*r[0]-r[2]*response[0],response[0]*r[1]-response[1]*r[0]];
    for i in 0..3 {
        body.words[12+i] = (response[i]*ratio+f32::from_bits(body.words[12+i])).to_bits();
        body.words[30+i] = (angular[i]*ratio+f32::from_bits(body.words[30+i])).to_bits();
    }
}

/// Kind 5: single-body contact, including the friction energy accumulator.
pub fn solve_rigid_contact(work: &JointWork, bodies: &mut [RigidBodyRecord]) -> bool {
    let ai = (work.words[0]&0xffff) as usize;
    let Some(body) = bodies.get_mut(ai) else { return false; };
    let wf = |i:usize| f32::from_bits(work.words[i]);
    let r = [wf(8),wf(9),wf(10)];
    let normal = [wf(4),wf(5),wf(6)];
    let v = point_velocity(body,r);
    let negative_gain = f32::from_bits(work.words[17]^0x80000000);
    let vector: [f32;3] = core::array::from_fn(|i| v[i]*negative_gain+normal[i]*wf(7));
    let projection = (normal[0]*vector[0]+normal[1]*vector[1])+normal[2]*vector[2];
    if 0.0 < projection {
        let mut response: [f32;3] = core::array::from_fn(|i| normal[i]*projection);
        let tangent: [f32;3] = core::array::from_fn(|i| vector[i]-response[i]);
        let magnitude = length(tangent);
        let mut loss = 0.0;
        if 0.0 < magnitude {
            let inverse = 1.0/magnitude;
            let normal_length = length(response);
            let limit = normal_length*wf(18);
            let mut selected = magnitude;
            if limit < magnitude { loss = ((magnitude-limit)*normal_length)*480.0; selected = limit; }
            let maximum = f32::from_bits(0x3bdf0124);
            if maximum < selected {
                loss = loss+((selected-maximum)*normal_length)*480.0;
                selected = maximum;
            }
            for i in 0..3 { response[i] = response[i]+selected*(inverse*tangent[i]); }
        }
        body.words[46] = (loss+f32::from_bits(body.words[46])).to_bits();
        apply_rigid_contact(body,r,response,1.0);
    }
    true
}

/// Kind 6: pairwise rigid-body contact and friction response.
pub fn solve_rigid_pair_contact(work: &JointWork, bodies: &mut [RigidBodyRecord]) -> bool {
    let (ai,bi) = ((work.words[0]&0xffff) as usize,(work.words[0]>>16) as usize);
    if ai == bi || ai >= bodies.len() || bi >= bodies.len() { return false; }
    let wf = |i:usize| f32::from_bits(work.words[i]);
    let r = [wf(8),wf(9),wf(10)];let s = [wf(11),wf(12),wf(13)];
    let a = point_velocity(&bodies[ai],r);let b = point_velocity(&bodies[bi],s);
    let normal = [wf(4),wf(5),wf(6)];
    let negative_gain = f32::from_bits(work.words[17]^0x80000000);
    let vector = core::array::from_fn(|i| (a[i]*negative_gain+wf(7)*normal[i])+b[i]*wf(17));
    if let Some(response) = friction_response(vector,normal,wf(18)) {
        apply_rigid_contact(&mut bodies[ai],r,response,wf(15));
        apply_rigid_contact(&mut bodies[bi],s,response,f32::from_bits(work.words[16]^0x80000000));
    }
    true
}

/// Kind 9: body contact with linear target velocity and angular bias.
pub fn solve_biased_body_contact(joint: &JointRecord, bodies: &mut [RigidBodyRecord]) -> bool {
    let ai = joint.words[38] as usize;
    let Some(body) = bodies.get_mut(ai) else { return false; };
    let jf = |i:usize| f32::from_bits(joint.words[i]);
    let normal = [jf(30),jf(31),jf(32)];
    let bias = jf(28)*jf(25);
    let position_gain = jf(28)*0.125;
    let negative_gain = f32::from_bits(joint.words[29]^0x80000000);
    let vector: [f32;3] = core::array::from_fn(|i|
        (position_gain*jf(14+i)+bias*normal[i])+
        (f32::from_bits(body.words[9+i])-jf(49+i))*negative_gain);
    let projection = (vector[0]*normal[0]+vector[1]*normal[1])+vector[2]*normal[2];
    if let Some(response) = friction_response(vector,normal,jf(33)) {
        body.words[12] = (response[0]+f32::from_bits(body.words[12])).to_bits();
        body.words[13] = (response[1]*jf(21)+f32::from_bits(body.words[13])).to_bits();
        body.words[14] = (response[2]+f32::from_bits(body.words[14])).to_bits();
        let fraction = projection*1024.0;
        let fraction = if 1.0 <= fraction { 1.0 } else { fraction };
        let bias_gain = (jf(20)*jf(28))*fraction;
        let damping = f32::from_bits(((jf(20)*jf(29))*fraction).to_bits()^0x80000000);
        for i in 0..3 {
            body.words[30+i] = ((bias_gain*jf(11+i)+damping*f32::from_bits(body.words[27+i]))+
                f32::from_bits(body.words[30+i])).to_bits();
        }
    }
    true
}
