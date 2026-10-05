"""Recover the float lane and paired float normalization in orientation blending."""
from repair_client_menu_actions import pinned_pe,region


def repair(source):
    pe=pinned_pe()
    checks=[(0xc2fa2,'0f28f3'),(0xc2faa,'0fc6f600'),
            (0xc3007,'0f2fd073070f570d5d681b00'),
            (0xc3064,'f30f5ac1'),(0xc306b,'660f51d0660f2ed1743e'),
            (0xc3090,'f20f104484380f5ad0660f59d3660f5ac2f20f11448438')]
    # The paired conversion loop preserves two packed float words. It does
    # not convert a single float numerically to a stored double.
    for rva,h in checks:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native orientation blend changed at '+hex(rva))
    a,b,body=region(source,0xc2f90)
    if body.count(b'v5 = _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 0);')!=1:
        raise ValueError('Orientation float-lane export changed')
    new=b'''//----- (00000001400C2F90) ----------------------------------------------------
/* Existing callers carry the native XMM3 float word in a double container. */
_UNKNOWN ** sub_1400C2F90(float *a1,float *a2,float *a3,double a4)
{
  float alpha;
  memcpy(&alpha,&a4,sizeof alpha);
  __m128 factor=_mm_set1_ps(alpha),left,right;
  sub_14010E370((float *)(void *)&left,a2);
  sub_14010E370((float *)(void *)&right,a3);
  float l[4],r[4];
  _mm_storeu_ps(l,left);_mm_storeu_ps(r,right);
  float p2=l[2]*r[2],p0=l[0]*r[0];
  float p3=l[3]*r[3]+p2,p1=l[1]*r[1]+p0;
  float dot=p3+p1;
  if(!_mm_comige_ss(_mm_set_ss(dot),_mm_setzero_ps()))
    right=_mm_xor_ps(right,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279870)));
  __m128 weights=_mm_sub_ps(_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279700)),factor);
  __m128 blended=_mm_add_ps(_mm_mul_ps(weights,left),_mm_mul_ps(factor,right));
  float q[4];_mm_storeu_ps(q,blended);
  float s2=q[2]*q[2],s3=q[3]*q[3];
  float s0=q[0]*q[0],s1=q[1]*q[1];
  float sum23=s3+s2,sum01=s0+s1,norm=sum23+sum01;
  __m128d root=_mm_sqrt_pd(_mm_cvtss_sd(_mm_setzero_pd(),_mm_set_ss(norm)));
  unsigned char zero_or_unordered;
  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(zero_or_unordered)
                   : "x"(root),"x"(_mm_setzero_pd()) : "cc");
  if(zero_or_unordered)
    _mm_storeu_ps(q,_mm_castsi128_ps(_mm_load_si128((const __m128i *)&xmmword_140279490)));
  else
  {
    __m128d inverse=_mm_div_sd(_mm_set_sd(1.0),root);
    inverse=_mm_unpacklo_pd(inverse,inverse);
    for(unsigned i=0;i<2;i++)
    {
      __m128 pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)(q+2*i)));
      __m128 converted=_mm_cvtpd_ps(_mm_mul_pd(_mm_cvtps_pd(pair),inverse));
      uint64_t words;
      memcpy(&words,&converted,sizeof words);
      memcpy(q+2*i,&words,sizeof words);
    }
  }
  return sub_14011C340(a1,q);
}

'''
    return source[:a]+new+source[b:],{'recovered_orientation_blend_float_lane':1,'recovered_orientation_blend_packed_normalization':1}
