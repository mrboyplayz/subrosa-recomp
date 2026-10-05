; 0x140031530: sub_140031530
; Decompilation failed: function frame is wrong
0000000140031530  push    rbp
0000000140031532  push    rbx
0000000140031533  push    rsi
0000000140031534  push    rdi
0000000140031535  push    r12
0000000140031537  push    r13
0000000140031539  push    r14
000000014003153B  push    r15
000000014003153D  lea     rbp, [rsp-1948h]
0000000140031545  mov     eax, 1A48h
000000014003154A  call    sub_1401F89D0
000000014003154F  sub     rsp, rax
0000000140031552  movaps  xmmword ptr [rsp+1A30h], xmm6
000000014003155A  movaps  xmmword ptr [rsp+1A20h], xmm7
0000000140031562  movaps  xmmword ptr [rsp+1A10h], xmm8
000000014003156B  movaps  xmmword ptr [rsp+1A00h], xmm9
0000000140031574  movaps  xmmword ptr [rsp+19F0h], xmm10
000000014003157D  movaps  xmmword ptr [rsp+19E0h], xmm11
0000000140031586  movaps  xmmword ptr [rsp+19D0h], xmm12
000000014003158F  movaps  xmmword ptr [rsp+19C0h], xmm13
0000000140031598  movaps  xmmword ptr [rsp+19B0h], xmm14
00000001400315A1  movaps  xmmword ptr [rsp+19A0h], xmm15
00000001400315AA  mov     rax, cs:__security_cookie
00000001400315B1  xor     rax, rsp
00000001400315B4  mov     [rbp+1890h], rax
00000001400315BB  movss   xmm12, dword ptr [rbp+19C0h]
00000001400315C4  lea     r11, cs:140000000h
00000001400315CB  movsxd  rax, r9d
00000001400315CE  mov     r13, r8
00000001400315D1  imul    r15, rax, 100D70h
00000001400315D8  mov     dword ptr [r8], 47800000h
00000001400315DF  mov     r10, rax
00000001400315E2  mov     [rbp-68h], rcx
00000001400315E6  mov     rcx, [rbp+19B0h]
00000001400315ED  mov     [rsp+54h], eax
00000001400315F1  movss   xmm1, dword ptr [r15+r11+1ADA9290h]
00000001400315FB  mov     [rbp-60h], rax
00000001400315FF  movss   xmm4, dword ptr [rcx]
0000000140031603  mov     rax, [rbp+19B8h]
000000014003160A  movaps  xmm0, xmm4
000000014003160D  addss   xmm0, xmm12
0000000140031612  mov     [rbp-40h], rdx
0000000140031616  mov     [rbp+18h], r15
000000014003161A  comiss  xmm0, xmm1
000000014003161D  jnb     short loc_140031630
000000014003161F  movaps  xmm0, xmm12
0000000140031623  addss   xmm0, dword ptr [rax]
0000000140031627  comiss  xmm0, xmm1
000000014003162A  jb      loc_140032D93
0000000140031630  movss   xmm3, dword ptr [rcx+4]
0000000140031635  movss   xmm1, dword ptr [r15+r11+1ADA9294h]
000000014003163F  movaps  xmm0, xmm3
0000000140031642  addss   xmm0, xmm12
0000000140031647  comiss  xmm0, xmm1
000000014003164A  jnb     short loc_14003165E
000000014003164C  movaps  xmm0, xmm12
0000000140031650  addss   xmm0, dword ptr [rax+4]
0000000140031655  comiss  xmm0, xmm1
0000000140031658  jb      loc_140032D93
000000014003165E  movss   xmm2, dword ptr [rcx+8]
0000000140031663  movss   xmm1, dword ptr [r15+r11+1ADA9298h]
000000014003166D  movaps  xmm0, xmm2
0000000140031670  addss   xmm0, xmm12
0000000140031675  comiss  xmm0, xmm1
0000000140031678  jnb     short loc_14003168C
000000014003167A  movaps  xmm0, xmm12
000000014003167E  addss   xmm0, dword ptr [rax+8]
0000000140031683  comiss  xmm0, xmm1
0000000140031686  jb      loc_140032D93
000000014003168C  movss   xmm1, dword ptr [r15+r11+1ADA929Ch]
0000000140031696  movaps  xmm0, xmm4
0000000140031699  subss   xmm0, xmm12
000000014003169E  comiss  xmm0, xmm1
00000001400316A1  jbe     short loc_1400316B5
00000001400316A3  movss   xmm0, dword ptr [rax]
00000001400316A7  subss   xmm0, xmm12
00000001400316AC  comiss  xmm0, xmm1
00000001400316AF  ja      loc_140032D93
00000001400316B5  movss   xmm1, dword ptr [r15+r11+1ADA92A0h]
00000001400316BF  movaps  xmm0, xmm3
00000001400316C2  subss   xmm0, xmm12
00000001400316C7  comiss  xmm0, xmm1
00000001400316CA  jbe     short loc_1400316DF
00000001400316CC  movss   xmm0, dword ptr [rax+4]
00000001400316D1  subss   xmm0, xmm12
00000001400316D6  comiss  xmm0, xmm1
00000001400316D9  ja      loc_140032D93
00000001400316DF  movss   xmm1, dword ptr [r15+r11+1ADA92A4h]
00000001400316E9  movaps  xmm0, xmm2
00000001400316EC  subss   xmm0, xmm12
00000001400316F1  comiss  xmm0, xmm1
00000001400316F4  jbe     short loc_140031709
00000001400316F6  movss   xmm0, dword ptr [rax+8]
00000001400316FB  subss   xmm0, xmm12
0000000140031700  comiss  xmm0, xmm1
0000000140031703  ja      loc_140032D93
0000000140031709  movss   xmm8, dword ptr [r15+r11+1ADA9244h]
0000000140031713  movss   xmm7, dword ptr [r15+r11+1ADA9250h]
000000014003171D  subss   xmm4, xmm8
0000000140031722  movss   xmm5, dword ptr [r15+r11+1ADA925Ch]
000000014003172C  movaps  xmm0, xmm7
000000014003172F  movss   xmm9, dword ptr [r15+r11+1ADA9248h]
0000000140031739  movss   xmm10, dword ptr [r15+r11+1ADA924Ch]
0000000140031743  subss   xmm3, xmm9
0000000140031748  movss   xmm11, dword ptr [r15+r11+1ADA9258h]
0000000140031752  subss   xmm2, xmm10
0000000140031757  movss   xmm6, dword ptr [r15+r11+1ADA9264h]
0000000140031761  movaps  xmm1, xmm11
0000000140031765  movss   xmm15, dword ptr [r15+r11+1ADA9254h]
000000014003176F  movss   xmm14, dword ptr [r15+r11+1ADA9260h]
0000000140031779  movss   xmm13, dword ptr [r15+r11+1ADA926Ch]
0000000140031783  mulss   xmm1, xmm2
0000000140031787  mulss   xmm0, xmm4
000000014003178B  mulss   xmm15, xmm3
0000000140031790  mulss   xmm14, xmm3
0000000140031795  addss   xmm15, xmm0
000000014003179A  movss   dword ptr [rbp-48h], xmm3
000000014003179F  movss   xmm3, dword ptr [r15+r11+1ADA9268h]
00000001400317A9  movaps  xmm0, xmm5
00000001400317AC  mulss   xmm13, dword ptr [rbp-48h]
00000001400317B2  mulss   xmm0, xmm4
00000001400317B6  addss   xmm15, xmm1
00000001400317BB  movss   dword ptr [rbp-70h], xmm4
00000001400317C0  movss   xmm4, dword ptr [r15+r11+1ADA9270h]
00000001400317CA  movaps  xmm1, xmm6
00000001400317CD  mulss   xmm1, xmm2
00000001400317D1  addss   xmm14, xmm0
00000001400317D6  movaps  xmm0, xmm3
00000001400317D9  mulss   xmm0, dword ptr [rbp-70h]
00000001400317DE  addss   xmm14, xmm1
00000001400317E3  movss   dword ptr [rbp+58h], xmm15
00000001400317E9  movaps  xmm1, xmm4
00000001400317EC  mulss   xmm1, xmm2
00000001400317F0  addss   xmm13, xmm0
00000001400317F5  movss   xmm2, dword ptr [rax]
00000001400317F9  movss   xmm0, dword ptr [rax+4]
00000001400317FE  subss   xmm2, xmm8
0000000140031803  movss   xmm8, dword ptr [r15+r11+1ADA9254h]
000000014003180D  subss   xmm0, xmm9
0000000140031812  addss   xmm13, xmm1
0000000140031817  movss   dword ptr [rbp+5Ch], xmm14
000000014003181D  movss   xmm1, dword ptr [rax+8]
0000000140031822  subss   xmm1, xmm10
0000000140031827  mulss   xmm7, xmm2
000000014003182B  mulss   xmm5, xmm2
000000014003182F  mulss   xmm8, xmm0
0000000140031834  mulss   xmm3, xmm2
0000000140031838  addss   xmm8, xmm7
000000014003183D  mulss   xmm11, xmm1
0000000140031842  movss   xmm7, dword ptr [r15+r11+1ADA9260h]
000000014003184C  mulss   xmm7, xmm0
0000000140031850  addss   xmm8, xmm11
0000000140031855  mulss   xmm6, xmm1
0000000140031859  addss   xmm7, xmm5
000000014003185D  mulss   xmm4, xmm1
0000000140031861  movss   xmm5, dword ptr [r15+r11+1ADA926Ch]
000000014003186B  comiss  xmm15, xmm8
000000014003186F  mulss   xmm5, xmm0
0000000140031873  addss   xmm7, xmm6
0000000140031877  movss   dword ptr [rbp-58h], xmm2
000000014003187C  movss   xmm2, dword ptr [r15+r11+1ADA9284h]
0000000140031886  addss   xmm5, xmm3
000000014003188A  movss   dword ptr [rbp+60h], xmm13
0000000140031890  movss   dword ptr [rbp-54h], xmm0
0000000140031895  movss   dword ptr [rbp-50h], xmm1
000000014003189A  movss   dword ptr [rbp+48h], xmm8
00000001400318A0  movss   dword ptr [rbp+4Ch], xmm7
00000001400318A5  addss   xmm5, xmm4
00000001400318A9  movss   dword ptr [rbp+50h], xmm5
00000001400318AE  jnb     short loc_1400318B6
00000001400318B0  movaps  xmm0, xmm15
00000001400318B4  jmp     short loc_1400318BA
00000001400318B6  movaps  xmm0, xmm8
00000001400318BA  comiss  xmm14, xmm7
00000001400318BE  maxss   xmm15, xmm8
00000001400318C3  subss   xmm0, xmm12
00000001400318C8  addss   xmm15, xmm12
00000001400318CD  mulss   xmm0, xmm2
00000001400318D1  mulss   xmm15, xmm2
00000001400318D6  cvttss2si eax, xmm0
00000001400318DA  cvttss2si esi, xmm15
00000001400318DF  mov     [rbp-48h], eax
00000001400318E2  mov     [rsp+7Ch], esi
00000001400318E6  jnb     short loc_1400318EE
00000001400318E8  movaps  xmm1, xmm14
00000001400318EC  jmp     short loc_1400318F1
00000001400318EE  movaps  xmm1, xmm7
00000001400318F1  comiss  xmm13, xmm5
00000001400318F5  maxss   xmm14, xmm7
00000001400318FA  movaps  xmm0, xmm2
00000001400318FD  subss   xmm1, xmm12
0000000140031902  addss   xmm14, xmm12
0000000140031907  mulss   xmm0, xmm1
000000014003190B  mulss   xmm14, xmm2
0000000140031910  cvttss2si r14d, xmm0
0000000140031915  cvttss2si r8d, xmm14
000000014003191A  mov     [rbp-70h], r14d
000000014003191E  mov     [rbp+0], r8d
0000000140031922  jnb     short loc_14003192A
0000000140031924  movaps  xmm1, xmm13
0000000140031928  jmp     short loc_14003192D
000000014003192A  movaps  xmm1, xmm5
000000014003192D  mov     [rbp-34h], r14d
0000000140031931  maxss   xmm13, xmm5
0000000140031936  subss   xmm1, xmm12
000000014003193B  movaps  xmm0, xmm2
000000014003193E  addss   xmm13, xmm12
0000000140031943  mulss   xmm0, xmm1
0000000140031947  mulss   xmm13, xmm2
000000014003194C  cvttss2si edx, xmm0
0000000140031950  cvttss2si ecx, xmm13
0000000140031955  mov     [rbp-4], edx
0000000140031958  mov     [rbp-8], ecx
000000014003195B  cmp     r14d, r8d
000000014003195E  jg      loc_140032D93
0000000140031964  movss   xmm6, cs:dword_140278338
000000014003196C  movss   xmm9, cs:dword_1402784B0
0000000140031975  movss   xmm7, cs:dword_140278654
000000014003197D  movss   xmm8, cs:dword_1402786B8
0000000140031986  mov     [rbp-34h], r14d
000000014003198A  nop     word ptr [rax+rax+00h]
0000000140031990  mov     [rbp-30h], edx
0000000140031993  mov     esi, edx
0000000140031995  cmp     edx, ecx
0000000140031997  jg      loc_140032D6C
000000014003199D  mov     r9d, [rsp+7Ch]
00000001400319A2  nop     dword ptr [rax+00h]
00000001400319A6  nop     word ptr [rax+rax+00000000h]
00000001400319B0  mov     [rbp-38h], eax
00000001400319B3  mov     r12d, eax
00000001400319B6  cmp     eax, r9d
00000001400319B9  jg      loc_140032D58
00000001400319BF  nop
00000001400319C0  test    r12d, r12d
00000001400319C3  js      loc_140032D39
00000001400319C9  mov     r8d, [r15+r11+1ADA9274h]
00000001400319D1  mov     eax, r8d
00000001400319D4  shl     eax, 6
00000001400319D7  cmp     r12d, eax
00000001400319DA  jge     loc_140032D39
00000001400319E0  test    r14d, r14d
00000001400319E3  js      loc_140032D39
00000001400319E9  mov     eax, [r15+r11+1ADA9278h]
00000001400319F1  shl     eax, 6
00000001400319F4  cmp     r14d, eax
00000001400319F7  jge     loc_140032D39
00000001400319FD  test    esi, esi
00000001400319FF  js      loc_140032D39
0000000140031A05  mov     edx, [r15+r11+1ADA927Ch]
0000000140031A0D  mov     eax, edx
0000000140031A0F  shl     eax, 6
0000000140031A12  cmp     esi, eax
0000000140031A14  jge     loc_140032D39
0000000140031A1A  mov     ecx, r14d
0000000140031A1D  mov     eax, esi
0000000140031A1F  sar     ecx, 6
0000000140031A22  imul    ecx, edx
0000000140031A25  sar     eax, 6
0000000140031A28  add     ecx, eax
0000000140031A2A  mov     eax, r12d
0000000140031A2D  imul    ecx, r8d
0000000140031A31  sar     eax, 6
0000000140031A34  add     ecx, eax
0000000140031A36  mov     rax, [r15+r11+1ADA9288h]
0000000140031A3E  movsxd  rcx, ecx
0000000140031A41  movsxd  r8, dword ptr [rax+rcx*4]
0000000140031A45  cmp     r8d, 0FFFFFFFFh
0000000140031A49  jz      loc_140032D39
0000000140031A4F  mov     ecx, r14d
0000000140031A52  mov     eax, esi
0000000140031A54  sar     eax, 3
0000000140031A57  and     eax, 7
0000000140031A5A  sar     ecx, 3
0000000140031A5D  and     ecx, 7
0000000140031A60  lea     ecx, [rax+rcx*8]
0000000140031A63  mov     eax, r12d
0000000140031A66  sar     eax, 3
0000000140031A69  and     eax, 7
0000000140031A6C  lea     eax, [rax+rcx*8]
0000000140031A6F  imul    rcx, r8, 201h
0000000140031A76  movsxd  rdx, eax
0000000140031A79  imul    rax, r10, 4035Ch
0000000140031A80  add     rdx, rcx
0000000140031A83  add     rdx, rax
0000000140031A86  movsxd  r8, (rva dword_140404A6C+1A9A4D44h)[r11+rdx*4]
0000000140031A8E  cmp     r8d, 0FFFFFFFFh
0000000140031A92  jz      loc_140032D39
0000000140031A98  mov     ecx, r14d
0000000140031A9B  mov     eax, esi
0000000140031A9D  and     eax, 7
0000000140031AA0  and     ecx, 7
0000000140031AA3  lea     ecx, [rax+rcx*8]
0000000140031AA6  mov     eax, r12d
0000000140031AA9  and     eax, 7
0000000140031AAC  lea     ebx, [rax+rcx*8]
0000000140031AAF  imul    rcx, r8, 1B12h
0000000140031AB6  add     rbx, rcx
0000000140031AB9  mov     [rbp-20h], rbx
0000000140031ABD  mov     eax, (rva dword_140404A6C+13D617DCh)[r11+rbx*4]
0000000140031AC5  test    eax, eax
0000000140031AC7  jz      loc_140031DED
0000000140031ACD  movss   xmm0, dword ptr [r15+r11+1ADA9280h]
0000000140031AD7  mov     ecx, eax
0000000140031AD9  and     eax, 3FFh
0000000140031ADE  movd    xmm10, r14d
0000000140031AE3  imul    rdi, rax, 0ED0h
0000000140031AEA  movd    xmm8, r12d
0000000140031AEF  cvtdq2ps xmm8, xmm8
0000000140031AF3  shr     ecx, 18h
0000000140031AF6  xor     r14d, r14d
0000000140031AF9  and     ecx, 3
0000000140031AFC  mov     [rbp-80h], eax
0000000140031AFF  movd    xmm9, esi
0000000140031B04  cvtdq2ps xmm9, xmm9
0000000140031B08  mov     [rsp+78h], ecx
0000000140031B0C  mov     [rbp-78h], rdi
0000000140031B10  addss   xmm8, xmm6
0000000140031B15  addss   xmm9, xmm6
0000000140031B1A  cvtdq2ps xmm10, xmm10
0000000140031B1E  mulss   xmm8, xmm0
0000000140031B23  mulss   xmm10, xmm0
0000000140031B28  mulss   xmm9, xmm0
0000000140031B2D  cmp     [rdi+r11+412C20CCh], r14d
0000000140031B35  jle     loc_140031DD7
0000000140031B3B  mov     rsi, [rbp-78h]
0000000140031B3F  lea     edi, [r14+1]
0000000140031B43  mov     r15d, [rbp-30h]
0000000140031B47  mov     rax, [rbp-78h]
0000000140031B4B  lea     rsi, [rsi+412C2134h]
0000000140031B52  add     rsi, r11
0000000140031B55  nop     word ptr [rax+rax+00000000h]
0000000140031B60  test    (rva dword_140404A6C+13D61FDCh)[r11+rbx*4], edi
0000000140031B68  jnz     loc_140031DA9
0000000140031B6E  movaps  xmm0, cs:xmmword_140278D30
0000000140031B75  lea     rdx, dword_1402F6188
0000000140031B7C  movsxd  rbx, dword ptr [rsi-24h]
0000000140031B80  movaps  xmm1, xmm0
0000000140031B83  movups  xmmword ptr [rbp+68h], xmm0
0000000140031B87  mov     dword ptr [rbp+88h], 3F800000h
0000000140031B91  movups  xmmword ptr [rbp+78h], xmm0
0000000140031B95  movd    xmm0, ecx
0000000140031B99  lea     rcx, [rbp+68h]
0000000140031B9D  cvtdq2ps xmm0, xmm0
0000000140031BA0  cvtps2pd xmm1, xmm0
0000000140031BA3  mulsd   xmm1, cs:qword_1402785A0
0000000140031BAB  cvtpd2ps xmm7, xmm1
0000000140031BAF  movaps  xmm2, xmm7
0000000140031BB2  call    sub_14007B2A0
0000000140031BB7  movss   xmm6, dword ptr [rsi-20h]
0000000140031BBC  lea     rdx, dword_1402F6188
0000000140031BC3  movss   xmm4, dword ptr [rsi-1Ch]
0000000140031BC8  lea     rcx, [rbp+68h]
0000000140031BCC  movss   xmm5, dword ptr [rsi-18h]
0000000140031BD1  movaps  xmm2, xmm6
0000000140031BD4  mulss   xmm2, dword ptr [rbp+68h]
0000000140031BD9  movaps  xmm3, xmm6
0000000140031BDC  mulss   xmm3, dword ptr [rbp+6Ch]
0000000140031BE1  movaps  xmm0, xmm4
0000000140031BE4  mulss   xmm0, dword ptr [rbp+74h]
0000000140031BE9  addss   xmm2, xmm8
0000000140031BEE  mulss   xmm6, dword ptr [rbp+70h]
0000000140031BF3  movaps  xmm1, xmm5
0000000140031BF6  mulss   xmm1, dword ptr [rbp+80h]
0000000140031BFE  addss   xmm3, xmm10
0000000140031C03  addss   xmm2, xmm0
0000000140031C07  movaps  xmm0, xmm4
0000000140031C0A  mulss   xmm0, dword ptr [rbp+78h]
0000000140031C0F  addss   xmm6, xmm9
0000000140031C14  mulss   xmm4, dword ptr [rbp+7Ch]
0000000140031C19  addss   xmm2, xmm1
0000000140031C1D  movaps  xmm1, xmm5
0000000140031C20  mulss   xmm1, dword ptr [rbp+84h]
0000000140031C28  addss   xmm3, xmm0
0000000140031C2C  movups  xmm0, xmmword ptr [rsi-14h]
0000000140031C30  mulss   xmm5, dword ptr [rbp+88h]
0000000140031C38  addss   xmm6, xmm4
0000000140031C3C  movups  xmmword ptr [rbp+68h], xmm0
0000000140031C40  movups  xmm0, xmmword ptr [rsi-4]
0000000140031C44  addss   xmm3, xmm1
0000000140031C48  movss   dword ptr [rbp+8], xmm2
0000000140031C4D  addss   xmm6, xmm5
0000000140031C51  movaps  xmm2, xmm7
0000000140031C54  movups  xmmword ptr [rbp+78h], xmm0
0000000140031C58  movss   xmm0, dword ptr [rsi+0Ch]
0000000140031C5D  movss   dword ptr [rbp+88h], xmm0
0000000140031C65  movss   dword ptr [rbp+0Ch], xmm3
0000000140031C6A  movss   dword ptr [rbp+10h], xmm6
0000000140031C6F  call    sub_14007B2A0
0000000140031C74  imul    rcx, rbx, 13D0h
0000000140031C7B  lea     r11, cs:140000000h
0000000140031C82  cmp     qword ptr [rcx+r11+42A7F090h], 0
0000000140031C8B  jz      loc_140031D9D
0000000140031C91  lea     rbx, (rva dword_140404A6C+4267A61Ch)[r11]
0000000140031C98  add     rbx, rcx
0000000140031C9B  lea     r9, [rbp+68h]
0000000140031C9F  mov     rdx, rbx
0000000140031CA2  lea     r8, [rbp+8]
0000000140031CA6  lea     rcx, [rbp+90h]
0000000140031CAD  call    sub_14011BF40
0000000140031CB2  lea     rax, [rbp+48h]
0000000140031CB6  movss   dword ptr [rsp+28h], xmm12
0000000140031CBD  lea     r9, [rbp+58h]
0000000140031CC1  mov     [rsp+20h], rax
0000000140031CC6  lea     r8, [rbp+90h]
0000000140031CCD  mov     rdx, rbx
0000000140031CD0  lea     rcx, [rbp+20h]
0000000140031CD4  call    sub_140033BE0
0000000140031CD9  mov     ecx, [rsp+78h]
0000000140031CDD  lea     r11, cs:140000000h
0000000140031CE4  mov     rbx, [rbp-20h]
0000000140031CE8  test    eax, eax
0000000140031CEA  jz      loc_140031DA5
0000000140031CF0  movss   xmm2, dword ptr [rbp+3Ch]
0000000140031CF5  comiss  xmm2, dword ptr [r13+0]
0000000140031CFA  jnb     loc_140031DA5
0000000140031D00  mov     r8, [rbp-68h]
0000000140031D04  movss   xmm0, dword ptr [rbp+20h]
0000000140031D09  movss   xmm1, dword ptr [rbp+24h]
0000000140031D0E  mov     eax, [rbp-70h]
0000000140031D11  mov     r10d, [rsp+54h]
0000000140031D16  movss   dword ptr [r8], xmm0
0000000140031D1B  movss   xmm0, dword ptr [rbp+28h]
0000000140031D20  movss   dword ptr [r8+4], xmm1
0000000140031D26  movss   xmm1, dword ptr [rbp+2Ch]
0000000140031D2B  movss   dword ptr [r8+8], xmm0
0000000140031D31  mov     r8, [rbp-40h]
0000000140031D35  movss   xmm0, dword ptr [rbp+30h]
0000000140031D3A  movss   dword ptr [r8], xmm1
0000000140031D3F  movss   xmm1, dword ptr [rbp+34h]
0000000140031D44  movss   dword ptr [r8+8], xmm1
0000000140031D4A  movss   dword ptr [r8+4], xmm0
0000000140031D50  mov     cs:dword_140404A6C+1167FE70h, eax
0000000140031D56  mov     eax, [rbp-80h]
0000000140031D59  mov     cs:dword_140404A6C+1167FE94h, eax
0000000140031D5F  mov     cs:dword_140404A6C+1167FE84h, 0
0000000140031D69  mov     cs:dword_140404A6C+1167FE68h, r10d
0000000140031D70  mov     cs:dword_140404A6C+1167FE6Ch, r12d
0000000140031D77  mov     cs:dword_140404A6C+1167FE74h, r15d
0000000140031D7E  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
0000000140031D88  mov     cs:dword_140404A6C+1167FE98h, ecx
0000000140031D8E  mov     cs:dword_140404A6C+1167FE9Ch, r14d
0000000140031D95  movss   dword ptr [r13+0], xmm2
0000000140031D9B  jmp     short loc_140031DA5
0000000140031D9D  mov     ecx, [rsp+78h]
0000000140031DA1  mov     rbx, [rbp-20h]
0000000140031DA5  mov     rax, [rbp-78h]
0000000140031DA9  inc     r14d
0000000140031DAC  rol     edi, 1
0000000140031DAE  add     rsi, 74h ; 't'
0000000140031DB2  cmp     r14d, [rax+r11+412C20CCh]
0000000140031DBA  jl      loc_140031B60
0000000140031DC0  movss   xmm6, cs:dword_140278338
0000000140031DC8  movss   xmm7, cs:dword_140278654
0000000140031DD0  mov     r15, [rbp+18h]
0000000140031DD4  mov     esi, [rbp-30h]
0000000140031DD7  mov     r14d, [rbp-70h]
0000000140031DDB  movss   xmm9, cs:dword_1402784B0
0000000140031DE4  movss   xmm8, cs:dword_1402786B8
0000000140031DED  mov     edi, (rva dword_140404A6C+13D60FDCh)[r11+rbx*4]
0000000140031DF5  mov     edx, edi
0000000140031DF7  mov     ebx, edi
0000000140031DF9  test    edi, edi
0000000140031DFB  jle     loc_140031F97
0000000140031E01  and     edi, 7Fh
0000000140031E04  and     edx, 0C00h
0000000140031E0A  mov     eax, edi
0000000140031E0C  imul    rcx, rax, 2418h
0000000140031E13  lea     rax, dword_140404A6C+671FC120h
0000000140031E1A  movss   xmm0, dword ptr [rcx+rax]
0000000140031E1F  movss   xmm1, dword ptr [rcx+rax+4]
0000000140031E25  movss   dword ptr [rbp-58h], xmm0
0000000140031E2A  movss   xmm0, dword ptr [rcx+rax+8]
0000000140031E30  movss   dword ptr [rbp-50h], xmm0
0000000140031E35  movss   dword ptr [rbp-54h], xmm1
0000000140031E3A  cmp     edx, 400h
0000000140031E40  jnz     short loc_140031E5E
0000000140031E42  movaps  xmm2, xmm9
0000000140031E46  lea     rdx, dword_1402F6188
0000000140031E4D  lea     rcx, [rbp-58h]
0000000140031E51  call    sub_14007B4D0
0000000140031E56  and     ebx, 0C00h
0000000140031E5C  jmp     short loc_140031E8D
0000000140031E5E  and     ebx, 0C00h
0000000140031E64  cmp     ebx, 800h
0000000140031E6A  jnz     short loc_140031E71
0000000140031E6C  movaps  xmm2, xmm7
0000000140031E6F  jmp     short loc_140031E7D
0000000140031E71  cmp     ebx, 0C00h
0000000140031E77  jnz     short loc_140031E94
0000000140031E79  movaps  xmm2, xmm8
0000000140031E7D  lea     rdx, dword_1402F6188
0000000140031E84  lea     rcx, [rbp-58h]
0000000140031E88  call    sub_14007B4D0
0000000140031E8D  lea     r11, cs:140000000h
0000000140031E94  movss   xmm2, dword ptr [r15+r11+1ADA9280h]
0000000140031E9E  movss   xmm0, dword ptr [rbp-58h]
0000000140031EA3  movd    xmm1, r12d
0000000140031EA8  mov     dword ptr [rbp+88h], 3F800000h
0000000140031EB2  cvtdq2ps xmm1, xmm1
0000000140031EB5  addss   xmm1, xmm6
0000000140031EB9  mulss   xmm1, xmm2
0000000140031EBD  addss   xmm0, xmm1
0000000140031EC1  movd    xmm1, r14d
0000000140031EC6  cvtdq2ps xmm1, xmm1
0000000140031EC9  movss   dword ptr [rbp-58h], xmm0
0000000140031ECE  movss   xmm0, dword ptr [rbp-54h]
0000000140031ED3  mulss   xmm1, xmm2
0000000140031ED7  addss   xmm0, xmm1
0000000140031EDB  movd    xmm1, esi
0000000140031EDF  cvtdq2ps xmm1, xmm1
0000000140031EE2  movss   dword ptr [rbp-54h], xmm0
0000000140031EE7  movss   xmm0, dword ptr [rbp-50h]
0000000140031EEC  addss   xmm1, xmm6
0000000140031EF0  mulss   xmm1, xmm2
0000000140031EF4  addss   xmm0, xmm1
0000000140031EF8  movss   dword ptr [rbp-50h], xmm0
0000000140031EFD  movaps  xmm0, cs:xmmword_140278D30
0000000140031F04  movaps  xmm1, xmm0
0000000140031F07  movups  xmmword ptr [rbp+68h], xmm0
0000000140031F0B  movups  xmmword ptr [rbp+78h], xmm0
0000000140031F0F  cmp     ebx, 400h
0000000140031F15  jnz     short loc_140031F1D
0000000140031F17  movaps  xmm2, xmm9
0000000140031F1B  jmp     short loc_140031F36
0000000140031F1D  cmp     ebx, 800h
0000000140031F23  jnz     short loc_140031F2A
0000000140031F25  movaps  xmm2, xmm7
0000000140031F28  jmp     short loc_140031F36
0000000140031F2A  cmp     ebx, 0C00h
0000000140031F30  jnz     short loc_140031F46
0000000140031F32  movaps  xmm2, xmm8
0000000140031F36  lea     rdx, dword_1402F6188
0000000140031F3D  lea     rcx, [rbp+68h]
0000000140031F41  call    sub_14007B2A0
0000000140031F46  movss   dword ptr [rsp+40h], xmm12
0000000140031F4D  lea     rax, [rbp+48h]
0000000140031F51  mov     [rsp+38h], rax
0000000140031F56  lea     r8, [rsp+50h]
0000000140031F5B  lea     rax, [rbp+58h]
0000000140031F5F  mov     r9d, edi
0000000140031F62  mov     [rsp+30h], rax
0000000140031F67  lea     rdx, [rsp+68h]
0000000140031F6C  lea     rax, [rbp+68h]
0000000140031F70  mov     [rsp+28h], rax
0000000140031F75  lea     rcx, [rsp+58h]
0000000140031F7A  lea     rax, [rbp-58h]
0000000140031F7E  mov     [rsp+20h], rax
0000000140031F83  call    sub_140032E60
0000000140031F88  test    eax, eax
0000000140031F8A  jnz     loc_140032DF7
0000000140031F90  lea     r11, cs:140000000h
0000000140031F97  mov     rax, [rbp-20h]
0000000140031F9B  mov     ebx, (rva dword_140404A6C+13D5C7DCh)[r11+rax*4]
0000000140031FA3  mov     eax, ebx
0000000140031FA5  and     eax, 0E0000000h
0000000140031FAA  cmp     eax, 40000000h
0000000140031FAF  jnz     loc_1400321B6
0000000140031FB5  movss   xmm0, dword ptr [r15+r11+1ADA9280h]
0000000140031FBF  lea     rax, [rbp-38h]
0000000140031FC3  movss   dword ptr [rsp+40h], xmm0
0000000140031FC9  lea     r9, [rbp+58h]
0000000140031FCD  mov     [rsp+38h], ebx
0000000140031FD1  lea     r8, [rsp+50h]
0000000140031FD6  mov     [rsp+30h], rax
0000000140031FDB  lea     rdx, [rsp+68h]
0000000140031FE0  lea     rax, [rbp+48h]
0000000140031FE4  movss   dword ptr [rsp+28h], xmm12
0000000140031FEB  lea     rcx, [rsp+58h]
0000000140031FF0  mov     [rsp+20h], rax
0000000140031FF5  call    sub_140034370
0000000140031FFA  lea     r11, cs:140000000h
0000000140032001  test    eax, eax
0000000140032003  jz      loc_1400326B6
0000000140032009  movss   xmm0, dword ptr [rsp+50h]
000000014003200F  comiss  xmm0, dword ptr [r13+0]
0000000140032014  jnb     loc_1400326B6
000000014003201A  movss   xmm0, dword ptr [r15+r11+1ADA9250h]
0000000140032024  movss   xmm5, dword ptr [r15+r11+1ADA9254h]
000000014003202E  movss   xmm9, dword ptr [r15+r11+1ADA9268h]
0000000140032038  movss   xmm15, dword ptr [r15+r11+1ADA9258h]
0000000140032042  movaps  xmm13, xmm9
0000000140032046  movss   xmm10, dword ptr [r15+r11+1ADA926Ch]
0000000140032050  movaps  xmm4, xmm15
0000000140032054  movss   xmm8, dword ptr [r15+r11+1ADA925Ch]
000000014003205E  movss   xmm11, dword ptr [r15+r11+1ADA9260h]
0000000140032068  movss   xmm12, dword ptr [r15+r11+1ADA9270h]
0000000140032072  movaps  xmm7, xmm11
0000000140032076  movss   xmm14, dword ptr [r15+r11+1ADA9264h]
0000000140032080  movss   xmm1, dword ptr [rsp+58h]
0000000140032086  movaps  xmm6, xmm14
000000014003208A  movss   xmm3, dword ptr [rsp+60h]
0000000140032090  movss   xmm2, dword ptr [rsp+5Ch]
0000000140032096  mov     rdi, [rbp-68h]
000000014003209A  mov     rdx, [rbp-40h]
000000014003209E  mulss   xmm4, xmm1
00000001400320A2  movss   dword ptr [rbp-80h], xmm0
00000001400320A7  mulss   xmm0, xmm1
00000001400320AB  mulss   xmm13, xmm3
00000001400320B0  movss   dword ptr [rsp+78h], xmm5
00000001400320B6  mulss   xmm5, xmm1
00000001400320BA  movaps  xmm1, xmm8
00000001400320BE  addss   xmm13, xmm0
00000001400320C3  mulss   xmm1, xmm2
00000001400320C7  movaps  xmm0, xmm10
00000001400320CB  mulss   xmm7, xmm2
00000001400320CF  addss   xmm1, dword ptr [r15+r11+1ADA9244h]
00000001400320D9  mulss   xmm0, xmm3
00000001400320DD  addss   xmm7, dword ptr [r15+r11+1ADA9248h]
00000001400320E7  mulss   xmm6, xmm2
00000001400320EB  movss   xmm2, dword ptr [rsp+6Ch]
00000001400320F1  addss   xmm0, xmm5
00000001400320F5  addss   xmm13, xmm1
00000001400320FA  mulss   xmm8, xmm2
00000001400320FF  addss   xmm6, dword ptr [r15+r11+1ADA924Ch]
0000000140032109  movss   xmm1, dword ptr [rsp+68h]
000000014003210F  movaps  xmm5, xmm12
0000000140032113  mulss   xmm5, xmm3
0000000140032117  addss   xmm7, xmm0
000000014003211B  movss   xmm0, dword ptr [rsp+70h]
0000000140032121  movss   xmm3, dword ptr [rsp+78h]
0000000140032127  addss   xmm5, xmm4
000000014003212B  mulss   xmm15, xmm1
0000000140032130  movss   xmm4, dword ptr [rbp-80h]
0000000140032135  mulss   xmm4, xmm1
0000000140032139  mulss   xmm3, xmm1
000000014003213D  addss   xmm5, xmm6
0000000140032141  movss   dword ptr [rdi], xmm13
0000000140032146  addss   xmm4, xmm8
000000014003214B  movss   dword ptr [rdi+4], xmm7
0000000140032150  mulss   xmm14, xmm2
0000000140032155  movss   dword ptr [rdi+8], xmm5
000000014003215A  mulss   xmm9, xmm0
000000014003215F  addss   xmm15, xmm14
0000000140032164  mulss   xmm11, xmm2
0000000140032169  addss   xmm4, xmm9
000000014003216E  mulss   xmm12, xmm0
0000000140032173  addss   xmm3, xmm11
0000000140032178  mulss   xmm10, xmm0
000000014003217D  addss   xmm15, xmm12
0000000140032182  movss   dword ptr [rsp+58h], xmm13
0000000140032189  movss   dword ptr [rsp+68h], xmm4
000000014003218F  movss   dword ptr [rdx], xmm4
0000000140032193  movss   dword ptr [rsp+5Ch], xmm7
0000000140032199  addss   xmm3, xmm10
000000014003219E  movss   dword ptr [rsp+60h], xmm5
00000001400321A4  movss   dword ptr [rsp+70h], xmm15
00000001400321AB  movss   dword ptr [rdx+8], xmm15
00000001400321B1  jmp     loc_1400323C8
00000001400321B6  cmp     eax, 80000000h
00000001400321BB  jnz     loc_140032427
00000001400321C1  movss   xmm0, dword ptr [r15+r11+1ADA9280h]
00000001400321CB  lea     rax, [rbp-38h]
00000001400321CF  movss   dword ptr [rsp+40h], xmm0
00000001400321D5  lea     r9, [rbp+58h]
00000001400321D9  mov     [rsp+38h], ebx
00000001400321DD  lea     r8, [rsp+50h]
00000001400321E2  mov     [rsp+30h], rax
00000001400321E7  lea     rdx, [rsp+68h]
00000001400321EC  lea     rax, [rbp+48h]
00000001400321F0  movss   dword ptr [rsp+28h], xmm12
00000001400321F7  lea     rcx, [rsp+58h]
00000001400321FC  mov     [rsp+20h], rax
0000000140032201  call    sub_140034AE0
0000000140032206  lea     r11, cs:140000000h
000000014003220D  test    eax, eax
000000014003220F  jz      loc_1400326B6
0000000140032215  movss   xmm0, dword ptr [rsp+50h]
000000014003221B  comiss  xmm0, dword ptr [r13+0]
0000000140032220  jnb     loc_1400326B6
0000000140032226  movss   xmm7, dword ptr [r15+r11+1ADA925Ch]
0000000140032230  movss   xmm8, dword ptr [r15+r11+1ADA9250h]
000000014003223A  movss   xmm9, dword ptr [r15+r11+1ADA9268h]
0000000140032244  movss   xmm10, dword ptr [r15+r11+1ADA9260h]
000000014003224E  movss   xmm13, dword ptr [r15+r11+1ADA9254h]
0000000140032258  movss   xmm11, dword ptr [r15+r11+1ADA926Ch]
0000000140032262  movss   xmm12, dword ptr [r15+r11+1ADA9258h]
000000014003226C  movss   xmm15, dword ptr [r15+r11+1ADA9270h]
0000000140032276  movss   xmm5, dword ptr [rsp+5Ch]
000000014003227C  movss   xmm6, dword ptr [rsp+58h]
0000000140032282  movaps  xmm0, xmm5
0000000140032285  movss   xmm14, dword ptr [rsp+60h]
000000014003228C  movaps  xmm3, xmm6
000000014003228F  mov     rdi, [rbp-68h]
0000000140032293  movaps  xmm2, xmm6
0000000140032296  mov     rdx, [rbp-40h]
000000014003229A  movaps  xmm4, xmm5
000000014003229D  mulss   xmm4, dword ptr [r15+r11+1ADA9264h]
00000001400322A7  movaps  xmm1, xmm14
00000001400322AB  mulss   xmm0, xmm7
00000001400322AF  addss   xmm4, dword ptr [r15+r11+1ADA924Ch]
00000001400322B9  mulss   xmm6, xmm8
00000001400322BE  mulss   xmm5, xmm10
00000001400322C3  addss   xmm6, xmm0
00000001400322C7  mulss   xmm1, xmm9
00000001400322CC  movaps  xmm0, xmm14
00000001400322D0  mulss   xmm3, xmm13
00000001400322D5  addss   xmm1, dword ptr [r15+r11+1ADA9244h]
00000001400322DF  addss   xmm5, dword ptr [r15+r11+1ADA9248h]
00000001400322E9  mulss   xmm0, xmm11
00000001400322EE  mulss   xmm2, xmm12
00000001400322F3  addss   xmm6, xmm1
00000001400322F7  mulss   xmm14, xmm15
00000001400322FC  addss   xmm0, xmm3
0000000140032300  addss   xmm14, xmm2
0000000140032305  movss   xmm2, dword ptr [rsp+70h]
000000014003230B  movss   dword ptr [rbp-80h], xmm6
0000000140032310  movaps  xmm1, xmm2
0000000140032313  movss   dword ptr [rsp+58h], xmm6
0000000140032319  movss   xmm6, dword ptr [rsp+68h]
000000014003231F  addss   xmm5, xmm0
0000000140032323  movaps  xmm0, xmm6
0000000140032326  mulss   xmm1, xmm9
000000014003232B  mulss   xmm0, xmm8
0000000140032330  addss   xmm14, xmm4
0000000140032335  movss   xmm4, dword ptr [rsp+6Ch]
000000014003233B  movss   dword ptr [rsp+78h], xmm5
0000000140032341  movaps  xmm3, xmm4
0000000140032344  movss   dword ptr [rsp+5Ch], xmm5
000000014003234A  movaps  xmm5, xmm4
000000014003234D  mulss   xmm4, dword ptr [r15+r11+1ADA9264h]
0000000140032357  mulss   xmm5, xmm7
000000014003235B  mulss   xmm3, xmm10
0000000140032360  addss   xmm5, xmm0
0000000140032364  movss   dword ptr [rdi+8], xmm14
000000014003236A  movaps  xmm0, xmm6
000000014003236D  movss   dword ptr [rsp+60h], xmm14
0000000140032374  mulss   xmm0, xmm13
0000000140032379  mulss   xmm6, xmm12
000000014003237E  addss   xmm5, xmm1
0000000140032382  movaps  xmm1, xmm2
0000000140032385  addss   xmm3, xmm0
0000000140032389  mulss   xmm2, xmm15
000000014003238E  movss   xmm0, dword ptr [rbp-80h]
0000000140032393  addss   xmm6, xmm4
0000000140032397  movss   dword ptr [rdi], xmm0
000000014003239B  movss   xmm0, dword ptr [rsp+78h]
00000001400323A1  movss   dword ptr [rdi+4], xmm0
00000001400323A6  mulss   xmm1, xmm11
00000001400323AB  addss   xmm6, xmm2
00000001400323AF  movss   dword ptr [rsp+68h], xmm5
00000001400323B5  movss   dword ptr [rdx], xmm5
00000001400323B9  addss   xmm3, xmm1
00000001400323BD  movss   dword ptr [rsp+70h], xmm6
00000001400323C3  movss   dword ptr [rdx+8], xmm6
00000001400323C8  movss   xmm0, dword ptr [rsp+50h]
00000001400323CE  movss   dword ptr [rdx+4], xmm3
00000001400323D3  movss   dword ptr [r13+0], xmm0
00000001400323D9  mov     cs:dword_140404A6C+1167FE84h, ebx
00000001400323DF  mov     cs:dword_140404A6C+1167FE6Ch, r12d
00000001400323E6  mov     cs:dword_140404A6C+1167FE70h, r14d
00000001400323ED  mov     cs:dword_140404A6C+1167FE74h, esi
00000001400323F3  mov     r10d, [rsp+54h]
00000001400323F8  movss   xmm12, dword ptr [rbp+19C0h]
0000000140032401  mov     cs:dword_140404A6C+1167FE68h, r10d
0000000140032408  movss   dword ptr [rsp+6Ch], xmm3
000000014003240E  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
0000000140032418  mov     cs:dword_140404A6C+1167FE9Ch, 0FFFFFFFFh
0000000140032422  jmp     loc_1400326BF
0000000140032427  cmp     eax, 0C0000000h
000000014003242C  jnz     loc_1400326B6
0000000140032432  movzx   eax, bl
0000000140032435  mov     edx, r12d
0000000140032438  sub     edx, eax
000000014003243A  mov     r8d, r14d
000000014003243D  mov     eax, ebx
000000014003243F  mov     [rbp-28h], edx
0000000140032442  shr     eax, 10h
0000000140032445  movzx   ecx, al
0000000140032448  sub     r8d, ecx
000000014003244B  shr     ebx, 8
000000014003244E  mov     ecx, [rsp+54h]
0000000140032452  movzx   eax, bl
0000000140032455  mov     ebx, esi
0000000140032457  sub     ebx, eax
0000000140032459  mov     [rbp-18h], edx
000000014003245C  mov     r9d, ebx
000000014003245F  mov     [rbp-78h], r8d
0000000140032463  mov     [rbp-14h], r8d
0000000140032467  mov     [rbp-10h], ebx
000000014003246A  call    sub_1400129D0
000000014003246F  mov     [rsp+78h], eax
0000000140032473  lea     rcx, cs:140000000h
000000014003247A  movss   xmm0, dword ptr [r15+rcx+1ADA9280h]
0000000140032484  lea     r9, [rbp+58h]
0000000140032488  movss   dword ptr [rsp+40h], xmm0
000000014003248E  lea     r8, [rsp+50h]
0000000140032493  mov     [rsp+38h], eax
0000000140032497  lea     rdx, [rsp+68h]
000000014003249C  lea     rax, [rbp-18h]
00000001400324A0  mov     [rsp+30h], rax
00000001400324A5  lea     rcx, [rsp+58h]
00000001400324AA  lea     rax, [rbp+48h]
00000001400324AE  movss   dword ptr [rsp+28h], xmm12
00000001400324B5  mov     [rsp+20h], rax
00000001400324BA  call    sub_140034AE0
00000001400324BF  lea     r11, cs:140000000h
00000001400324C6  test    eax, eax
00000001400324C8  jz      loc_1400326B6
00000001400324CE  movss   xmm0, dword ptr [rsp+50h]
00000001400324D4  comiss  xmm0, dword ptr [r13+0]
00000001400324D9  jnb     loc_1400326B6
00000001400324DF  movss   xmm13, dword ptr [r15+r11+1ADA9258h]
00000001400324E9  movss   xmm9, dword ptr [r15+r11+1ADA9250h]
00000001400324F3  movaps  xmm2, xmm13
00000001400324F7  movss   xmm10, dword ptr [r15+r11+1ADA9268h]
0000000140032501  movss   xmm8, dword ptr [r15+r11+1ADA925Ch]
000000014003250B  movss   xmm4, dword ptr [r15+r11+1ADA9264h]
0000000140032515  movss   xmm11, dword ptr [r15+r11+1ADA9260h]
000000014003251F  movss   xmm14, dword ptr [r15+r11+1ADA9254h]
0000000140032529  movss   xmm12, dword ptr [r15+r11+1ADA926Ch]
0000000140032533  movss   xmm7, dword ptr [r15+r11+1ADA9270h]
000000014003253D  movss   xmm1, dword ptr [rsp+60h]
0000000140032543  movss   xmm0, dword ptr [rsp+58h]
0000000140032549  movaps  xmm15, xmm1
000000014003254D  movss   xmm5, dword ptr [rsp+5Ch]
0000000140032553  movaps  xmm3, xmm0
0000000140032556  movss   xmm6, dword ptr [rsp+68h]
000000014003255C  mov     rdi, [rbp-68h]
0000000140032560  mov     rdx, [rbp-40h]
0000000140032564  mov     eax, [rsp+78h]
0000000140032568  mulss   xmm2, xmm0
000000014003256C  mulss   xmm0, xmm9
0000000140032571  mulss   xmm4, xmm5
0000000140032575  mulss   xmm7, xmm1
0000000140032579  addss   xmm4, dword ptr [r15+r11+1ADA924Ch]
0000000140032583  mulss   xmm3, xmm14
0000000140032588  mulss   xmm15, xmm10
000000014003258D  addss   xmm7, xmm2
0000000140032591  movss   xmm2, dword ptr [rsp+70h]
0000000140032597  addss   xmm15, xmm0
000000014003259C  movaps  xmm0, xmm5
000000014003259F  mulss   xmm0, xmm8
00000001400325A4  addss   xmm7, xmm4
00000001400325A8  movss   xmm4, dword ptr [rsp+6Ch]
00000001400325AE  mulss   xmm5, xmm11
00000001400325B3  addss   xmm0, dword ptr [r15+r11+1ADA9244h]
00000001400325BD  movss   dword ptr [rsp+60h], xmm7
00000001400325C3  addss   xmm5, dword ptr [r15+r11+1ADA9248h]
00000001400325CD  addss   xmm15, xmm0
00000001400325D2  movaps  xmm0, xmm1
00000001400325D5  mulss   xmm0, xmm12
00000001400325DA  movaps  xmm1, xmm2
00000001400325DD  mulss   xmm1, xmm10
00000001400325E2  addss   xmm0, xmm3
00000001400325E6  movss   dword ptr [rsp+58h], xmm15
00000001400325ED  movaps  xmm3, xmm4
00000001400325F0  mulss   xmm3, xmm11
00000001400325F5  addss   xmm5, xmm0
00000001400325F9  movaps  xmm0, xmm6
00000001400325FC  mulss   xmm0, xmm9
0000000140032601  movss   dword ptr [rbp-80h], xmm5
0000000140032606  movss   dword ptr [rsp+5Ch], xmm5
000000014003260C  movaps  xmm5, xmm4
000000014003260F  mulss   xmm4, dword ptr [r15+r11+1ADA9264h]
0000000140032619  mulss   xmm5, xmm8
000000014003261E  addss   xmm5, xmm0
0000000140032622  movaps  xmm0, xmm6
0000000140032625  mulss   xmm0, xmm14
000000014003262A  mulss   xmm6, xmm13
000000014003262F  addss   xmm3, xmm0
0000000140032633  movss   xmm0, dword ptr [r15+r11+1ADA9270h]
000000014003263D  movss   dword ptr [rdi], xmm15
0000000140032642  addss   xmm5, xmm1
0000000140032646  movss   dword ptr [rdi+8], xmm7
000000014003264B  addss   xmm6, xmm4
000000014003264F  mulss   xmm0, xmm2
0000000140032653  movaps  xmm1, xmm2
0000000140032656  mulss   xmm1, xmm12
000000014003265B  addss   xmm6, xmm0
000000014003265F  movss   dword ptr [rsp+68h], xmm5
0000000140032665  movss   xmm0, dword ptr [rbp-80h]
000000014003266A  movss   dword ptr [rdi+4], xmm0
000000014003266F  addss   xmm3, xmm1
0000000140032673  movss   xmm0, dword ptr [rsp+50h]
0000000140032679  movss   dword ptr [rdx], xmm5
000000014003267D  movss   dword ptr [rdx+8], xmm6
0000000140032682  movss   dword ptr [rsp+70h], xmm6
0000000140032688  movss   dword ptr [rdx+4], xmm3
000000014003268D  movss   dword ptr [r13+0], xmm0
0000000140032693  mov     cs:dword_140404A6C+1167FE84h, eax
0000000140032699  mov     eax, [rbp-28h]
000000014003269C  mov     cs:dword_140404A6C+1167FE6Ch, eax
00000001400326A2  mov     eax, [rbp-78h]
00000001400326A5  mov     cs:dword_140404A6C+1167FE70h, eax
00000001400326AB  mov     cs:dword_140404A6C+1167FE74h, ebx
00000001400326B1  jmp     loc_1400323F3
00000001400326B6  mov     rdi, [rbp-68h]
00000001400326BA  mov     r10d, [rsp+54h]
00000001400326BF  mov     rax, [rbp-20h]
00000001400326C3  mov     ebx, (rva dword_140404A6C+13D5F7DCh)[r11+rax*4]
00000001400326CB  mov     eax, ebx
00000001400326CD  and     eax, 0E0000000h
00000001400326D2  cmp     eax, 40000000h
00000001400326D7  jnz     loc_140032919
00000001400326DD  movss   xmm0, dword ptr [r15+r11+1ADA9280h]
00000001400326E7  lea     rax, [rbp-38h]
00000001400326EB  movss   dword ptr [rsp+40h], xmm0
00000001400326F1  lea     r9, [rbp+58h]
00000001400326F5  mov     [rsp+38h], ebx
00000001400326F9  lea     r8, [rsp+50h]
00000001400326FE  mov     [rsp+30h], rax
0000000140032703  lea     rdx, [rsp+68h]
0000000140032708  lea     rax, [rbp+48h]
000000014003270C  movss   dword ptr [rsp+28h], xmm12
0000000140032713  lea     rcx, [rsp+58h]
0000000140032718  mov     [rsp+20h], rax
000000014003271D  call    sub_140034370
0000000140032722  lea     r11, cs:140000000h
0000000140032729  test    eax, eax
000000014003272B  jz      loc_140032D0E
0000000140032731  movss   xmm0, dword ptr [rsp+50h]
0000000140032737  comiss  xmm0, dword ptr [r13+0]
000000014003273C  jnb     loc_140032D0E
0000000140032742  movss   xmm1, dword ptr [rsp+58h]
0000000140032748  movss   xmm2, dword ptr [rsp+5Ch]
000000014003274E  movss   xmm3, dword ptr [rsp+60h]
0000000140032754  movss   xmm7, dword ptr [r15+r11+1ADA9250h]
000000014003275E  movss   xmm11, dword ptr [r15+r11+1ADA9254h]
0000000140032768  movaps  xmm0, xmm7
000000014003276B  movss   xmm12, dword ptr [r15+r11+1ADA9258h]
0000000140032775  movaps  xmm5, xmm11
0000000140032779  movss   xmm9, dword ptr [r15+r11+1ADA925Ch]
0000000140032783  movaps  xmm4, xmm12
0000000140032787  movss   xmm10, dword ptr [r15+r11+1ADA9268h]
0000000140032791  movss   xmm13, dword ptr [r15+r11+1ADA926Ch]
000000014003279B  movaps  xmm8, xmm10
000000014003279F  movss   xmm14, dword ptr [r15+r11+1ADA9260h]
00000001400327A9  movss   xmm15, dword ptr [r15+r11+1ADA9270h]
00000001400327B3  movss   xmm6, dword ptr [r15+r11+1ADA9264h]
00000001400327BD  mulss   xmm0, xmm1
00000001400327C1  mulss   xmm5, xmm1
00000001400327C5  mulss   xmm8, xmm3
00000001400327CA  mulss   xmm4, xmm1
00000001400327CE  movaps  xmm1, xmm9
00000001400327D2  addss   xmm8, xmm0
00000001400327D7  mulss   xmm1, xmm2
00000001400327DB  movaps  xmm0, xmm13
00000001400327DF  mulss   xmm6, xmm2
00000001400327E3  addss   xmm1, dword ptr [r15+r11+1ADA9244h]
00000001400327ED  mulss   xmm0, xmm3
00000001400327F1  addss   xmm8, xmm1
00000001400327F6  addss   xmm0, xmm5
00000001400327FA  movaps  xmm5, xmm15
00000001400327FE  mulss   xmm5, xmm3
0000000140032802  movss   dword ptr [rbp-78h], xmm8
0000000140032808  movss   dword ptr [rsp+58h], xmm8
000000014003280F  movaps  xmm8, xmm14
0000000140032813  mulss   xmm8, xmm2
0000000140032818  addss   xmm8, dword ptr [r15+r11+1ADA9248h]
0000000140032822  addss   xmm6, dword ptr [r15+r11+1ADA924Ch]
000000014003282C  movss   xmm2, dword ptr [rsp+6Ch]
0000000140032832  addss   xmm5, xmm4
0000000140032836  movss   xmm4, dword ptr [rsp+68h]
000000014003283C  mov     rax, [rbp-40h]
0000000140032840  movaps  xmm3, xmm4
0000000140032843  addss   xmm8, xmm0
0000000140032848  mulss   xmm9, xmm2
000000014003284D  movss   xmm0, dword ptr [rsp+70h]
0000000140032853  movaps  xmm1, xmm4
0000000140032856  mulss   xmm10, xmm0
000000014003285B  addss   xmm5, xmm6
000000014003285F  mulss   xmm13, xmm0
0000000140032864  mulss   xmm15, xmm0
0000000140032869  movss   xmm0, dword ptr [rbp-78h]
000000014003286E  mulss   xmm14, xmm2
0000000140032873  mulss   xmm2, dword ptr [r15+r11+1ADA9264h]
000000014003287D  movss   dword ptr [rdi], xmm0
0000000140032881  movss   xmm0, dword ptr [rsp+50h]
0000000140032887  movss   dword ptr [rdi+4], xmm8
000000014003288D  movss   dword ptr [rdi+8], xmm5
0000000140032892  mulss   xmm3, xmm7
0000000140032896  mulss   xmm1, xmm11
000000014003289B  mulss   xmm4, xmm12
00000001400328A0  addss   xmm3, xmm9
00000001400328A5  addss   xmm1, xmm14
00000001400328AA  movss   dword ptr [rsp+5Ch], xmm8
00000001400328B1  movss   dword ptr [rsp+60h], xmm5
00000001400328B7  addss   xmm4, xmm2
00000001400328BB  addss   xmm3, xmm10
00000001400328C0  addss   xmm1, xmm13
00000001400328C5  addss   xmm4, xmm15
00000001400328CA  movss   dword ptr [rax], xmm3
00000001400328CE  movss   dword ptr [rsp+68h], xmm3
00000001400328D4  movss   dword ptr [rax+4], xmm1
00000001400328D9  movss   dword ptr [rsp+6Ch], xmm1
00000001400328DF  movss   dword ptr [rax+8], xmm4
00000001400328E4  mov     eax, [rsp+54h]
00000001400328E8  movss   dword ptr [r13+0], xmm0
00000001400328EE  mov     cs:dword_140404A6C+1167FE84h, ebx
00000001400328F4  mov     cs:dword_140404A6C+1167FE68h, eax
00000001400328FA  mov     cs:dword_140404A6C+1167FE6Ch, r12d
0000000140032901  mov     cs:dword_140404A6C+1167FE70h, r14d
0000000140032908  mov     cs:dword_140404A6C+1167FE74h, esi
000000014003290E  movss   dword ptr [rsp+70h], xmm4
0000000140032914  jmp     loc_140032CFA
0000000140032919  cmp     eax, 80000000h
000000014003291E  jnz     loc_140032A64
0000000140032924  movss   xmm0, dword ptr [r15+r11+1ADA9280h]
000000014003292E  lea     rax, [rbp-38h]
0000000140032932  movss   dword ptr [rsp+40h], xmm0
0000000140032938  lea     r9, [rbp+58h]
000000014003293C  mov     [rsp+38h], ebx
0000000140032940  lea     r8, [rsp+50h]
0000000140032945  mov     [rsp+30h], rax
000000014003294A  lea     rdx, [rsp+68h]
000000014003294F  lea     rax, [rbp+48h]
0000000140032953  movss   dword ptr [rsp+28h], xmm12
000000014003295A  lea     rcx, [rsp+58h]
000000014003295F  mov     [rsp+20h], rax
0000000140032964  call    sub_140034AE0
0000000140032969  lea     r11, cs:140000000h
0000000140032970  test    eax, eax
0000000140032972  jz      loc_140032D0E
0000000140032978  movss   xmm0, dword ptr [rsp+50h]
000000014003297E  comiss  xmm0, dword ptr [r13+0]
0000000140032983  jnb     loc_140032D0E
0000000140032989  movss   xmm1, dword ptr [rsp+58h]
000000014003298F  movss   xmm3, dword ptr [rsp+5Ch]
0000000140032995  movss   xmm2, dword ptr [rsp+60h]
000000014003299B  movss   xmm7, dword ptr [r15+r11+1ADA9250h]
00000001400329A5  movss   xmm11, dword ptr [r15+r11+1ADA9254h]
00000001400329AF  movaps  xmm0, xmm7
00000001400329B2  movss   xmm12, dword ptr [r15+r11+1ADA9258h]
00000001400329BC  movaps  xmm5, xmm11
00000001400329C0  movss   xmm9, dword ptr [r15+r11+1ADA925Ch]
00000001400329CA  movaps  xmm4, xmm12
00000001400329CE  movss   xmm10, dword ptr [r15+r11+1ADA9268h]
00000001400329D8  movaps  xmm8, xmm9
00000001400329DC  movss   xmm13, dword ptr [r15+r11+1ADA926Ch]
00000001400329E6  movss   xmm14, dword ptr [r15+r11+1ADA9260h]
00000001400329F0  movss   xmm15, dword ptr [r15+r11+1ADA9270h]
00000001400329FA  movss   xmm6, dword ptr [r15+r11+1ADA9264h]
0000000140032A04  mulss   xmm0, xmm1
0000000140032A08  mulss   xmm5, xmm1
0000000140032A0C  mulss   xmm8, xmm3
0000000140032A11  mulss   xmm4, xmm1
0000000140032A15  movaps  xmm1, xmm10
0000000140032A19  addss   xmm8, xmm0
0000000140032A1E  mulss   xmm1, xmm2
0000000140032A22  movaps  xmm0, xmm13
0000000140032A26  mulss   xmm6, xmm3
0000000140032A2A  addss   xmm1, dword ptr [r15+r11+1ADA9244h]
0000000140032A34  mulss   xmm0, xmm2
0000000140032A38  addss   xmm8, xmm1
0000000140032A3D  addss   xmm0, xmm5
0000000140032A41  movaps  xmm5, xmm15
0000000140032A45  mulss   xmm5, xmm2
0000000140032A49  movss   dword ptr [rbp-78h], xmm8
0000000140032A4F  movss   dword ptr [rsp+58h], xmm8
0000000140032A56  movaps  xmm8, xmm14
0000000140032A5A  mulss   xmm8, xmm3
0000000140032A5F  jmp     loc_140032818
0000000140032A64  cmp     eax, 0C0000000h
0000000140032A69  jnz     loc_140032D0E
0000000140032A6F  movzx   eax, bl
0000000140032A72  mov     edx, r12d
0000000140032A75  sub     edx, eax
0000000140032A77  mov     r8d, r14d
0000000140032A7A  mov     eax, ebx
0000000140032A7C  mov     [rbp-80h], edx
0000000140032A7F  shr     eax, 10h
0000000140032A82  movzx   ecx, al
0000000140032A85  sub     r8d, ecx
0000000140032A88  shr     ebx, 8
0000000140032A8B  movzx   eax, bl
0000000140032A8E  mov     ecx, r10d
0000000140032A91  mov     ebx, esi
0000000140032A93  mov     [rbp-18h], edx
0000000140032A96  sub     ebx, eax
0000000140032A98  mov     [rsp+78h], r8d
0000000140032A9D  mov     r9d, ebx
0000000140032AA0  mov     [rbp-14h], r8d
0000000140032AA4  mov     [rbp-10h], ebx
0000000140032AA7  call    sub_140016450
0000000140032AAC  mov     [rbp-28h], eax
0000000140032AAF  lea     rcx, cs:140000000h
0000000140032AB6  movss   xmm0, dword ptr [r15+rcx+1ADA9280h]
0000000140032AC0  lea     r9, [rbp+58h]
0000000140032AC4  movss   dword ptr [rsp+40h], xmm0
0000000140032ACA  lea     r8, [rsp+50h]
0000000140032ACF  mov     [rsp+38h], eax
0000000140032AD3  lea     rdx, [rsp+68h]
0000000140032AD8  lea     rax, [rbp-18h]
0000000140032ADC  mov     [rsp+30h], rax
0000000140032AE1  lea     rcx, [rsp+58h]
0000000140032AE6  lea     rax, [rbp+48h]
0000000140032AEA  movss   dword ptr [rsp+28h], xmm12
0000000140032AF1  mov     [rsp+20h], rax
0000000140032AF6  call    sub_140034AE0
0000000140032AFB  lea     r11, cs:140000000h
0000000140032B02  test    eax, eax
0000000140032B04  jz      loc_140032D0E
0000000140032B0A  movss   xmm0, dword ptr [rsp+50h]
0000000140032B10  comiss  xmm0, dword ptr [r13+0]
0000000140032B15  jnb     loc_140032D0E
0000000140032B1B  movss   xmm9, dword ptr [r15+r11+1ADA9250h]
0000000140032B25  movss   xmm14, dword ptr [r15+r11+1ADA9254h]
0000000140032B2F  movaps  xmm0, xmm9
0000000140032B33  movss   xmm13, dword ptr [r15+r11+1ADA9258h]
0000000140032B3D  movaps  xmm5, xmm14
0000000140032B41  movss   xmm8, dword ptr [r15+r11+1ADA925Ch]
0000000140032B4B  movaps  xmm4, xmm13
0000000140032B4F  movss   xmm11, dword ptr [r15+r11+1ADA9268h]
0000000140032B59  movss   xmm12, dword ptr [r15+r11+1ADA9260h]
0000000140032B63  movaps  xmm7, xmm11
0000000140032B67  movss   xmm15, dword ptr [r15+r11+1ADA926Ch]
0000000140032B71  movaps  xmm10, xmm12
0000000140032B75  movss   xmm6, dword ptr [r15+r11+1ADA9264h]
0000000140032B7F  movss   xmm1, dword ptr [rsp+58h]
0000000140032B85  movss   xmm2, dword ptr [rsp+5Ch]
0000000140032B8B  movss   xmm3, dword ptr [rsp+60h]
0000000140032B91  mov     rax, [rbp-40h]
0000000140032B95  mulss   xmm0, xmm1
0000000140032B99  mulss   xmm5, xmm1
0000000140032B9D  mulss   xmm4, xmm1
0000000140032BA1  movaps  xmm1, xmm8
0000000140032BA5  mulss   xmm7, xmm3
0000000140032BA9  mulss   xmm1, xmm2
0000000140032BAD  addss   xmm7, xmm0
0000000140032BB1  mulss   xmm10, xmm2
0000000140032BB6  mulss   xmm6, xmm2
0000000140032BBA  movaps  xmm0, xmm15
0000000140032BBE  addss   xmm1, dword ptr [r15+r11+1ADA9244h]
0000000140032BC8  addss   xmm10, dword ptr [r15+r11+1ADA9248h]
0000000140032BD2  addss   xmm6, dword ptr [r15+r11+1ADA924Ch]
0000000140032BDC  mulss   xmm0, xmm3
0000000140032BE0  addss   xmm7, xmm1
0000000140032BE4  movss   xmm1, dword ptr [rsp+70h]
0000000140032BEA  mulss   xmm11, xmm1
0000000140032BEF  addss   xmm0, xmm5
0000000140032BF3  mulss   xmm15, xmm1
0000000140032BF8  movss   xmm5, dword ptr [rsp+68h]
0000000140032BFE  movss   dword ptr [rbp-78h], xmm7
0000000140032C03  movss   dword ptr [rsp+58h], xmm7
0000000140032C09  movss   xmm7, dword ptr [r15+r11+1ADA9270h]
0000000140032C13  addss   xmm10, xmm0
0000000140032C18  movaps  xmm0, xmm5
0000000140032C1B  mulss   xmm7, xmm3
0000000140032C1F  movss   xmm3, dword ptr [rsp+6Ch]
0000000140032C25  mulss   xmm0, xmm9
0000000140032C2A  movaps  xmm2, xmm3
0000000140032C2D  addss   xmm7, xmm4
0000000140032C31  mulss   xmm2, xmm12
0000000140032C36  movaps  xmm4, xmm3
0000000140032C39  movss   dword ptr [rsp+5Ch], xmm10
0000000140032C40  mulss   xmm3, dword ptr [r15+r11+1ADA9264h]
0000000140032C4A  mulss   xmm4, xmm8
0000000140032C4F  addss   xmm7, xmm6
0000000140032C53  addss   xmm4, xmm0
0000000140032C57  movaps  xmm0, xmm5
0000000140032C5A  mulss   xmm0, xmm14
0000000140032C5F  mulss   xmm5, xmm13
0000000140032C64  addss   xmm2, xmm0
0000000140032C68  movss   dword ptr [rsp+60h], xmm7
0000000140032C6E  movss   xmm0, dword ptr [r15+r11+1ADA9270h]
0000000140032C78  addss   xmm4, xmm11
0000000140032C7D  movss   dword ptr [rdi+4], xmm10
0000000140032C83  addss   xmm5, xmm3
0000000140032C87  movss   dword ptr [rdi+8], xmm7
0000000140032C8C  mulss   xmm0, xmm1
0000000140032C90  addss   xmm2, xmm15
0000000140032C95  movss   dword ptr [rsp+68h], xmm4
0000000140032C9B  addss   xmm5, xmm0
0000000140032C9F  movss   xmm0, dword ptr [rbp-78h]
0000000140032CA4  movss   dword ptr [rdi], xmm0
0000000140032CA8  movss   xmm0, dword ptr [rsp+50h]
0000000140032CAE  movss   dword ptr [rax], xmm4
0000000140032CB2  movss   dword ptr [rax+4], xmm2
0000000140032CB7  movss   dword ptr [rax+8], xmm5
0000000140032CBC  mov     eax, [rbp-28h]
0000000140032CBF  movss   dword ptr [r13+0], xmm0
0000000140032CC5  mov     cs:dword_140404A6C+1167FE84h, eax
0000000140032CCB  mov     eax, [rsp+54h]
0000000140032CCF  mov     cs:dword_140404A6C+1167FE68h, eax
0000000140032CD5  movss   dword ptr [rsp+6Ch], xmm2
0000000140032CDB  movss   dword ptr [rsp+70h], xmm5
0000000140032CE1  mov     eax, [rbp-80h]
0000000140032CE4  mov     cs:dword_140404A6C+1167FE6Ch, eax
0000000140032CEA  mov     eax, [rsp+78h]
0000000140032CEE  mov     cs:dword_140404A6C+1167FE70h, eax
0000000140032CF4  mov     cs:dword_140404A6C+1167FE74h, ebx
0000000140032CFA  mov     cs:dword_140404A6C+1167FE9Ch, 0FFFFFFFFh
0000000140032D04  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
0000000140032D0E  mov     r10, [rbp-60h]
0000000140032D12  mov     r9d, [rsp+7Ch]
0000000140032D17  movss   xmm9, cs:dword_1402784B0
0000000140032D20  movss   xmm8, cs:dword_1402786B8
0000000140032D29  movss   xmm7, cs:dword_140278654
0000000140032D31  movss   xmm6, cs:dword_140278338
0000000140032D39  movss   xmm12, dword ptr [rbp+19C0h]
0000000140032D42  inc     r12d
0000000140032D45  mov     [rbp-38h], r12d
0000000140032D49  cmp     r12d, r9d
0000000140032D4C  jle     loc_1400319C0
0000000140032D52  mov     eax, [rbp-48h]
0000000140032D55  mov     ecx, [rbp-8]
0000000140032D58  inc     esi
0000000140032D5A  mov     [rbp-30h], esi
0000000140032D5D  cmp     esi, ecx
0000000140032D5F  jle     loc_1400319B0
0000000140032D65  mov     edx, [rbp-4]
0000000140032D68  mov     r8d, [rbp+0]
0000000140032D6C  inc     r14d
0000000140032D6F  mov     [rbp-70h], r14d
0000000140032D73  mov     [rbp-34h], r14d
0000000140032D77  cmp     r14d, r8d
0000000140032D7A  jle     loc_140031990
0000000140032D80  movss   xmm0, cs:dword_140278ADC
0000000140032D88  comiss  xmm0, dword ptr [r13+0]
0000000140032D8D  ja      loc_140032E55
0000000140032D93  xor     eax, eax
0000000140032D95  mov     rcx, [rbp+1890h]
0000000140032D9C  xor     rcx, rsp
0000000140032D9F  call    1401F8B20h
0000000140032DA4  lea     r11, [rsp+1A48h]
0000000140032DAC  movaps  xmm6, xmmword ptr [r11-18h]
0000000140032DB1  movaps  xmm7, xmmword ptr [r11-28h]
0000000140032DB6  movaps  xmm8, xmmword ptr [r11-38h]
0000000140032DBB  movaps  xmm9, xmmword ptr [r11-48h]
0000000140032DC0  movaps  xmm10, xmmword ptr [r11-58h]
0000000140032DC5  movaps  xmm11, xmmword ptr [r11-68h]
0000000140032DCA  movaps  xmm12, xmmword ptr [r11-78h]
0000000140032DCF  movaps  xmm13, xmmword ptr [r11-88h]
0000000140032DD7  movaps  xmm14, xmmword ptr [r11-98h]
0000000140032DDF  movaps  xmm15, xmmword ptr [r11-0A8h]
0000000140032DE7  mov     rsp, r11
0000000140032DEA  pop     r15
0000000140032DEC  pop     r14
0000000140032DEE  pop     r13
0000000140032DF0  pop     r12
0000000140032DF2  pop     rdi
0000000140032DF3  pop     rsi
0000000140032DF4  pop     rbx
0000000140032DF5  pop     rbp
0000000140032DF6  retn
0000000140032DF7  mov     rcx, [rbp-68h]
0000000140032DFB  mov     rdx, [rbp-40h]
0000000140032DFF  movss   xmm0, dword ptr [rsp+58h]
0000000140032E05  movss   xmm1, dword ptr [rsp+5Ch]
0000000140032E0B  movss   dword ptr [rcx], xmm0
0000000140032E0F  movss   xmm0, dword ptr [rsp+60h]
0000000140032E15  movss   dword ptr [rcx+4], xmm1
0000000140032E1A  movss   xmm1, dword ptr [rsp+68h]
0000000140032E20  movss   dword ptr [rcx+8], xmm0
0000000140032E25  movss   xmm0, dword ptr [rsp+6Ch]
0000000140032E2B  movss   dword ptr [rdx], xmm1
0000000140032E2F  movss   xmm1, dword ptr [rsp+70h]
0000000140032E35  movss   dword ptr [rdx+4], xmm0
0000000140032E3A  movss   xmm0, dword ptr [rsp+50h]
0000000140032E40  movss   dword ptr [rdx+8], xmm1
0000000140032E45  movss   dword ptr [r13+0], xmm0
0000000140032E4B  mov     cs:dword_140404A6C+1167FE6Ch, 0FFFFFFFFh
0000000140032E55  mov     eax, 1
0000000140032E5A  jmp     loc_140032D95
