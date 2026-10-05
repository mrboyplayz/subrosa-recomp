; 0x14010d0d0: sub_14010D0D0
; Decompilation failed: stack frame is too big
000000014010D0D0  mov     [rsp+18h], rbx
000000014010D0D5  push    rbp
000000014010D0D6  push    rsi
000000014010D0D7  push    rdi
000000014010D0D8  push    r12
000000014010D0DA  push    r13
000000014010D0DC  push    r14
000000014010D0DE  push    r15
000000014010D0E0  lea     rbp, [rsp-0C130h]
000000014010D0E8  mov     eax, 0C230h
000000014010D0ED  call    sub_1401F89D0
000000014010D0F2  sub     rsp, rax
000000014010D0F5  movaps  xmmword ptr [rsp+0C220h], xmm6
000000014010D0FD  movaps  xmmword ptr [rsp+0C210h], xmm7
000000014010D105  movaps  xmmword ptr [rsp+0C200h], xmm8
000000014010D10E  movaps  xmmword ptr [rsp+0C1F0h], xmm9
000000014010D117  movaps  xmmword ptr [rsp+0C1E0h], xmm10
000000014010D120  movaps  xmmword ptr [rsp+0C1D0h], xmm11
000000014010D129  mov     rax, cs:__security_cookie
000000014010D130  xor     rax, rsp
000000014010D133  mov     [rbp+0C0C0h], rax
000000014010D13A  movss   xmm2, cs:dword_140278148
000000014010D142  lea     r13, cs:140000000h
000000014010D149  movsxd  rax, ecx
000000014010D14C  xor     r10d, r10d
000000014010D14F  imul    r8, rax, 5168h
000000014010D156  movsxd  rax, edx
000000014010D159  imul    rcx, rax, 0ACh
000000014010D160  mov     dword ptr [rbp-70h], 0
000000014010D167  mov     dword ptr [rbp+0BF94h], 0
000000014010D171  lea     rax, [rcx+r8]
000000014010D175  movss   xmm6, dword ptr [rax+r13+1F2DCB78h]
000000014010D17F  lea     r14, [rcx+r8]
000000014010D183  movsxd  r15, dword ptr [r14+r13+1F2DCB44h]
000000014010D18B  lea     rax, [rcx+r8]
000000014010D18F  addss   xmm6, dword ptr [rax+r13+1F2DCB48h]
000000014010D199  imul    rax, r15, 0BCh
000000014010D1A0  movaps  xmm9, xmm6
000000014010D1A4  movaps  xmm11, xmm6
000000014010D1A8  mov     [rsp+50h], r14
000000014010D1AD  mov     rsi, r15
000000014010D1B0  mov     [rsp+64h], r15d
000000014010D1B5  mov     [rsp+40h], r15
000000014010D1BA  movss   xmm0, dword ptr [rax+r13+49816F8h]
000000014010D1C4  movaps  xmm7, xmm0
000000014010D1C7  addss   xmm9, xmm0
000000014010D1CC  movss   xmm0, dword ptr [rax+r13+49816FCh]
000000014010D1D6  subss   xmm7, xmm6
000000014010D1DA  movaps  xmm10, xmm0
000000014010D1DE  addss   xmm11, xmm0
000000014010D1E3  movss   xmm0, dword ptr [rax+r13+4981700h]
000000014010D1ED  subss   xmm10, xmm6
000000014010D1F2  movaps  xmm8, xmm0
000000014010D1F6  subss   xmm8, xmm6
000000014010D1FB  movss   dword ptr [rbp+0BFA0h], xmm9
000000014010D204  addss   xmm6, xmm0
000000014010D208  movss   dword ptr [rbp+0BFB0h], xmm7
000000014010D210  movaps  xmm0, xmm7
000000014010D213  movss   dword ptr [rbp+0BFA4h], xmm11
000000014010D21C  mulss   xmm0, xmm2
000000014010D220  movaps  xmm1, xmm8
000000014010D224  movss   dword ptr [rbp+0BFB4h], xmm10
000000014010D22D  mulss   xmm1, xmm2
000000014010D231  cvttss2si r12d, xmm0
000000014010D236  movaps  xmm0, xmm9
000000014010D23A  movss   dword ptr [rbp+0BFB8h], xmm8
000000014010D243  mulss   xmm0, xmm2
000000014010D247  cvttss2si ecx, xmm1
000000014010D24B  cvttss2si edx, xmm0
000000014010D24F  movaps  xmm0, xmm6
000000014010D252  movss   dword ptr [rbp+0BFA8h], xmm6
000000014010D25A  mulss   xmm0, xmm2
000000014010D25E  mov     [rsp+60h], edx
000000014010D262  cvttss2si eax, xmm0
000000014010D266  cmp     ecx, eax
000000014010D268  jg      loc_14010D31B
000000014010D26E  movsxd  r15, ecx
000000014010D271  lea     r14, cs:140000000h
000000014010D278  mov     rsi, r15
000000014010D27B  xor     r8d, r8d
000000014010D27E  shl     rsi, 6
000000014010D282  sub     eax, ecx
000000014010D284  lea     r13d, [rax+1]
000000014010D288  cmp     r15, 3Fh ; '?'
000000014010D28C  ja      short loc_14010D2F8
000000014010D28E  cmp     r12d, edx
000000014010D291  jg      short loc_14010D2F8
000000014010D293  mov     edi, edx
000000014010D295  movsxd  rbx, r12d
000000014010D298  sub     edi, r12d
000000014010D29B  inc     edi
000000014010D29D  nop     dword ptr [rax]
000000014010D2A0  cmp     rbx, 3Fh ; '?'
000000014010D2A4  ja      short loc_14010D2EB
000000014010D2A6  lea     r9, [rsi+rbx]
000000014010D2AA  xor     edx, edx
000000014010D2AC  lea     rax, [r9+r9*8]
000000014010D2B0  movsxd  r11, (rva dword_140404A6C+3CA46B8Ch)[r14+rax*4]
000000014010D2B8  test    r11, r11
000000014010D2BB  jle     short loc_14010D2EB
000000014010D2BD  nop     dword ptr [rax]
000000014010D2C0  cmp     r8, 40h ; '@'
000000014010D2C4  jge     short loc_14010D2E3
000000014010D2C6  lea     rcx, [rdx+r9*8]
000000014010D2CA  inc     r10d
000000014010D2CD  add     rcx, r9
000000014010D2D0  mov     eax, (rva dword_140404A6C+3CA46B90h)[r14+rcx*4]
000000014010D2D8  mov     [rbp+r8*4+0BFC0h], eax
000000014010D2E0  inc     r8
000000014010D2E3  inc     rdx
000000014010D2E6  cmp     rdx, r11
000000014010D2E9  jl      short loc_14010D2C0
000000014010D2EB  inc     rbx
000000014010D2EE  sub     rdi, 1
000000014010D2F2  jnz     short loc_14010D2A0
000000014010D2F4  mov     edx, [rsp+60h]
000000014010D2F8  inc     r15
000000014010D2FB  add     rsi, 40h ; '@'
000000014010D2FF  sub     r13, 1
000000014010D303  jnz     short loc_14010D288
000000014010D305  mov     r14, [rsp+50h]
000000014010D30A  lea     r13, cs:140000000h
000000014010D311  mov     r15d, [rsp+64h]
000000014010D316  mov     rsi, [rsp+40h]
000000014010D31B  movsxd  rdi, r10d
000000014010D31E  test    r10d, r10d
000000014010D321  jle     loc_14010D3A8
000000014010D327  xor     ebx, ebx
000000014010D329  nop     dword ptr [rax+00000000h]
000000014010D330  movsxd  r9, dword ptr [rbp+rbx*4+0BFC0h]
000000014010D338  imul    rcx, r9, 0F120h
000000014010D33F  comiss  xmm9, dword ptr [rcx+r13+55ADF9E4h]
000000014010D348  jb      short loc_14010D3A0
000000014010D34A  comiss  xmm11, dword ptr [rcx+r13+55ADF9E8h]
000000014010D353  jb      short loc_14010D3A0
000000014010D355  comiss  xmm6, dword ptr [rcx+r13+55ADF9ECh]
000000014010D35E  jb      short loc_14010D3A0
000000014010D360  comiss  xmm7, dword ptr [rcx+r13+55ADF9F0h]
000000014010D369  ja      short loc_14010D3A0
000000014010D36B  comiss  xmm10, dword ptr [rcx+r13+55ADF9F4h]
000000014010D374  ja      short loc_14010D3A0
000000014010D376  comiss  xmm8, dword ptr [rcx+r13+55ADF9F8h]
000000014010D37F  ja      short loc_14010D3A0
000000014010D381  lea     r8, [rbp+0BFA0h]
000000014010D388  mov     dword ptr [rsp+20h], 2
000000014010D390  lea     rdx, [rbp+0BFB0h]
000000014010D397  lea     rcx, [rbp-70h]
000000014010D39B  call    sub_140188720
000000014010D3A0  inc     rbx
000000014010D3A3  cmp     rbx, rdi
000000014010D3A6  jl      short loc_14010D330
000000014010D3A8  movss   xmm9, dword ptr cs:xmmword_140279870
000000014010D3B1  xor     edi, edi
000000014010D3B3  movss   xmm6, cs:dword_140278224
000000014010D3BB  movss   xmm7, cs:dword_140278178
000000014010D3C3  movss   xmm8, cs:dword_14027841C
000000014010D3CC  imul    rbx, rsi, 0BCh
000000014010D3D3  movss   xmm1, dword ptr [rbx+r13+49816F8h]
000000014010D3DD  movss   xmm3, dword ptr [rbx+r13+49816FCh]
000000014010D3E7  movss   xmm4, dword ptr [rbx+r13+4981700h]
000000014010D3F1  movss   dword ptr [rsp+40h], xmm1
000000014010D3F7  movss   dword ptr [rsp+44h], xmm3
000000014010D3FD  movss   dword ptr [rsp+48h], xmm4
000000014010D403  test    edi, edi
000000014010D405  jnz     short loc_14010D417
000000014010D407  movss   xmm2, dword ptr [r14+r13+1F2DCB48h]
000000014010D411  xorps   xmm2, xmm9
000000014010D415  jmp     short loc_14010D426
000000014010D417  cmp     edi, 1
000000014010D41A  jnz     short loc_14010D468
000000014010D41C  movss   xmm2, dword ptr [r14+r13+1F2DCB48h]
000000014010D426  movaps  xmm0, xmm2
000000014010D429  mulss   xmm0, dword ptr [rbx+r13+498171Ch]
000000014010D433  addss   xmm0, xmm1
000000014010D437  movaps  xmm1, xmm2
000000014010D43A  mulss   xmm1, dword ptr [rbx+r13+4981720h]
000000014010D444  mulss   xmm2, dword ptr [rbx+r13+4981724h]
000000014010D44E  addss   xmm1, xmm3
000000014010D452  movss   dword ptr [rsp+40h], xmm0
000000014010D458  addss   xmm2, xmm4
000000014010D45C  movss   dword ptr [rsp+44h], xmm1
000000014010D462  movss   dword ptr [rsp+48h], xmm2
000000014010D468  movss   xmm2, dword ptr [r14+r13+1F2DCB78h]
000000014010D472  lea     rsi, (rva dword_140404A6C+457CCB0h)[r13]
000000014010D479  add     rsi, rbx
000000014010D47C  lea     rcx, [rsp+40h]
000000014010D481  mov     rdx, rsi
000000014010D484  call    sub_14003DE80
000000014010D489  test    eax, eax
000000014010D48B  jz      loc_14010D512
000000014010D491  movss   xmm0, cs:dword_140404A6C+1167FE14h
000000014010D499  lea     r8, dword_140404A6C+1167FE20h
000000014010D4A0  subss   xmm0, dword ptr [rbx+r13+49816F8h]
000000014010D4AA  movss   xmm1, cs:dword_140404A6C+1167FE18h
000000014010D4B2  lea     rdx, [rsp+50h]
000000014010D4B7  movss   xmm3, dword ptr [r14+r13+1F2DCB78h]
000000014010D4C1  mov     ecx, r15d
000000014010D4C4  subss   xmm1, dword ptr [rbx+r13+49816FCh]
000000014010D4CE  subss   xmm3, cs:dword_140404A6C+1167FE30h
000000014010D4D6  movss   dword ptr [rsp+50h], xmm0
000000014010D4DC  movss   xmm0, cs:dword_140404A6C+1167FE1Ch
000000014010D4E4  subss   xmm0, dword ptr [rbx+r13+4981700h]
000000014010D4EE  movss   dword ptr [rsp+30h], xmm6
000000014010D4F4  movss   dword ptr [rsp+28h], xmm7
000000014010D4FA  movss   dword ptr [rsp+54h], xmm1
000000014010D500  movss   dword ptr [rsp+20h], xmm8
000000014010D507  movss   dword ptr [rsp+58h], xmm0
000000014010D50D  call    sub_140005160
000000014010D512  movss   xmm0, dword ptr [r14+r13+1F2DCB78h]
000000014010D51C  lea     r8, [rsp+40h]
000000014010D521  mov     r9, rsi
000000014010D524  movss   dword ptr [rsp+20h], xmm0
000000014010D52A  lea     rdx, [rbp-70h]
000000014010D52E  lea     rcx, [rsp+68h]
000000014010D533  call    sub_14003D830
000000014010D538  test    eax, eax
000000014010D53A  jz      short loc_14010D5B2
000000014010D53C  movss   xmm0, dword ptr [rsp+68h]
000000014010D542  lea     r8, [rsp+74h]
000000014010D547  subss   xmm0, dword ptr [rbx+r13+49816F8h]
000000014010D551  movss   xmm1, dword ptr [rsp+6Ch]
000000014010D557  lea     rdx, [rsp+50h]
000000014010D55C  movss   xmm3, dword ptr [r14+r13+1F2DCB78h]
000000014010D566  mov     ecx, r15d
000000014010D569  subss   xmm1, dword ptr [rbx+r13+49816FCh]
000000014010D573  subss   xmm3, dword ptr [rbp-7Ch]
000000014010D578  movss   dword ptr [rsp+50h], xmm0
000000014010D57E  movss   xmm0, dword ptr [rsp+70h]
000000014010D584  subss   xmm0, dword ptr [rbx+r13+4981700h]
000000014010D58E  movss   dword ptr [rsp+30h], xmm6
000000014010D594  movss   dword ptr [rsp+28h], xmm7
000000014010D59A  movss   dword ptr [rsp+54h], xmm1
000000014010D5A0  movss   dword ptr [rsp+20h], xmm8
000000014010D5A7  movss   dword ptr [rsp+58h], xmm0
000000014010D5AD  call    sub_140005160
000000014010D5B2  inc     edi
000000014010D5B4  cmp     edi, 2
000000014010D5B7  jl      loc_14010D3D3
000000014010D5BD  mov     cs:dword_140404A6C+2AE9E434h, 0
000000014010D5C7  mov     rcx, [rbp+0C0C0h]
000000014010D5CE  xor     rcx, rsp
000000014010D5D1  call    1401F8B20h
000000014010D5D6  lea     r11, [rsp+0C230h]
000000014010D5DE  mov     rbx, [r11+50h]
000000014010D5E2  movaps  xmm6, xmmword ptr [r11-10h]
000000014010D5E7  movaps  xmm7, xmmword ptr [r11-20h]
000000014010D5EC  movaps  xmm8, xmmword ptr [r11-30h]
000000014010D5F1  movaps  xmm9, xmmword ptr [r11-40h]
000000014010D5F6  movaps  xmm10, xmmword ptr [r11-50h]
000000014010D5FB  movaps  xmm11, xmmword ptr [r11-60h]
000000014010D600  mov     rsp, r11
000000014010D603  pop     r15
000000014010D605  pop     r14
000000014010D607  pop     r13
000000014010D609  pop     r12
000000014010D60B  pop     rdi
000000014010D60C  pop     rsi
000000014010D60D  pop     rbp
000000014010D60E  retn
