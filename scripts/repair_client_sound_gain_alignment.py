"""Restore native MOVDQU stores in procedural sound's packed gain loop."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (0000000140065AE0)'

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Sound gain recovery requires the pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in ((0x66e19,'f30f7f40f0'),(0x66e26,'f30f7f08'),
                     (0x66e33,'f30f7f4010'),(0x66e41,'f30f7f4020')):
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):
            raise ValueError('Native unaligned sound store changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    # Native MULSS coefficients must remain single precision. Decimal doubles
    # followed by float casts drift enough to change generated PCM samples.
    literals=0
    for rva,bits,literal,count in (
        (0x278168,'cdcccc3c',b'0.025',110),
        (0x278240,'abaa2a3e',b'0.16666667',16),
        (0x278068,'00000038',b'0.000030517578',16),
        (0x27804c,'00000030',b'4.6566129e-10',16),
    ):
        if pe.get_data(rva,4)!=bytes.fromhex(bits):raise ValueError('Native sound coefficient changed')
        region,n=re.subn(rb'(?<![\w.])'+re.escape(literal)+rb'(?![\w.])',literal+b'f',region)
        if n!=count and not (n==0 and region.count(literal+b'f')==count):
            raise ValueError('Sound coefficient inventory changed')
        literals+=n
    for old,new in (
        (b'v114[-1] = _mm_add_epi16(v115, v115);',b'_mm_storeu_si128(v114 - 1, _mm_add_epi16(v115, v115));'),
        (b'*v114 = _mm_add_epi16(v116, v116);',b'_mm_storeu_si128(v114, _mm_add_epi16(v116, v116));'),
        (b'v114[1] = _mm_add_epi16(v117, v117);',b'_mm_storeu_si128(v114 + 1, _mm_add_epi16(v117, v117));'),
        (b'v114[2] = _mm_add_epi16(v118, v118);',b'_mm_storeu_si128(v114 + 2, _mm_add_epi16(v118, v118));'),
    ):
        if region.count(old)==0 and region.count(new)==1:continue
        if region.count(old)!=1:raise ValueError('Sound gain store inventory changed')
        region=region.replace(old,new)
    return source[:a]+region+source[b:],{'recovered_sound_unaligned_gain_stores':4,
                                       'recovered_sound_float_coefficients':literals}
