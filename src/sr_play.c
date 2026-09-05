#include "sr_play.h"
#include <math.h>
#include <string.h>
const SrBlock sr_blocks[] = {
    {-12,-10,7,10,7}, {12,-10,7,10,9}, {-12,8,7,9,6}, {12,8,7,9,8},
    {-3,-8,2,2,1.2f}, {5,1,2,3,1.2f}, {-4,7,2,2,1.2f}
};
const int sr_block_count = sizeof(sr_blocks)/sizeof(sr_blocks[0]);
const float sr_targets[3][3]={{-5,1.5f,-17},{0,1.5f,-19},{5,1.5f,-17}};
void sr_play_reset(SrPlay *s) { memset(s,0,sizeof(*s)); s->z=14; s->y=1.7f; s->ammo=12; }
static int clear_position(float x,float z,float feet) {
    if(fabsf(x)>19.6f || fabsf(z)>21.6f) return 0;
    for(int i=0;i<sr_block_count;i++) {
        const SrBlock *b=&sr_blocks[i];
        if(feet < b->h && fabsf(x-b->x)<b->w/2+.3f && fabsf(z-b->z)<b->d/2+.3f) return 0;
    }
    return 1;
}
void sr_play_step(SrPlay *s,float forward,float side,int sprint,int jump,float dt) {
    if(dt<=0) return;
    if(dt>.05f) dt=.05f;
    if(s->cooldown>0) s->cooldown-=dt;
    if(s->flash>0) s->flash-=dt;
    if(s->reload>0) { s->reload-=dt; if(s->reload<=0) s->ammo=12; }
    if(jump && s->y<=1.7001f) s->vy=5.5f;
    s->vy-=15*dt; s->y+=s->vy*dt;
    if(s->y<1.7f) {s->y=1.7f; s->vy=0;}
    float len=sqrtf(forward*forward+side*side);
    if(len>1) {forward/=len; side/=len;}
    float speed=(sprint?7:4)*dt;
    float dx=(sinf(s->yaw)*forward+cosf(s->yaw)*side)*speed;
    float dz=(-cosf(s->yaw)*forward+sinf(s->yaw)*side)*speed;
    if(clear_position(s->x+dx,s->z,0)) s->x+=dx;
    if(clear_position(s->x,s->z+dz,0)) s->z+=dz;
}
/* Ray/slab intersection is shared by target picking and solid-world occlusion. */
static float ray_box(const float o[3],const float d[3],const float lo[3],const float hi[3]) {
    float near=0,far=100;
    for(int a=0;a<3;a++) {
        if(fabsf(d[a])<.00001f) {if(o[a]<lo[a] || o[a]>hi[a]) return 101;}
        else {
            float t1=(lo[a]-o[a])/d[a],t2=(hi[a]-o[a])/d[a];
            if(t1>t2) {float t=t1;t1=t2;t2=t;}
            if(t1>near) near=t1;
            if(t2<far) far=t2;
            if(near>far) return 101;
        }
    }
    return near;
}
void sr_play_shoot(SrPlay *s) {
    if(s->cooldown>0 || s->reload>0 || s->ammo<=0) return;
    s->ammo--; s->cooldown=.18f; s->flash=.06f;
    float o[3]={s->x,s->y,s->z};
    float d[3]={sinf(s->yaw)*cosf(s->pitch),sinf(s->pitch),-cosf(s->yaw)*cosf(s->pitch)};
    float nearest=100; int hit=-1;
    for(int i=0;i<sr_block_count;i++) {
        const SrBlock *b=&sr_blocks[i];
        float lo[3]={b->x-b->w/2,0,b->z-b->d/2},hi[3]={b->x+b->w/2,b->h,b->z+b->d/2};
        float t=ray_box(o,d,lo,hi); if(t<nearest) nearest=t;
    }
    for(int i=0;i<3;i++) if(!s->targets[i]) {
        const float *p=sr_targets[i];
        float lo[3]={p[0]-.55f,p[1]-.75f,p[2]-.15f},hi[3]={p[0]+.55f,p[1]+.75f,p[2]+.15f};
        float t=ray_box(o,d,lo,hi); if(t<nearest) {nearest=t;hit=i;}
    }
    if(hit>=0) {s->targets[hit]=1;s->hits++;}
}
void sr_play_reload(SrPlay *s) {if(s->ammo<12 && s->reload<=0) s->reload=1.2f;}
void sr_play_interact(SrPlay *s) {
    if(!s->carrying && !s->delivered && hypotf(s->x+3,s->z-11)<2) s->carrying=1;
    else if(s->carrying && hypotf(s->x-3,s->z+13)<2) {s->carrying=0;s->delivered=1;}
}
