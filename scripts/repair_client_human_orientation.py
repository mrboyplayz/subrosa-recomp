"""Restore packed quaternion normalization and unaligned human state storage."""
from repair_client_menu_actions import pinned_pe,region,check


def repair(source):
    pe=pinned_pe()
    for rva,h in [(0xac476,'660f2ed17437'),
                  (0xac490,'f20f1044bc280f5ad0660f59d3660f5ac2f20f1144bc28'),
                  (0xac4cc,'420f118433a4670000')]:check(pe,rva,h)
    a,b,body=region(source,0xabb10);body=body.replace(b'\r',b'')
    for name in ('v17','v22','v30','v64'):
        if body.count(b'1.0 / '+name.encode())!=3:
            raise ValueError('Human float reciprocal changed: '+name)
        body=body.replace(b'1.0 / '+name.encode(),b'1.0f / '+name.encode())
    old=b'*(double *)&SR_VEC_LANES(128, v79, u64)[v1] = COERCE_FLOAT(SR_VEC_LANES(128, v79, u64)[v1]) * v76;'
    if body.count(old)!=1:raise ValueError('Human paired quaternion normalization changed')
    # MOVSD contains two float words; CVTPS2PD/MULPD/CVTPD2PS operates on both.
    body=body.replace(old,b'__m128 sr_pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)((const unsigned char *)&v79+8*v1)));\n'
                         b'      __m128d sr_scaled=_mm_mul_pd(_mm_cvtps_pd(sr_pair),_mm_set1_pd(v76));\n'
                         b'      __m128 sr_words=_mm_cvtpd_ps(sr_scaled);\n'
                         b'      uint64_t sr_bits;memcpy(&sr_bits,&sr_words,8);\n'
                         b'      memcpy((unsigned char *)&v79+8*v1,&sr_bits,8);')
    # Source v1 advances in pairs of float words through a qword view. The
    # native RDI advances by two float indices, selecting offsets zero/eight.
    old=b'*(__m128 *)&dword_140404A6C[v3 + 280657926] = v79;'
    if body.count(old)!=1:raise ValueError('Human quaternion storage changed')
    body=body.replace(old,b'_mm_storeu_ps((float *)&dword_140404A6C[v3 + 280657926], v79);')
    old=b'  if ( v74 == 0.0 )'
    if body.count(old)!=1:raise ValueError('Human quaternion zero branch changed')
    body=body.replace(old,b'  unsigned char sr_zero_or_unordered;\n'
                         b'  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(sr_zero_or_unordered)\n'
                         b'                   : "x"(_mm_set_sd(v74)), "x"(_mm_setzero_pd()) : "cc");\n'
                         b'  if ( sr_zero_or_unordered )')
    source=source[:a]+body+source[b:]
    return source,{'recovered_human_orientation_paired_float_normalization':1,
                   'recovered_human_orientation_unaligned_store':1}
