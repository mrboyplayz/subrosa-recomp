; 0x140033fe0: sub_140033FE0
; Decompilation failed: stack frame is too big
0000000140033FE0  mov     [rsp+18h], rbx
0000000140033FE5  push    rbp
0000000140033FE6  push    rsi
0000000140033FE7  push    rdi
0000000140033FE8  push    r14
0000000140033FEA  push    r15
0000000140033FEC  lea     rbp, [rsp-12020h]
0000000140033FF4  mov     eax, 12120h
0000000140033FF9  call    sub_1401F89D0
0000000140033FFE  sub     rsp, rax
0000000140034001  movaps  xmmword ptr [rsp+12110h], xmm6
0000000140034009  movaps  xmmword ptr [rsp+12100h], xmm7
0000000140034011  movaps  xmmword ptr [rsp+120F0h], xmm8
000000014003401A  movaps  xmmword ptr [rsp+120E0h], xmm9
0000000140034023  movaps  xmmword ptr [rsp+120D0h], xmm10
000000014003402C  movaps  xmmword ptr [rsp+120C0h], xmm11
0000000140034035  movaps  xmmword ptr [rsp+120B0h], xmm12
000000014003403E  mov     rax, cs:__security_cookie
0000000140034045  xor     rax, rsp
0000000140034048  mov     [rbp+11FA0h], rax
000000014003404F  movss   xmm0, cs:dword_1402783F4
0000000140034057  movaps  xmm6, xmm2
000000014003405A  movss   cs:dword_140404A6C+1167FE2Ch, xmm0
0000000140034062  xor     r15d, r15d
0000000140034065  mov     cs:dword_140404A6C+1167FE30h, 47800000h
000000014003406F  mov     r14, rdx
0000000140034072  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
000000014003407C  mov     rsi, rcx
000000014003407F  mov     cs:dword_140404A6C+1167FE9Ch, 0FFFFFFFFh
0000000140034089  movss   xmm8, dword ptr [rcx]
000000014003408E  movss   xmm4, dword ptr [rcx+4]
0000000140034093  movaps  xmm12, xmm8
0000000140034097  movss   xmm3, dword ptr [rcx+8]
000000014003409C  subss   xmm12, xmm6
00000001400340A1  movss   xmm2, dword ptr [rdx]
00000001400340A5  addss   xmm8, xmm6
00000001400340AA  movss   xmm1, dword ptr [rdx+4]
00000001400340AF  movaps  xmm10, xmm4
00000001400340B3  movss   xmm0, dword ptr [rdx+8]
00000001400340B8  subss   xmm10, xmm6
00000001400340BD  movaps  xmm9, xmm3
00000001400340C1  mov     [rbp-70h], r15d
00000001400340C5  movaps  xmm11, xmm2
00000001400340C9  movss   dword ptr [rsp+50h], xmm12
00000001400340D0  subss   xmm11, xmm6
00000001400340D5  movss   dword ptr [rsp+40h], xmm8
00000001400340DC  subss   xmm9, xmm6
00000001400340E1  mov     [rbp+7F94h], r15d
00000001400340E8  addss   xmm4, xmm6
00000001400340EC  movss   dword ptr [rsp+54h], xmm10
00000001400340F3  addss   xmm3, xmm6
00000001400340F7  mov     [rbp+0FF98h], r15d
00000001400340FE  movaps  xmm7, xmm1
0000000140034101  movaps  xmm5, xmm0
0000000140034104  comiss  xmm12, xmm11
0000000140034108  movss   dword ptr [rsp+58h], xmm9
000000014003410F  subss   xmm7, xmm6
0000000140034113  movss   dword ptr [rsp+44h], xmm4
0000000140034119  subss   xmm5, xmm6
000000014003411D  movss   dword ptr [rsp+48h], xmm3
0000000140034123  jbe     short loc_140034130
0000000140034125  movss   dword ptr [rsp+50h], xmm11
000000014003412C  movaps  xmm12, xmm11
0000000140034130  comiss  xmm10, xmm7
0000000140034134  jbe     short loc_140034140
0000000140034136  movss   dword ptr [rsp+54h], xmm7
000000014003413C  movaps  xmm10, xmm7
0000000140034140  comiss  xmm9, xmm5
0000000140034144  jbe     short loc_140034150
0000000140034146  movss   dword ptr [rsp+58h], xmm5
000000014003414C  movaps  xmm9, xmm5
0000000140034150  comiss  xmm8, xmm11
0000000140034154  jnb     short loc_140034161
0000000140034156  movss   dword ptr [rsp+40h], xmm11
000000014003415D  movaps  xmm8, xmm11
0000000140034161  comiss  xmm4, xmm7
0000000140034164  jnb     short loc_14003416F
0000000140034166  movss   dword ptr [rsp+44h], xmm7
000000014003416C  movaps  xmm4, xmm7
000000014003416F  comiss  xmm3, xmm5
0000000140034172  jnb     short loc_14003417D
0000000140034174  movss   dword ptr [rsp+48h], xmm5
000000014003417A  movaps  xmm3, xmm5
000000014003417D  addss   xmm2, xmm6
0000000140034181  addss   xmm1, xmm6
0000000140034185  addss   xmm0, xmm6
0000000140034189  comiss  xmm12, xmm2
000000014003418D  jbe     short loc_140034195
000000014003418F  movss   dword ptr [rsp+50h], xmm2
0000000140034195  comiss  xmm10, xmm1
0000000140034199  jbe     short loc_1400341A1
000000014003419B  movss   dword ptr [rsp+54h], xmm1
00000001400341A1  comiss  xmm9, xmm0
00000001400341A5  jbe     short loc_1400341AD
00000001400341A7  movss   dword ptr [rsp+58h], xmm0
00000001400341AD  comiss  xmm8, xmm2
00000001400341B1  jnb     short loc_1400341B9
00000001400341B3  movss   dword ptr [rsp+40h], xmm2
00000001400341B9  comiss  xmm4, xmm1
00000001400341BC  jnb     short loc_1400341C4
00000001400341BE  movss   dword ptr [rsp+44h], xmm1
00000001400341C4  comiss  xmm3, xmm0
00000001400341C7  jnb     short loc_1400341CF
00000001400341C9  movss   dword ptr [rsp+48h], xmm0
00000001400341CF  lea     r8, [rsp+40h]
00000001400341D4  lea     rdx, [rsp+50h]
00000001400341D9  lea     rcx, [rbp-70h]
00000001400341DD  call    sub_1400D05B0
00000001400341E2  mov     r9, r14
00000001400341E5  movss   dword ptr [rsp+20h], xmm6
00000001400341EB  mov     r8, rsi
00000001400341EE  lea     rdx, [rbp-70h]
00000001400341F2  lea     rcx, [rsp+68h]
00000001400341F7  call    sub_1400337B0
00000001400341FC  test    eax, eax
00000001400341FE  jz      short loc_140034249
0000000140034200  movss   xmm2, dword ptr [rbp-7Ch]
0000000140034205  movss   xmm0, cs:dword_140404A6C+1167FE30h
000000014003420D  comiss  xmm0, xmm2
0000000140034210  jbe     short loc_140034249
0000000140034212  movups  xmm0, xmmword ptr [rsp+68h]
0000000140034217  mov     cs:dword_140404A6C+1167FE68h, r15d
000000014003421E  movss   xmm1, dword ptr [rsp+7Ch]
0000000140034224  movups  xmmword ptr cs:dword_140404A6C+1167FE14h, xmm0
000000014003422B  movss   xmm0, dword ptr [rsp+78h]
0000000140034231  movss   cs:dword_140404A6C+1167FE24h, xmm0
0000000140034239  movss   cs:dword_140404A6C+1167FE28h, xmm1
0000000140034241  movss   cs:dword_140404A6C+1167FE30h, xmm2
0000000140034249  mov     ebx, r15d
000000014003424C  lea     rdi, dword_140404A6C+1A9A47D4h
0000000140034253  cmp     [rdi], r15d
0000000140034256  jz      loc_1400342FC
000000014003425C  movss   dword ptr [rsp+30h], xmm6
0000000140034262  lea     r8, [rsp+60h]
0000000140034267  mov     [rsp+28h], r14
000000014003426C  lea     rdx, [rsp+40h]
0000000140034271  mov     r9d, ebx
0000000140034274  mov     [rsp+20h], rsi
0000000140034279  lea     rcx, [rsp+50h]
000000014003427E  call    sub_140031530
0000000140034283  test    eax, eax
0000000140034285  jz      short loc_1400342FC
0000000140034287  movss   xmm2, dword ptr [rsp+60h]
000000014003428D  movss   xmm0, cs:dword_140404A6C+1167FE30h
0000000140034295  comiss  xmm0, xmm2
0000000140034298  jbe     short loc_1400342FC
000000014003429A  movss   xmm0, dword ptr [rsp+50h]
00000001400342A0  movss   xmm1, dword ptr [rsp+54h]
00000001400342A6  movss   cs:dword_140404A6C+1167FE14h, xmm0
00000001400342AE  movss   xmm0, dword ptr [rsp+58h]
00000001400342B4  movss   cs:dword_140404A6C+1167FE18h, xmm1
00000001400342BC  movss   xmm1, dword ptr [rsp+40h]
00000001400342C2  movss   cs:dword_140404A6C+1167FE1Ch, xmm0
00000001400342CA  movss   xmm0, dword ptr [rsp+44h]
00000001400342D0  movss   cs:dword_140404A6C+1167FE20h, xmm1
00000001400342D8  movss   xmm1, dword ptr [rsp+48h]
00000001400342DE  movss   cs:dword_140404A6C+1167FE24h, xmm0
00000001400342E6  movss   cs:dword_140404A6C+1167FE28h, xmm1
00000001400342EE  movss   cs:dword_140404A6C+1167FE30h, xmm2
00000001400342F6  mov     cs:dword_140404A6C+1167FE68h, ebx
00000001400342FC  inc     ebx
00000001400342FE  add     rdi, 100D70h
0000000140034305  cmp     ebx, 4
0000000140034308  jl      loc_140034253
000000014003430E  movss   xmm0, cs:dword_140404A6C+1167FE30h
0000000140034316  comiss  xmm0, cs:dword_140278ADC
000000014003431D  setb    r15b
0000000140034321  mov     eax, r15d
0000000140034324  mov     rcx, [rbp+11FA0h]
000000014003432B  xor     rcx, rsp
000000014003432E  call    1401F8B20h
0000000140034333  lea     r11, [rsp+12120h]
000000014003433B  mov     rbx, [r11+40h]
000000014003433F  movaps  xmm6, xmmword ptr [r11-10h]
0000000140034344  movaps  xmm7, xmmword ptr [r11-20h]
0000000140034349  movaps  xmm8, xmmword ptr [r11-30h]
000000014003434E  movaps  xmm9, xmmword ptr [r11-40h]
0000000140034353  movaps  xmm10, xmmword ptr [r11-50h]
0000000140034358  movaps  xmm11, xmmword ptr [r11-60h]
000000014003435D  movaps  xmm12, xmmword ptr [r11-70h]
0000000140034362  mov     rsp, r11
0000000140034365  pop     r15
0000000140034367  pop     r14
0000000140034369  pop     rdi
000000014003436A  pop     rsi
000000014003436B  pop     rbp
000000014003436C  retn
