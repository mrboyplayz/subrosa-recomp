; 0x1400dc050: sub_1400DC050
; Decompilation failed: stack frame is too big
00000001400DC050  mov     [rsp+18h], rbx
00000001400DC055  push    rbp
00000001400DC056  push    rsi
00000001400DC057  push    rdi
00000001400DC058  push    r12
00000001400DC05A  push    r13
00000001400DC05C  push    r14
00000001400DC05E  push    r15
00000001400DC060  lea     rbp, [rsp-0C110h]
00000001400DC068  mov     eax, 0C210h
00000001400DC06D  call    sub_1401F89D0
00000001400DC072  sub     rsp, rax
00000001400DC075  movaps  xmmword ptr [rsp+0C200h], xmm6
00000001400DC07D  movaps  xmmword ptr [rsp+0C1F0h], xmm7
00000001400DC085  movaps  xmmword ptr [rsp+0C1E0h], xmm8
00000001400DC08E  movaps  xmmword ptr [rsp+0C1D0h], xmm9
00000001400DC097  movaps  xmmword ptr [rsp+0C1C0h], xmm10
00000001400DC0A0  movaps  xmmword ptr [rsp+0C1B0h], xmm11
00000001400DC0A9  mov     rax, cs:__security_cookie
00000001400DC0B0  xor     rax, rsp
00000001400DC0B3  mov     [rbp+0C0A0h], rax
00000001400DC0BA  mov     esi, r8d
00000001400DC0BD  mov     [rsp+68h], rdx
00000001400DC0C2  mov     r8, rdx
00000001400DC0C5  mov     [rsp+60h], rcx
00000001400DC0CA  mov     r13, rdx
00000001400DC0CD  mov     cs:dword_140404A6C+1167FE2Ch, 3F800000h
00000001400DC0D7  mov     rdx, rcx
00000001400DC0DA  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
00000001400DC0E4  mov     r15, rcx
00000001400DC0E7  mov     cs:dword_140404A6C+1167FE9Ch, 0FFFFFFFFh
00000001400DC0F1  lea     rcx, [rsp+38h]
00000001400DC0F6  mov     cs:dword_140404A6C+1167FE68h, 0FFFFFFFFh
00000001400DC100  call    sub_1400D1830
00000001400DC105  test    eax, eax
00000001400DC107  jz      short loc_1400DC16B
00000001400DC109  movss   xmm2, dword ptr [rsp+50h]
00000001400DC10F  movss   xmm0, cs:dword_140404A6C+1167FE2Ch
00000001400DC117  comiss  xmm0, xmm2
00000001400DC11A  jbe     short loc_1400DC16B
00000001400DC11C  movups  xmm0, xmmword ptr [rsp+38h]
00000001400DC121  mov     qword ptr cs:dword_140404A6C+1167FE34h, 0
00000001400DC12C  movss   xmm1, dword ptr [rsp+4Ch]
00000001400DC132  movups  xmmword ptr cs:dword_140404A6C+1167FE14h, xmm0
00000001400DC139  mov     cs:dword_140404A6C+1167FE3Ch, 0
00000001400DC143  movss   xmm0, dword ptr [rsp+48h]
00000001400DC149  movss   cs:dword_140404A6C+1167FE24h, xmm0
00000001400DC151  movss   cs:dword_140404A6C+1167FE28h, xmm1
00000001400DC159  movss   cs:dword_140404A6C+1167FE2Ch, xmm2
00000001400DC161  mov     cs:dword_140404A6C+1167FE68h, 0FFFFFFFFh
00000001400DC16B  xor     r14d, r14d
00000001400DC16E  lea     rdi, dword_140404A6C+1A9A47D4h
00000001400DC175  mov     ebx, r14d
00000001400DC178  nop     dword ptr [rax+rax+00000000h]
00000001400DC180  cmp     [rdi], r14d
00000001400DC183  jz      loc_1400DC241
00000001400DC189  mov     [rsp+28h], r13
00000001400DC18E  lea     r8, [rsp+30h]
00000001400DC193  mov     r9d, ebx
00000001400DC196  mov     [rsp+20h], r15
00000001400DC19B  lea     rdx, [rbp+0BF80h]
00000001400DC1A2  lea     rcx, [rbp+0BF90h]
00000001400DC1A9  call    sub_1400D6B60
00000001400DC1AE  test    eax, eax
00000001400DC1B0  jz      loc_1400DC241
00000001400DC1B6  movss   xmm2, dword ptr [rsp+30h]
00000001400DC1BC  comiss  xmm2, cs:dword_140404A6C+1167FE2Ch
00000001400DC1C3  jnb     short loc_1400DC241
00000001400DC1C5  movss   xmm0, dword ptr [rbp+0BF90h]
00000001400DC1CD  movss   xmm1, dword ptr [rbp+0BF94h]
00000001400DC1D5  movss   cs:dword_140404A6C+1167FE14h, xmm0
00000001400DC1DD  movss   xmm0, dword ptr [rbp+0BF98h]
00000001400DC1E5  movss   cs:dword_140404A6C+1167FE18h, xmm1
00000001400DC1ED  movss   xmm1, dword ptr [rbp+0BF80h]
00000001400DC1F5  movss   cs:dword_140404A6C+1167FE1Ch, xmm0
00000001400DC1FD  movss   xmm0, dword ptr [rbp+0BF84h]
00000001400DC205  movss   cs:dword_140404A6C+1167FE20h, xmm1
00000001400DC20D  movss   xmm1, dword ptr [rbp+0BF88h]
00000001400DC215  movss   cs:dword_140404A6C+1167FE24h, xmm0
00000001400DC21D  movss   cs:dword_140404A6C+1167FE28h, xmm1
00000001400DC225  movss   cs:dword_140404A6C+1167FE2Ch, xmm2
00000001400DC22D  mov     qword ptr cs:dword_140404A6C+1167FE34h, r14
00000001400DC234  mov     cs:dword_140404A6C+1167FE3Ch, r14d
00000001400DC23B  mov     cs:dword_140404A6C+1167FE68h, ebx
00000001400DC241  inc     ebx
00000001400DC243  add     rdi, 100D70h
00000001400DC24A  cmp     ebx, 4
00000001400DC24D  jl      loc_1400DC180
00000001400DC253  test    esi, esi
00000001400DC255  jz      loc_1400DC360
00000001400DC25B  mov     edi, r14d
00000001400DC25E  lea     rbx, dword_140404A6C+6756A930h
00000001400DC265  cmp     [rbx-1Ch], r14d
00000001400DC269  jz      loc_1400DC347
00000001400DC26F  mov     [rsp+28h], r13
00000001400DC274  lea     r8, [rsp+30h]
00000001400DC279  mov     r9d, edi
00000001400DC27C  mov     [rsp+20h], r15
00000001400DC281  lea     rdx, [rbp+0BF80h]
00000001400DC288  lea     rcx, [rbp+0BF90h]
00000001400DC28F  call    sub_1400D8B70
00000001400DC294  test    eax, eax
00000001400DC296  jz      loc_1400DC347
00000001400DC29C  movss   xmm2, dword ptr [rsp+30h]
00000001400DC2A2  comiss  xmm2, cs:dword_140404A6C+1167FE2Ch
00000001400DC2A9  jnb     loc_1400DC347
00000001400DC2AF  movss   xmm0, dword ptr [rbp+0BF90h]
00000001400DC2B7  movss   xmm1, dword ptr [rbp+0BF94h]
00000001400DC2BF  movss   cs:dword_140404A6C+1167FE14h, xmm0
00000001400DC2C7  movss   xmm0, dword ptr [rbp+0BF98h]
00000001400DC2CF  movss   cs:dword_140404A6C+1167FE1Ch, xmm0
00000001400DC2D7  movss   xmm0, dword ptr [rbp+0BF84h]
00000001400DC2DF  movss   cs:dword_140404A6C+1167FE18h, xmm1
00000001400DC2E7  movss   xmm1, dword ptr [rbp+0BF80h]
00000001400DC2EF  movss   cs:dword_140404A6C+1167FE24h, xmm0
00000001400DC2F7  movss   xmm0, dword ptr [rbx-8]
00000001400DC2FC  movss   cs:dword_140404A6C+1167FE20h, xmm1
00000001400DC304  movss   xmm1, dword ptr [rbp+0BF88h]
00000001400DC30C  movss   cs:dword_140404A6C+1167FE34h, xmm0
00000001400DC314  movss   xmm0, dword ptr [rbx]
00000001400DC318  movss   cs:dword_140404A6C+1167FE28h, xmm1
00000001400DC320  movss   xmm1, dword ptr [rbx-4]
00000001400DC325  movss   cs:dword_140404A6C+1167FE3Ch, xmm0
00000001400DC32D  movss   cs:dword_140404A6C+1167FE38h, xmm1
00000001400DC335  movss   cs:dword_140404A6C+1167FE2Ch, xmm2
00000001400DC33D  mov     cs:dword_140404A6C+1167FE68h, 0FFFFFFFFh
00000001400DC347  inc     edi
00000001400DC349  add     rbx, 54h ; 'T'
00000001400DC34D  cmp     edi, 80h
00000001400DC353  jl      loc_1400DC265
00000001400DC359  nop     dword ptr [rax+00000000h]
00000001400DC360  movss   xmm7, dword ptr [r15]
00000001400DC365  movss   xmm0, dword ptr [r13+0]
00000001400DC36B  comiss  xmm7, xmm0
00000001400DC36E  jnb     short loc_1400DC37D
00000001400DC370  movss   dword ptr [rbp+0BF80h], xmm0
00000001400DC378  movaps  xmm6, xmm0
00000001400DC37B  jmp     short loc_1400DC388
00000001400DC37D  movss   dword ptr [rbp+0BF80h], xmm7
00000001400DC385  movaps  xmm6, xmm7
00000001400DC388  movss   xmm2, cs:dword_140278148
00000001400DC390  minss   xmm7, xmm0
00000001400DC394  movss   xmm8, dword ptr [r13+8]
00000001400DC39A  lea     rsi, cs:140000000h
00000001400DC3A1  movss   xmm9, dword ptr [r13+4]
00000001400DC3A7  movaps  xmm10, xmm8
00000001400DC3AB  maxss   xmm10, dword ptr [r15+8]
00000001400DC3B1  minss   xmm8, dword ptr [r15+8]
00000001400DC3B7  movaps  xmm0, xmm7
00000001400DC3BA  movss   dword ptr [rbp+0BF90h], xmm7
00000001400DC3C2  mulss   xmm0, xmm2
00000001400DC3C6  movaps  xmm11, xmm9
00000001400DC3CA  mov     [rsp+70h], r14d
00000001400DC3CF  mov     r11d, r14d
00000001400DC3D2  minss   xmm11, dword ptr [r15+4]
00000001400DC3D8  maxss   xmm9, dword ptr [r15+4]
00000001400DC3DE  cvttss2si r12d, xmm0
00000001400DC3E3  mov     [rbp+0BF74h], r14d
00000001400DC3EA  movaps  xmm0, xmm6
00000001400DC3ED  movss   dword ptr [rbp+0BF98h], xmm8
00000001400DC3F6  mulss   xmm0, xmm2
00000001400DC3FA  movaps  xmm1, xmm8
00000001400DC3FE  mov     [rsp+30h], r12d
00000001400DC403  mulss   xmm1, xmm2
00000001400DC407  cvttss2si edx, xmm0
00000001400DC40B  movaps  xmm0, xmm10
00000001400DC40F  movss   dword ptr [rbp+0BF94h], xmm11
00000001400DC418  mulss   xmm0, xmm2
00000001400DC41C  mov     [rsp+34h], edx
00000001400DC420  cvttss2si ecx, xmm1
00000001400DC424  cvttss2si eax, xmm0
00000001400DC428  movss   dword ptr [rbp+0BF84h], xmm9
00000001400DC431  movss   dword ptr [rbp+0BF88h], xmm10
00000001400DC43A  cmp     ecx, eax
00000001400DC43C  jg      loc_1400DC4EF
00000001400DC442  movsxd  r15, ecx
00000001400DC445  mov     r8, r14
00000001400DC448  mov     rsi, r15
00000001400DC44B  shl     rsi, 6
00000001400DC44F  sub     eax, ecx
00000001400DC451  lea     r13d, [rax+1]
00000001400DC455  cmp     r15, 3Fh ; '?'
00000001400DC459  ja      short loc_1400DC4CD
00000001400DC45B  cmp     r12d, edx
00000001400DC45E  jg      short loc_1400DC4CD
00000001400DC460  mov     edi, edx
00000001400DC462  movsxd  rbx, r12d
00000001400DC465  sub     edi, r12d
00000001400DC468  lea     r12, cs:140000000h
00000001400DC46F  inc     edi
00000001400DC471  cmp     rbx, 3Fh ; '?'
00000001400DC475  ja      short loc_1400DC4BB
00000001400DC477  lea     r9, [rsi+rbx]
00000001400DC47B  mov     rdx, r14
00000001400DC47E  lea     rax, [r9+r9*8]
00000001400DC482  movsxd  r10, (rva dword_140404A6C+3CA46B8Ch)[r12+rax*4]
00000001400DC48A  test    r10, r10
00000001400DC48D  jle     short loc_1400DC4BB
00000001400DC48F  nop
00000001400DC490  cmp     r8, 40h ; '@'
00000001400DC494  jge     short loc_1400DC4B3
00000001400DC496  lea     rcx, [rdx+r9*8]
00000001400DC49A  inc     r11d
00000001400DC49D  add     rcx, r9
00000001400DC4A0  mov     eax, (rva dword_140404A6C+3CA46B90h)[r12+rcx*4]
00000001400DC4A8  mov     [rbp+r8*4+0BFA0h], eax
00000001400DC4B0  inc     r8
00000001400DC4B3  inc     rdx
00000001400DC4B6  cmp     rdx, r10
00000001400DC4B9  jl      short loc_1400DC490
00000001400DC4BB  inc     rbx
00000001400DC4BE  sub     rdi, 1
00000001400DC4C2  jnz     short loc_1400DC471
00000001400DC4C4  mov     r12d, [rsp+30h]
00000001400DC4C9  mov     edx, [rsp+34h]
00000001400DC4CD  inc     r15
00000001400DC4D0  add     rsi, 40h ; '@'
00000001400DC4D4  sub     r13, 1
00000001400DC4D8  jnz     loc_1400DC455
00000001400DC4DE  mov     r15, [rsp+60h]
00000001400DC4E3  lea     rsi, cs:140000000h
00000001400DC4EA  mov     r13, [rsp+68h]
00000001400DC4EF  movsxd  rdi, r11d
00000001400DC4F2  test    r11d, r11d
00000001400DC4F5  jle     loc_1400DC577
00000001400DC4FB  mov     rbx, r14
00000001400DC4FE  xchg    ax, ax
00000001400DC500  movsxd  r9, dword ptr [rbp+rbx*4+0BFA0h]
00000001400DC508  imul    rcx, r9, 0F120h
00000001400DC50F  comiss  xmm6, dword ptr [rcx+rsi+55ADF9E4h]
00000001400DC517  jb      short loc_1400DC56F
00000001400DC519  comiss  xmm9, dword ptr [rcx+rsi+55ADF9E8h]
00000001400DC522  jb      short loc_1400DC56F
00000001400DC524  comiss  xmm10, dword ptr [rcx+rsi+55ADF9ECh]
00000001400DC52D  jb      short loc_1400DC56F
00000001400DC52F  comiss  xmm7, dword ptr [rcx+rsi+55ADF9F0h]
00000001400DC537  ja      short loc_1400DC56F
00000001400DC539  comiss  xmm11, dword ptr [rcx+rsi+55ADF9F4h]
00000001400DC542  ja      short loc_1400DC56F
00000001400DC544  comiss  xmm8, dword ptr [rcx+rsi+55ADF9F8h]
00000001400DC54D  ja      short loc_1400DC56F
00000001400DC54F  lea     r8, [rbp+0BF80h]
00000001400DC556  mov     dword ptr [rsp+20h], 2
00000001400DC55E  lea     rdx, [rbp+0BF90h]
00000001400DC565  lea     rcx, [rsp+70h]
00000001400DC56A  call    sub_140188720
00000001400DC56F  inc     rbx
00000001400DC572  cmp     rbx, rdi
00000001400DC575  jl      short loc_1400DC500
00000001400DC577  mov     r9, r13
00000001400DC57A  lea     rdx, [rsp+70h]
00000001400DC57F  mov     r8, r15
00000001400DC582  lea     rcx, [rsp+38h]
00000001400DC587  call    sub_1400DA300
00000001400DC58C  movss   xmm0, cs:dword_140404A6C+1167FE2Ch
00000001400DC594  test    eax, eax
00000001400DC596  jz      short loc_1400DC5EE
00000001400DC598  movss   xmm2, dword ptr [rsp+50h]
00000001400DC59E  comiss  xmm0, xmm2
00000001400DC5A1  jbe     short loc_1400DC5EE
00000001400DC5A3  movups  xmm0, xmmword ptr [rsp+38h]
00000001400DC5A8  mov     qword ptr cs:dword_140404A6C+1167FE34h, r14
00000001400DC5AF  movss   xmm1, dword ptr [rsp+4Ch]
00000001400DC5B5  movups  xmmword ptr cs:dword_140404A6C+1167FE14h, xmm0
00000001400DC5BC  mov     cs:dword_140404A6C+1167FE3Ch, r14d
00000001400DC5C3  movss   xmm0, dword ptr [rsp+48h]
00000001400DC5C9  movss   cs:dword_140404A6C+1167FE24h, xmm0
00000001400DC5D1  movaps  xmm0, xmm2
00000001400DC5D4  movss   cs:dword_140404A6C+1167FE28h, xmm1
00000001400DC5DC  movss   cs:dword_140404A6C+1167FE2Ch, xmm2
00000001400DC5E4  mov     cs:dword_140404A6C+1167FE68h, 0FFFFFFFFh
00000001400DC5EE  comiss  xmm0, cs:dword_1402783F4
00000001400DC5F5  setb    r14b
00000001400DC5F9  mov     eax, r14d
00000001400DC5FC  mov     rcx, [rbp+0C0A0h]
00000001400DC603  xor     rcx, rsp
00000001400DC606  call    1401F8B20h
00000001400DC60B  lea     r11, [rsp+0C210h]
00000001400DC613  mov     rbx, [r11+50h]
00000001400DC617  movaps  xmm6, xmmword ptr [r11-10h]
00000001400DC61C  movaps  xmm7, xmmword ptr [r11-20h]
00000001400DC621  movaps  xmm8, xmmword ptr [r11-30h]
00000001400DC626  movaps  xmm9, xmmword ptr [r11-40h]
00000001400DC62B  movaps  xmm10, xmmword ptr [r11-50h]
00000001400DC630  movaps  xmm11, xmmword ptr [r11-60h]
00000001400DC635  mov     rsp, r11
00000001400DC638  pop     r15
00000001400DC63A  pop     r14
00000001400DC63C  pop     r13
00000001400DC63E  pop     r12
00000001400DC640  pop     rdi
00000001400DC641  pop     rsi
00000001400DC642  pop     rbp
00000001400DC643  retn
