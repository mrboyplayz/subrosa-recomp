"""Check the recovered orientation-blend contract against isolated vanilla code."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT = Path(__file__).resolve().parents[1]
SHA = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest() != SHA:
        raise ValueError('Wrong original executable')
    pe = pefile.PE(str(original), fast_load=True)
    output = PROJECT / 'reports/human-pose-trace-20261003/orientation-fixture'
    output.mkdir(parents=True, exist_ok=True)
    source = r'''
#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef void (*blend_fn)(float*, const float*, const float*, float);
static void matrix(float *m, const double *q) {
 double x=q[0],y=q[1],z=q[2],w=q[3];
 m[0]=1-2*(y*y+z*z);m[1]=2*(x*y-z*w);m[2]=2*(x*z+y*w);
 m[3]=2*(x*y+z*w);m[4]=1-2*(x*x+z*z);m[5]=2*(y*z-x*w);
 m[6]=2*(x*z-y*w);m[7]=2*(y*z+x*w);m[8]=1-2*(x*x+y*y);
}
int main(void) {
 unsigned char *image=VirtualAlloc(NULL,0x400000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image)return 9;
'''
    # These complete pages preserve relative calls and RIP-relative constants.
    for page in (0xc2000, 0xc3000, 0x10e000, 0x11c000, 0x278000, 0x279000):
        data = pe.get_data(page, 4096)
        source += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        source += '{unsigned char bytes[]={' + ','.join(map(str, data)) + '};'
        source += f'memcpy(image+{page},bytes,sizeof bytes);}}\n'
    source += r'''
 double quats[10][4]={{0,0,0,1},{1,0,0,0},{0,1,0,0},{0,0,1,0},
 {1,0,0,1},{0,1,0,1},{0,0,1,1},{1,2,3,4},{1,0,0,.087488663525924},
 {-1,0,0,.087488663525924}};
 float times[]={0,.25f,.5f,.75f,1,-.25f,1.25f};
 for(int i=0;i<10;i++){double n=0;for(int j=0;j<4;j++)n+=quats[i][j]*quats[i][j];
  n=sqrt(n);for(int j=0;j<4;j++)quats[i][j]/=n;}
 unsigned cases=0;double max_error=0;
 for(int a=0;a<10;a++)for(int b=0;b<10;b++)for(int ti=0;ti<7;ti++)for(int alias=0;alias<3;alias++){
  float left[11],right[11],result[11],expected[9],saved_left[11],saved_right[11];
  for(int i=0;i<11;i++)left[i]=right[i]=result[i]=12345.25f;
  matrix(left+1,quats[a]);matrix(right+1,quats[b]);
  memcpy(saved_left,left,sizeof left);memcpy(saved_right,right,sizeof right);
  double dot=0,q[4],length=0;for(int i=0;i<4;i++)dot+=quats[a][i]*quats[b][i];
  for(int i=0;i<4;i++){q[i]=(1-times[ti])*quats[a][i]+times[ti]*(dot<0?-1:1)*quats[b][i];length+=q[i]*q[i];}
  length=sqrt(length);for(int i=0;i<4;i++)q[i]/=length;matrix(expected,q);
  // Dot zero at 180 degrees has two equally short paths. Only require exact
  // endpoint/orthogonality properties there; matrix conversion fixes its sign.
  int ambiguous=fabs(dot)<1e-12;
  float *out=alias==1?left+1:alias==2?right+1:result+1;
  ((blend_fn)(image+0xc2f90))(out,left+1,right+1,times[ti]);
  if(left[0]!=12345.25f||left[10]!=12345.25f||right[0]!=12345.25f||right[10]!=12345.25f||result[0]!=12345.25f||result[10]!=12345.25f)return 11;
  if(alias!=1&&memcmp(left,saved_left,sizeof left))return 12;
  if(alias!=2&&memcmp(right,saved_right,sizeof right))return 13;
  for(int i=0;i<9;i++){
   double error=fabs(out[i]-expected[i]);
   if(!isfinite(out[i]))return 14;
   if(!ambiguous||ti==0||ti==4){if(error>max_error)max_error=error;
    if(error>2e-5){printf("mismatch a=%d b=%d t=%g alias=%d component=%d error=%g\n",a,b,times[ti],alias,i,error);return 15;}}
  }
  for(int i=0;i<3;i++)for(int j=0;j<3;j++){
   double dotrows=0;for(int k=0;k<3;k++)dotrows+=out[i*3+k]*out[j*3+k];
   if(fabs(dotrows-(i==j))>2e-5)return 16;
  }
  cases++;
 }
 printf("{\"cases\":%u,\"max_matrix_error\":%.12g,\"guards_and_input_preservation\":true,\"aliases\":3,\"orthogonality\":true}\n",cases,max_error);
 return 0;
}
'''
    cfile = output / 'orientation.c'
    cfile.write_text(source, encoding='utf-8')
    exe = cfile.with_suffix('.exe')
    build = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', str(cfile), '-o', str(exe)], capture_output=True, text=True)
    (output / 'build.txt').write_text(build.stdout + build.stderr, encoding='utf-8')
    build.check_returncode()
    run = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
    (output / 'stdout.txt').write_text(run.stdout + run.stderr, encoding='utf-8')
    run.check_returncode()
    result = json.loads(run.stdout)
    result.update(sha256=SHA, scope='Isolated original orientation blend; approximate mathematical contract, not game parity', ambiguous_180_degree_pairs='Matrix values checked at endpoints; orthogonality checked for all factors')
    (output / 'result.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__':
    main()
