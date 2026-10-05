; 0x1400b2e70: sub_1400B2E70
; Decompilation failed: call analysis failed
00000001400B2E70  mov     [rsp+10h], rbx
00000001400B2E75  mov     [rsp+18h], rsi
00000001400B2E7A  mov     [rsp+20h], rdi
00000001400B2E7F  push    rbp
00000001400B2E80  push    r12
00000001400B2E82  push    r13
00000001400B2E84  push    r14
00000001400B2E86  push    r15
00000001400B2E88  lea     rbp, [rsp-0C8E0h]
00000001400B2E90  mov     eax, 0C9E0h
00000001400B2E95  call    sub_1401F89D0
00000001400B2E9A  sub     rsp, rax
00000001400B2E9D  movaps  xmmword ptr [rsp+0C9D0h], xmm6
00000001400B2EA5  movaps  xmmword ptr [rsp+0C9C0h], xmm7
00000001400B2EAD  movaps  xmmword ptr [rsp+0C9B0h], xmm8
00000001400B2EB6  movaps  xmmword ptr [rsp+0C9A0h], xmm9
00000001400B2EBF  movaps  xmmword ptr [rsp+0C990h], xmm10
00000001400B2EC8  movaps  xmmword ptr [rsp+0C980h], xmm11
00000001400B2ED1  movaps  xmmword ptr [rsp+0C960h], xmm13
00000001400B2EDA  mov     rax, cs:__security_cookie
00000001400B2EE1  xor     rax, rsp
00000001400B2EE4  mov     [rbp+0C830h], rax
00000001400B2EEB  movsxd  rax, ecx
00000001400B2EEE  lea     rdi, cs:140000000h
00000001400B2EF5  imul    rbx, rax, 6FF8h
00000001400B2EFC  xor     r14d, r14d
00000001400B2EFF  mov     [rsp+70h], eax
00000001400B2F03  lea     r8, (rva dword_140404A6C+42E99A68h)[rdi]
00000001400B2F0A  mov     [rbp+820h], r14d
00000001400B2F11  add     r8, rbx
00000001400B2F14  mov     [rbp+0C824h], r14d
00000001400B2F1B  lea     rdx, (rva dword_140404A6C+42E99A5Ch)[rdi]
00000001400B2F22  mov     [rbp-10h], r8
00000001400B2F26  add     rdx, rbx
00000001400B2F29  mov     [rbp-58h], rbx
00000001400B2F2D  lea     r9d, [r14+4]
00000001400B2F31  lea     rcx, [rbp+820h]
00000001400B2F38  call    sub_140188900
00000001400B2F3D  mov     ecx, [rbp+820h]
00000001400B2F43  lea     rax, (rva dword_140404A6C+42E99ABCh)[rdi]
00000001400B2F4A  movss   xmm11, cs:dword_140278ADC
00000001400B2F53  lea     r12, dword_140404A6C+435994D4h
00000001400B2F5A  movss   xmm7, dword ptr [rbp-48h]
00000001400B2F5F  add     rax, rbx
00000001400B2F62  movss   xmm8, dword ptr [rbp-4Ch]
00000001400B2F68  mov     esi, r14d
00000001400B2F6B  movss   xmm9, dword ptr [rbp-50h]
00000001400B2F71  mov     r13d, r14d
00000001400B2F74  movss   xmm13, cs:dword_140278178
00000001400B2F7D  mov     [rsp+50h], rax
00000001400B2F82  movaps  xmmword ptr [rsp+0C970h], xmm12
00000001400B2F8B  nop     dword ptr [rax+rax+00h]
00000001400B2F90  cmp     esi, 0Ch
00000001400B2F93  jz      loc_1400B31CF
00000001400B2F99  cmp     esi, 0Fh
00000001400B2F9C  jz      loc_1400B31CF
00000001400B2FA2  cmp     esi, 0Bh
00000001400B2FA5  jz      short loc_1400B2FAC
00000001400B2FA7  cmp     esi, 0Eh
00000001400B2FAA  jnz     short loc_1400B2FCE
00000001400B2FAC  cmp     dword ptr [rbx+rdi+4329E360h], 2
00000001400B2FB4  jz      short loc_1400B2FCE
00000001400B2FB6  cmp     dword ptr [rbx+rdi+4329E344h], 0
00000001400B2FBE  jle     short loc_1400B2FCE
00000001400B2FC0  cmp     dword ptr [rbx+rdi+432A5058h], 32h ; '2'
00000001400B2FC8  jge     loc_1400B31CF
00000001400B2FCE  movss   xmm10, dword ptr [r12]
00000001400B2FD4  movaps  xmm6, xmm11
00000001400B2FD8  movss   dword ptr [rbp-34h], xmm6
00000001400B2FDD  test    ecx, ecx
00000001400B2FDF  jle     loc_1400B31CF
00000001400B2FE5  lea     rax, [rbx+r13]
00000001400B2FE9  lea     r14, (rva dword_140404A6C+42E99BD0h)[rdi]
00000001400B2FF0  lea     r15, (rva dword_140404A6C+42E99BC4h)[rdi]
00000001400B2FF7  add     r14, rax
00000001400B2FFA  add     r15, rax
00000001400B2FFD  mov     edi, ecx
00000001400B2FFF  lea     rbx, [rbp+82Ch]
00000001400B3006  nop     word ptr [rax+rax+00000000h]
00000001400B3010  movss   xmm0, dword ptr [rbx-8]
00000001400B3015  lea     rax, [rbp-68h]
00000001400B3019  movss   xmm1, dword ptr [rbx-4]
00000001400B301E  lea     r8, [rsp+68h]
00000001400B3023  mov     [rsp+40h], rax
00000001400B3028  lea     rdx, [rsp+58h]
00000001400B302D  movss   dword ptr [rbp-8], xmm0
00000001400B3032  lea     rax, [rbp-20h]
00000001400B3036  movss   xmm0, dword ptr [rbx]
00000001400B303A  lea     rcx, [rbp-78h]
00000001400B303E  movss   dword ptr [rbp-4], xmm1
00000001400B3043  mov     r9, r15
00000001400B3046  movss   xmm1, dword ptr [rbx+4]
00000001400B304B  movss   dword ptr [rbp+0], xmm0
00000001400B3050  movss   xmm0, dword ptr [rbx+8]
00000001400B3055  movss   dword ptr [rbp-20h], xmm1
00000001400B305A  movss   xmm1, dword ptr [rbx+0Ch]
00000001400B305F  mov     [rsp+38h], rax
00000001400B3064  lea     rax, [rbp-8]
00000001400B3068  movss   dword ptr [rbp-1Ch], xmm0
00000001400B306D  movss   xmm0, dword ptr [rbx+10h]
00000001400B3072  movss   dword ptr [rbp-18h], xmm1
00000001400B3077  movss   xmm1, dword ptr [rbx+14h]
00000001400B307C  movss   dword ptr [rbp-68h], xmm0
00000001400B3081  movss   xmm0, dword ptr [rbx+18h]
00000001400B3086  movss   dword ptr [rbp-64h], xmm1
00000001400B308B  movss   xmm1, dword ptr [rbx+1Ch]
00000001400B3090  mov     [rsp+30h], rax
00000001400B3095  movss   dword ptr [rbp-60h], xmm0
00000001400B309A  movss   xmm0, dword ptr [rbx+20h]
00000001400B309F  movss   dword ptr [rsp+58h], xmm1
00000001400B30A5  movss   xmm1, dword ptr [rbx+24h]
00000001400B30AA  movss   dword ptr [rsp+28h], xmm10
00000001400B30B1  movss   dword ptr [rsp+5Ch], xmm0
00000001400B30B7  movss   dword ptr [rsp+60h], xmm1
00000001400B30BD  mov     [rsp+20h], r14
00000001400B30C2  call    sub_140035690
00000001400B30C7  test    eax, eax
00000001400B30C9  jz      short loc_1400B310B
00000001400B30CB  movss   xmm2, dword ptr [rsp+68h]
00000001400B30D1  comiss  xmm6, xmm2
00000001400B30D4  jbe     short loc_1400B310B
00000001400B30D6  movss   xmm0, dword ptr [rsp+58h]
00000001400B30DC  movaps  xmm6, xmm2
00000001400B30DF  movss   xmm1, dword ptr [rsp+5Ch]
00000001400B30E5  movss   xmm9, dword ptr [rbp-78h]
00000001400B30EB  movss   xmm8, dword ptr [rbp+0C900h+var_C974_4]
00000001400B30F1  movss   xmm7, dword ptr [rbp+0C900h+var_C974_4+4]
00000001400B30F6  movss   dword ptr [rbp-44h], xmm0
00000001400B30FB  movss   xmm0, dword ptr [rsp+60h]
00000001400B3101  movss   dword ptr [rbp+0C900h+var_C940_4+4], xmm0
00000001400B3106  movss   dword ptr [rbp+0C900h+var_C940_4], xmm1
00000001400B310B  add     rbx, 30h ; '0'
00000001400B310F  sub     rdi, 1
00000001400B3113  jnz     loc_1400B3010
00000001400B3119  comiss  xmm6, xmm11
00000001400B311D  mov     rax, [rsp+50h]
00000001400B3122  movss   xmm10, cs:dword_1402781BC
00000001400B312B  movss   xmm12, cs:dword_140278304
00000001400B3134  movss   dword ptr [rbp-34h], xmm6
00000001400B3139  movss   dword ptr [rbp-48h], xmm7
00000001400B313E  movss   dword ptr [rbp-4Ch], xmm8
00000001400B3144  movss   dword ptr [rbp-50h], xmm9
00000001400B314A  jnb     short loc_1400B31BC
00000001400B314C  movsxd  rcx, dword ptr [rax]
00000001400B314F  lea     r8, [rbp-44h]
00000001400B3153  movss   xmm3, dword ptr [r12]
00000001400B3159  lea     rax, dword_140404A6C+457CC8Ch
00000001400B3160  imul    rdx, rcx, 0BCh
00000001400B3167  movaps  xmm0, xmm9
00000001400B316B  movss   dword ptr [rsp+30h], xmm10
00000001400B3172  movaps  xmm1, xmm8
00000001400B3176  movss   dword ptr [rsp+28h], xmm13
00000001400B317D  subss   xmm3, xmm6
00000001400B3181  movss   dword ptr [rsp+20h], xmm12
00000001400B3188  subss   xmm0, dword ptr [rdx+rax]
00000001400B318D  subss   xmm1, dword ptr [rdx+rax+4]
00000001400B3193  movss   dword ptr [rsp+78h], xmm0
00000001400B3199  movaps  xmm0, xmm7
00000001400B319C  subss   xmm0, dword ptr [rdx+rax+8]
00000001400B31A2  lea     rdx, [rsp+78h]
00000001400B31A7  movss   dword ptr [rsp+7Ch], xmm1
00000001400B31AD  movss   dword ptr [rbp-80h], xmm0
00000001400B31B2  call    sub_140005160
00000001400B31B7  mov     rax, [rsp+50h]
00000001400B31BC  mov     ecx, [rbp+820h]
00000001400B31C2  lea     rdi, cs:140000000h
00000001400B31C9  mov     rbx, [rbp-58h]
00000001400B31CD  jmp     short loc_1400B31E1
00000001400B31CF  movss   xmm12, cs:dword_140278304
00000001400B31D8  movss   xmm10, cs:dword_1402781BC
00000001400B31E1  add     rax, 138h
00000001400B31E7  inc     esi
00000001400B31E9  add     r13, 138h
00000001400B31F0  mov     [rsp+50h], rax
00000001400B31F5  add     r12, 64h ; 'd'
00000001400B31F9  cmp     esi, 10h
00000001400B31FC  jl      loc_1400B2F90
00000001400B3202  lea     r8, (rva dword_140404A6C+42E99A80h)[rdi]
00000001400B3209  lea     rdx, (rva dword_140404A6C+42E99A74h)[rdi]
00000001400B3210  add     r8, rbx
00000001400B3213  add     rdx, rbx
00000001400B3216  lea     rcx, [rbp+10h]
00000001400B321A  call    sub_140038230
00000001400B321F  mov     eax, [rbp+10h]
00000001400B3222  test    eax, eax
00000001400B3224  jle     loc_1400B3507
00000001400B322A  movss   xmm7, cs:dword_140278224
00000001400B3232  lea     r13, [rbp+18h]
00000001400B3236  mov     rdx, [rbp-10h]
00000001400B323A  lea     r8, dword_140404A6C+4267A61Ch
00000001400B3241  mov     [rsp+50h], r13
00000001400B3246  mov     ecx, eax
00000001400B3248  mov     [rsp+68h], rax
00000001400B324D  nop     dword ptr [rax]
00000001400B3250  movsxd  rax, dword ptr [r13+0]
00000001400B3254  imul    rsi, rax, 1B80h
00000001400B325B  movss   xmm0, dword ptr [rsi+rdi+42BBB284h]
00000001400B3264  comiss  xmm0, dword ptr [rdx]
00000001400B3267  ja      loc_1400B34EF
00000001400B326D  movss   xmm0, dword ptr [rsi+rdi+42BBB290h]
00000001400B3276  comiss  xmm0, (rva dword_140404A6C+42E99A5Ch)[rdi+rbx]
00000001400B327E  jb      loc_1400B34EF
00000001400B3284  movss   xmm0, dword ptr [rsi+rdi+42BBB28Ch]
00000001400B328D  comiss  xmm0, dword ptr [rdx+8]
00000001400B3291  ja      loc_1400B34EF
00000001400B3297  movss   xmm0, dword ptr [rsi+rdi+42BBB298h]
00000001400B32A0  comiss  xmm0, (rva dword_140404A6C+42E99A64h)[rdi+rbx]
00000001400B32A8  jb      loc_1400B34EF
00000001400B32AE  movss   xmm0, dword ptr [rsi+rdi+42BBB288h]
00000001400B32B7  comiss  xmm0, dword ptr [rdx+4]
00000001400B32BB  ja      loc_1400B34EF
00000001400B32C1  movss   xmm0, dword ptr [rsi+rdi+42BBB294h]
00000001400B32CA  comiss  xmm0, (rva dword_140404A6C+42E99A60h)[rdi+rbx]
00000001400B32D2  jb      loc_1400B34EF
00000001400B32D8  mov     r13, [rbp-58h]
00000001400B32DC  lea     rdx, cs:140000000h
00000001400B32E3  lea     r12, (rva dword_140404A6C+42E99ABCh)[rdx]
00000001400B32EA  xor     edi, edi
00000001400B32EC  xor     r15d, r15d
00000001400B32EF  lea     r14, dword_140404A6C+435994D4h
00000001400B32F6  add     r12, rbx
00000001400B32F9  nop     dword ptr [rax+00000000h]
00000001400B3300  cmp     edi, 7
00000001400B3303  jz      short loc_1400B3313
00000001400B3305  cmp     edi, 4
00000001400B3308  jbe     short loc_1400B3313
00000001400B330A  cmp     edi, 0Ah
00000001400B330D  jb      loc_1400B34B9
00000001400B3313  movsxd  rax, dword ptr [rsi+rdx+42BBB194h]
00000001400B331B  lea     r9, (rva dword_140404A6C+457CCB0h)[rdx]
00000001400B3322  movss   xmm6, dword ptr [r14]
00000001400B3327  imul    rbx, rax, 13D0h
00000001400B332E  movsxd  rax, dword ptr [rsi+rdx+42BBB1D8h]
00000001400B3336  imul    rcx, rax, 0BCh
00000001400B333D  add     rbx, r8
00000001400B3340  lea     r8, (rva dword_140404A6C+457CC8Ch)[rdx]
00000001400B3347  add     r9, rcx
00000001400B334A  add     r8, rcx
00000001400B334D  lea     rcx, [rbp+820h]
00000001400B3354  mov     rdx, rbx
00000001400B3357  call    sub_14011BF40
00000001400B335C  lea     rdx, cs:140000000h
00000001400B3363  movss   dword ptr [rsp+28h], xmm6
00000001400B3369  lea     rax, (rva dword_140404A6C+42E99BD0h)[rdx]
00000001400B3370  lea     r9, (rva dword_140404A6C+42E99BC4h)[rdx]
00000001400B3377  mov     rdx, rbx
00000001400B337A  lea     rcx, [r15+r13]
00000001400B337E  add     rax, rcx
00000001400B3381  lea     r8, [rbp+820h]
00000001400B3388  add     r9, rcx
00000001400B338B  mov     [rsp+20h], rax
00000001400B3390  lea     rcx, [rbp-50h]
00000001400B3394  call    sub_140033BE0
00000001400B3399  test    eax, eax
00000001400B339B  jz      loc_1400B34AB
00000001400B33A1  movss   xmm2, dword ptr [rbp-50h]
00000001400B33A6  lea     r8, dword_140404A6C+457CC8Ch
00000001400B33AD  movss   xmm3, dword ptr [rbp-4Ch]
00000001400B33B2  lea     rax, cs:140000000h
00000001400B33B9  movss   xmm4, dword ptr [rbp-48h]
00000001400B33BE  lea     r9, [rsp+58h]
00000001400B33C3  movsxd  r10, dword ptr [r12]
00000001400B33C7  movss   xmm0, dword ptr [rbp-44h]
00000001400B33CC  movss   xmm1, dword ptr [rbp+0C900h+var_C940_4]
00000001400B33D1  movsxd  rdx, dword ptr [rsi+rax+42BBB1D8h]
00000001400B33D9  lea     rax, [rbp-78h]
00000001400B33DD  movss   dword ptr [rbp-78h], xmm0
00000001400B33E2  movss   xmm0, dword ptr [rbp+0C900h+var_C940_4+4]
00000001400B33E7  movss   dword ptr [rbp+0C900h+var_C974_4+4], xmm0
00000001400B33EC  movaps  xmm0, xmm2
00000001400B33EF  imul    rcx, r10, 0BCh
00000001400B33F6  movss   dword ptr [rsp+40h], xmm7
00000001400B33FC  movss   dword ptr [rbp+0C900h+var_C974_4], xmm1
00000001400B3401  movaps  xmm1, xmm3
00000001400B3404  movss   dword ptr [rsp+38h], xmm10
00000001400B340B  movss   dword ptr [rbp-68h], xmm2
00000001400B3410  movss   dword ptr [rbp-64h], xmm3
00000001400B3415  movss   dword ptr [rbp-60h], xmm4
00000001400B341A  movss   dword ptr [rsp+30h], xmm12
00000001400B3421  subss   xmm0, dword ptr [rcx+r8]
00000001400B3427  subss   xmm1, dword ptr [rcx+r8+4]
00000001400B342E  movss   dword ptr [rsp+78h], xmm0
00000001400B3434  movaps  xmm0, xmm4
00000001400B3437  subss   xmm0, dword ptr [rcx+r8+8]
00000001400B343E  imul    rcx, rdx, 0BCh
00000001400B3445  movss   dword ptr [rbp-80h], xmm0
00000001400B344A  movss   xmm0, dword ptr [r14]
00000001400B344F  subss   xmm0, dword ptr [rbp-34h]
00000001400B3454  movss   dword ptr [rsp+7Ch], xmm1
00000001400B345A  movss   dword ptr [rsp+28h], xmm0
00000001400B3460  subss   xmm2, dword ptr [rcx+r8]
00000001400B3466  subss   xmm3, dword ptr [rcx+r8+4]
00000001400B346D  subss   xmm4, dword ptr [rcx+r8+8]
00000001400B3474  lea     r8, [rsp+78h]
00000001400B3479  mov     [rsp+20h], rax
00000001400B347E  mov     ecx, r10d
00000001400B3481  movss   dword ptr [rsp+58h], xmm2
00000001400B3487  movss   dword ptr [rsp+5Ch], xmm3
00000001400B348D  movss   dword ptr [rsp+60h], xmm4
00000001400B3493  call    sub_1400052C0
00000001400B3498  lea     rdx, cs:140000000h
00000001400B349F  xor     ecx, ecx
00000001400B34A1  mov     [rsi+rdx+42BBB188h], rcx
00000001400B34A9  jmp     short loc_1400B34B2
00000001400B34AB  lea     rdx, cs:140000000h
00000001400B34B2  lea     r8, dword_140404A6C+4267A61Ch
00000001400B34B9  inc     edi
00000001400B34BB  add     r15, 138h
00000001400B34C2  add     r12, 138h
00000001400B34C9  add     r14, 64h ; 'd'
00000001400B34CD  cmp     edi, 10h
00000001400B34D0  jl      loc_1400B3300
00000001400B34D6  mov     r13, [rsp+50h]
00000001400B34DB  lea     rdi, cs:140000000h
00000001400B34E2  mov     rcx, [rsp+68h]
00000001400B34E7  mov     rbx, [rbp-58h]
00000001400B34EB  mov     rdx, [rbp-10h]
00000001400B34EF  add     r13, 8
00000001400B34F3  sub     rcx, 1
00000001400B34F7  mov     [rsp+50h], r13
00000001400B34FC  mov     [rsp+68h], rcx
00000001400B3501  jnz     loc_1400B3250
00000001400B3507  mov     eax, [rsp+70h]
00000001400B350B  inc     eax
00000001400B350D  movsxd  rcx, eax
00000001400B3510  cmp     rcx, 100h
00000001400B3517  jge     loc_1400B3A1C
00000001400B351D  movss   xmm10, cs:dword_140278BD0
00000001400B3526  lea     r9, dword_140404A6C+435994CCh
00000001400B352D  movaps  xmmword ptr [rsp+0C950h], xmm14
00000001400B3536  lea     r8, dword_140404A6C+42E99AF0h
00000001400B353D  movss   xmm14, cs:dword_140278338
00000001400B3546  xorps   xmm9, xmm9
00000001400B354A  movaps  xmmword ptr [rsp+0C940h], xmm15
00000001400B3553  movss   xmm15, cs:dword_1402783F4
00000001400B355C  imul    r12, rcx, 6FF8h
00000001400B3563  nop     dword ptr [rax+00h]
00000001400B3567  nop     word ptr [rax+rax+00000000h]
00000001400B3570  cmp     dword ptr [r12+rdi+4329E308h], 0
00000001400B3579  jz      loc_1400B39F6
00000001400B357F  cmp     dword ptr [r12+rdi+4329E330h], 0FFFFFFFFh
00000001400B3588  jnz     loc_1400B39F6
00000001400B358E  mov     rcx, [rbp-10h]
00000001400B3592  movss   xmm0, dword ptr [r12+rdi+4329E4C8h]
00000001400B359C  comiss  xmm0, dword ptr [rcx]
00000001400B359F  ja      loc_1400B39F6
00000001400B35A5  movss   xmm0, dword ptr [r12+rdi+4329E4D4h]
00000001400B35AF  comiss  xmm0, (rva dword_140404A6C+42E99A5Ch)[rdi+rbx]
00000001400B35B7  jb      loc_1400B39F6
00000001400B35BD  movss   xmm0, dword ptr [r12+rdi+4329E4D0h]
00000001400B35C7  comiss  xmm0, dword ptr [rcx+8]
00000001400B35CB  ja      loc_1400B39F6
00000001400B35D1  movss   xmm0, dword ptr [r12+rdi+4329E4DCh]
00000001400B35DB  comiss  xmm0, (rva dword_140404A6C+42E99A64h)[rdi+rbx]
00000001400B35E3  jb      loc_1400B39F6
00000001400B35E9  movss   xmm0, dword ptr [r12+rdi+4329E4CCh]
00000001400B35F3  comiss  xmm0, dword ptr [rcx+4]
00000001400B35F7  ja      loc_1400B39F6
00000001400B35FD  movss   xmm0, dword ptr [r12+rdi+4329E4D8h]
00000001400B3607  comiss  xmm0, (rva dword_140404A6C+42E99A60h)[rdi+rbx]
00000001400B360F  jb      loc_1400B39F6
00000001400B3615  xor     r15d, r15d
00000001400B3618  lea     rdx, (rva dword_140404A6C+42E99AC8h)[rdi]
00000001400B361F  xor     ecx, ecx
00000001400B3621  mov     [rsp+68h], r15d
00000001400B3626  add     rdx, rbx
00000001400B3629  mov     [rbp-20h], rcx
00000001400B362D  mov     [rsp+50h], rdx
00000001400B3632  mov     r13, r9
00000001400B3635  cmp     r15d, 0Dh
00000001400B3639  jz      short loc_1400B364B
00000001400B363B  cmp     r15d, 0Ah
00000001400B363F  jbe     short loc_1400B364B
00000001400B3641  cmp     r15d, 10h
00000001400B3645  jb      loc_1400B39CC
00000001400B364B  movss   xmm8, dword ptr [r13+4]
00000001400B3651  lea     rdi, (rva dword_140404A6C+42E99AC8h)[rdi]
00000001400B3658  movsxd  rax, dword ptr [r13+0]
00000001400B365C  movaps  xmm7, xmm8
00000001400B3660  mov     r15, [rsp+50h]
00000001400B3665  add     rax, rcx
00000001400B3668  mulss   xmm7, xmm10
00000001400B366D  xor     r14d, r14d
00000001400B3670  mov     rsi, r9
00000001400B3673  mulss   xmm8, xmm14
00000001400B3678  lea     rax, [rax+rax*2]
00000001400B367C  movaps  xmm0, xmm7
00000001400B367F  lea     rcx, [rbx+rax*4]
00000001400B3683  add     rcx, r8
00000001400B3686  xor     ebx, ebx
00000001400B3688  movaps  xmm1, xmm8
00000001400B368C  add     rdi, r12
00000001400B368F  mulss   xmm0, dword ptr [rcx]
00000001400B3693  mulss   xmm1, dword ptr [rcx+4]
00000001400B3698  addss   xmm0, dword ptr [rdx-8]
00000001400B369D  addss   xmm1, dword ptr [rdx-4]
00000001400B36A2  movss   dword ptr [rbp-50h], xmm0
00000001400B36A7  movaps  xmm0, xmm7
00000001400B36AA  mulss   xmm0, dword ptr [rcx+4]
00000001400B36AF  mulss   xmm7, dword ptr [rcx+8]
00000001400B36B4  addss   xmm0, dword ptr [rdx-4]
00000001400B36B9  movss   dword ptr [rbp+0C900h+var_C940_4], xmm1
00000001400B36BE  addss   xmm7, dword ptr [rdx]
00000001400B36C2  movss   dword ptr [rbp-4Ch], xmm0
00000001400B36C7  movaps  xmm0, xmm8
00000001400B36CB  mulss   xmm0, dword ptr [rcx]
00000001400B36CF  mulss   xmm8, dword ptr [rcx+8]
00000001400B36D5  addss   xmm0, dword ptr [rdx-8]
00000001400B36DA  movss   dword ptr [rbp-48h], xmm7
00000001400B36DF  addss   xmm8, dword ptr [rdx]
00000001400B36E4  movss   dword ptr [rbp-44h], xmm0
00000001400B36E9  movss   dword ptr [rbp+0C900h+var_C940_4+4], xmm8
00000001400B36EF  nop
00000001400B36F0  cmp     ebx, 0Dh
00000001400B36F3  jz      short loc_1400B3703
00000001400B36F5  cmp     ebx, 0Ah
00000001400B36F8  jbe     short loc_1400B3703
00000001400B36FA  cmp     ebx, 10h
00000001400B36FD  jb      loc_1400B3992
00000001400B3703  movss   xmm8, dword ptr [rsi+4]
00000001400B3709  lea     r9, [rbp-50h]
00000001400B370D  movsxd  rax, dword ptr [rsi]
00000001400B3710  lea     rdx, [rbp-78h]
00000001400B3714  movss   xmm13, dword ptr [r13+8]
00000001400B371A  movaps  xmm7, xmm8
00000001400B371E  addss   xmm13, dword ptr [rsi+8]
00000001400B3724  add     rax, r14
00000001400B3727  mulss   xmm7, xmm10
00000001400B372C  mulss   xmm8, xmm14
00000001400B3731  lea     rax, [rax+rax*2]
00000001400B3735  movss   dword ptr [rsp+38h], xmm13
00000001400B373C  lea     rcx, [r12+rax*4]
00000001400B3740  movaps  xmm0, xmm7
00000001400B3743  add     rcx, r8
00000001400B3746  lea     rax, [rbp-2Ch]
00000001400B374A  mov     [rsp+30h], rax
00000001400B374F  lea     r8, [rsp+70h]
00000001400B3754  movaps  xmm1, xmm8
00000001400B3758  lea     rax, [rbp-38h]
00000001400B375C  mov     [rsp+28h], rax
00000001400B3761  lea     rax, [rbp-44h]
00000001400B3765  mulss   xmm0, dword ptr [rcx]
00000001400B3769  mov     [rsp+20h], rax
00000001400B376E  mulss   xmm1, dword ptr [rcx+4]
00000001400B3773  addss   xmm0, dword ptr [rdi-8]
00000001400B3778  addss   xmm1, dword ptr [rdi-4]
00000001400B377D  movss   dword ptr [rbp-38h], xmm0
00000001400B3782  movaps  xmm0, xmm7
00000001400B3785  mulss   xmm0, dword ptr [rcx+4]
00000001400B378A  mulss   xmm7, dword ptr [rcx+8]
00000001400B378F  addss   xmm0, dword ptr [rdi-4]
00000001400B3794  movss   dword ptr [rbp-28h], xmm1
00000001400B3799  addss   xmm7, dword ptr [rdi]
00000001400B379D  movss   dword ptr [rbp-34h], xmm0
00000001400B37A2  movaps  xmm0, xmm8
00000001400B37A6  mulss   xmm0, dword ptr [rcx]
00000001400B37AA  mulss   xmm8, dword ptr [rcx+8]
00000001400B37B0  lea     rcx, [rbp-68h]
00000001400B37B4  addss   xmm0, dword ptr [rdi-8]
00000001400B37B9  movss   dword ptr [rbp-30h], xmm7
00000001400B37BE  addss   xmm8, dword ptr [rdi]
00000001400B37C3  movss   dword ptr [rbp-2Ch], xmm0
00000001400B37C8  movss   dword ptr [rbp-24h], xmm8
00000001400B37CE  call    sub_1400D6890
00000001400B37D3  test    eax, eax
00000001400B37D5  jz      loc_1400B398B
00000001400B37DB  movss   xmm6, dword ptr [rbp-78h]
00000001400B37E0  movss   xmm7, dword ptr [rbp+0C900h+var_C974_4]
00000001400B37E5  movaps  xmm3, xmm6
00000001400B37E8  movss   xmm10, dword ptr [rbp-68h]
00000001400B37EE  movaps  xmm4, xmm7
00000001400B37F1  movss   xmm11, dword ptr [rbp-64h]
00000001400B37F7  subss   xmm3, xmm10
00000001400B37FC  movss   xmm8, dword ptr [rbp+0C900h+var_C974_4+4]
00000001400B3802  subss   xmm4, xmm11
00000001400B3807  movss   xmm12, dword ptr [rbp-60h]
00000001400B380D  movaps  xmm5, xmm8
00000001400B3811  subss   xmm5, xmm12
00000001400B3816  movaps  xmm0, xmm3
00000001400B3819  movaps  xmm2, xmm4
00000001400B381C  mulss   xmm0, xmm3
00000001400B3820  mulss   xmm2, xmm4
00000001400B3824  movaps  xmm1, xmm5
00000001400B3827  mulss   xmm1, xmm5
00000001400B382B  addss   xmm2, xmm0
00000001400B382F  addss   xmm2, xmm1
00000001400B3833  xorps   xmm1, xmm1
00000001400B3836  sqrtss  xmm1, xmm2
00000001400B383A  ucomiss xmm1, xmm9
00000001400B383E  jz      short loc_1400B385C
00000001400B3840  movaps  xmm0, xmm15
00000001400B3844  divss   xmm0, xmm1
00000001400B3848  movaps  xmm1, xmm0
00000001400B384B  movaps  xmm2, xmm0
00000001400B384E  mulss   xmm1, xmm3
00000001400B3852  mulss   xmm2, xmm4
00000001400B3856  mulss   xmm0, xmm5
00000001400B385A  jmp     short loc_1400B3868
00000001400B385C  movaps  xmm1, xmm9
00000001400B3860  movaps  xmm2, xmm9
00000001400B3864  movaps  xmm0, xmm9
00000001400B3868  movsxd  r10, dword ptr [rdi-0Ch]
00000001400B386C  lea     r8, dword_140404A6C+457CC8Ch
00000001400B3873  movsxd  rdx, dword ptr [r15-0Ch]
00000001400B3877  addss   xmm8, xmm12
00000001400B387C  subss   xmm13, dword ptr [rsp+70h]
00000001400B3883  movss   xmm12, cs:dword_140278304
00000001400B388C  addss   xmm6, xmm10
00000001400B3891  movss   cs:dword_140404A6C+1167FE28h, xmm0
00000001400B3899  addss   xmm7, xmm11
00000001400B389E  imul    rcx, r10, 0BCh
00000001400B38A5  mulss   xmm8, xmm14
00000001400B38AA  mulss   xmm6, xmm14
00000001400B38AF  mulss   xmm7, xmm14
00000001400B38B4  lea     rax, dword_140404A6C+1167FE20h
00000001400B38BB  lea     r9, [rsp+58h]
00000001400B38C0  movaps  xmm0, xmm6
00000001400B38C3  movss   cs:dword_140404A6C+1167FE20h, xmm1
00000001400B38CB  movss   cs:dword_140404A6C+1167FE14h, xmm6
00000001400B38D3  subss   xmm0, dword ptr [rcx+r8]
00000001400B38D9  movaps  xmm1, xmm7
00000001400B38DC  movss   cs:dword_140404A6C+1167FE18h, xmm7
00000001400B38E4  subss   xmm1, dword ptr [rcx+r8+4]
00000001400B38EB  movss   cs:dword_140404A6C+1167FE1Ch, xmm8
00000001400B38F4  movss   cs:dword_140404A6C+1167FE24h, xmm2
00000001400B38FC  movss   dword ptr [rsp+78h], xmm0
00000001400B3902  movaps  xmm0, xmm8
00000001400B3906  subss   xmm0, dword ptr [rcx+r8+8]
00000001400B390D  imul    rcx, rdx, 0BCh
00000001400B3914  movss   dword ptr [rbp-80h], xmm0
00000001400B3919  movss   xmm0, cs:dword_1402781BC
00000001400B3921  movss   dword ptr [rsp+40h], xmm0
00000001400B3927  movss   xmm0, cs:dword_140278178
00000001400B392F  movss   dword ptr [rsp+38h], xmm0
00000001400B3935  movss   dword ptr [rsp+30h], xmm12
00000001400B393C  movss   dword ptr [rsp+28h], xmm13
00000001400B3943  movss   dword ptr [rsp+7Ch], xmm1
00000001400B3949  subss   xmm6, dword ptr [rcx+r8]
00000001400B394F  subss   xmm7, dword ptr [rcx+r8+4]
00000001400B3956  subss   xmm8, dword ptr [rcx+r8+8]
00000001400B395D  lea     r8, [rsp+78h]
00000001400B3962  mov     [rsp+20h], rax
00000001400B3967  mov     ecx, r10d
00000001400B396A  movss   dword ptr [rsp+58h], xmm6
00000001400B3970  movss   dword ptr [rsp+5Ch], xmm7
00000001400B3976  movss   dword ptr [rsp+60h], xmm8
00000001400B397D  call    sub_1400052C0
00000001400B3982  movss   xmm10, cs:dword_140278BD0
00000001400B398B  lea     r8, dword_140404A6C+42E99AF0h
00000001400B3992  inc     ebx
00000001400B3994  add     r14, 1Ah
00000001400B3998  add     rsi, 64h ; 'd'
00000001400B399C  add     rdi, 138h
00000001400B39A3  cmp     ebx, 10h
00000001400B39A6  jl      loc_1400B36F0
00000001400B39AC  mov     r15d, [rsp+68h]
00000001400B39B1  lea     rdi, cs:140000000h
00000001400B39B8  mov     rdx, [rsp+50h]
00000001400B39BD  lea     r9, dword_140404A6C+435994CCh
00000001400B39C4  mov     rcx, [rbp-20h]
00000001400B39C8  mov     rbx, [rbp-58h]
00000001400B39CC  inc     r15d
00000001400B39CF  add     rcx, 1Ah
00000001400B39D3  add     rdx, 138h
00000001400B39DA  mov     [rsp+68h], r15d
00000001400B39DF  add     r13, 64h ; 'd'
00000001400B39E3  mov     [rbp-20h], rcx
00000001400B39E7  mov     [rsp+50h], rdx
00000001400B39EC  cmp     r15d, 10h
00000001400B39F0  jl      loc_1400B3635
00000001400B39F6  add     r12, 6FF8h
00000001400B39FD  cmp     r12, 6FF800h
00000001400B3A04  jl      loc_1400B3570
00000001400B3A0A  movaps  xmm15, xmmword ptr [rsp+0C940h]
00000001400B3A13  movaps  xmm14, xmmword ptr [rsp+0C950h]
00000001400B3A1C  movaps  xmm12, xmmword ptr [rsp+0C970h]
00000001400B3A25  mov     rcx, [rbp+0C830h]
00000001400B3A2C  xor     rcx, rsp
00000001400B3A2F  call    1401F8B20h
00000001400B3A34  lea     r11, [rsp+0C9E0h]
00000001400B3A3C  mov     rbx, [r11+38h]
00000001400B3A40  mov     rsi, [r11+40h]
00000001400B3A44  mov     rdi, [r11+48h]
00000001400B3A48  movaps  xmm6, xmmword ptr [r11-10h]
00000001400B3A4D  movaps  xmm7, xmmword ptr [r11-20h]
00000001400B3A52  movaps  xmm8, xmmword ptr [r11-30h]
00000001400B3A57  movaps  xmm9, xmmword ptr [r11-40h]
00000001400B3A5C  movaps  xmm10, xmmword ptr [r11-50h]
00000001400B3A61  movaps  xmm11, xmmword ptr [r11-60h]
00000001400B3A66  movaps  xmm13, xmmword ptr [r11-80h]
00000001400B3A6B  mov     rsp, r11
00000001400B3A6E  pop     r15
00000001400B3A70  pop     r14
00000001400B3A72  pop     r13
00000001400B3A74  pop     r12
00000001400B3A76  pop     rbp
00000001400B3A77  retn
