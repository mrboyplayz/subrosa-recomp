#include <string.h>
#include "nc.h"
#include "physics.h"
#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)NC_ADDR(address))(__VA_ARGS__)
#elif defined(NC_CLIENT_WRAPPERS)
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)nc_client_wrapper(address))(__VA_ARGS__)
#else
#define CALL(address, name, signature, ...) ((uint64_t)name(__VA_ARGS__))
#endif

int main(void)
{
    static const int holes[] = {0,1,2,17,8191,8192,16383,16384};
    static const uint32_t moments[] = {0,0x80000000,0x3F800000,0x40000000,0xBF800000,
        1,0x007FFFFF,0x00800000,0x7F7FFFFF,0x7F800000,0xFF800000,0x7FC12345,0x7FA12345};
    nc_map_image();
    int cases = nc_cases(200);
    for (int op = 0; op < 5; ++op) for (int n = 0; n < cases; ++n) {
        nc_seed((uint64_t)op * 100000 + n);
        int capacity = op == 0 ? PHYSICS_BODY_CAPACITY : PHYSICS_BOND_CAPACITY;
        int first = n % 3 ? holes[(n / 3) % 8] : (int)nc_rand_below(capacity + 1);
        if (first > capacity) first = capacity;
        int slot = first == capacity ? capacity - 1 : first;
        float vectors[24];
        for (int k = 0; k < 24; ++k) { uint32_t bits = (uint32_t)nc_rand(); memcpy(vectors+k,&bits,4); }
        for (int k = 0; k < 3; ++k) memcpy(vectors+18+k,&moments[(n+k)%13],4);
        const float *position = vectors, *rotation = vectors+3, *velocity = n%2 ? vectors+12 : NULL;
        const float *inertia = vectors+18, *other = vectors+15;
        uint32_t kind = (uint32_t)nc_rand(), body = (uint32_t)nc_rand(), vehicle = n%3 ? (uint32_t)nc_rand() : UINT32_MAX;
        float mass = vectors[23];
        if (op == 0) {
            memset(physics_bodies,0xA5,PHYSICS_BODY_CAPACITY*sizeof(PhysicsBody));
            for (int k=0;k<PHYSICS_BODY_CAPACITY;++k) physics_bodies[k].active = k<first ? (int32_t)(nc_rand()|1) : 0;
            if (n%11==1) position = &physics_bodies[slot].mass;
            if (n%11==2) rotation = &physics_bodies[slot].velocity_change[2];
            if (n%11==3) inertia = physics_bodies[slot].position;
            if (n%11==4) velocity = physics_bodies[slot].rotation;
        } else if (op == 4) {
            memset(physics_points,0xA5,PHYSICS_POINT_CAPACITY*sizeof(PhysicsPoint));
            physics_point_count = first;
            if (n%11==1) position = (const float *)&physics_points[slot].unknown_10;
            if (n%11==2) position = physics_points[slot].previous_position;
            if (n%11==3) velocity = physics_points[slot].position;
        } else {
            memset(physics_bonds,0xA5,PHYSICS_BOND_CAPACITY*sizeof(PhysicsBond));
            memset(physics_constraints,0xA5,PHYSICS_BOND_CAPACITY*sizeof(PhysicsConstraint));
            for (int k=0;k<PHYSICS_BOND_CAPACITY;++k) physics_bonds[k].active = k<first ? (int32_t)(nc_rand()|1) : 0;
            if (n%11==1) position = physics_bonds[slot].world_point+2;
            if (n%11==2) other = physics_bonds[slot].local_point;
            if (n%11==3) position = physics_constraints[slot].offset_a;
        }
        /* Full-pool exits must not touch the vector arguments. */
        if (first == capacity) position = rotation = velocity = inertia = other = NULL;
        uint32_t csr = 0x1F80 | ((n%4)<<13) | (n%5==0 ? 0x8040 : 0);
        nc_set_mxcsr(csr);
        uint64_t result;
        if (op==0) result=CALL(0x14005CF80,physics_create_body,(uint32_t,const float*,const float*,const float*,float,const float*),kind,position,rotation,velocity,mass,inertia);
        else if(op==1) result=CALL(0x14004E430,physics_create_body_bond,(uint32_t,uint32_t,const float*,const float*),kind,body,position,other);
        else if(op==2) result=CALL(0x14004E5B0,physics_create_rotation_bond,(uint32_t,uint32_t),kind,body);
        else if(op==3) result=CALL(0x1400A4440,physics_find_free_bond,(void));
        else result=CALL(0x14005CBB0,physics_create_point,(uint32_t,const float*,const float*,float,uint32_t),kind,position,velocity,mass,vehicle);
        uint32_t after=nc_get_mxcsr();
        nc_set_mxcsr(0x1F80);
        uint64_t hash = op==0 ? nc_hash(physics_bodies,PHYSICS_BODY_CAPACITY*sizeof(PhysicsBody)) :
            op==4 ? nc_hash(physics_points,PHYSICS_POINT_CAPACITY*sizeof(PhysicsPoint)) : nc_hash(physics_bonds,PHYSICS_BOND_CAPACITY*sizeof(PhysicsBond));
        nc_line("op %d case %d first %d result %016llx pool %016llx count %d csr %08x",op,n,first,(unsigned long long)result,(unsigned long long)hash,op==4?physics_point_count:0,after);
        if(op>0 && op<4) nc_line("constraints %016llx",(unsigned long long)nc_hash(physics_constraints,PHYSICS_BOND_CAPACITY*sizeof(PhysicsConstraint)));
        if(op==0) nc_bytes("body",&physics_bodies[slot],sizeof(PhysicsBody));
    }
    return 0;
}
