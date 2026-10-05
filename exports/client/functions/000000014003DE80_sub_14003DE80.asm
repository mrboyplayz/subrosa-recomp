; 0x14003de80: sub_14003DE80
; Decompilation failed: stack frame is too big
000000014003DE80  mov     [rsp+18h], rbx
000000014003DE85  push    rbp
000000014003DE86  push    rsi
000000014003DE87  push    rdi
000000014003DE88  push    r14
000000014003DE8A  push    r15
000000014003DE8C  lea     rbp, [rsp-11FC0h]
000000014003DE94  mov     eax, 120C0h
000000014003DE99  call    sub_1401F89D0
000000014003DE9E  sub     rsp, rax
000000014003DEA1  movaps  xmmword ptr [rsp+120B0h], xmm6
000000014003DEA9  mov     rax, cs:__security_cookie
000000014003DEB0  xor     rax, rsp
000000014003DEB3  mov     [rbp+11FA0h], rax
000000014003DEBA  movss   xmm0, cs:dword_1402783F4
000000014003DEC2  lea     r8, [rsp+40h]
000000014003DEC7  movss   cs:dword_140404A6C+1167FE2Ch, xmm0
000000014003DECF  movaps  xmm6, xmm2
000000014003DED2  mov     cs:dword_140404A6C+1167FE30h, 47800000h
000000014003DEDC  xor     esi, esi
000000014003DEDE  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
000000014003DEE8  mov     r15, rdx
000000014003DEEB  mov     cs:dword_140404A6C+1167FE9Ch, 0FFFFFFFFh
000000014003DEF5  lea     rdx, [rsp+50h]
000000014003DEFA  movss   xmm4, dword ptr [rcx]
000000014003DEFE  mov     r14, rcx
000000014003DF01  movss   xmm3, dword ptr [rcx+4]
000000014003DF06  movaps  xmm0, xmm4
000000014003DF09  movss   xmm2, dword ptr [rcx+8]
000000014003DF0E  subss   xmm0, xmm6
000000014003DF12  movaps  xmm1, xmm3
000000014003DF15  mov     [rbp-70h], esi
000000014003DF18  subss   xmm1, xmm6
000000014003DF1C  mov     [rbp+7F94h], esi
000000014003DF22  addss   xmm4, xmm6
000000014003DF26  mov     [rbp+0FF98h], esi
000000014003DF2C  addss   xmm3, xmm6
000000014003DF30  movss   dword ptr [rsp+50h], xmm0
000000014003DF36  lea     rcx, [rbp-70h]
000000014003DF3A  movaps  xmm0, xmm2
000000014003DF3D  addss   xmm2, xmm6
000000014003DF41  subss   xmm0, xmm6
000000014003DF45  movss   dword ptr [rsp+54h], xmm1
000000014003DF4B  movss   dword ptr [rsp+40h], xmm4
000000014003DF51  movss   dword ptr [rsp+44h], xmm3
000000014003DF57  movss   dword ptr [rsp+48h], xmm2
000000014003DF5D  movss   dword ptr [rsp+58h], xmm0
000000014003DF63  call    sub_1400D05B0
000000014003DF68  mov     r9, r15
000000014003DF6B  movss   dword ptr [rsp+20h], xmm6
000000014003DF71  mov     r8, r14
000000014003DF74  lea     rdx, [rbp-70h]
000000014003DF78  lea     rcx, [rsp+68h]
000000014003DF7D  call    sub_14003DAE0
000000014003DF82  test    eax, eax
000000014003DF84  jz      short loc_14003DFDA
000000014003DF86  movss   xmm2, dword ptr [rbp-7Ch]
000000014003DF8B  movss   xmm0, cs:dword_140404A6C+1167FE30h
000000014003DF93  comiss  xmm0, xmm2
000000014003DF96  jbe     short loc_14003DFDA
000000014003DF98  movups  xmm0, xmmword ptr [rsp+68h]
000000014003DF9D  mov     cs:dword_140404A6C+1167FE2Ch, esi
000000014003DFA3  movss   xmm1, dword ptr [rsp+7Ch]
000000014003DFA9  movups  xmmword ptr cs:dword_140404A6C+1167FE14h, xmm0
000000014003DFB0  mov     cs:dword_140404A6C+1167FE78h, esi
000000014003DFB6  movss   xmm0, dword ptr [rsp+78h]
000000014003DFBC  movss   cs:dword_140404A6C+1167FE24h, xmm0
000000014003DFC4  movss   cs:dword_140404A6C+1167FE28h, xmm1
000000014003DFCC  movss   cs:dword_140404A6C+1167FE30h, xmm2
000000014003DFD4  mov     cs:dword_140404A6C+1167FE68h, esi
000000014003DFDA  mov     ebx, esi
000000014003DFDC  lea     rdi, dword_140404A6C+1A9A47D4h
000000014003DFE3  cmp     [rdi], esi
000000014003DFE5  jz      loc_14003E0A1
000000014003DFEB  movss   dword ptr [rsp+30h], xmm6
000000014003DFF1  lea     r8, [rsp+60h]
000000014003DFF6  mov     [rsp+28h], r15
000000014003DFFB  lea     rdx, [rsp+40h]
000000014003E000  mov     r9d, ebx
000000014003E003  mov     [rsp+20h], r14
000000014003E008  lea     rcx, [rsp+50h]
000000014003E00D  call    sub_14003C760
000000014003E012  test    eax, eax
000000014003E014  jz      loc_14003E0A1
000000014003E01A  movss   xmm2, dword ptr [rsp+60h]
000000014003E020  movss   xmm0, cs:dword_140404A6C+1167FE30h
000000014003E028  comiss  xmm0, xmm2
000000014003E02B  jbe     short loc_14003E0A1
000000014003E02D  movss   xmm0, dword ptr [rsp+50h]
000000014003E033  movss   xmm1, dword ptr [rsp+54h]
000000014003E039  mov     ecx, cs:dword_140404A6C+1167FE7Ch
000000014003E03F  movss   cs:dword_140404A6C+1167FE14h, xmm0
000000014003E047  movss   xmm0, dword ptr [rsp+58h]
000000014003E04D  movss   cs:dword_140404A6C+1167FE18h, xmm1
000000014003E055  movss   xmm1, dword ptr [rsp+40h]
000000014003E05B  movss   cs:dword_140404A6C+1167FE1Ch, xmm0
000000014003E063  movss   xmm0, dword ptr [rsp+44h]
000000014003E069  movss   cs:dword_140404A6C+1167FE20h, xmm1
000000014003E071  movss   xmm1, dword ptr [rsp+48h]
000000014003E077  movss   cs:dword_140404A6C+1167FE24h, xmm0
000000014003E07F  movss   cs:dword_140404A6C+1167FE28h, xmm1
000000014003E087  movss   cs:dword_140404A6C+1167FE30h, xmm2
000000014003E08F  mov     cs:dword_140404A6C+1167FE2Ch, esi
000000014003E095  mov     cs:dword_140404A6C+1167FE78h, ecx
000000014003E09B  mov     cs:dword_140404A6C+1167FE68h, ebx
000000014003E0A1  inc     ebx
000000014003E0A3  add     rdi, 100D70h
000000014003E0AA  cmp     ebx, 4
000000014003E0AD  jl      loc_14003DFE3
000000014003E0B3  movss   xmm0, cs:dword_140404A6C+1167FE30h
000000014003E0BB  comiss  xmm0, cs:dword_140278ADC
000000014003E0C2  setb    sil
000000014003E0C6  mov     eax, esi
000000014003E0C8  mov     rcx, [rbp+11FA0h]
000000014003E0CF  xor     rcx, rsp
000000014003E0D2  call    1401F8B20h
000000014003E0D7  mov     rbx, [rsp+12100h]
000000014003E0DF  movaps  xmm6, xmmword ptr [rsp+120B0h]
000000014003E0E7  add     rsp, 120C0h
000000014003E0EE  pop     r15
000000014003E0F0  pop     r14
000000014003E0F2  pop     rdi
000000014003E0F3  pop     rsi
000000014003E0F4  pop     rbp
000000014003E0F5  retn
