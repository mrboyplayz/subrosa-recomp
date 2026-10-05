"""Check recovered export helpers against register moves and overlap semantics."""
import shutil
import hashlib
import subprocess
from pathlib import Path
import unittest

PROJECT = Path(__file__).resolve().parent.parent


class HelperTests(unittest.TestCase):
    def compile(self, name, body, executable=True):
        output = PROJECT / 'reports/rebuild-tests'
        output.mkdir(exist_ok=True)
        source = output / (name + '.c')
        source.write_text('#include "export_compat.h"\n' + body, encoding='utf-8')
        target = source.with_suffix('.exe' if executable else '.obj')
        command = [shutil.which('gcc'), '-std=gnu11', '-O2', '-fno-strict-aliasing',
                   '-I', str(PROJECT / 'src/rebuild'), '-I', str(PROJECT / 'exports/client'),
                   str(source), '-o', str(target)]
        if not executable:
            command.append('-c')
        result = subprocess.run(command, capture_output=True, text=True)
        return result, target

    def test_bit_copies_match_native_register_moves(self):
        result, exe = self.compile('client_helper_bits', r'''
__attribute__((naked,noinline)) uint32_t consume_lane(uintptr_t a, uintptr_t b, double input) {
    __asm__("movd %xmm2, %eax; ret");
}
__attribute__((naked,noinline)) uint64_t consume_ui_lanes(double first, double second) {
    __asm__("movd %xmm0, %eax; movd %xmm1, %edx; shl $32, %rdx; or %rdx, %rax; ret");
}
int main(void) {
    uint64_t state = 0x123456789abcdef0ULL;
    for (unsigned i=0; i<4096; ++i) {
        state ^= state << 13; state ^= state >> 7; state ^= state << 17;
        float f=COERCE_FLOAT(state); double d=SR_EXPORT_COERCE(double,state);
        uint32_t fbits; uint64_t dbits;
        __asm__("movd %1, %0" : "=r"(fbits) : "x"(f));
        __asm__("movq %1, %0" : "=r"(dbits) : "x"(d));
        if (fbits!=(uint32_t)state || dbits!=state) return 1;
        if (COERCE_UNSIGNED_INT(f)!=fbits || (uint32_t)COERCE_INT(f)!=fbits) return 2;
        if (COERCE_UNSIGNED_INT64(d)!=dbits || (uint64_t)COERCE__INT64(d)!=dbits) return 3;
        if (COERCE_UNSIGNED_INT(d)!=(uint32_t)dbits) return 4;
        unsigned calls=0;
        (void)SR_EXPORT_COERCE(double,(++calls,state)); if (calls!=1) return 5;
        uint128 lanes=((uint128)state << 64) | state;
        if ((uint32_t)SDWORD1(lanes)!=(uint32_t)(state>>32)) return 6;
        SDWORD2(lanes)=-17;
        if ((uint32_t)(lanes>>64)!=(uint32_t)-17) return 7;
        double container=sr_export_float_lane_container(state);
        if (consume_lane(0,0,container)!=(uint32_t)state) return 8;
        calls=0;
        container=sr_export_float_lane_container((++calls,state));
        if (calls!=1 || consume_lane(0,0,container)!=(uint32_t)state) return 9;
        if (consume_ui_lanes(container,sr_export_float_lane_container(state>>32))!=state) return 10;
    }
    return 0;
}''')
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(exe)]).returncode, 0)

    def test_scalar_sqrt_matches_native_bits_and_mxcsr(self):
        result, exe = self.compile('client_helper_sqrt', r'''
_Static_assert(_Generic(fsqrt(1.0), float:1, default:0), "float result");
__attribute__((noinline)) float recovered_sqrt(float input) { return fsqrt(input); }
int main(void) {
    uint32_t original=_mm_getcsr(), state=0x9e3779b9u;
    const uint32_t edges[]={0,0x80000000,1,0x80000001,0x007fffff,
      0x00800000,0x3f800000,0xbf800000,0x7f800000,0xff800000,
      0x7fc00001,0x7f800001,0xff800001,0x7f7fffff};
    for(unsigned mode=0;mode<16;++mode) {
        unsigned clear=(original&~(63u|0x6000u|0x8040u))|0x1f80u|
          ((mode&3u)<<13)|((mode&4u)?0x8000u:0)|((mode&8u)?0x40u:0);
        for(unsigned i=0;i<4096;++i) {
            state^=state<<13;state^=state>>17;state^=state<<5;
            uint32_t bits=i<sizeof(edges)/sizeof(*edges)?edges[i]:state;
            float input,actual,expected;memcpy(&input,&bits,4);
            _mm_setcsr(clear);actual=recovered_sqrt(input);
            unsigned af=_mm_getcsr();
            _mm_setcsr(clear);
            __asm__ volatile("sqrtss %1,%0" : "=x"(expected) : "x"(input) : "memory");
            unsigned ef=_mm_getcsr();uint32_t ab,eb;
            memcpy(&ab,&actual,4);memcpy(&eb,&expected,4);
            if(ab!=eb || af!=ef) { _mm_setcsr(original);return 1; }
        }
    }
    unsigned calls=0;(void)fsqrt((++calls,1.0f));
    _mm_setcsr(original);return calls!=1;
}''')
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(exe)]).returncode, 0)

    def test_qword_fill_preserves_value_width_count_and_boundaries(self):
        result, exe = self.compile('client_helper_fill64', r'''
int main(void) {
    unsigned char actual[320],expected[320];uint64_t state=0x123456789abcdef0ULL;
    for(unsigned i=0;i<4096;++i) {
        state^=state<<13;state^=state>>7;state^=state<<17;
        unsigned offset=i&15, count=(i>>4)%35;
        memset(actual,0xa5,sizeof(actual));memcpy(expected,actual,sizeof(actual));
        for(unsigned j=0;j<count;++j) memcpy(expected+offset+j*8,&state,8);
        unsigned calls=0;
        memset64((++calls,actual+offset),state,count);
        if(calls!=1 || memcmp(actual,expected,sizeof(actual))) return 1;
    }
    memset64(NULL,UINT64_MAX,0);
    return 0;
}''')
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(exe)]).returncode, 0)

    def test_fmod_x87_tail_matches_original_instructions(self):
        import pefile
        binary = PROJECT.parent / 'subrosa.exe'
        self.assertEqual(hashlib.sha256(binary.read_bytes()).hexdigest(),
                         'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e')
        pe = pefile.PE(str(binary), fast_load=True)
        tail = pe.get_data(0x240b80, 0x3c)
        self.assertEqual(hashlib.sha256(tail).hexdigest(),
                         '82958ee91370aa04a3f2a4fd3085c79ddd9a9f2adc5f9c858d34dc516d8fc592')
        code = bytes.fromhex('4883ec58')+tail+bytes.fromhex('4883c458c3')
        body = r'''
__attribute__((noinline)) double recovered(double x,double y) {
    return sr_client_fmod_x87_tail(x,y);
}
static void reset_x87(unsigned short cw) {
    __asm__ volatile("fninit; fldcw %0" : : "m"(cw) : "memory");
}
int main(void) {
    const unsigned char bytes[]={NATIVE_BYTES};
    void *entry=VirtualAlloc(NULL,sizeof(bytes),MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
    if(!entry) return 2;memcpy(entry,bytes,sizeof(bytes));DWORD old;
    if(!VirtualProtect(entry,sizeof(bytes),PAGE_EXECUTE_READ,&old)) return 2;
    FlushInstructionCache(GetCurrentProcess(),entry,sizeof(bytes));
    double (*native)(double,double);memcpy(&native,&entry,sizeof(native));
    uint64_t state=0x123456789abcdef0ULL;
    unsigned short original,cw,af,ef;
    __asm__ volatile("fnstcw %0" : "=m"(original));
    const unsigned precision[]={0,0x200,0x300};
    const uint64_t edges[]={0,0x8000000000000000ULL,1,0x8000000000000001ULL,
      0x0010000000000000ULL,0x7fefffffffffffffULL,0x7ff0000000000000ULL,
      0x7ff8000000000001ULL,0x7ff0000000000001ULL,0x3ff0000000000000ULL};
    for(unsigned mode=0;mode<12;++mode) {
        cw=(original&~0xf00u)|0x3fu|precision[mode/4]|((mode%4)<<10);
        for(unsigned i=0;i<4096;++i) {
            state^=state<<13;state^=state>>7;state^=state<<17;
            uint64_t xb=i<10?edges[i]:state;state^=state<<13;state^=state>>7;state^=state<<17;
            uint64_t yb=i<100?edges[(i/10)%10]:state;
            double x,y,a,e;memcpy(&x,&xb,8);memcpy(&y,&yb,8);
            reset_x87(cw);a=recovered(x,y);__asm__ volatile("fnstsw %0" : "=m"(af) : : "memory");
            reset_x87(cw);e=native(x,y);__asm__ volatile("fnstsw %0" : "=m"(ef) : : "memory");
            uint64_t ab,eb;memcpy(&ab,&a,8);memcpy(&eb,&e,8);
            if(ab!=eb || af!=ef) {reset_x87(original);VirtualFree(entry,0,MEM_RELEASE);return 1;}
        }
    }
    reset_x87(original);VirtualFree(entry,0,MEM_RELEASE);return 0;
}'''.replace('NATIVE_BYTES', ','.join(str(b) for b in code))
        result, exe = self.compile('client_helper_fmod_x87', body)
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(exe)], timeout=30).returncode, 0)

    def test_ascii_comparison_matches_native_eax(self):
        import pefile
        pe = pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        code = pe.get_data(0x265434,73)
        self.assertEqual(hashlib.sha256(code).hexdigest(),
                         '9a359ab3fc9f007451564d524608da9cdc5db4dbe6818a02d48a037e229bf67c')
        body = r'''
int main(void) {
    const unsigned char code[]={NATIVE_BYTES};
    void *entry=VirtualAlloc(NULL,sizeof(code),MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
    if(!entry) return 2;memcpy(entry,code,sizeof(code));DWORD old;
    if(!VirtualProtect(entry,sizeof(code),PAGE_EXECUTE_READ,&old)) return 2;
    FlushInstructionCache(GetCurrentProcess(),entry,sizeof(code));
    uint64_t (*native)(const unsigned char *,const unsigned char *,size_t);
    memcpy(&native,&entry,sizeof(native));
    for(unsigned left=0;left<256;++left) for(unsigned right=0;right<256;++right) {
        unsigned char a=(unsigned char)left,b=(unsigned char)right;
        uint64_t actual=sr_client_ascii_strnicmp(&a,&b,1);
        if(actual!=native(&a,&b,1)) return 1;
    }
    uint32_t state=0x9e3779b9u;
    for(unsigned i=0;i<8192;++i) {
        unsigned char a[32],b[32];
        for(unsigned j=0;j<32;++j) {
            state^=state<<13;state^=state>>17;state^=state<<5;
            a[j]=(unsigned char)state;b[j]=(i&1)?a[j]:(unsigned char)(state>>8);
            if((i&3)==1 && a[j]>='A' && a[j]<='Z') b[j]+=32;
        }
        a[31]=b[31]=0;size_t count=i%33;
        uint64_t actual=sr_client_ascii_strnicmp(a,b,count);
        if(actual!=native(a,b,count)) return 1;
    }
    if(sr_client_ascii_strnicmp(NULL,NULL,0)!=native(NULL,NULL,0)) return 1;
    VirtualFree(entry,0,MEM_RELEASE);return 0;
}'''.replace('NATIVE_BYTES',','.join(str(b) for b in code))
        result,exe = self.compile('client_helper_ascii_compare',body)
        self.assertEqual(result.returncode,0,result.stderr)
        self.assertEqual(subprocess.run([str(exe)],timeout=30).returncode,0)

    def test_forward_overlap_copy_is_not_memmove(self):
        result, exe = self.compile('client_helper_copy', r'''
int main(void) {
    unsigned char bytes[]={1,2,3,4,5,6};
    if (qmemcpy(bytes+1,bytes,5)!=bytes+1) return 1;
    for (unsigned i=0;i<6;++i) if (bytes[i]!=1) return 2;
    unsigned char backward[]={1,2,3,4,5,6};
    qmemcpy(backward,backward+1,5);
    for (unsigned i=0;i<5;++i) if (backward[i]!=i+2) return 3;
    if (qmemcpy(NULL,NULL,0)!=NULL) return 4;
    return 0;
}''')
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(exe)]).returncode, 0)

    def test_widening_bit_copy_is_rejected(self):
        result, _ = self.compile('client_helper_invalid',
                                'double f(float x) { return SR_EXPORT_COERCE(double,x); }', False)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn('bit coercion cannot widen its source', result.stderr)

    def test_float_promotion_matches_native_bits_and_mxcsr(self):
        result, exe = self.compile('client_float_promotion', r'''
static __attribute__((noinline)) uint64_t promoted(float f) {
    return COERCE_UNSIGNED_INT64((double)f);
}
int main(void) {
    uint32_t state=0x9e3779b9u, original=_mm_getcsr(), clear=original&~63u;
    for (unsigned i=0;i<4096;++i) {
        state^=state<<13;state^=state>>17;state^=state<<5;
        float f; memcpy(&f,&state,4);
        _mm_setcsr(clear); uint64_t actual=promoted(f); unsigned actual_flags=_mm_getcsr();
        _mm_setcsr(clear); double native;
        __asm__ volatile("cvtss2sd %1,%0" : "=x"(native) : "x"(f) : "memory");
        unsigned native_flags=_mm_getcsr(); uint64_t expected;memcpy(&expected,&native,8);
        if(actual!=expected || actual_flags!=native_flags) { _mm_setcsr(original);return 1; }
    }
    _mm_setcsr(original);return 0;
}''')
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(exe)]).returncode, 0)


if __name__ == '__main__':
    unittest.main()
