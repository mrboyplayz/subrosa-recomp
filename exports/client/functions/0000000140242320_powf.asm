; 0x140242320: powf
; Decompilation failed: call analysis failed
0000000140242320  sub     rsp, 68h
0000000140242324  movdqa  [rsp+68h+var_48], xmm6
000000014024232A  movdqa  [rsp+68h+var_38], xmm7
0000000140242330  cmp     cs:dword_140404A6C+48BAF80h, 0
0000000140242337  jnz     Lpowf_fma3
000000014024233D  punpckldq xmm1, xmm0
0000000140242341  pxor    xmm5, xmm5
0000000140242345  movd    eax, xmm1
0000000140242349  movd    ecx, xmm0
000000014024234D  mov     r9d, ecx
0000000140242350  btr     eax, 1Fh
0000000140242354  btr     ecx, 1Fh
0000000140242358  cmp     eax, 7F800000h
000000014024235D  jnb     140242730h
0000000140242363  cmp     eax, 3F800000h
0000000140242368  jle     1402427E0h
000000014024236E  cmp     ecx, 7F800000h
0000000140242374  jnb     140242670h
000000014024237A  cvtps2pd xmm0, xmm1
000000014024237D  cmp     r9d, 3F880000h
0000000140242384  jl      1402424D0h
000000014024238A  pshufd  xmm2, xmm0, 0EEh
000000014024238F  pand    xmm2, cs:xmmword_140288E60
0000000140242397  movq    rcx, xmm2
000000014024239C  shr     rcx, 2Ch
00000001402423A0  adc     ecx, 0
00000001402423A3  mov     eax, ecx
00000001402423A5  or      ecx, 3FE00h
00000001402423AB  shl     rcx, 2Ch
00000001402423AF  movq    xmm1, rcx
00000001402423B4  por     xmm2, cs:xmmword_140288E40
00000001402423BC  pshufd  xmm3, xmm2, 0EEh
00000001402423C1  psrlq   xmm3, 34h ; '4'
00000001402423C6  psubq   xmm3, cs:xmmword_140288E50
00000001402423CE  cvtdq2pd xmm3, xmm3
00000001402423D2  lea     rcx, unk_14028DA30
00000001402423D9  subsd   xmm1, xmm2
00000001402423DD  mulsd   xmm1, qword ptr [rcx+rax*8]
00000001402423E2  movapd  xmm2, xmm1
00000001402423E6  movsd   xmm4, cs:qword_140288DA4
00000001402423EE  mulsd   xmm4, xmm1
00000001402423F2  mulsd   xmm1, xmm2
00000001402423F6  addsd   xmm4, qword ptr cs:xmmword_140288E40
00000001402423FE  mulsd   xmm1, xmm4
0000000140242402  addsd   xmm1, xmm2
0000000140242406  mulsd   xmm3, cs:qword_140288DAC
000000014024240E  lea     rcx, unk_140288E70
0000000140242415  addsd   xmm3, qword ptr [rcx+rax*8]
000000014024241A  subsd   xmm3, xmm1
000000014024241E  mulsd   xmm0, xmm3
0000000140242422  ucomisd xmm0, cs:qword_140288DB4
000000014024242A  ja      L__z_is_inf
0000000140242430  ucomisd xmm0, cs:qword_140288DBC
0000000140242438  jbe     L__z_is_zero
000000014024243E  movapd  xmm3, xmm0
0000000140242442  mulpd   xmm3, cs:xmmword_140288E30
000000014024244A  cvtpd2dq xmm4, xmm3
000000014024244E  cvtdq2pd xmm2, xmm4
0000000140242452  mulsd   xmm2, cs:qword_140288DC4
000000014024245A  movd    ecx, xmm4
000000014024245E  subsd   xmm0, xmm2
0000000140242462  movapd  xmm1, xmm0
0000000140242466  movsd   xmm3, cs:qword_140288DCC
000000014024246E  mulsd   xmm3, xmm0
0000000140242472  mulsd   xmm0, xmm1
0000000140242476  addsd   xmm3, qword ptr cs:xmmword_140288E40
000000014024247E  mulsd   xmm0, xmm3
0000000140242482  addsd   xmm0, xmm1
0000000140242486  mov     rax, 3Fh ; '?'
000000014024248D  and     eax, ecx
000000014024248F  lea     rcx, dbl_14028C3F0
0000000140242496  mulsd   xmm0, qword ptr [rcx+rax*8]
000000014024249B  addsd   xmm0, qword ptr [rcx+rax*8]
00000001402424A0  psrad   xmm4, 6
00000001402424A5  psllq   xmm4, 34h ; '4'
00000001402424AA  paddq   xmm4, xmm0
00000001402424AE  cvtsd2ss xmm0, xmm4
00000001402424B2  orps    xmm0, xmm5
00000001402424B5  movdqa  xmm7, [rsp+68h+var_38]
00000001402424BB  movdqa  xmm6, [rsp+68h+var_48]
00000001402424C1  add     rsp, 68h
00000001402424C5  retn
00000001402424D0  cmp     r9d, 0
00000001402424D4  jg      short 140242525h
00000001402424D6  cmp     ecx, 0
00000001402424D9  jz      1402425C0h
00000001402424DF  and     eax, 7F800000h
00000001402424E4  cmp     eax, 4B000000h
00000001402424E9  jg      short 140242525h
00000001402424EB  stmxcsr [rsp+68h+var_28]
00000001402424F0  mov     edx, [rsp+68h+var_28]
00000001402424F4  or      edx, 1F80h
00000001402424FA  mov     [rsp+68h+var_18], edx
00000001402424FE  ldmxcsr [rsp+68h+var_18]
0000000140242503  cvtss2si edx, xmm1
0000000140242507  cvtsi2ss xmm2, edx
000000014024250B  ldmxcsr [rsp+68h+var_28]
0000000140242510  ucomiss xmm2, xmm1
0000000140242513  jnz     L__return_qnan
0000000140242519  rcr     edx, 1
000000014024251B  jnb     short 140242525h
000000014024251D  movss   xmm5, cs:dword_140288DEC
0000000140242525  pshufd  xmm3, xmm0, 0EEh
000000014024252A  subsd   xmm3, cs:qword_140288DDC
0000000140242532  movq    rdx, xmm3
0000000140242537  btr     rdx, 3Fh ; '?'
000000014024253C  cmp     rdx, cs:qword_140288DD4
0000000140242543  jnb     14024238Ah
0000000140242549  movapd  xmm7, cs:xmmword_140288E00
0000000140242551  movapd  xmm1, xmm3
0000000140242555  movapd  xmm6, xmm3
0000000140242559  addsd   xmm1, cs:qword_140288DE4
0000000140242561  divsd   xmm6, xmm1
0000000140242565  movapd  xmm2, xmm6
0000000140242569  mulsd   xmm6, xmm3
000000014024256D  addsd   xmm2, xmm2
0000000140242571  movapd  xmm1, xmm2
0000000140242575  mulsd   xmm1, xmm2
0000000140242579  pshufd  xmm4, xmm1, 44h ; 'D'
000000014024257E  mulpd   xmm4, xmm7
0000000140242582  mulsd   xmm2, xmm1
0000000140242586  addpd   xmm4, cs:xmmword_140288E10
000000014024258E  mulsd   xmm1, xmm1
0000000140242592  mulsd   xmm1, xmm2
0000000140242596  unpcklpd xmm2, xmm1
000000014024259A  mulpd   xmm2, xmm4
000000014024259E  pshufd  xmm1, xmm2, 0EEh
00000001402425A3  addsd   xmm2, xmm1
00000001402425A7  subsd   xmm2, xmm6
00000001402425AB  addsd   xmm3, xmm2
00000001402425AF  jmp     14024241Eh
00000001402425C0  mov     r8d, eax
00000001402425C3  movd    edx, xmm1
00000001402425C7  mov     eax, 0
00000001402425CC  mov     r10d, 0
00000001402425D2  mov     ecx, 7F800000h
00000001402425D7  cmp     edx, 0
00000001402425DA  cmovl   edx, ecx
00000001402425DD  cmovl   r10d, ecx
00000001402425E1  cmovg   edx, eax
00000001402425E4  mov     ecx, 80000000h
00000001402425E9  and     r8d, 7F800000h
00000001402425F0  cmp     r8d, 4B000000h
00000001402425F7  cmovg   ecx, eax
00000001402425FA  jg      short 14024263Fh
00000001402425FC  stmxcsr [rsp+68h+var_28]
0000000140242601  mov     r8d, [rsp+68h+var_28]
0000000140242606  or      r8d, 1F80h
000000014024260D  mov     [rsp+68h+var_18], r8d
0000000140242612  ldmxcsr [rsp+68h+var_18]
0000000140242617  cvtss2si r8d, xmm1
000000014024261C  cvtsi2ss xmm2, r8d
0000000140242621  ldmxcsr [rsp+68h+var_28]
0000000140242626  ucomiss xmm2, xmm1
0000000140242629  cmovnz  ecx, eax
000000014024262C  jnz     short 14024263Fh
000000014024262E  rcr     r8d, 1
0000000140242631  cmovnb  ecx, eax
0000000140242634  jnb     short 14024263Fh
0000000140242636  mov     ecx, r9d
0000000140242639  and     ecx, 80000000h
000000014024263F  or      ecx, edx
0000000140242641  movd    xmm0, ecx
0000000140242645  cmp     r10d, 0
0000000140242649  jz      short 14024265Bh
000000014024264B  mov     r9d, cs:dword_140288D84
0000000140242652  movdqa  xmm2, xmm0
0000000140242656  call    _powf_special
000000014024265B  movdqa  xmm7, [rsp+68h+var_38]
0000000140242661  movdqa  xmm6, [rsp+68h+var_48]
0000000140242667  add     rsp, 68h
000000014024266B  retn
0000000140242670  cmp     eax, 0
0000000140242673  jz      L__return_pos_one
0000000140242679  movd    ecx, xmm0
000000014024267D  movd    edx, xmm1
0000000140242681  cmp     ecx, 7F800000h
0000000140242687  jz      short 1402426A0h
0000000140242689  cmp     ecx, 0FF800000h
000000014024268F  jz      short 1402426B0h
0000000140242691  jmp     L__return_x_nan
00000001402426A0  cmp     edx, 0
00000001402426A3  jl      L__return_pos_zero
00000001402426A9  jmp     L__return_pos_inf
00000001402426B0  mov     r8d, eax
00000001402426B3  mov     eax, 0
00000001402426B8  mov     ecx, 7F800000h
00000001402426BD  cmp     edx, 0
00000001402426C0  cmovl   edx, eax
00000001402426C3  cmovg   edx, ecx
00000001402426C6  mov     ecx, 80000000h
00000001402426CB  and     r8d, 7F800000h
00000001402426D2  cmp     r8d, 4B000000h
00000001402426D9  cmovg   ecx, eax
00000001402426DC  jg      short 140242716h
00000001402426DE  stmxcsr [rsp+68h+var_28]
00000001402426E3  mov     r8d, [rsp+68h+var_28]
00000001402426E8  or      r8d, 1F80h
00000001402426EF  mov     [rsp+68h+var_18], r8d
00000001402426F4  ldmxcsr [rsp+68h+var_18]
00000001402426F9  cvtss2si r8d, xmm1
00000001402426FE  cvtsi2ss xmm2, r8d
0000000140242703  ldmxcsr [rsp+68h+var_28]
0000000140242708  ucomiss xmm2, xmm1
000000014024270B  cmovnz  ecx, eax
000000014024270E  jnz     short 140242716h
0000000140242710  rcr     r8d, 1
0000000140242713  cmovnb  ecx, eax
0000000140242716  or      ecx, edx
0000000140242718  movd    xmm0, ecx
000000014024271C  movdqa  xmm7, [rsp+68h+var_38]
0000000140242722  movdqa  xmm6, [rsp+68h+var_48]
0000000140242728  add     rsp, 68h
000000014024272C  retn
0000000140242730  ja      1402427C0h
0000000140242736  cmp     ecx, 7F800000h
000000014024273C  ja      L__return_x_nan
0000000140242742  cmp     ecx, 3F800000h
0000000140242748  jz      L__return_abs_x_is_one_y_is_pninf
000000014024274E  movd    eax, xmm1
0000000140242752  bt      eax, 1Fh
0000000140242756  jb      short 140242770h
0000000140242758  cmp     ecx, 3F800000h
000000014024275E  jb      L__return_pos_zero
0000000140242764  jmp     L__return_pos_inf
0000000140242770  mov     edx, 1
0000000140242775  mov     eax, 0
000000014024277A  mov     r8d, 7F800000h
0000000140242780  cmp     ecx, 0
0000000140242783  jz      L__return_pos_inf
0000000140242789  cmovnz  edx, eax
000000014024278C  cmp     ecx, 3F800000h
0000000140242792  cmovb   eax, r8d
0000000140242796  movd    xmm0, eax
000000014024279A  cmp     edx, 0
000000014024279D  jz      short 1402427AFh
000000014024279F  movdqa  xmm2, xmm0
00000001402427A3  mov     r9d, cs:dword_140288D84
00000001402427AA  call    _powf_special
00000001402427AF  movdqa  xmm7, [rsp+68h+var_38]
00000001402427B5  movdqa  xmm6, [rsp+68h+var_48]
00000001402427BB  add     rsp, 68h
00000001402427BF  retn
00000001402427C0  cmp     ecx, 7F800000h
00000001402427C6  ja      L__x_is_nan_y_is_nan
00000001402427CC  cmp     r9d, 3F800000h
00000001402427D3  jz      L__x_is_one_y_is_nan
00000001402427D9  jmp     L__return_y_nan
00000001402427E0  cmp     eax, 0
00000001402427E3  jz      short L__y_is_zero_check_x_nan
00000001402427E5  movd    edx, xmm1
00000001402427E9  cmp     edx, 3F800000h
00000001402427EF  jnz     14024236Eh
00000001402427F5  movd    r9d, xmm0
00000001402427FA  and     r9d, 7FFFFFFFh
0000000140242801  cmp     r9d, 7F800000h
0000000140242808  ja      short 14024281Bh
000000014024280A  movdqa  xmm7, [rsp+68h+var_38]
0000000140242810  movdqa  xmm6, [rsp+68h+var_48]
0000000140242816  add     rsp, 68h
000000014024281A  retn
000000014024281B  movd    edx, xmm0
000000014024281F  or      edx, 400000h
0000000140242825  movd    xmm2, edx
0000000140242829  mov     r9d, cs:dword_140288D88
0000000140242830  call    _powf_special
0000000140242835  movdqa  xmm7, [rsp+68h+var_38]
000000014024283B  movdqa  xmm6, [rsp+68h+var_48]
0000000140242841  add     rsp, 68h
0000000140242845  retn
0000000140242850  cmp     ecx, 7F800000h
0000000140242856  jbe     short L__return_pos_one
0000000140242858  cmp     ecx, 7FC00000h
000000014024285E  jnb     short L__return_pos_one
0000000140242860  mov     edx, ecx
0000000140242862  or      edx, 400000h
0000000140242868  movd    xmm2, edx
000000014024286C  mov     r9d, cs:dword_140288D88
0000000140242873  call    _powf_special
0000000140242878  movdqa  xmm7, [rsp+68h+var_38]
000000014024287E  movdqa  xmm6, [rsp+68h+var_48]
0000000140242884  add     rsp, 68h
0000000140242888  retn
0000000140242890  cmp     eax, 7FC00000h
0000000140242895  jnb     short L__return_pos_one
0000000140242897  mov     edx, 3F800000h
000000014024289C  movd    xmm2, edx
00000001402428A0  mov     r9d, cs:dword_140288D8C
00000001402428A7  call    _powf_special
00000001402428AC  movdqa  xmm7, [rsp+68h+var_38]
00000001402428B2  movdqa  xmm6, [rsp+68h+var_48]
00000001402428B8  add     rsp, 68h
00000001402428BC  retn
00000001402428C0  mov     edx, 3F800000h
00000001402428C5  movd    xmm0, edx
00000001402428C9  movdqa  xmm7, [rsp+68h+var_38]
00000001402428CF  movdqa  xmm6, [rsp+68h+var_48]
00000001402428D5  add     rsp, 68h
00000001402428D9  retn
00000001402428E0  mov     edx, 3F800000h
00000001402428E5  movd    xmm0, edx
00000001402428E9  movdqa  xmm7, [rsp+68h+var_38]
00000001402428EF  movdqa  xmm6, [rsp+68h+var_48]
00000001402428F5  add     rsp, 68h
00000001402428F9  retn
0000000140242900  pxor    xmm0, xmm0
0000000140242904  movdqa  xmm7, [rsp+68h+var_38]
000000014024290A  movdqa  xmm6, [rsp+68h+var_48]
0000000140242910  add     rsp, 68h
0000000140242914  retn
0000000140242920  mov     edx, 7F800000h
0000000140242925  movd    xmm0, edx
0000000140242929  movdqa  xmm7, [rsp+68h+var_38]
000000014024292F  movdqa  xmm6, [rsp+68h+var_48]
0000000140242935  add     rsp, 68h
0000000140242939  retn
0000000140242940  movd    ecx, xmm0
0000000140242944  or      ecx, 400000h
000000014024294A  movd    xmm2, ecx
000000014024294E  mov     r9d, cs:dword_140288D88
0000000140242955  call    _powf_special
000000014024295A  movdqa  xmm7, [rsp+68h+var_38]
0000000140242960  movdqa  xmm6, [rsp+68h+var_48]
0000000140242966  add     rsp, 68h
000000014024296A  retn
0000000140242970  movd    eax, xmm1
0000000140242974  or      eax, 400000h
0000000140242979  movd    xmm2, eax
000000014024297D  mov     r9d, cs:dword_140288D8C
0000000140242984  call    _powf_special
0000000140242989  movdqa  xmm7, [rsp+68h+var_38]
000000014024298F  movdqa  xmm6, [rsp+68h+var_48]
0000000140242995  add     rsp, 68h
0000000140242999  retn
00000001402429A0  cmp     r9d, 0FFC00000h
00000001402429A7  jz      short Lpowf__x_is_nan_y_is_nan_return_y
00000001402429A9  movd    ecx, xmm0
00000001402429AD  or      ecx, 400000h
00000001402429B3  movd    xmm2, ecx
00000001402429B7  mov     r9d, cs:dword_140288D90
00000001402429BE  call    _powf_special
00000001402429C3  movdqa  xmm7, [rsp+68h+var_38]
00000001402429C9  movdqa  xmm6, [rsp+68h+var_48]
00000001402429CF  add     rsp, 68h
00000001402429D3  retn
00000001402429D4  movd    eax, xmm1
00000001402429D8  or      eax, 400000h
00000001402429DD  movd    xmm2, eax
00000001402429E1  mov     r9d, cs:dword_140288D90
00000001402429E8  call    _powf_special
00000001402429ED  movdqa  xmm7, [rsp+68h+var_38]
00000001402429F3  movdqa  xmm6, [rsp+68h+var_48]
00000001402429F9  add     rsp, 68h
00000001402429FD  retn
0000000140242A00  pxor    xmm2, xmm2
0000000140242A04  orps    xmm2, xmm5
0000000140242A07  mov     r9d, cs:dword_140288D98
0000000140242A0E  call    _powf_special
0000000140242A13  movdqa  xmm7, [rsp+68h+var_38]
0000000140242A19  movdqa  xmm6, [rsp+68h+var_48]
0000000140242A1F  add     rsp, 68h
0000000140242A23  retn
0000000140242A30  mov     edx, 7F800000h
0000000140242A35  movd    xmm2, edx
0000000140242A39  orps    xmm2, xmm5
0000000140242A3C  mov     r9d, cs:dword_140288DA0
0000000140242A43  call    _powf_special
0000000140242A48  movdqa  xmm7, [rsp+68h+var_38]
0000000140242A4E  movdqa  xmm6, [rsp+68h+var_48]
0000000140242A54  add     rsp, 68h
0000000140242A58  retn
0000000140242A60  mov     edx, 0FFC00000h
0000000140242A65  movd    xmm2, edx
0000000140242A69  mov     r9d, cs:dword_140288D94
0000000140242A70  call    _powf_special
0000000140242A75  movdqa  xmm7, [rsp+68h+var_38]
0000000140242A7B  movdqa  xmm6, [rsp+68h+var_48]
0000000140242A81  add     rsp, 68h
0000000140242A85  retn
0000000140242A86  vpunpckldq xmm1, xmm1, xmm0
0000000140242A8A  vpxor   xmm5, xmm5, xmm5
0000000140242A8E  vmovd   eax, xmm1
0000000140242A92  vmovd   ecx, xmm0
0000000140242A96  mov     r9d, ecx
0000000140242A99  and     eax, 7FFFFFFFh
0000000140242A9E  and     ecx, 7FFFFFFFh
0000000140242AA4  cmp     eax, 7F800000h
0000000140242AA9  jnb     Lpowf_fma3_y_is_inf_or_nan
0000000140242AAF  cmp     eax, 3F800000h
0000000140242AB4  jle     Lpowf_fma3_check_if_y_is_zero_or_pos_one
0000000140242ABA  cmp     ecx, 7F800000h
0000000140242AC0  jnb     Lpowf_fma3_x_is_inf_or_nan
0000000140242AC6  vcvtps2pd xmm0, xmm1
0000000140242ACA  cmp     r9d, 3F880000h
0000000140242AD1  jl      Lpowf_fma3_x_is_neg_or_zero_or_near_one
0000000140242AD7  vpshufd xmm2, xmm0, 0EEh
0000000140242ADC  vpand   xmm2, xmm2, cs:xmmword_140288E60
0000000140242AE4  vmovq   rcx, xmm2
0000000140242AE9  shr     rcx, 2Ch
0000000140242AED  adc     ecx, 0
0000000140242AF0  mov     eax, ecx
0000000140242AF2  or      ecx, 3FE00h
0000000140242AF8  shl     rcx, 2Ch
0000000140242AFC  vmovq   xmm1, rcx
0000000140242B01  vpor    xmm2, xmm2, cs:xmmword_140288E40
0000000140242B09  vpshufd xmm3, xmm2, 0EEh
0000000140242B0E  vpsrlq  xmm3, xmm3, 34h ; '4'
0000000140242B13  vpsubq  xmm3, xmm3, cs:xmmword_140288E50
0000000140242B1B  vcvtdq2pd xmm3, xmm3
0000000140242B1F  lea     rcx, unk_14028DA30
0000000140242B26  vsubsd  xmm1, xmm1, xmm2
0000000140242B2A  vmulsd  xmm1, xmm1, qword ptr [rcx+rax*8]
0000000140242B2F  vmovapd xmm2, xmm1
0000000140242B33  vmovsd  xmm4, cs:qword_140288DA4
0000000140242B3B  vfmadd213sd xmm4, xmm1, qword ptr cs:xmmword_140288E40
0000000140242B44  vfmadd213sd xmm4, xmm1, cs:qword_140288DDC
0000000140242B4D  vmulsd  xmm1, xmm1, xmm4
0000000140242B51  vmulsd  xmm3, xmm3, cs:qword_140288DAC
0000000140242B59  lea     rcx, unk_140288E70
0000000140242B60  vaddsd  xmm3, xmm3, qword ptr [rcx+rax*8]
0000000140242B65  vsubsd  xmm3, xmm3, xmm1
0000000140242B69  vmulsd  xmm0, xmm0, xmm3
0000000140242B6D  vucomisd xmm0, cs:qword_140288DB4
0000000140242B75  ja      Lpowf_fma3_z_is_inf
0000000140242B7B  vucomisd xmm0, cs:qword_140288DBC
0000000140242B83  jbe     Lpowf_fma3_z_is_zero
0000000140242B89  vmulpd  xmm3, xmm0, cs:xmmword_140288E30
0000000140242B91  vcvtpd2dq xmm4, xmm3
0000000140242B95  vcvtdq2pd xmm2, xmm4
0000000140242B99  vmovd   ecx, xmm4
0000000140242B9D  vfnmadd231sd xmm0, xmm2, cs:qword_140288DC4
0000000140242BA6  vmovapd xmm1, xmm0
0000000140242BAA  vmovsd  xmm3, cs:qword_140288DCC
0000000140242BB2  vfmadd213sd xmm3, xmm0, qword ptr cs:xmmword_140288E40
0000000140242BBB  vfmadd213sd xmm3, xmm0, cs:qword_140288DDC
0000000140242BC4  vmulsd  xmm0, xmm0, xmm3
0000000140242BC8  mov     rax, 3Fh ; '?'
0000000140242BCF  and     eax, ecx
0000000140242BD1  lea     rcx, dbl_14028C3F0
0000000140242BD8  vmovsd  xmm3, qword ptr [rcx+rax*8]
0000000140242BDD  vfmadd213sd xmm0, xmm3, xmm3
0000000140242BE2  nop     word ptr [rax+rax+00000000h]
0000000140242BF0  vpsrad  xmm4, xmm4, 6
0000000140242BF5  vpsllq  xmm4, xmm4, 34h ; '4'
0000000140242BFA  vpaddq  xmm4, xmm4, xmm0
0000000140242BFE  vcvtsd2ss xmm0, xmm0, xmm4
0000000140242C02  vorps   xmm0, xmm0, xmm5
0000000140242C06  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242C0C  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242C12  add     rsp, 68h
0000000140242C16  retn
0000000140242C20  cmp     r9d, 0
0000000140242C24  jg      short Lpowf_fma3_x_near_one
0000000140242C26  cmp     ecx, 0
0000000140242C29  jz      Lpowf_fma3_x_is_zero
0000000140242C2F  and     eax, 7F800000h
0000000140242C34  cmp     eax, 4B000000h
0000000140242C39  jg      short Lpowf_fma3_x_near_one
0000000140242C3B  vstmxcsr [rsp+68h+var_28]
0000000140242C41  mov     edx, [rsp+68h+var_28]
0000000140242C45  or      edx, 1F80h
0000000140242C4B  mov     [rsp+68h+var_18], edx
0000000140242C4F  vldmxcsr [rsp+68h+var_18]
0000000140242C55  vcvtss2si edx, xmm1
0000000140242C59  vcvtsi2ss xmm2, xmm2, edx
0000000140242C5D  vldmxcsr [rsp+68h+var_28]
0000000140242C63  vucomiss xmm2, xmm1
0000000140242C67  jnz     Lpowf_fma3_return_qnan
0000000140242C6D  rcr     edx, 1
0000000140242C6F  jnb     short Lpowf_fma3_x_near_one
0000000140242C71  vmovss  xmm5, cs:dword_140288DEC
0000000140242C79  vpshufd xmm3, xmm0, 0EEh
0000000140242C7E  vsubsd  xmm3, xmm3, cs:qword_140288DDC
0000000140242C86  vmovq   rdx, xmm3
0000000140242C8B  btr     rdx, 3Fh ; '?'
0000000140242C90  cmp     rdx, cs:qword_140288DD4
0000000140242C97  jnb     Lpowf_fma3_compute_logx
0000000140242C9D  vpshufd xmm5, xmm5, 44h ; 'D'
0000000140242CA2  vmovapd xmm1, xmm3
0000000140242CA6  vmovsd  xmm5, xmm5, xmm3
0000000140242CAA  vaddsd  xmm1, xmm1, cs:qword_140288DE4
0000000140242CB2  vdivsd  xmm5, xmm5, xmm1
0000000140242CB6  vmovapd xmm2, xmm5
0000000140242CBA  vmulsd  xmm5, xmm5, xmm3
0000000140242CBE  vaddsd  xmm2, xmm2, xmm2
0000000140242CC2  vmovapd xmm1, xmm2
0000000140242CC6  vmulsd  xmm1, xmm1, xmm2
0000000140242CCA  vpshufd xmm4, xmm1, 44h ; 'D'
0000000140242CCF  vmulpd  xmm4, xmm4, cs:xmmword_140288E00
0000000140242CD7  vmulsd  xmm2, xmm2, xmm1
0000000140242CDB  vaddpd  xmm4, xmm4, cs:xmmword_140288E10
0000000140242CE3  vmulsd  xmm1, xmm1, xmm1
0000000140242CE7  vmulsd  xmm1, xmm1, xmm2
0000000140242CEB  vunpcklpd xmm2, xmm2, xmm1
0000000140242CEF  vmulpd  xmm2, xmm2, xmm4
0000000140242CF3  vpshufd xmm1, xmm2, 0EEh
0000000140242CF8  vaddsd  xmm2, xmm1, xmm2
0000000140242CFC  vsubsd  xmm2, xmm2, xmm5
0000000140242D00  vpshufd xmm5, xmm5, 0EEh
0000000140242D05  vaddsd  xmm3, xmm3, xmm2
0000000140242D09  jmp     14024241Eh
0000000140242D10  mov     r8d, eax
0000000140242D13  vmovd   edx, xmm1
0000000140242D17  mov     eax, 0
0000000140242D1C  mov     r10d, 0
0000000140242D22  mov     ecx, 7F800000h
0000000140242D27  cmp     edx, 0
0000000140242D2A  cmovl   edx, ecx
0000000140242D2D  cmovl   r10d, ecx
0000000140242D31  cmovg   edx, eax
0000000140242D34  mov     ecx, 80000000h
0000000140242D39  and     r8d, 7F800000h
0000000140242D40  cmp     r8d, 4B000000h
0000000140242D47  cmovg   ecx, eax
0000000140242D4A  jg      short Lpowf_fma3_or_sign_and_retvalue_and_ret1
0000000140242D4C  vstmxcsr [rsp+68h+var_28]
0000000140242D52  mov     r8d, [rsp+68h+var_28]
0000000140242D57  or      r8d, 1F80h
0000000140242D5E  mov     [rsp+68h+var_18], r8d
0000000140242D63  vldmxcsr [rsp+68h+var_18]
0000000140242D69  vcvtss2si r8d, xmm1
0000000140242D6D  vcvtsi2ss xmm2, xmm2, r8d
0000000140242D72  vldmxcsr [rsp+68h+var_28]
0000000140242D78  vucomiss xmm2, xmm1
0000000140242D7C  cmovnz  ecx, eax
0000000140242D7F  jnz     short Lpowf_fma3_or_sign_and_retvalue_and_ret1
0000000140242D81  rcr     r8d, 1
0000000140242D84  cmovnb  ecx, eax
0000000140242D87  jnb     short Lpowf_fma3_or_sign_and_retvalue_and_ret1
0000000140242D89  mov     ecx, r9d
0000000140242D8C  and     ecx, 80000000h
0000000140242D92  or      ecx, edx
0000000140242D94  vmovd   xmm0, ecx
0000000140242D98  cmp     r10d, 0
0000000140242D9C  jz      14024265Bh
0000000140242DA2  mov     r9d, cs:dword_140288D84
0000000140242DA9  vmovdqa xmm2, xmm0
0000000140242DAD  call    _powf_special
0000000140242DB2  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242DB8  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242DBE  add     rsp, 68h
0000000140242DC2  retn
0000000140242DD0  cmp     eax, 0
0000000140242DD3  jz      Lpowf_fma3_return_pos_one
0000000140242DD9  vmovd   ecx, xmm0
0000000140242DDD  vmovd   edx, xmm1
0000000140242DE1  cmp     ecx, 7F800000h
0000000140242DE7  jz      short Lpowf_fma3_x_is_pos_inf
0000000140242DE9  cmp     ecx, 0FF800000h
0000000140242DEF  jz      short Lpowf_fma3_x_is_neg_inf
0000000140242DF1  jmp     Lpowf_fma3_return_x_nan
0000000140242E00  cmp     edx, 0
0000000140242E03  jl      Lpowf_fma3_return_pos_zero
0000000140242E09  jmp     Lpowf_fma3_return_pos_inf
0000000140242E10  mov     r8d, eax
0000000140242E13  mov     eax, 0
0000000140242E18  mov     ecx, 7F800000h
0000000140242E1D  cmp     edx, 0
0000000140242E20  cmovl   edx, eax
0000000140242E23  cmovg   edx, ecx
0000000140242E26  mov     ecx, 80000000h
0000000140242E2B  and     r8d, 7F800000h
0000000140242E32  cmp     r8d, 4B000000h
0000000140242E39  cmovg   ecx, eax
0000000140242E3C  jg      short Lpowf_fma3_or_sign_and_retvalue_and_ret
0000000140242E3E  vstmxcsr [rsp+68h+var_28]
0000000140242E44  mov     r8d, [rsp+68h+var_28]
0000000140242E49  or      r8d, 1F80h
0000000140242E50  mov     [rsp+68h+var_18], r8d
0000000140242E55  vldmxcsr [rsp+68h+var_18]
0000000140242E5B  vcvtss2si r8d, xmm1
0000000140242E5F  vcvtsi2ss xmm2, xmm2, r8d
0000000140242E64  vldmxcsr [rsp+68h+var_28]
0000000140242E6A  vucomiss xmm2, xmm1
0000000140242E6E  cmovnz  ecx, eax
0000000140242E71  jnz     short Lpowf_fma3_or_sign_and_retvalue_and_ret
0000000140242E73  rcr     r8d, 1
0000000140242E76  cmovnb  ecx, eax
0000000140242E79  or      ecx, edx
0000000140242E7B  vmovd   xmm0, ecx
0000000140242E7F  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242E85  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242E8B  add     rsp, 68h
0000000140242E8F  retn
0000000140242E90  ja      short Lpowf_fma3_y_is_nan
0000000140242E92  cmp     ecx, 7F800000h
0000000140242E98  ja      Lpowf_fma3_return_x_nan
0000000140242E9E  cmp     ecx, 3F800000h
0000000140242EA4  jz      Lpowf_fma3_return_abs_x_is_one_y_is_pninf
0000000140242EAA  vmovd   eax, xmm1
0000000140242EAE  bt      eax, 1Fh
0000000140242EB2  jb      short Lpowf_fma3_y_is_neg_inf
0000000140242EB4  cmp     ecx, 3F800000h
0000000140242EBA  jb      Lpowf_fma3_return_pos_zero
0000000140242EC0  jmp     Lpowf_fma3_return_pos_inf
0000000140242ED0  mov     eax, 0
0000000140242ED5  mov     r8d, 7F800000h
0000000140242EDB  cmp     ecx, 3F800000h
0000000140242EE1  cmovb   eax, r8d
0000000140242EE5  vmovd   xmm0, eax
0000000140242EE9  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242EEF  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242EF5  add     rsp, 68h
0000000140242EF9  retn
0000000140242F00  cmp     ecx, 7F800000h
0000000140242F06  ja      Lpowf_fma3_x_is_nan_y_is_nan
0000000140242F0C  cmp     r9d, 3F800000h
0000000140242F13  jz      Lpowf_fma3_x_is_one_y_is_nan
0000000140242F19  vmovdqa xmm0, xmm1
0000000140242F1D  jmp     Lpowf_fma3_return_y_nan
0000000140242F30  cmp     eax, 0
0000000140242F33  jz      short Lpowf_fma3_y_is_zero_check_x_nan
0000000140242F35  vmovd   edx, xmm1
0000000140242F39  cmp     edx, 3F800000h
0000000140242F3F  jnz     Lpowf_fma3_y_is_not_zero_or_pos_one
0000000140242F45  cmp     ecx, 7F800000h
0000000140242F4B  ja      short Lpowf_fma3_x_is_NaN_y_is_one_return_NaN
0000000140242F4D  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242F53  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242F59  add     rsp, 68h
0000000140242F5D  retn
0000000140242F5E  vmovd   edx, xmm0
0000000140242F62  or      edx, 400000h
0000000140242F68  vmovd   xmm2, edx
0000000140242F6C  mov     r9d, cs:dword_140288D88
0000000140242F73  call    _powf_special
0000000140242F78  movdqa  xmm7, [rsp+68h+var_38]
0000000140242F7E  movdqa  xmm6, [rsp+68h+var_48]
0000000140242F84  add     rsp, 68h
0000000140242F88  retn
0000000140242F90  cmp     ecx, 7F800000h
0000000140242F96  jbe     short Lpowf_fma3_return_pos_one
0000000140242F98  cmp     ecx, 7FC00000h
0000000140242F9E  jnb     short Lpowf_fma3_return_pos_one
0000000140242FA0  mov     edx, ecx
0000000140242FA2  or      edx, 400000h
0000000140242FA8  vmovd   xmm2, edx
0000000140242FAC  mov     r9d, cs:dword_140288D88
0000000140242FB3  call    _powf_special
0000000140242FB8  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242FBE  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242FC4  add     rsp, 68h
0000000140242FC8  retn
0000000140242FD0  cmp     eax, 7FC00000h
0000000140242FD5  jnb     short Lpowf_fma3_return_pos_one
0000000140242FD7  mov     edx, 3F800000h
0000000140242FDC  vmovd   xmm2, edx
0000000140242FE0  mov     r9d, cs:dword_140288D8C
0000000140242FE7  call    _powf_special
0000000140242FEC  vmovdqa xmm7, [rsp+68h+var_38]
0000000140242FF2  vmovdqa xmm6, [rsp+68h+var_48]
0000000140242FF8  add     rsp, 68h
0000000140242FFC  retn
0000000140243000  mov     edx, 3F800000h
0000000140243005  vmovd   xmm0, edx
0000000140243009  vmovdqa xmm7, [rsp+68h+var_38]
000000014024300F  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243015  add     rsp, 68h
0000000140243019  retn
0000000140243020  mov     edx, 3F800000h
0000000140243025  vmovd   xmm0, edx
0000000140243029  vmovdqa xmm7, [rsp+68h+var_38]
000000014024302F  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243035  add     rsp, 68h
0000000140243039  retn
0000000140243040  vpxor   xmm0, xmm0, xmm0
0000000140243044  vmovdqa xmm7, [rsp+68h+var_38]
000000014024304A  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243050  add     rsp, 68h
0000000140243054  retn
0000000140243060  mov     edx, 7F800000h
0000000140243065  vmovd   xmm0, edx
0000000140243069  vmovdqa xmm7, [rsp+68h+var_38]
000000014024306F  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243075  add     rsp, 68h
0000000140243079  retn
0000000140243080  vaddss  xmm0, xmm0, xmm0
0000000140243084  vmovdqa xmm7, [rsp+68h+var_38]
000000014024308A  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243090  add     rsp, 68h
0000000140243094  retn
00000001402430A0  vmovd   ecx, xmm0
00000001402430A4  or      ecx, 400000h
00000001402430AA  vmovd   xmm2, ecx
00000001402430AE  mov     r9d, cs:dword_140288D88
00000001402430B5  call    _powf_special
00000001402430BA  vmovdqa xmm7, [rsp+68h+var_38]
00000001402430C0  vmovdqa xmm6, [rsp+68h+var_48]
00000001402430C6  add     rsp, 68h
00000001402430CA  retn
00000001402430D0  vmovd   eax, xmm1
00000001402430D4  or      eax, 400000h
00000001402430D9  vmovd   xmm2, eax
00000001402430DD  mov     r9d, cs:dword_140288D8C
00000001402430E4  call    _powf_special
00000001402430E9  vmovdqa xmm7, [rsp+68h+var_38]
00000001402430EF  vmovdqa xmm6, [rsp+68h+var_48]
00000001402430F5  add     rsp, 68h
00000001402430F9  retn
0000000140243100  cmp     r9d, 0FFC00000h
0000000140243107  jz      short Lpowf_fma3_x_is_nan_y_is_nan_return_y
0000000140243109  vmovd   ecx, xmm0
000000014024310D  or      ecx, 400000h
0000000140243113  vmovd   xmm2, ecx
0000000140243117  mov     r9d, cs:dword_140288D90
000000014024311E  call    _powf_special
0000000140243123  vmovdqa xmm7, [rsp+68h+var_38]
0000000140243129  vmovdqa xmm6, [rsp+68h+var_48]
000000014024312F  add     rsp, 68h
0000000140243133  retn
0000000140243134  vmovd   eax, xmm1
0000000140243138  or      eax, 400000h
000000014024313D  vmovd   xmm2, eax
0000000140243141  mov     r9d, cs:dword_140288D90
0000000140243148  call    _powf_special
000000014024314D  vmovdqa xmm7, [rsp+68h+var_38]
0000000140243153  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243159  add     rsp, 68h
000000014024315D  retn
0000000140243160  vpxor   xmm2, xmm2, xmm2
0000000140243164  vorps   xmm2, xmm2, xmm5
0000000140243168  mov     r9d, cs:dword_140288D98
000000014024316F  call    _powf_special
0000000140243174  vmovdqa xmm7, [rsp+68h+var_38]
000000014024317A  vmovdqa xmm6, [rsp+68h+var_48]
0000000140243180  add     rsp, 68h
0000000140243184  retn
0000000140243190  mov     edx, 7F800000h
0000000140243195  vmovd   xmm2, edx
0000000140243199  vorps   xmm2, xmm2, xmm5
000000014024319D  mov     r9d, cs:dword_140288DA0
00000001402431A4  call    _powf_special
00000001402431A9  vmovdqa xmm7, [rsp+68h+var_38]
00000001402431AF  vmovdqa xmm6, [rsp+68h+var_48]
00000001402431B5  add     rsp, 68h
00000001402431B9  retn
00000001402431C0  mov     edx, 0FFC00000h
00000001402431C5  vmovd   xmm2, edx
00000001402431C9  mov     r9d, cs:dword_140288D94
00000001402431D0  call    _powf_special
00000001402431D5  vmovdqa xmm7, [rsp+68h+var_38]
00000001402431DB  vmovdqa xmm6, [rsp+68h+var_48]
00000001402431E1  add     rsp, 68h
00000001402431E5  retn
