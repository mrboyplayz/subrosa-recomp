"""Compare the Rust three-joint drive with original 1400b1450 output bytes."""
import json
import subprocess
from pathlib import Path
from test_client_joint_storage import JointStorage
from repair_client_menu_actions import pinned_pe

PROJECT=Path(__file__).resolve().parents[1]
OUT=PROJECT/'reports/rust-limb-drive-20261005'

def main():
    # Reuse the maintained native mapper and real matrix/quaternion helpers.
    case=JointStorage()
    case.compare_joint_consumer(True)
    c=(PROJECT/'reports/client-joint-storage-20261004/joint-rotation-math.c').read_text()
    wrapper=r'''
struct rust_limb_input {
 unsigned parent,first;float target[3],reference[9],velocity[3],reach,twist,end[4],gains[3];
 unsigned limits[3],caps[3];float correction_cap;unsigned flags;float hip_bias[3];
};
extern int sr_rust_drive_limb_templates(const void*,size_t,const void*,void*,void*,size_t,struct rust_limb_input*);
static void rust_drive(int human,int parent,int first,float *target,float *reference,float *velocity,
 float reach,int twist,__m128 *end,float *gains,unsigned *limits,unsigned *caps,float cap,char flags){
 struct rust_limb_input in={0};in.parent=parent;in.first=first;in.reach=reach;
 memcpy(in.target,target,12);memcpy(in.reference,reference,36);memcpy(in.velocity,velocity,12);
 memcpy(&in.twist,&twist,4);memcpy(in.end,end,16);memcpy(in.gains,gains,12);
 memcpy(in.limits,limits,12);memcpy(in.caps,caps,12);in.correction_cap=cap;in.flags=(unsigned char)flags;
 if(first==10||first==13)memcpy(in.hip_bias,dword_140404A6C+280657945+7166*human+(first==13?3:0),12);
 int result=sr_rust_drive_limb_templates(dword_140404A6C+280651439+7166*human,16,dword_140404A6C+282486045,
   dword_140404A6C+486149253,dword_140404A6C+485543029,32,&in);
 if(result){printf("Rust drive rejected input %d\n",result);exit(4);}memcpy(end,in.end,16);
}
'''
    c=c.replace('int main(void){',wrapper+'\nint main(void){',1)
    call='else sub_1400B1450(0,0,joint,target,rotation,velocity,.65625f,0,&quaternion,limit,bounds,bounds,.19634955f,(sample&1)?4:12);'
    if c.count(call)!=1:raise ValueError('Native fixture inventory changed')
    c=c.replace(call,call.replace('sub_1400B1450','rust_drive'))
    c=c.replace('(sample&1)?4:12','(unsigned char[]){0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30}[sample%16]')
    c=c.replace('sample<128','sample<256').replace('joint<8','joint<14')
    c=c.replace('float target[3]={.125f,-.25f,.125f}',
        'float target[3]={((int)(sample%9)-4)*.03125f,-.15f-(sample%7)*.0625f,((int)(sample%5)-2)*.046875f}')
    c=c.replace('for(unsigned j=0;j<9;j++)rotation[j]=(j%4)==0;',
        'for(unsigned j=0;j<9;j++)rotation[j]=(j%4)==0;float axis[3]={0,0,0};axis[(sample/16)%3]=1;float a=((int)(sample%7)-3)*.09375f*(bone+1);double bits=0;memcpy(&bits,&a,4);sub_14007B2A0((intptr_t)rotation,axis,bits);'
        'for(unsigned j=0;j<3;j++){float v=((int)((sample+bone+j)%9)-4)*.0375f;memcpy(dword_140404A6C+280651461+78*bone+j,&v,4);'
        'v=((int)((sample+bone+j)%7)-3)*.025f;memcpy(dword_140404A6C+486149283+61*bone+j,&v,4);}')
    # Restore real native guards over the base fixture's unused placeholders.
    pe=pinned_pe()
    for rva,size in [(0xb2bf0,0x12c),(0xa9940,0x59c)]:
        c=c.replace(f'jump(image+{rva},sub_140{rva:06X});',
            '{const unsigned char bytes[]={'+','.join(map(str,pe.get_data(rva,size)))+'};'
            f'memcpy(image+{rva},bytes,sizeof bytes);'+'}')
    templates=(PROJECT/'reports/human-templates-20261003/templates.bin').read_bytes()
    setup='''if(!VirtualAlloc(image+0x4399d000,8192,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+0x4399d000,8192,MEM_COMMIT,PAGE_READWRITE))return 9;
'''
    setup+='{const unsigned char bytes[]={'+','.join(map(str,templates))+'};memcpy(image+0x4399dee0,bytes,sizeof bytes);memcpy(working+0x4399dee0,bytes,sizeof bytes);}\n'
    c=c.replace(' uint32_t saved_motion',setup+' uint32_t saved_motion',1)
    # Include native end-quaternion sign changes and all joint words, including
    # the flag-16 first-joint axis at +0x78.
    c=c.replace('uint32_t saved_motion[32*36],saved_joints[32*61];','uint32_t saved_motion[32*36],saved_joints[32*61],saved_end[4];')
    c=c.replace('486149280','486149253')
    c=c.replace('if(!native){memcpy(saved_motion','if(!native){memcpy(saved_end,&quaternion,16);memcpy(saved_motion')
    c=c.replace('else if(memcmp(saved_motion','else if(memcmp(saved_end,&quaternion,16)||memcmp(saved_motion')
    OUT.mkdir(parents=True,exist_ok=True)
    source=OUT/'limb.c';source.write_text(c)
    exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',
        '-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),
        '-I',str(PROJECT/'src/rebuild'),str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (OUT/'build.txt').write_text(result.stdout+result.stderr);result.check_returncode()
    result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (OUT/'stdout.txt').write_text(result.stdout+result.stderr)
    print(result.stdout);result.check_returncode()
    (OUT/'result.json').write_text(json.dumps({'passed':True,'cases':3584,
        'scope':'three-joint drives, sixteen flag combinations including angular guard bit 16, varied targets and rotations about all three axes, angular velocities and initial joint correction vectors; exact complete work/joint pools and end quaternion; real native 1400b2bf0/1400a9940 helpers; shared CRT trig boundary'},indent=2)+'\n')

if __name__=='__main__':main()
