"""Recover the item adjacency shadow pass's lost scalar uniform argument."""
from repair_client_menu_actions import pinned_pe,region,check


def repair(source):
    pe=pinned_pe()
    for rva,h in [(0x11ca8d,'f30f1035e7130644'),(0x11ca9a,'f30f5f3582b71500'),
                  (0x11cad0,'f30f103d50bc1500'),
                  (0x11caeb,'4863070f28c74869c8700d1000f30f5ec68b8718600000ffc0660f6ec80f5bc9f30f598c318092da1a8b0d360d4911f30f59c8ff15c4772e00')]:check(pe,rva,h)
    a,b,body=region(source,0x11c950);body=body.replace(b'\r',b'')
    old=b'unk_1404042E8(dword_140404A6C[71738233]);'
    if body.count(old)!=1:raise ValueError('Item shadow uniform call changed')
    new=b'''/* sr_item_shadow_uniform: original MAXSS/DIVSS/CVTDQ2PS/MULSS order. */
        __m128 sr_shadow_denom=_mm_max_ss(_mm_set_ss(*(float *)&dword_140404A6C[284550404]),_mm_set_ss(0.125f));
        __m128 sr_shadow_recip=_mm_div_ss(_mm_set_ss(8.0f),sr_shadow_denom);
        int32_t sr_shadow_age=(int32_t)(v2[6150]+1u);
        __m128 sr_shadow_value=_mm_cvtepi32_ps(_mm_setr_epi32(sr_shadow_age,0,0,0));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,_mm_set_ss(*(float *)&dword_140404A6C[111579653+263004*(int64_t)(int32_t)*v2]));
        sr_shadow_value=_mm_mul_ss(sr_shadow_value,sr_shadow_recip);
        ((void (*)(int,float))unk_1404042E8)((int)dword_140404A6C[71738233],_mm_cvtss_f32(sr_shadow_value));
        /* sr_item_shadow_uniform_end */'''
    return source[:a]+body.replace(old,new)+source[b:],{'recovered_item_shadow_scalar_uniform':1}
