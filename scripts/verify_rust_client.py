"""Build Rust modules and compare them directly with original client routines."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys

PROJECT = Path(__file__).resolve().parent.parent
OUT = PROJECT/'reports/rust-client-verification-20261003'
GCC = 'C:/Users/junin/mingw64/bin/gcc.exe'


def run(command, label, cwd=PROJECT):
    result=subprocess.run([str(x) for x in command],cwd=cwd,capture_output=True,text=True)
    (OUT/(label+'.txt')).write_text(result.stdout+result.stderr,encoding='utf-8')
    if result.returncode:
        raise RuntimeError(f'{label} failed: {result.returncode}\n{result.stdout}{result.stderr}')
    return result.stdout


def main():
    OUT.mkdir(parents=True,exist_ok=True)
    run(['pwsh','-NoProfile','-ExecutionPolicy','Bypass','-File',PROJECT/'scripts/rust-client.ps1',
         'build','--release','--no-default-features'],'build')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    executable=OUT/'leaf.exe'
    run([GCC,'-O0','-msse4.2',PROJECT/'src/recovered/client_leaf_diff_test.c',
         PROJECT/'src/recovered/original_fixture.c',library,'-lbcrypt','-o',executable],'leaf-link')
    leaf=run([executable,PROJECT.parent/'subrosa.exe'],'leaf-native')
    # Reuse the original mapping/inputs, replacing the translated-C call with Rust.
    run([sys.executable,PROJECT/'scripts/test_client_png_store_alignment.py'],'prepare-png-fixture')
    fixture=(PROJECT/'reports/client-png-alignment-fixture-20261003/png.c').read_text()
    old='uint64_t r=sub_14015E5F0(ctx,input,bytes,channels,width,height,8,0);void *out=(void *)(uintptr_t)ctx[3];ctx[3]=0;'
    if fixture.count(old)!=1:raise ValueError('PNG fixture call inventory changed')
    declaration='extern int sr_rust_png_unfilter(unsigned char*,size_t,const unsigned char*,size_t,size_t,size_t,size_t);\n'
    fixture=declaration+fixture.replace(old,'void *out=malloc(n*height);uint64_t r=sr_rust_png_unfilter(out,n*height,input,bytes,width,height,channels)==0;ctx[3]=0;')
    # size_t is available only after headers.
    fixture=fixture.replace(declaration,'').replace('int main(void){',declaration+'int main(void){',1)
    c=OUT/'png.c';c.write_text(fixture);exe=c.with_suffix('.exe')
    run([GCC,'-O0','-std=gnu11','-fno-strict-aliasing','-I',PROJECT/'src/client',c,library,'-o',exe],'png-link')
    png=run([exe],'png-native')
    run([sys.executable,PROJECT/'scripts/test_client_sound_load.py'],'prepare-audio-fixture')
    fixture=(PROJECT/'reports/client-sound-load-fixture-20261003/sound.c').read_text()
    declaration='extern intptr_t sr_rust_resample_mono(float*,size_t,const short*,size_t,unsigned,int);\n'
    fixture=fixture.replace('int main(void){',declaration+'int main(void){',1)
    old='}count++;'
    if fixture.count(old)!=1:raise ValueError('Audio fixture inventory changed')
    fixture=fixture.replace(old,r'''}
 if(load_ok&&channels==1&&frequency>0&&indexes[idx]>=0&&indexes[idx]<=4095){
  float samples[4096];intptr_t n=sr_rust_resample_mono(samples,4096,pcm,64,nbytes,frequency);
  unsigned *r=&dword_140404A6C[18165777+8*indexes[idx]];
  if(n!=r[1]||memcmp(samples,arena,n*4)){printf("Rust resample mismatch\n");return 1;}
 }count++;''')
    c=OUT/'audio.c';c.write_text(fixture);exe=c.with_suffix('.exe')
    run([GCC,'-O0','-std=gnu11','-fno-strict-aliasing','-I',PROJECT/'src/client',c,library,'-o',exe],'audio-link')
    audio=run([exe],'audio-native')
    run([sys.executable,PROJECT/'scripts/test_client_texture_slot.py'],'prepare-texture-fixture')
    fixture=(PROJECT/'reports/client-texture-slot-fixture-20261003/slot.c').read_text()
    declaration='extern unsigned sr_rust_pack_texture(size_t,size_t,void*,size_t,unsigned*,size_t,size_t,const unsigned*,size_t,unsigned*,size_t);\n'
    fixture=fixture.replace('int main(void){',declaration+'int main(void){',1)
    old='''uint64_t got=original?((uint64_t(*)(int,char*))(image+0x68fc0))(bank,"fixture.png"):
                        sub_140068FC0(bank,"fixture.png");'''
    if fixture.count(old)!=1:raise ValueError('Texture fixture inventory changed')
    fixture=fixture.replace(old,r'''uint64_t got;
   if(original)got=((uint64_t(*)(int,char*))(image+0x68fc0))(bank,"fixture.png");
   else if((int)r[12]>=4096 || !sub_140079840("fixture.png"))got=0xffffffffu;
   else {
    got=sr_rust_pack_texture(r[0],r[1],r+13,4096,r+12,iw,ih,&dword_140404A6C[468765295],iw*ih,pixels,4096);
    if(got!=0xffffffffu){unsigned *entry=r+13+12*got;bind_texture(3553,r[8]);
     upload(3553,0,entry[0],entry[1],entry[2],entry[3],6408,5121,pixels);}
   }''')
    c=OUT/'texture.c';c.write_text(fixture);exe=c.with_suffix('.exe')
    run([GCC,'-O0','-std=gnu11','-fno-strict-aliasing','-I',PROJECT/'src/client',c,library,'-o',exe],'texture-link')
    texture=run([exe],'texture-native')
    run([sys.executable,PROJECT/'scripts/test_client_integer_locale.py'],'prepare-integer-fixture')
    fixture=(PROJECT/'reports/client-integer-locale-fixture-20261003/integer.c').read_text()
    declaration='struct rust_parse_result {unsigned value;int error;size_t end;};\nextern int sr_rust_parse_c_integer(const unsigned char*,size_t,unsigned,unsigned char,struct rust_parse_result*);\n'
    fixture=fixture.replace('int main(void){',declaration+'int main(void){',1)
    old='''}count++;'''
    if fixture.count(old)!=1:raise ValueError('Integer fixture inventory changed')
    fixture=fixture.replace(old,r'''}
 struct rust_parse_result parsed;
 if(sr_rust_parse_c_integer((const unsigned char*)inputs[t],strlen(inputs[t]),bases[bas],flags,&parsed)||
    parsed.value!=result||parsed.end!=(size_t)old_at||(parsed.error?parsed.error:7)!=old_error){
   printf("Rust integer mismatch input=%u base=%u flags=%u\n",t,bases[bas],flags);return 1;}
 count++;''')
    c=OUT/'integer.c';c.write_text(fixture);exe=c.with_suffix('.exe')
    run([GCC,'-O0','-std=gnu11','-fno-strict-aliasing','-I',PROJECT/'src/client',c,library,'-o',exe],'integer-link')
    integer=run([exe],'integer-native')
    run(['pwsh','-NoProfile','-ExecutionPolicy','Bypass','-File',PROJECT/'scripts/rust-client.ps1','test'],'rust-tests')
    manifest={'status':'pass','original_sha256':hashlib.sha256((PROJECT.parent/'subrosa.exe').read_bytes()).hexdigest(),
              'rust_library_sha256':hashlib.sha256(library.read_bytes()).hexdigest(),
              'leaf':leaf.strip(),'png':png.strip(),'audio':audio.strip(),'texture':texture.strip(),'integer':integer.strip(),
              'audio_scope':'Rust sample conversion compared inside applicable mono positive-frequency native loader cases',
              'full_rust_game':False,
              'rust_sources':{str(p.relative_to(PROJECT)):hashlib.sha256(p.read_bytes()).hexdigest()
                              for p in (PROJECT/'rust-client/src').glob('*.rs')}}
    (OUT/'verification.json').write_text(json.dumps(manifest,indent=2)+'\n')
    print(leaf+png+audio+texture+integer)


if __name__=='__main__':main()
