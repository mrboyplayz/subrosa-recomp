#ifndef SR_PLAY_H
#define SR_PLAY_H
typedef struct { float x,z,w,d,h; } SrBlock;
typedef struct {
    float x,y,z,yaw,pitch,vy,cooldown,reload,flash;
    int ammo,hits,carrying,delivered,targets[3];
} SrPlay;
extern const SrBlock sr_blocks[];
extern const int sr_block_count;
extern const float sr_targets[3][3];
void sr_play_reset(SrPlay *s);
void sr_play_step(SrPlay *s,float forward,float side,int sprint,int jump,float dt);
void sr_play_shoot(SrPlay *s);
void sr_play_reload(SrPlay *s);
void sr_play_interact(SrPlay *s);
#endif
