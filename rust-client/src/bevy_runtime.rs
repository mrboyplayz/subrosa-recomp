//! Bevy owns presentation scheduling; recovered simulation math owns pose values.
//! Full simulation ordering and original-to-Bevy coordinate mapping remain pending.
use bevy::prelude::*;
use bevy::ecs::schedule::ScheduleLabel;

/// Explicit native point-state pass. The caller controls when it runs: the
/// original game tick rate and surrounding passes are still being recovered.
#[derive(ScheduleLabel, Clone, Debug, PartialEq, Eq, Hash)]
pub struct RecoveredPointStep;

#[derive(Resource, Default)]
pub struct RecoveredPointWorld {
    pub points: Vec<crate::point_state::PointState>,
    pub joints: Vec<crate::joints::JointRecord>,
    pub work: Vec<crate::joints::JointWork>,
    pub owners: Vec<crate::joints::OwnerJointLinks>,
    pub mode: i32,
}

impl RecoveredPointWorld {
    pub fn create_link(&mut self, mode: u32, a: i32, b: i32, owner: i32) -> Option<usize> {
        crate::joints::create_point_link(&mut self.joints, &mut self.work,
            &mut self.points, &mut self.owners, mode, a, b, owner)
    }
}

pub struct RecoveredPointPlugin;

impl Plugin for RecoveredPointPlugin {
    fn build(&self, app: &mut App) {
        app.init_resource::<RecoveredPointWorld>()
            .init_schedule(RecoveredPointStep)
            .add_systems(RecoveredPointStep, advance_points);
    }
}

fn advance_points(mut state: ResMut<RecoveredPointWorld>) {
    let mode = state.mode;
    crate::point_state::advance(&mut state.points, mode);
}

#[derive(ScheduleLabel, Clone, Debug, PartialEq, Eq, Hash)]
pub struct RecoveredRigidStep;

/// Restricted rigid-body scene. Unsupported joints produce a visible error
/// before any physics state changes, rather than disappearing from simulation.
#[derive(Resource, Default)]
pub struct RecoveredRigidWorld {
    pub bodies: Vec<crate::physics::RigidBodyRecord>,
    pub joints: Vec<crate::joints::JointRecord>,
    pub work: Vec<crate::joints::JointWork>,
    pub points: Vec<crate::point_state::PointState>,
    pub point_work: Vec<crate::physics::PointConstraintVelocity>,
    pub owners: Vec<crate::joints::OwnerJointLinks>,
    pub alternate_angular_mode: bool,
    pub last_step: Option<Result<(), crate::physics::ConstraintStepError>>,
}

impl RecoveredRigidWorld {
    pub fn create_body(&mut self, setup: crate::physics::RigidBodySetup) -> Option<usize> {
        crate::physics::create_body(&mut self.bodies,setup)
    }
    /// Construct original human body records in this world's pool. This does
    /// not initialize the remaining player state or its joints/controllers.
    pub fn build_human_bodies(&mut self, bones: &mut [crate::human::HumanBone],
        templates: &[crate::human::BoneTemplate],human: u32,position: [u32;3],orientation: [u32;9])
        -> Result<(),crate::human::HumanBuildError> {
        crate::human::build_bodies(bones,&mut self.bodies,templates,human,position,orientation)
    }
    pub fn build_human_joints(&mut self,bones: &mut [crate::human::HumanBone],
        templates: &[crate::human::BoneTemplate],links: &mut crate::human::HumanJointLinks,human: u32)
        -> Option<usize> {
        crate::human::build_joints(bones,templates,links,&mut self.joints,&mut self.work,human)
    }
    /// Generate contacts using recovered body position/orientation and supplied
    /// processed collision meshes. Broad-phase pair selection remains separate.
    pub fn collide_mesh_pair(&mut self,a: usize,b: usize,
        mesh_a: &crate::collision::CollisionMesh<'_>,mesh_b: &crate::collision::CollisionMesh<'_>)
        -> Result<bool,crate::collision::CollisionError> {
        let Some(ba) = self.bodies.get(a) else { return Err(crate::collision::CollisionError::BodyIndex); };
        let Some(bb) = self.bodies.get(b) else { return Err(crate::collision::CollisionError::BodyIndex); };
        let pa = core::array::from_fn(|i| f32::from_bits(ba.words[6+i]));
        let pb = core::array::from_fn(|i| f32::from_bits(bb.words[6+i]));
        let ma = core::array::from_fn(|i| f32::from_bits(ba.words[15+i]));
        let mb = core::array::from_fn(|i| f32::from_bits(bb.words[15+i]));
        crate::collision::collide_mesh_pair(&mut self.joints,&mut self.work,&self.bodies,
            a,b,mesh_a,mesh_b,&pa,&ma,&pb,&mb)
    }
    pub fn create_rigid_contact(&mut self, setup: crate::contacts::RigidContactSetup) -> Option<usize> {
        crate::contacts::create_rigid_contact(&mut self.joints,&mut self.work,&self.bodies,setup)
    }
    pub fn create_point_link(&mut self, mode: u32, a: i32, b: i32, owner: i32) -> Option<usize> {
        crate::joints::create_point_link(&mut self.joints,&mut self.work,
            &mut self.points,&mut self.owners,mode,a,b,owner)
    }
}

pub struct RecoveredRigidPlugin;

impl Plugin for RecoveredRigidPlugin {
    fn build(&self, app: &mut App) {
        app.init_resource::<RecoveredRigidWorld>()
            .init_schedule(RecoveredRigidStep)
            .add_systems(RecoveredRigidStep, step_rigid_world);
    }
}

fn step_rigid_world(mut state: ResMut<RecoveredRigidWorld>) {
    let RecoveredRigidWorld { bodies, joints, work, points, point_work,
        last_step, alternate_angular_mode, .. } = &mut *state;
    point_work.resize(points.len(),crate::physics::PointConstraintVelocity { velocity: [0.0;3],delta: [0.0;3] });
    *last_step = Some(crate::physics::step_constraints(joints,work,bodies,points,point_work,*alternate_angular_mode));
}

#[derive(Component, Clone, Copy)]
pub struct PoseHistoryPair {
    pub left: [f32; 9],
    pub right: [f32; 9],
    pub factor: f32,
}

#[derive(Component, Clone, Copy, Debug)]
pub struct RecoveredOrientation(pub [f32; 9]);

pub struct RecoveredPosePlugin;

impl Plugin for RecoveredPosePlugin {
    fn build(&self, app: &mut App) {
        app.add_systems(PostUpdate, interpolate_history);
    }
}

fn interpolate_history(mut poses: Query<(&PoseHistoryPair, &mut RecoveredOrientation)>) {
    for (pair, mut output) in &mut poses {
        output.0 = crate::pose::interpolate(&pair.left, &pair.right, pair.factor);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn dimension_generated_item_boxes_collide_and_solve_in_bevy() {
        use crate::collision::{CollisionMesh,ItemBox};
        let mut app = App::new();
        app.add_plugins((MinimalPlugins,RecoveredRigidPlugin));
        let mut state = app.world_mut().resource_mut::<RecoveredRigidWorld>();
        let mut body = crate::physics::RigidBodyRecord { words: [0;47] };
        body.words[0] = 1; body.words[5] = 1.0f32.to_bits();
        for i in [15,19,23,36,37,38,39] { body.words[i] = 1.0f32.to_bits(); }
        state.bodies = vec![body;2];
        state.bodies[1].words[6] = 1.75f32.to_bits();
        state.joints = vec![crate::joints::JointRecord { words: [0;61] };64];
        state.work = vec![crate::joints::JointWork { words: [0;36] };64];
        let box_a = ItemBox::new([1.0,0.75,1.25]);
        let box_b = ItemBox::new([1.125,0.875,1.375]);
        let pa = [box_a.part()]; let pb = [box_b.part()];
        assert_eq!(state.collide_mesh_pair(0,1,
            &CollisionMesh { vertices: &box_a.vertices,parts: &pa },
            &CollisionMesh { vertices: &box_b.vertices,parts: &pb }),Ok(true));
        assert!(state.joints.iter().any(|j| j.words[0] == 1));
        drop(state);
        app.world_mut().run_schedule(RecoveredRigidStep);
        let state = app.world().resource::<RecoveredRigidWorld>();
        assert_eq!(state.last_step,Some(Ok(())));
        assert!(state.joints.iter().all(|j| j.words[0] == 0));
        assert!(f32::from_bits(state.bodies[0].words[9]) < 0.0);
        assert!(f32::from_bits(state.bodies[1].words[9]) > 0.0);
        assert_eq!(state.bodies[1].words[6],1.75f32.to_bits());
    }

    #[test]
    fn mesh_contact_generated_in_bevy_reaches_solver_and_releases() {
        use crate::collision::{CollisionMesh,MeshPart};
        let mut app = App::new();
        app.add_plugins((MinimalPlugins,RecoveredRigidPlugin));
        let mut state = app.world_mut().resource_mut::<RecoveredRigidWorld>();
        let mut body = crate::physics::RigidBodyRecord { words: [0;47] };
        body.words[0] = 1; body.words[5] = 1.0f32.to_bits();
        for i in [15,19,23,36,37,38,39] { body.words[i] = 1.0f32.to_bits(); }
        state.bodies = vec![body;2];
        state.joints = vec![crate::joints::JointRecord { words: [0;61] };2];
        state.work = vec![crate::joints::JointWork { words: [0;36] };2];
        let va = [[0.0,0.0,2.0]];
        let vb = [[-1.0,-1.0,1.0],[1.0,-1.0,1.0],[-1.0,1.0,1.0]];
        let face = [crate::geometry::SurfaceFace { opaque: 0,count: 3,vertices: [0,1,2,0],normal: [0.0,0.0,-1.0] }];
        let pa = [MeshPart { center: [0.0;3],fan: &[0],faces: &[],edges: &[] }];
        let pb = [MeshPart { center: [0.0;3],fan: &[],faces: &face,edges: &[] }];
        let a = CollisionMesh { vertices: &va,parts: &pa };
        let b = CollisionMesh { vertices: &vb,parts: &pb };
        assert_eq!(state.collide_mesh_pair(0,1,&a,&b),Ok(true));
        assert_eq!(state.joints[0].words[1],6);
        assert_eq!(state.work[0].words[7],0.015625f32.to_bits());
        assert_eq!(state.joints[1].words[0],0);
        drop(state);
        app.update();
        assert_eq!(app.world().resource::<RecoveredRigidWorld>().joints[0].words[0],1);
        app.world_mut().run_schedule(RecoveredRigidStep);
        let state = app.world().resource::<RecoveredRigidWorld>();
        assert_eq!(state.last_step,Some(Ok(())));
        assert_eq!(state.joints[0].words[0],0);
        let a = f32::from_bits(state.bodies[0].words[11]);
        let b = f32::from_bits(state.bodies[1].words[11]);
        assert!(a < 0.0 && b > 0.0);
        assert_eq!((a+b).to_bits(),0);
        assert_eq!(&state.bodies[0].words[6..9],&[0;3]);
    }

    #[test]
    fn transient_contact_created_in_bevy_is_solved_then_released() {
        let mut app = App::new();
        app.add_plugins((MinimalPlugins,RecoveredRigidPlugin));
        let mut state = app.world_mut().resource_mut::<RecoveredRigidWorld>();
        let mut body = crate::physics::RigidBodyRecord { words: [0;47] };
        body.words[0] = 1;
        body.words[5] = 1.0f32.to_bits();
        for i in [15,19,23,36,37,38,39] { body.words[i] = 1.0f32.to_bits(); }
        state.bodies.push(body);
        state.joints = vec![crate::joints::JointRecord { words: [0;61] };2];
        state.work = vec![crate::joints::JointWork { words: [0;36] };2];
        let index = state.create_rigid_contact(crate::contacts::RigidContactSetup::Single {
            body: 0,anchor: [0;3],normal: [0,1.0f32.to_bits(),0],depth: 0.1,
            bias_gain: 0.1875,friction: 0.125f32.to_bits(),velocity_gain: 0.375f32.to_bits(),
        });
        assert_eq!(index,Some(0));
        assert_eq!(state.joints[0].words[1],5);
        drop(state);
        app.world_mut().run_schedule(RecoveredRigidStep);
        let state = app.world().resource::<RecoveredRigidWorld>();
        assert_eq!(state.last_step,Some(Ok(())));
        assert_eq!(state.joints[0].words[0],0);
        assert!((f32::from_bits(state.bodies[0].words[10])-0.05).abs()<0.000001);
        assert_eq!(&state.bodies[0].words[6..9],&[0;3]);
    }

    #[test]
    fn shared_point_links_run_through_constraint_schedule() {
        let mut app = App::new();
        app.add_plugins((MinimalPlugins, RecoveredRigidPlugin));
        let mut state = app.world_mut().resource_mut::<RecoveredRigidWorld>();
        state.points = vec![crate::point_state::PointState { words: [0;60] };2];
        for point in &mut state.points { point.words[8] = 1.0f32.to_bits(); }
        state.points[1].words[11] = 3.0f32.to_bits();
        state.points[1].words[17] = 2.0f32.to_bits();
        state.joints = vec![crate::joints::JointRecord { words: [0;61] };4];
        state.work = vec![crate::joints::JointWork { words: [0;36] };4];
        assert_eq!(state.create_point_link(0,0,1,-1),Some(0));
        drop(state);
        app.world_mut().run_schedule(RecoveredRigidStep);
        let state = app.world().resource::<RecoveredRigidWorld>();
        assert_eq!(state.last_step,Some(Ok(())));
        let a = f32::from_bits(state.points[0].words[17]);
        let b = f32::from_bits(state.points[1].words[17]);
        assert!((a+b-2.0).abs()<0.000002);
        // Constructor mask 3 selects eight of the 32 iterations. For these
        // equal masses, each selected pass retains 3/4 of relative velocity.
        assert!((b-a-0.20022583).abs()<0.000002);
        assert_eq!(state.points[0].words[11],0);
        assert_eq!(state.points[1].words[11],3.0f32.to_bits());
        assert_eq!(state.points[0].words[26],1);
        assert_eq!(state.points[1].words[26],1);
    }

    #[test]
    fn rigid_schedule_reports_unsupported_joint_before_mutation() {
        let mut app = App::new();
        app.add_plugins((MinimalPlugins, RecoveredRigidPlugin));
        let mut state = app.world_mut().resource_mut::<RecoveredRigidWorld>();
        state.bodies = vec![crate::physics::RigidBodyRecord { words: [0; 47] }; 2];
        for body in &mut state.bodies {
            body.words[0] = 1;
            body.words[5] = 1.0f32.to_bits();
            body.words[15] = 1.0f32.to_bits();
            body.words[19] = 1.0f32.to_bits();
            body.words[23] = 1.0f32.to_bits();
            for i in 36..40 { body.words[i] = 1.0f32.to_bits(); }
        }
        state.bodies[0].words[46] = 123;
        state.joints = vec![crate::joints::JointRecord { words: [0; 61] }; 1];
        state.work = vec![crate::joints::JointWork { words: [0; 36] }; 1];
        state.joints[0].words[0] = 1;
        state.joints[0].words[1] = 99;
        state.joints[0].words[3] = 0x10000;
        state.joints[0].words[39] = 1;
        drop(state);
        app.update();
        assert_eq!(app.world().resource::<RecoveredRigidWorld>().last_step,None);
        app.world_mut().run_schedule(RecoveredRigidStep);
        let mut state = app.world_mut().resource_mut::<RecoveredRigidWorld>();
        assert_eq!(state.last_step,Some(Err(crate::physics::ConstraintStepError::UnsupportedKind)));
        assert_eq!(state.bodies[0].words[46],123);
        state.joints[0].words[1] = 10;
        drop(state);
        app.world_mut().run_schedule(RecoveredRigidStep);
        let state = app.world().resource::<RecoveredRigidWorld>();
        assert_eq!(state.last_step,Some(Ok(())));
        assert_eq!(state.bodies[0].words[46],0);
        assert_eq!(state.work[0].words[3],10);
        assert_eq!(state.joints[0].words[0],1);
    }

    #[test]
    fn bevy_schedule_updates_recovered_orientation() {
        let mut app = App::new();
        app.add_plugins((MinimalPlugins, RecoveredPosePlugin));
        let left = crate::pose::quaternion_to_matrix(&[0.0, 0.0, 0.0, 1.0]);
        let right = crate::pose::quaternion_to_matrix(&[1.0, 0.0, 0.0, 0.0]);
        let id = app.world_mut().spawn((PoseHistoryPair { left, right, factor: 0.5 },
            RecoveredOrientation([0.0; 9]))).id();
        app.update();
        let matrix = app.world().get::<RecoveredOrientation>(id).unwrap().0;
        assert!((matrix[4]).abs() < 1e-6);
        assert!((matrix[5] + 1.0).abs() < 1e-6);
        assert!((matrix[7] - 1.0).abs() < 1e-6);
    }

    #[test]
    fn point_world_advances_only_on_explicit_native_pass() {
        let mut app = App::new();
        app.add_plugins((MinimalPlugins, RecoveredPointPlugin));
        let mut state = app.world_mut().resource_mut::<RecoveredPointWorld>();
        state.points = vec![crate::point_state::PointState { words: [0; 60] }; 2];
        state.joints = vec![crate::joints::JointRecord { words: [0; 61] }; 4];
        state.work = vec![crate::joints::JointWork { words: [0; 36] }; 4];
        state.points[0].words[17] = 2.0f32.to_bits();
        state.points[0].words[18] = 4.0f32.to_bits();
        state.points[0].words[9] = 0.5f32.to_bits();
        state.points[1].words[11] = 3.0f32.to_bits();
        assert_eq!(state.create_link(0, 0, 1, -1), Some(0));
        assert_eq!(state.joints[0].words[25], 3.0f32.to_bits());
        assert_eq!(state.create_link(0, 1, 0, -1), None);
        drop(state);
        app.update();
        assert_eq!(app.world().resource::<RecoveredPointWorld>().points[0].words[11], 0);
        app.world_mut().run_schedule(RecoveredPointStep);
        app.world_mut().run_schedule(RecoveredPointStep);
        let state = app.world().resource::<RecoveredPointWorld>();
        assert_eq!(state.points[0].words[11], 4.0f32.to_bits());
        assert_eq!(state.points[0].words[12], 7.5f32.to_bits());
        assert_eq!(state.points[0].words[15], 4.0f32.to_bits());
        assert_eq!(state.points[0].words[18], 3.0f32.to_bits());
        assert_eq!(state.points[0].words[21], 3.5f32.to_bits());
        assert_eq!(state.points[0].words[26], 1);
        assert_eq!(state.points[1].words[26], 1);
        assert_eq!(state.joints[0].words[25], 3.0f32.to_bits());
    }
}
