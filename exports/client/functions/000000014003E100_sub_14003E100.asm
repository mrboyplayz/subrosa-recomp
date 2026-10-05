; 0x14003e100: sub_14003E100
; Decompilation failed: call analysis failed
000000014003E100  mov     rax, rsp
000000014003E103  mov     [rax+8], rbx
000000014003E107  mov     [rax+10h], rsi
000000014003E10B  mov     [rax+18h], rdi
000000014003E10F  mov     [rax+20h], r9
000000014003E113  push    rbp
000000014003E114  push    r12
000000014003E116  push    r13
000000014003E118  push    r14
000000014003E11A  push    r15
000000014003E11C  lea     rbp, [rax-37h]
000000014003E120  sub     rsp, 100h
000000014003E127  mov     r13d, dword ptr [rbp+2Fh+arg_18_2]
000000014003E12B  lea     r12, dword_1402B3664
000000014003E132  movaps  xmmword ptr [rax-38h], xmm6
000000014003E136  lea     r14, dword_1402B3558
000000014003E13D  movss   xmm6, dword ptr [rbp+2Fh+arg_18_5]
000000014003E142  mov     rdi, rdx
000000014003E145  movaps  xmmword ptr [rax-48h], xmm7
000000014003E149  lea     rdx, dword_1402B34F0
000000014003E150  movss   xmm7, dword ptr [rbp+2Fh+arg_18_1]
000000014003E155  mov     r15, r8
000000014003E158  movaps  xmmword ptr [rax-58h], xmm8
000000014003E15D  mov     rsi, rcx
000000014003E160  movaps  xmmword ptr [rax-68h], xmm9
000000014003E165  xor     ebx, ebx
000000014003E167  movaps  xmmword ptr [rax-78h], xmm10
000000014003E16C  mov     rax, [rbp+2Fh+arg_18_3]
000000014003E170  mov     dword ptr [r8], 47800000h
000000014003E177  movd    xmm8, dword ptr [rax]
000000014003E17C  movd    xmm9, dword ptr [rax+4]
000000014003E182  movd    xmm10, dword ptr [rax+8]
000000014003E188  cvtdq2ps xmm8, xmm8
000000014003E18C  cvtdq2ps xmm9, xmm9
000000014003E190  cvtdq2ps xmm10, xmm10
000000014003E194  nop     dword ptr [rax+00h]
000000014003E198  nop     dword ptr [rax+rax+00000000h]
000000014003E1A0  mov     ecx, ebx
000000014003E1A2  mov     eax, 40h ; '@'
000000014003E1A7  shl     eax, cl
000000014003E1A9  test    r13d, eax
000000014003E1AC  setnz   cl
000000014003E1AF  bt      r13d, ebx
000000014003E1B3  setb    al
000000014003E1B6  test    al, cl
000000014003E1B8  jz      loc_14003E447
000000014003E1BE  movsxd  rax, dword ptr [r12-4]
000000014003E1C3  lea     r8, [rbp+2Fh+arg_18_1]
000000014003E1C7  movaps  xmm0, xmm8
000000014003E1CB  movaps  xmm1, xmm9
000000014003E1CF  lea     rcx, [rax+rax*2]
000000014003E1D3  movsxd  rax, dword ptr [r12]
000000014003E1D7  addss   xmm0, dword ptr [rdx+rcx*4]
000000014003E1DC  addss   xmm1, dword ptr [rdx+rcx*4+4]
000000014003E1E2  mulss   xmm0, xmm7
000000014003E1E6  mulss   xmm1, xmm7
000000014003E1EA  movss   [rbp+2Fh+var_A0], xmm0
000000014003E1EF  movaps  xmm0, xmm10
000000014003E1F3  addss   xmm0, dword ptr [rdx+rcx*4+8]
000000014003E1F9  lea     rcx, [rax+rax*2]
000000014003E1FD  movss   [rbp+2Fh+var_9C], xmm1
000000014003E202  movsxd  rax, dword ptr [r12+4]
000000014003E207  movaps  xmm1, xmm9
000000014003E20B  addss   xmm1, dword ptr [rdx+rcx*4+4]
000000014003E211  mulss   xmm0, xmm7
000000014003E215  mulss   xmm1, xmm7
000000014003E219  movss   [rbp+2Fh+var_98], xmm0
000000014003E21E  movaps  xmm0, xmm8
000000014003E222  addss   xmm0, dword ptr [rdx+rcx*4]
000000014003E227  movss   [rbp+2Fh+var_8C], xmm1
000000014003E22C  movaps  xmm1, xmm9
000000014003E230  mulss   xmm0, xmm7
000000014003E234  movss   [rbp+2Fh+var_90], xmm0
000000014003E239  movaps  xmm0, xmm10
000000014003E23D  addss   xmm0, dword ptr [rdx+rcx*4+8]
000000014003E243  lea     rcx, [rax+rax*2]
000000014003E247  movsxd  rax, dword ptr [r12+8]
000000014003E24C  addss   xmm1, dword ptr [rdx+rcx*4+4]
000000014003E252  mulss   xmm0, xmm7
000000014003E256  mulss   xmm1, xmm7
000000014003E25A  movss   [rbp+2Fh+var_88], xmm0
000000014003E25F  movaps  xmm0, xmm8
000000014003E263  addss   xmm0, dword ptr [rdx+rcx*4]
000000014003E268  movss   [rbp+2Fh+var_AC], xmm1
000000014003E26D  movaps  xmm1, xmm9
000000014003E271  mulss   xmm0, xmm7
000000014003E275  movss   [rsp+120h+var_B0], xmm0
000000014003E27B  movaps  xmm0, xmm10
000000014003E27F  addss   xmm0, dword ptr [rdx+rcx*4+8]
000000014003E285  lea     rcx, [rax+rax*2]
000000014003E289  addss   xmm1, dword ptr [rdx+rcx*4+4]
000000014003E28F  lea     rax, [rsp+120h+var_B0]
000000014003E294  mov     [rsp+120h+var_E0], rax
000000014003E299  lea     rax, [rbp+2Fh+var_90]
000000014003E29D  mulss   xmm0, xmm7
000000014003E2A1  mov     [rsp+120h+var_E8], rax
000000014003E2A6  lea     rax, [rbp+2Fh+var_A0]
000000014003E2AA  mov     [rsp+120h+var_F0], rax
000000014003E2AF  mov     rax, [rbp+2Fh+arg_18_4]
000000014003E2B3  movss   [rbp+2Fh+var_A8], xmm0
000000014003E2B8  movaps  xmm0, xmm8
000000014003E2BC  addss   xmm0, dword ptr [rdx+rcx*4]
000000014003E2C1  mulss   xmm1, xmm7
000000014003E2C5  movss   dword ptr [rsp+120h+var_F8], xmm6
000000014003E2CB  mov     qword ptr [rsp+120h+var_100], rax
000000014003E2D0  mulss   xmm0, xmm7
000000014003E2D4  movss   [rbp+2Fh+var_7C], xmm1
000000014003E2D9  movss   xmm1, dword ptr [r14-4]
000000014003E2DF  movss   [rbp+2Fh+var_80], xmm0
000000014003E2E4  movaps  xmm0, xmm10
000000014003E2E8  addss   xmm0, dword ptr [rdx+rcx*4+8]
000000014003E2EE  lea     rdx, [rsp+120h+var_D0]
000000014003E2F3  movss   [rsp+120h+var_CC], xmm1
000000014003E2F9  lea     rcx, [rsp+120h+var_C0]
000000014003E2FE  mulss   xmm0, xmm7
000000014003E302  movss   [rbp+2Fh+var_78], xmm0
000000014003E307  movss   xmm0, dword ptr [r14-8]
000000014003E30D  movss   [rsp+120h+var_D0], xmm0
000000014003E313  movss   xmm0, dword ptr [r14]
000000014003E318  movss   [rsp+120h+var_C8], xmm0
000000014003E31E  call    sub_14003F0B0
000000014003E323  test    eax, eax
000000014003E325  jz      short loc_14003E37D
000000014003E327  movss   xmm2, dword ptr [rbp+2Fh+arg_18_1]
000000014003E32C  comiss  xmm2, dword ptr [r15]
000000014003E330  jnb     short loc_14003E37D
000000014003E332  movss   xmm0, [rsp+120h+var_C0]
000000014003E338  movss   xmm1, [rsp+120h+var_BC]
000000014003E33E  movss   dword ptr [rsi], xmm0
000000014003E342  movss   xmm0, [rsp+120h+var_B8]
000000014003E348  movss   dword ptr [rsi+4], xmm1
000000014003E34D  movss   xmm1, [rsp+120h+var_D0]
000000014003E353  movss   dword ptr [rsi+8], xmm0
000000014003E358  movss   xmm0, [rsp+120h+var_CC]
000000014003E35E  movss   dword ptr [rdi], xmm1
000000014003E362  movss   xmm1, [rsp+120h+var_C8]
000000014003E368  movss   dword ptr [rdi+8], xmm1
000000014003E36D  movss   dword ptr [rdi+4], xmm0
000000014003E372  movss   dword ptr [r15], xmm2
000000014003E377  mov     cs:dword_140404A6C+1167FE80h, ebx
000000014003E37D  movss   xmm0, dword ptr [r14-8]
000000014003E383  lea     rax, [rbp+2Fh+var_80]
000000014003E387  movss   xmm1, dword ptr [r14-4]
000000014003E38D  lea     r8, [rbp+2Fh+arg_18_1]
000000014003E391  mov     r9, [rbp+2Fh+arg_18]
000000014003E395  lea     rdx, [rsp+120h+var_D0]
000000014003E39A  mov     [rsp+120h+var_E0], rax
000000014003E39F  lea     rcx, [rsp+120h+var_C0]
000000014003E3A4  lea     rax, [rsp+120h+var_B0]
000000014003E3A9  movss   [rsp+120h+var_D0], xmm0
000000014003E3AF  movss   xmm0, dword ptr [r14]
000000014003E3B4  mov     [rsp+120h+var_E8], rax
000000014003E3B9  lea     rax, [rbp+2Fh+var_A0]
000000014003E3BD  mov     [rsp+120h+var_F0], rax
000000014003E3C2  mov     rax, [rbp+2Fh+arg_18_4]
000000014003E3C6  movss   dword ptr [rsp+120h+var_F8], xmm6
000000014003E3CC  mov     qword ptr [rsp+120h+var_100], rax
000000014003E3D1  movss   [rsp+120h+var_CC], xmm1
000000014003E3D7  movss   [rsp+120h+var_C8], xmm0
000000014003E3DD  call    sub_14003F0B0
000000014003E3E2  mov     r9, [rbp+2Fh+arg_18]
000000014003E3E6  lea     rdx, dword_1402B34F0
000000014003E3ED  test    eax, eax
000000014003E3EF  jz      short loc_14003E447
000000014003E3F1  movss   xmm2, dword ptr [rbp+2Fh+arg_18_1]
000000014003E3F6  comiss  xmm2, dword ptr [r15]
000000014003E3FA  jnb     short loc_14003E447
000000014003E3FC  movss   xmm0, [rsp+120h+var_C0]
000000014003E402  movss   xmm1, [rsp+120h+var_BC]
000000014003E408  movss   dword ptr [rsi], xmm0
000000014003E40C  movss   xmm0, [rsp+120h+var_B8]
000000014003E412  movss   dword ptr [rsi+4], xmm1
000000014003E417  movss   xmm1, [rsp+120h+var_D0]
000000014003E41D  movss   dword ptr [rsi+8], xmm0
000000014003E422  movss   xmm0, [rsp+120h+var_CC]
000000014003E428  movss   dword ptr [rdi], xmm1
000000014003E42C  movss   xmm1, [rsp+120h+var_C8]
000000014003E432  movss   dword ptr [rdi+8], xmm1
000000014003E437  movss   dword ptr [rdi+4], xmm0
000000014003E43C  movss   dword ptr [r15], xmm2
000000014003E441  mov     cs:dword_140404A6C+1167FE80h, ebx
000000014003E447  inc     ebx
000000014003E449  add     r12, 10h
000000014003E44D  add     r14, 0Ch
000000014003E451  cmp     ebx, 6
000000014003E454  jl      loc_14003E1A0
000000014003E45A  movss   xmm0, dword ptr [r15]
000000014003E45F  lea     r11, [rsp+120h+var_20]
000000014003E467  comiss  xmm0, cs:dword_140278ADC
000000014003E46E  mov     rbx, [r11+30h]
000000014003E472  mov     eax, 0
000000014003E477  mov     rsi, [r11+38h]
000000014003E47B  mov     rdi, [r11+40h]
000000014003E47F  movaps  xmm6, xmmword ptr [r11-10h]
000000014003E484  movaps  xmm7, xmmword ptr [r11-20h]
000000014003E489  movaps  xmm8, xmmword ptr [r11-30h]
000000014003E48E  setb    al
000000014003E491  movaps  xmm9, xmmword ptr [r11-40h]
000000014003E496  movaps  xmm10, xmmword ptr [r11-50h]
000000014003E49B  mov     rsp, r11
000000014003E49E  pop     r15
000000014003E4A0  pop     r14
000000014003E4A2  pop     r13
000000014003E4A4  pop     r12
000000014003E4A6  pop     rbp
000000014003E4A7  retn
