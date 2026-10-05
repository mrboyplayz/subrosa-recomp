//! Desktop connection of recovered 16-body construction, kind-10 joints,
//! three-joint drives and angular integration. Gait/input/support targets are
//! provisional until the full 1400ad2b0 / 1400bca30 controller is recovered.
use crate::{human::{self,HumanBone,HumanJointLinks},human_templates::ORIGINAL_BONE_TEMPLATES as T,
    joints::{self,JointRecord,JointWork,JointSetup},physics::{self,RigidBodyRecord},
    contacts::{self,RigidContactSetup},limb::{self,LimbDrive,IDENTITY},pose,practice::{V3,CollisionWorld}};
pub struct ActiveRagdoll {
    pub bodies:Vec<RigidBodyRecord>,pub bones:[HumanBone;16],pub joints:Vec<JointRecord>,pub work:Vec<JointWork>,
    pub spawn:V3,pub grounded:bool,pub ticks:u64,pub limp:bool,pub drive_count:u64,
    support:usize,phase:f32,yaw:f32,
}
fn f(b:&RigidBodyRecord,i:usize)->f32{f32::from_bits(b.words[i])}
fn position(b:&RigidBodyRecord)->V3{core::array::from_fn(|i|f(b,6+i))}
fn orientation(b:&RigidBodyRecord)->[f32;9]{core::array::from_fn(|i|f(b,15+i))}
fn transform(m:[f32;9],v:V3)->V3{core::array::from_fn(|i|(v[1]*m[3+i]+v[0]*m[i])+v[2]*m[6+i])}
impl ActiveRagdoll {
    pub fn new(spawn:V3)->Self{
        let mut bones=[HumanBone{words:[0;78]};16];let mut bodies=vec![RigidBodyRecord{words:[0;47]};16];
        let p=[spawn[0],spawn[1]+1.07,spawn[2]];
        human::build_bodies(&mut bones,&mut bodies,&T,0,p.map(f32::to_bits),IDENTITY.map(f32::to_bits)).expect("Recovered skeleton");
        let mut joints=vec![JointRecord{words:[0;61]};128];let mut work=vec![JointWork{words:[0;36]};128];
        let mut links=HumanJointLinks{count:0,entries:[[0;3];32]};
        assert_eq!(human::build_joints(&mut bones,&T,&mut links,&mut joints,&mut work,0),Some(15));
        let support=joints::create(&mut joints,&mut work,JointSetup::Single{body:0,anchor:[0;3],vector:p.map(f32::to_bits)}).unwrap();
        Self{bodies,bones,joints,work,spawn,grounded:false,ticks:0,limp:false,drive_count:0,support,phase:0.,yaw:0.}
    }
    pub fn feet(&self)->V3{let mut p=position(&self.bodies[0]);p[1]-=1.07;p}
    pub fn reset(&mut self){*self=Self::new(self.spawn);}
    pub fn sync_bones(&mut self){for (i,b) in self.bodies.iter().enumerate(){
        self.bones[i].words.copy_within(1..4,4);
        self.bones[i].words[1..4].copy_from_slice(&b.words[6..9]);self.bones[i].words[7..10].copy_from_slice(&b.words[9..12]);self.bones[i].words[13..22].copy_from_slice(&b.words[15..24]);self.bones[i].words[22..25].copy_from_slice(&b.words[27..30]);
    }}
    pub fn step(&mut self,world:&CollisionWorld,wish:V3,jump:bool)->Result<(),String>{
        if jump&&self.grounded&&!self.limp{for b in &mut self.bodies{b.words[10]=(5.2f32/60.).to_bits();}}
        let old:Vec<_>=self.bodies.iter().map(position).collect();physics::advance_bodies(&mut self.bodies);self.sync_bones();
        let root=position(&self.bodies[0]);let vy=f(&self.bodies[0],10);
        let floor=world.ray([root[0],root[1]+0.15,root[2]],[root[0],root[1]-1.25,root[2]]).filter(|h|h.normal[1]>0.6);
        self.grounded=floor.is_some_and(|h|root[1]-h.position[1]<1.12&&vy<0.015);
        self.joints[self.support].words[0]=u32::from(!self.limp);
        let mut drive=wish;
        for height in [0.35,0.9,1.6]{let start=[old[0][0],old[0][1]-1.07+height,old[0][2]];
            let len=(wish[0]*wish[0]+wish[2]*wish[2]).sqrt();if len>0.{let end=[start[0]+wish[0]*(1./60.+0.3/len),start[1],start[2]+wish[2]*(1./60.+0.3/len)];
                if let Some(h)=world.ray(start,end){let inward=drive[0]*h.normal[0]+drive[2]*h.normal[2];if h.normal[1].abs()<0.6&&inward<0.{drive[0]-=h.normal[0]*inward;drive[2]-=h.normal[2]*inward;}}
            }
        }
        let support_y=if self.grounded&&!jump{floor.unwrap().position[1]+1.07}else{root[1]+2.*vy};
        self.joints[self.support].words[11..14].copy_from_slice(&[root[0]+2.*drive[0]/60.,support_y,root[2]+2.*drive[2]/60.].map(f32::to_bits));
        if !self.limp{
            let speed=(drive[0]*drive[0]+drive[2]*drive[2]).sqrt();self.phase+=speed*0.075;
            if speed>0.01{let target=drive[0].atan2(drive[2]);let delta=(target-self.yaw+core::f32::consts::PI).rem_euclid(core::f32::consts::TAU)-core::f32::consts::PI;self.yaw+=delta*0.12;}
            let mut reference=IDENTITY;limb::rotate(&mut reference,[0.,1.,0.],self.yaw);
            // Pelvis balance is an explicit temporary support target. The
            // remaining 15 joints and all 16 angular states run the solver.
            let current=pose::matrix_to_quaternion(&orientation(&self.bodies[0]));
            let desired=pose::matrix_to_quaternion(&reference);let mut error=limb::multiply([current[0]*-1.,current[1]*-1.,current[2]*-1.,current[3]],desired);
            if error[3]<0.{for x in &mut error{*x= -*x;}}
            // RotMatrix stores the three basis vectors in RosaServer's
            // x1,y1,z1 / x2,y2,z2 / x3,y3,z3 order. Quaternion conversion sees
            // its transpose, so momentum feedback has the opposite sign.
            let balance=transform(orientation(&self.bodies[0]),[error[0],error[1],error[2]]);
            for i in 0..3{self.bodies[0].words[24+i]=(f(&self.bodies[0],24+i)*0.7-balance[i]*0.03).to_bits();}
            for child in [1,2,3]{let id=self.bones[child].words[72] as usize;
                let a=orientation(&self.bodies[(child-1) as usize]);let b=orientation(&self.bodies[child]);
                let q=pose::matrix_to_quaternion(&limb::relative(&b,&a));
                let v=transform(b,[q[0]*-0.15,q[1]*-0.15,q[2]*-0.15]);
                self.work[id].words[4..7].copy_from_slice(&v.map(f32::to_bits));self.joints[id].words[34]=0.015625f32.to_bits();
            }
            for first in [4,7,10,13]{
                let leg=first>=10;let opposite=if first==7||first==13{-1.}else{1.};let swing=self.phase.sin()*speed.min(5.)*0.018*opposite;
                let local=if leg{[0.,-0.995+swing.abs()*0.5,swing]}else{[0.,-0.58,-0.07-swing]};
                let mut input=LimbDrive{parent:if leg{0}else{2},first,target:transform(reference,local),reference,velocity:[0.;3],reach:if leg{1.0}else{0.65625},twist:0.,end_quaternion:[0.,0.,0.,1.],gains:[1.;3],angular_limits:[0.125f32.to_bits();3],response_caps:[0.015625f32.to_bits();3],correction_cap:0.19634955,flags:if leg{4}else{12},hip_bias:[0.;3]};
                if leg{crate::human_controller::configure_leg_drive(&mut input,0,if self.grounded{1.}else{0.},f(&self.bodies[0],19),0);}
                limb::drive(&self.bones,&mut self.joints,&mut self.work,&mut input).map_err(|e|format!("Limb drive: {e:?}"))?;self.drive_count+=1;
            }
        }else{for id in 0..15{self.work[id].words[4..7].fill(0);self.joints[id].words[34]=0;}}
        for i in 0..16{
            let b=&self.bodies[i];let p=position(b);let m=orientation(b);
            let half=(0..3).map(|axis|f32::from_bits(T[i].words[8+axis])*m[axis*3+1].abs()).sum::<f32>();
            let anchor=core::array::from_fn(|axis|(-half*m[axis*3+1]).to_bits());
            let end=[p[0],p[1]-half,p[2]];let start=[p[0],old[i][1].max(p[1])+half+0.1,p[2]];
            if let Some(hit)=world.ray(start,end){let depth=hit.position[1]-end[1];if depth>0.&&hit.normal[1]>0.6{
                contacts::create_rigid_contact(&mut self.joints,&mut self.work,&self.bodies,RigidContactSetup::Single{body:i as u16,anchor,normal:hit.normal.map(f32::to_bits),depth,bias_gain:0.1875,friction:0.5f32.to_bits(),velocity_gain:0.375f32.to_bits()});
            }}
        }
        physics::step_rigid_constraints(&mut self.joints,&mut self.work,&mut self.bodies).map_err(|e|format!("Ragdoll constraints: {e:?}"))?;
        self.sync_bones();self.ticks+=1;
        if self.bodies.iter().any(|b|b.words[6..30].iter().any(|&x|!f32::from_bits(x).is_finite())){return Err("Nonfinite ragdoll state".into());}
        if self.feet()[1]< -100.{self.reset();}Ok(())
    }
    /// Native CMC influences are bone-local positions, never rest world vertices.
    pub fn render_origins(&self)->[V3;16]{crate::human_render::pose_origins(&self.bones,&T)}
    pub fn skin(&self,v:&crate::models::SkinVertex)->V3{self.skin_at(v,&self.render_origins())}
    pub fn skin_at(&self,v:&crate::models::SkinVertex,origins:&[V3;16])->V3{
        let mut p=[0.;3];for j in 0..v.count as usize{let id=v.bone_ids[j] as usize;let b=&self.bodies[id];let local=transform(orientation(b),v.local_positions[j]);let origin=origins[id];
            for i in 0..3{p[i]+=(local[i]+origin[i])*v.weights[j];}
        }p
    }
}
