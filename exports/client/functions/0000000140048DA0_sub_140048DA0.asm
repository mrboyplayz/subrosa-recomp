; 0x140048da0: sub_140048DA0
; Decompilation failed: call analysis failed
0000000140048DA0  mov     [rsp+8], rbx
0000000140048DA5  push    rbp
0000000140048DA6  push    rsi
0000000140048DA7  push    rdi
0000000140048DA8  push    r12
0000000140048DAA  push    r13
0000000140048DAC  push    r14
0000000140048DAE  push    r15
0000000140048DB0  lea     rbp, [rsp-61B0h]
0000000140048DB8  mov     eax, 62B0h
0000000140048DBD  call    sub_1401F89D0
0000000140048DC2  sub     rsp, rax
0000000140048DC5  movaps  xmmword ptr [rsp+62A0h], xmm6
0000000140048DCD  movaps  xmmword ptr [rsp+6290h], xmm7
0000000140048DD5  movaps  xmmword ptr [rsp+6280h], xmm8
0000000140048DDE  movaps  xmmword ptr [rsp+6270h], xmm9
0000000140048DE7  movaps  xmmword ptr [rsp+6260h], xmm10
0000000140048DF0  movaps  xmmword ptr [rsp+6250h], xmm11
0000000140048DF9  movaps  xmmword ptr [rsp+6240h], xmm12
0000000140048E02  movaps  xmmword ptr [rsp+6230h], xmm13
0000000140048E0B  movaps  xmmword ptr [rsp+6220h], xmm14
0000000140048E14  movaps  xmmword ptr [rsp+6210h], xmm15
0000000140048E1D  mov     rax, cs:__security_cookie
0000000140048E24  xor     rax, rsp
0000000140048E27  mov     [rbp+6100h], rax
0000000140048E2E  mov     r14, [rbp+6210h]
0000000140048E35  mov     rdi, r9
0000000140048E38  mov     rsi, [rbp+6220h]
0000000140048E3F  xor     r13d, r13d
0000000140048E42  mov     r15, [rbp+6228h]
0000000140048E49  mov     r12, r8
0000000140048E4C  mov     rbx, [rbp+6218h]
0000000140048E53  mov     [rbp-48h], r9
0000000140048E57  mov     r9, r14
0000000140048E5A  mov     [rbp-60h], edx
0000000140048E5D  lea     rdx, [rbp+4900h]
0000000140048E64  mov     [rbp-5Ch], ecx
0000000140048E67  lea     rcx, [rbp+1900h]
0000000140048E6E  mov     [rbp-18h], r8
0000000140048E72  mov     [rbp-70h], rsi
0000000140048E76  mov     [rsp+70h], r15
0000000140048E7B  mov     [rsp+60h], r14
0000000140048E80  mov     [rsp+50h], r13d
0000000140048E85  mov     [rsp+20h], rbx
0000000140048E8A  call    sub_14004A480
0000000140048E8F  mov     r9, rsi
0000000140048E92  mov     [rsp+20h], r15
0000000140048E97  mov     r8, rdi
0000000140048E9A  lea     rdx, [rbp+3100h]
0000000140048EA1  lea     rcx, [rbp+100h]
0000000140048EA8  call    sub_14004A480
0000000140048EAD  movsxd  rdx, dword ptr [r12+30h]
0000000140048EB2  xor     ecx, ecx
0000000140048EB4  mov     [rbp-80h], rdx
0000000140048EB8  mov     [rsp+58h], rcx
0000000140048EBD  cmp     rdx, 4
0000000140048EC1  jl      loc_1400492B0
0000000140048EC7  movss   xmm7, dword ptr [rbx+0Ch]
0000000140048ECC  lea     rcx, [rbp+5Ch]
0000000140048ED0  movss   xmm8, dword ptr [rbx]
0000000140048ED5  lea     r8, [rdx-4]
0000000140048ED9  movss   xmm9, dword ptr [rbx+18h]
0000000140048EDF  lea     r9, [rbp+44h]
0000000140048EE3  movss   xmm10, dword ptr [rbx+10h]
0000000140048EE9  lea     r10, [rbp+48h]
0000000140048EED  movss   xmm11, dword ptr [rbx+4]
0000000140048EF3  lea     r11, [rbp+50h]
0000000140048EF7  movss   xmm12, dword ptr [rbx+1Ch]
0000000140048EFD  lea     rax, [r12+3Ch]
0000000140048F02  movss   xmm13, dword ptr [rbx+14h]
0000000140048F08  sub     rcx, r12
0000000140048F0B  movss   xmm14, dword ptr [rbx+8]
0000000140048F11  sub     r9, r12
0000000140048F14  movss   xmm15, dword ptr [rbx+20h]
0000000140048F1A  sub     r10, r12
0000000140048F1D  mov     [rbp+28h], rcx
0000000140048F21  lea     rbx, [rbp+54h]
0000000140048F25  mov     r13, [rbp+28h]
0000000140048F29  lea     rcx, [rbp+60h]
0000000140048F2D  sub     rcx, r12
0000000140048F30  shr     r8, 2
0000000140048F34  mov     [rbp+30h], rcx
0000000140048F38  sub     r11, r12
0000000140048F3B  mov     rdi, [rbp+30h]
0000000140048F3F  lea     rcx, [rbp+68h]
0000000140048F43  sub     rcx, r12
0000000140048F46  sub     rbx, r12
0000000140048F49  mov     [rbp-10h], rcx
0000000140048F4D  lea     rcx, [rbp+6Ch]
0000000140048F51  sub     rcx, r12
0000000140048F54  mov     [rbp-8], rcx
0000000140048F58  lea     rcx, [rbp+40h]
0000000140048F5C  sub     rcx, r12
0000000140048F5F  mov     [rbp-20h], rcx
0000000140048F63  lea     rcx, [rbp+4Ch]
0000000140048F67  mov     rsi, [rbp-20h]
0000000140048F6B  sub     rcx, r12
0000000140048F6E  mov     [rbp-40h], rcx
0000000140048F72  lea     rcx, [rbp+58h]
0000000140048F76  mov     r15, [rbp-40h]
0000000140048F7A  sub     rcx, r12
0000000140048F7D  mov     [rbp-30h], rcx
0000000140048F81  lea     rcx, [rbp+64h]
0000000140048F85  mov     rdx, [rbp-30h]
0000000140048F89  sub     rcx, r12
0000000140048F8C  mov     r12, [rbp-10h]
0000000140048F90  inc     r8
0000000140048F93  mov     [rbp-58h], rcx
0000000140048F97  lea     rcx, ds:0[r8*4]
0000000140048F9F  mov     [rsp+58h], rcx
0000000140048FA4  mov     rcx, [rbp-8]
0000000140048FA8  nop     dword ptr [rax+rax+00000000h]
0000000140048FB0  movss   xmm4, dword ptr [rax-8]
0000000140048FB5  movss   xmm6, dword ptr [rax-4]
0000000140048FBA  movaps  xmm0, xmm4
0000000140048FBD  movss   xmm5, dword ptr [rax]
0000000140048FC1  movaps  xmm2, xmm6
0000000140048FC4  mulss   xmm0, xmm8
0000000140048FC9  movaps  xmm3, xmm6
0000000140048FCC  mulss   xmm2, xmm7
0000000140048FD0  movaps  xmm1, xmm5
0000000140048FD3  mulss   xmm1, xmm9
0000000140048FD8  addss   xmm2, xmm0
0000000140048FDC  mulss   xmm6, xmm13
0000000140048FE1  movaps  xmm0, xmm4
0000000140048FE4  mulss   xmm3, xmm10
0000000140048FE9  mulss   xmm0, xmm11
0000000140048FEE  addss   xmm2, xmm1
0000000140048FF2  mulss   xmm4, xmm14
0000000140048FF7  addss   xmm3, xmm0
0000000140048FFB  movaps  xmm1, xmm5
0000000140048FFE  mulss   xmm5, xmm15
0000000140049003  movss   xmm0, dword ptr [r14]
0000000140049008  addss   xmm6, xmm4
000000014004900C  movss   xmm4, dword ptr [rax+4]
0000000140049011  movss   dword ptr [rsi+rax-3Ch], xmm2
0000000140049017  mulss   xmm1, xmm12
000000014004901C  addss   xmm6, xmm5
0000000140049020  movss   xmm5, dword ptr [rax+0Ch]
0000000140049025  addss   xmm3, xmm1
0000000140049029  movss   xmm1, dword ptr [r14+4]
000000014004902F  movss   dword ptr [r9+rax-3Ch], xmm3
0000000140049036  movss   dword ptr [r10+rax-3Ch], xmm6
000000014004903D  addss   xmm0, dword ptr [rsi+rax-3Ch]
0000000140049043  movss   xmm6, dword ptr [rax+8]
0000000140049048  movaps  xmm2, xmm6
000000014004904B  movaps  xmm3, xmm6
000000014004904E  mulss   xmm2, xmm7
0000000140049052  movss   dword ptr [rsi+rax-3Ch], xmm0
0000000140049058  addss   xmm1, dword ptr [r9+rax-3Ch]
000000014004905F  movss   xmm0, dword ptr [r14+8]
0000000140049065  mulss   xmm6, xmm13
000000014004906A  mulss   xmm3, xmm10
000000014004906F  movss   dword ptr [r9+rax-3Ch], xmm1
0000000140049076  movaps  xmm1, xmm5
0000000140049079  addss   xmm0, dword ptr [r10+rax-3Ch]
0000000140049080  mulss   xmm1, xmm9
0000000140049085  movss   dword ptr [r10+rax-3Ch], xmm0
000000014004908C  movaps  xmm0, xmm4
000000014004908F  mulss   xmm0, xmm8
0000000140049094  addss   xmm2, xmm0
0000000140049098  movaps  xmm0, xmm4
000000014004909B  mulss   xmm0, xmm11
00000001400490A0  mulss   xmm4, xmm14
00000001400490A5  addss   xmm2, xmm1
00000001400490A9  movaps  xmm1, xmm5
00000001400490AC  addss   xmm3, xmm0
00000001400490B0  mulss   xmm1, xmm12
00000001400490B5  movss   xmm0, dword ptr [r14]
00000001400490BA  addss   xmm6, xmm4
00000001400490BE  movss   xmm4, dword ptr [rax+10h]
00000001400490C3  movss   dword ptr [r15+rax-3Ch], xmm2
00000001400490CA  addss   xmm3, xmm1
00000001400490CE  mulss   xmm5, xmm15
00000001400490D3  movss   xmm1, dword ptr [r14+4]
00000001400490D9  addss   xmm6, xmm5
00000001400490DD  movss   xmm5, dword ptr [rax+18h]
00000001400490E2  movss   dword ptr [r11+rax-3Ch], xmm3
00000001400490E9  movss   dword ptr [rbx+rax-3Ch], xmm6
00000001400490EF  addss   xmm0, dword ptr [r15+rax-3Ch]
00000001400490F6  movss   xmm6, dword ptr [rax+14h]
00000001400490FB  movaps  xmm2, xmm6
00000001400490FE  mulss   xmm2, xmm7
0000000140049102  movss   dword ptr [r15+rax-3Ch], xmm0
0000000140049109  addss   xmm1, dword ptr [r11+rax-3Ch]
0000000140049110  movss   xmm0, dword ptr [r14+8]
0000000140049116  movss   dword ptr [r11+rax-3Ch], xmm1
000000014004911D  movaps  xmm1, xmm5
0000000140049120  addss   xmm0, dword ptr [rbx+rax-3Ch]
0000000140049126  movss   dword ptr [rbx+rax-3Ch], xmm0
000000014004912C  movaps  xmm0, xmm4
000000014004912F  mulss   xmm0, xmm8
0000000140049134  addss   xmm2, xmm0
0000000140049138  mov     rsi, [rbp-58h]
000000014004913C  movaps  xmm3, xmm6
000000014004913F  mulss   xmm1, xmm9
0000000140049144  movaps  xmm0, xmm4
0000000140049147  mulss   xmm0, xmm11
000000014004914C  addss   xmm2, xmm1
0000000140049150  mulss   xmm3, xmm10
0000000140049155  mulss   xmm6, xmm13
000000014004915A  movaps  xmm1, xmm5
000000014004915D  addss   xmm3, xmm0
0000000140049161  mulss   xmm1, xmm12
0000000140049166  movss   xmm0, dword ptr [r14]
000000014004916B  movss   dword ptr [rdx+rax-3Ch], xmm2
0000000140049171  mulss   xmm4, xmm14
0000000140049176  addss   xmm3, xmm1
000000014004917A  mulss   xmm5, xmm15
000000014004917F  movss   xmm1, dword ptr [r14+4]
0000000140049185  addss   xmm6, xmm4
0000000140049189  movss   xmm4, dword ptr [rax+1Ch]
000000014004918E  movss   dword ptr [rax+r13-3Ch], xmm3
0000000140049195  addss   xmm6, xmm5
0000000140049199  movss   xmm5, dword ptr [rax+24h]
000000014004919E  movss   dword ptr [rdi+rax-3Ch], xmm6
00000001400491A4  addss   xmm0, dword ptr [rdx+rax-3Ch]
00000001400491AA  movss   xmm6, dword ptr [rax+20h]
00000001400491AF  movaps  xmm2, xmm6
00000001400491B2  movaps  xmm3, xmm6
00000001400491B5  mulss   xmm2, xmm7
00000001400491B9  movss   dword ptr [rdx+rax-3Ch], xmm0
00000001400491BF  addss   xmm1, dword ptr [rax+r13-3Ch]
00000001400491C6  movss   xmm0, dword ptr [r14+8]
00000001400491CC  mulss   xmm3, xmm10
00000001400491D1  mulss   xmm6, xmm13
00000001400491D6  movss   dword ptr [rax+r13-3Ch], xmm1
00000001400491DD  movaps  xmm1, xmm5
00000001400491E0  addss   xmm0, dword ptr [rdi+rax-3Ch]
00000001400491E6  mulss   xmm1, xmm9
00000001400491EB  movss   dword ptr [rdi+rax-3Ch], xmm0
00000001400491F1  movaps  xmm0, xmm4
00000001400491F4  mulss   xmm0, xmm8
00000001400491F9  addss   xmm2, xmm0
00000001400491FD  movaps  xmm0, xmm4
0000000140049200  mulss   xmm0, xmm11
0000000140049205  mulss   xmm4, xmm14
000000014004920A  addss   xmm2, xmm1
000000014004920E  movaps  xmm1, xmm5
0000000140049211  addss   xmm3, xmm0
0000000140049215  mulss   xmm1, xmm12
000000014004921A  movss   xmm0, dword ptr [r14]
000000014004921F  addss   xmm6, xmm4
0000000140049223  mulss   xmm5, xmm15
0000000140049228  movss   dword ptr [rsi+rax-3Ch], xmm2
000000014004922E  addss   xmm3, xmm1
0000000140049232  movss   xmm1, dword ptr [r14+4]
0000000140049238  addss   xmm6, xmm5
000000014004923C  movss   dword ptr [r12+rax-3Ch], xmm3
0000000140049243  movss   dword ptr [rcx+rax-3Ch], xmm6
0000000140049249  addss   xmm0, dword ptr [rsi+rax-3Ch]
000000014004924F  movss   dword ptr [rsi+rax-3Ch], xmm0
0000000140049255  addss   xmm1, dword ptr [r12+rax-3Ch]
000000014004925C  movss   xmm0, dword ptr [r14+8]
0000000140049262  mov     rsi, [rbp-20h]
0000000140049266  movss   dword ptr [r12+rax-3Ch], xmm1
000000014004926D  addss   xmm0, dword ptr [rcx+rax-3Ch]
0000000140049273  movss   dword ptr [rcx+rax-3Ch], xmm0
0000000140049279  add     rax, 30h ; '0'
000000014004927D  sub     r8, 1
0000000140049281  jnz     loc_140048FB0
0000000140049287  mov     rdx, [rbp-80h]
000000014004928B  mov     rcx, [rsp+58h]
0000000140049290  mov     rdi, [rbp-48h]
0000000140049294  mov     rsi, [rbp-70h]
0000000140049298  mov     r12, [rbp-18h]
000000014004929C  mov     r15, [rsp+70h]
00000001400492A1  mov     r13d, [rsp+50h]
00000001400492A6  cmp     rcx, rdx
00000001400492A9  jl      short loc_1400492ED
00000001400492AB  jmp     loc_1400493D9
00000001400492B0  test    rdx, rdx
00000001400492B3  jle     loc_1400493D9
00000001400492B9  movss   xmm7, dword ptr [rbx+0Ch]
00000001400492BE  movss   xmm8, dword ptr [rbx]
00000001400492C3  movss   xmm9, dword ptr [rbx+18h]
00000001400492C9  movss   xmm10, dword ptr [rbx+10h]
00000001400492CF  movss   xmm11, dword ptr [rbx+4]
00000001400492D5  movss   xmm12, dword ptr [rbx+1Ch]
00000001400492DB  movss   xmm13, dword ptr [rbx+14h]
00000001400492E1  movss   xmm14, dword ptr [rbx+8]
00000001400492E7  movss   xmm15, dword ptr [rbx+20h]
00000001400492ED  lea     rcx, [rcx+5]
00000001400492F1  lea     rax, [rcx+rcx*2]
00000001400492F5  lea     rcx, [r12+rax*4]
00000001400492F9  lea     rax, [rbp+44h]
00000001400492FD  lea     r8, [rbp+48h]
0000000140049301  sub     rax, r12
0000000140049304  lea     r9, [rbp+40h]
0000000140049308  sub     r8, r12
000000014004930B  lea     r10, [rbp+44h]
000000014004930F  sub     r9, r12
0000000140049312  lea     r11, [rbp+48h]
0000000140049316  sub     r10, r12
0000000140049319  sub     r11, r12
000000014004931C  sub     rdx, [rsp+58h]
0000000140049321  movss   xmm6, dword ptr [rcx-8]
0000000140049326  movaps  xmm2, xmm10
000000014004932A  movss   xmm4, dword ptr [rcx-4]
000000014004932F  movaps  xmm0, xmm6
0000000140049332  movss   xmm5, dword ptr [rcx]
0000000140049336  movaps  xmm1, xmm12
000000014004933A  mulss   xmm0, xmm11
000000014004933F  movaps  xmm3, xmm13
0000000140049343  mulss   xmm2, xmm4
0000000140049347  mulss   xmm1, xmm5
000000014004934B  addss   xmm2, xmm0
000000014004934F  mulss   xmm3, xmm4
0000000140049353  movaps  xmm0, xmm6
0000000140049356  mulss   xmm6, xmm8
000000014004935B  mulss   xmm0, xmm14
0000000140049360  addss   xmm2, xmm1
0000000140049364  movaps  xmm1, xmm15
0000000140049368  mulss   xmm1, xmm5
000000014004936C  addss   xmm3, xmm0
0000000140049370  movaps  xmm0, xmm9
0000000140049374  mulss   xmm0, xmm5
0000000140049378  movss   dword ptr [rax+rcx-3Ch], xmm2
000000014004937E  movaps  xmm2, xmm7
0000000140049381  mulss   xmm2, xmm4
0000000140049385  addss   xmm3, xmm1
0000000140049389  movss   xmm1, dword ptr [r14+8]
000000014004938F  addss   xmm2, xmm6
0000000140049393  movss   dword ptr [r8+rcx-3Ch], xmm3
000000014004939A  addss   xmm2, xmm0
000000014004939E  movss   xmm0, dword ptr [r14+4]
00000001400493A4  addss   xmm2, dword ptr [r14]
00000001400493A9  movss   dword ptr [r9+rcx-3Ch], xmm2
00000001400493B0  addss   xmm0, dword ptr [r10+rcx-3Ch]
00000001400493B7  movss   dword ptr [rax+rcx-3Ch], xmm0
00000001400493BD  addss   xmm1, dword ptr [r11+rcx-3Ch]
00000001400493C4  movss   dword ptr [r8+rcx-3Ch], xmm1
00000001400493CB  add     rcx, 0Ch
00000001400493CF  sub     rdx, 1
00000001400493D3  jnz     loc_140049321
00000001400493D9  movsxd  rdx, dword ptr [rdi+30h]
00000001400493DD  xor     ebx, ebx
00000001400493DF  mov     [rbp-8], rdx
00000001400493E3  cmp     rdx, 4
00000001400493E7  jl      loc_1400497E6
00000001400493ED  movss   xmm7, dword ptr [r15+0Ch]
00000001400493F3  lea     rcx, [rbp+0C0h]
00000001400493FA  movss   xmm8, dword ptr [r15]
00000001400493FF  lea     r8, [rbp+0A4h]
0000000140049406  movss   xmm9, dword ptr [r15+18h]
000000014004940C  lea     r9, [rbp+0A8h]
0000000140049413  movss   xmm10, dword ptr [r15+10h]
0000000140049419  lea     r10, [rbp+0B0h]
0000000140049420  movss   xmm11, dword ptr [r15+4]
0000000140049426  lea     r11, [rbp+0B4h]
000000014004942D  movss   xmm12, dword ptr [r15+1Ch]
0000000140049433  lea     rax, [rdi+3Ch]
0000000140049437  movss   xmm13, dword ptr [r15+14h]
000000014004943D  sub     rcx, rdi
0000000140049440  movss   xmm14, dword ptr [r15+8]
0000000140049446  sub     r8, rdi
0000000140049449  movss   xmm15, dword ptr [r15+20h]
000000014004944F  sub     r9, rdi
0000000140049452  mov     [rsp+70h], rcx
0000000140049457  lea     r15, [rbp+0BCh]
000000014004945E  mov     r13, [rsp+70h]
0000000140049463  lea     rcx, [rbp+0C8h]
000000014004946A  sub     rcx, rdi
000000014004946D  sub     r10, rdi
0000000140049470  mov     [rbp-70h], rcx
0000000140049474  sub     r11, rdi
0000000140049477  mov     r12, [rbp-70h]
000000014004947B  lea     rcx, [rbp+0CCh]
0000000140049482  sub     rcx, rdi
0000000140049485  sub     r15, rdi
0000000140049488  mov     [rbp-80h], rcx
000000014004948C  lea     rcx, [rbp+0A0h]
0000000140049493  mov     r14, [rbp-80h]
0000000140049497  sub     rcx, rdi
000000014004949A  mov     [rsp+58h], rcx
000000014004949F  lea     rcx, [rbp+0ACh]
00000001400494A6  sub     rcx, rdi
00000001400494A9  mov     [rbp-58h], rcx
00000001400494AD  lea     rcx, [rbp+0B8h]
00000001400494B4  sub     rcx, rdi
00000001400494B7  mov     [rbp-30h], rcx
00000001400494BB  lea     rcx, [rbp+0C4h]
00000001400494C2  sub     rcx, rdi
00000001400494C5  mov     rdi, [rsp+58h]
00000001400494CA  mov     [rbp-40h], rcx
00000001400494CE  lea     rcx, [rdx-4]
00000001400494D2  mov     rdx, [rbp-58h]
00000001400494D6  shr     rcx, 2
00000001400494DA  inc     rcx
00000001400494DD  lea     rbx, ds:0[rcx*4]
00000001400494E5  mov     [rbp-10h], rbx
00000001400494E9  mov     rbx, [rbp-30h]
00000001400494ED  nop     dword ptr [rax]
00000001400494F0  movss   xmm4, dword ptr [rax-8]
00000001400494F5  movss   xmm6, dword ptr [rax-4]
00000001400494FA  movaps  xmm0, xmm4
00000001400494FD  movss   xmm5, dword ptr [rax]
0000000140049501  movaps  xmm2, xmm6
0000000140049504  mulss   xmm0, xmm8
0000000140049509  movaps  xmm3, xmm6
000000014004950C  mulss   xmm2, xmm7
0000000140049510  movaps  xmm1, xmm5
0000000140049513  mulss   xmm1, xmm9
0000000140049518  addss   xmm2, xmm0
000000014004951C  mulss   xmm6, xmm13
0000000140049521  movaps  xmm0, xmm4
0000000140049524  mulss   xmm3, xmm10
0000000140049529  mulss   xmm0, xmm11
000000014004952E  addss   xmm2, xmm1
0000000140049532  mulss   xmm4, xmm14
0000000140049537  addss   xmm3, xmm0
000000014004953B  movaps  xmm1, xmm5
000000014004953E  mulss   xmm5, xmm15
0000000140049543  movss   xmm0, dword ptr [rsi]
0000000140049547  addss   xmm6, xmm4
000000014004954B  movss   xmm4, dword ptr [rax+4]
0000000140049550  movss   dword ptr [rdi+rax-3Ch], xmm2
0000000140049556  mulss   xmm1, xmm12
000000014004955B  addss   xmm6, xmm5
000000014004955F  movss   xmm5, dword ptr [rax+0Ch]
0000000140049564  addss   xmm3, xmm1
0000000140049568  movss   xmm1, dword ptr [rsi+4]
000000014004956D  movss   dword ptr [r8+rax-3Ch], xmm3
0000000140049574  movss   dword ptr [r9+rax-3Ch], xmm6
000000014004957B  addss   xmm0, dword ptr [rdi+rax-3Ch]
0000000140049581  movss   xmm6, dword ptr [rax+8]
0000000140049586  movaps  xmm2, xmm6
0000000140049589  movaps  xmm3, xmm6
000000014004958C  mulss   xmm2, xmm7
0000000140049590  movss   dword ptr [rdi+rax-3Ch], xmm0
0000000140049596  addss   xmm1, dword ptr [r8+rax-3Ch]
000000014004959D  movss   xmm0, dword ptr [rsi+8]
00000001400495A2  mulss   xmm6, xmm13
00000001400495A7  mulss   xmm3, xmm10
00000001400495AC  movss   dword ptr [r8+rax-3Ch], xmm1
00000001400495B3  movaps  xmm1, xmm5
00000001400495B6  addss   xmm0, dword ptr [r9+rax-3Ch]
00000001400495BD  mulss   xmm1, xmm9
00000001400495C2  movss   dword ptr [r9+rax-3Ch], xmm0
00000001400495C9  movaps  xmm0, xmm4
00000001400495CC  mulss   xmm0, xmm8
00000001400495D1  addss   xmm2, xmm0
00000001400495D5  movaps  xmm0, xmm4
00000001400495D8  mulss   xmm0, xmm11
00000001400495DD  mulss   xmm4, xmm14
00000001400495E2  addss   xmm2, xmm1
00000001400495E6  movaps  xmm1, xmm5
00000001400495E9  addss   xmm3, xmm0
00000001400495ED  mulss   xmm1, xmm12
00000001400495F2  movss   xmm0, dword ptr [rsi]
00000001400495F6  addss   xmm6, xmm4
00000001400495FA  movss   xmm4, dword ptr [rax+10h]
00000001400495FF  movss   dword ptr [rax+rdx-3Ch], xmm2
0000000140049605  addss   xmm3, xmm1
0000000140049609  mulss   xmm5, xmm15
000000014004960E  movss   xmm1, dword ptr [rsi+4]
0000000140049613  addss   xmm6, xmm5
0000000140049617  movss   xmm5, dword ptr [rax+18h]
000000014004961C  movss   dword ptr [r10+rax-3Ch], xmm3
0000000140049623  movss   dword ptr [r11+rax-3Ch], xmm6
000000014004962A  addss   xmm0, dword ptr [rax+rdx-3Ch]
0000000140049630  movss   xmm6, dword ptr [rax+14h]
0000000140049635  movaps  xmm2, xmm6
0000000140049638  mulss   xmm2, xmm7
000000014004963C  movss   dword ptr [rax+rdx-3Ch], xmm0
0000000140049642  addss   xmm1, dword ptr [r10+rax-3Ch]
0000000140049649  movss   xmm0, dword ptr [rsi+8]
000000014004964E  movss   dword ptr [r10+rax-3Ch], xmm1
0000000140049655  movaps  xmm1, xmm5
0000000140049658  addss   xmm0, dword ptr [r11+rax-3Ch]
000000014004965F  movss   dword ptr [r11+rax-3Ch], xmm0
0000000140049666  movaps  xmm0, xmm4
0000000140049669  mulss   xmm0, xmm8
000000014004966E  addss   xmm2, xmm0
0000000140049672  mov     rdi, [rbp-40h]
0000000140049676  movaps  xmm3, xmm6
0000000140049679  mulss   xmm1, xmm9
000000014004967E  movaps  xmm0, xmm4
0000000140049681  mulss   xmm0, xmm11
0000000140049686  addss   xmm2, xmm1
000000014004968A  mulss   xmm3, xmm10
000000014004968F  mulss   xmm6, xmm13
0000000140049694  movaps  xmm1, xmm5
0000000140049697  addss   xmm3, xmm0
000000014004969B  mulss   xmm1, xmm12
00000001400496A0  movss   xmm0, dword ptr [rsi]
00000001400496A4  movss   dword ptr [rax+rbx-3Ch], xmm2
00000001400496AA  mulss   xmm4, xmm14
00000001400496AF  addss   xmm3, xmm1
00000001400496B3  mulss   xmm5, xmm15
00000001400496B8  movss   xmm1, dword ptr [rsi+4]
00000001400496BD  addss   xmm6, xmm4
00000001400496C1  movss   xmm4, dword ptr [rax+1Ch]
00000001400496C6  movss   dword ptr [r15+rax-3Ch], xmm3
00000001400496CD  addss   xmm6, xmm5
00000001400496D1  movss   xmm5, dword ptr [rax+24h]
00000001400496D6  movss   dword ptr [rax+r13-3Ch], xmm6
00000001400496DD  addss   xmm0, dword ptr [rax+rbx-3Ch]
00000001400496E3  movss   xmm6, dword ptr [rax+20h]
00000001400496E8  movaps  xmm2, xmm6
00000001400496EB  movaps  xmm3, xmm6
00000001400496EE  mulss   xmm2, xmm7
00000001400496F2  movss   dword ptr [rax+rbx-3Ch], xmm0
00000001400496F8  addss   xmm1, dword ptr [r15+rax-3Ch]
00000001400496FF  movss   xmm0, dword ptr [rsi+8]
0000000140049704  mulss   xmm3, xmm10
0000000140049709  mulss   xmm6, xmm13
000000014004970E  movss   dword ptr [r15+rax-3Ch], xmm1
0000000140049715  movaps  xmm1, xmm5
0000000140049718  addss   xmm0, dword ptr [rax+r13-3Ch]
000000014004971F  mulss   xmm1, xmm9
0000000140049724  movss   dword ptr [rax+r13-3Ch], xmm0
000000014004972B  movaps  xmm0, xmm4
000000014004972E  mulss   xmm0, xmm8
0000000140049733  addss   xmm2, xmm0
0000000140049737  movaps  xmm0, xmm4
000000014004973A  mulss   xmm0, xmm11
000000014004973F  mulss   xmm4, xmm14
0000000140049744  addss   xmm2, xmm1
0000000140049748  movaps  xmm1, xmm5
000000014004974B  addss   xmm3, xmm0
000000014004974F  mulss   xmm1, xmm12
0000000140049754  movss   xmm0, dword ptr [rsi]
0000000140049758  addss   xmm6, xmm4
000000014004975C  mulss   xmm5, xmm15
0000000140049761  movss   dword ptr [rax+rdi-3Ch], xmm2
0000000140049767  addss   xmm3, xmm1
000000014004976B  movss   xmm1, dword ptr [rsi+4]
0000000140049770  addss   xmm6, xmm5
0000000140049774  movss   dword ptr [r12+rax-3Ch], xmm3
000000014004977B  movss   dword ptr [r14+rax-3Ch], xmm6
0000000140049782  addss   xmm0, dword ptr [rax+rdi-3Ch]
0000000140049788  movss   dword ptr [rax+rdi-3Ch], xmm0
000000014004978E  addss   xmm1, dword ptr [r12+rax-3Ch]
0000000140049795  movss   xmm0, dword ptr [rsi+8]
000000014004979A  mov     rdi, [rsp+58h]
000000014004979F  movss   dword ptr [r12+rax-3Ch], xmm1
00000001400497A6  addss   xmm0, dword ptr [r14+rax-3Ch]
00000001400497AD  movss   dword ptr [r14+rax-3Ch], xmm0
00000001400497B4  add     rax, 30h ; '0'
00000001400497B8  sub     rcx, 1
00000001400497BC  jnz     loc_1400494F0
00000001400497C2  mov     rdx, [rbp-8]
00000001400497C6  mov     rbx, [rbp-10h]
00000001400497CA  mov     rdi, [rbp-48h]
00000001400497CE  mov     r14, [rsp+60h]
00000001400497D3  mov     r12, [rbp-18h]
00000001400497D7  mov     r13d, [rsp+50h]
00000001400497DC  cmp     rbx, rdx
00000001400497DF  jl      short loc_140049824
00000001400497E1  jmp     loc_140049914
00000001400497E6  test    rdx, rdx
00000001400497E9  jle     loc_140049914
00000001400497EF  movss   xmm7, dword ptr [r15+0Ch]
00000001400497F5  movss   xmm8, dword ptr [r15]
00000001400497FA  movss   xmm9, dword ptr [r15+18h]
0000000140049800  movss   xmm10, dword ptr [r15+10h]
0000000140049806  movss   xmm11, dword ptr [r15+4]
000000014004980C  movss   xmm12, dword ptr [r15+1Ch]
0000000140049812  movss   xmm13, dword ptr [r15+14h]
0000000140049818  movss   xmm14, dword ptr [r15+8]
000000014004981E  movss   xmm15, dword ptr [r15+20h]
0000000140049824  lea     rax, [rbx+5]
0000000140049828  lea     rax, [rax+rax*2]
000000014004982C  lea     rcx, [rdi+rax*4]
0000000140049830  lea     rax, [rbp+0A4h]
0000000140049837  lea     r8, [rbp+0A8h]
000000014004983E  sub     rax, rdi
0000000140049841  lea     r9, [rbp+0A0h]
0000000140049848  sub     r8, rdi
000000014004984B  lea     r10, [rbp+0A4h]
0000000140049852  sub     r9, rdi
0000000140049855  lea     r11, [rbp+0A8h]
000000014004985C  sub     r10, rdi
000000014004985F  sub     r11, rdi
0000000140049862  sub     rdx, rbx
0000000140049865  movss   xmm6, dword ptr [rcx-8]
000000014004986A  movss   xmm4, dword ptr [rcx-4]
000000014004986F  movaps  xmm0, xmm6
0000000140049872  movss   xmm5, dword ptr [rcx]
0000000140049876  movaps  xmm2, xmm4
0000000140049879  mulss   xmm0, xmm11
000000014004987E  movaps  xmm1, xmm5
0000000140049881  mulss   xmm1, xmm12
0000000140049886  movaps  xmm3, xmm4
0000000140049889  mulss   xmm2, xmm10
000000014004988E  mulss   xmm3, xmm13
0000000140049893  addss   xmm2, xmm0
0000000140049897  mulss   xmm4, xmm7
000000014004989B  movaps  xmm0, xmm6
000000014004989E  mulss   xmm6, xmm8
00000001400498A3  mulss   xmm0, xmm14
00000001400498A8  addss   xmm2, xmm1
00000001400498AC  movaps  xmm1, xmm15
00000001400498B0  mulss   xmm1, xmm5
00000001400498B4  addss   xmm6, xmm4
00000001400498B8  addss   xmm3, xmm0
00000001400498BC  mulss   xmm5, xmm9
00000001400498C1  movss   xmm0, dword ptr [rsi+4]
00000001400498C6  movss   dword ptr [rax+rcx-3Ch], xmm2
00000001400498CC  addss   xmm6, xmm5
00000001400498D0  addss   xmm3, xmm1
00000001400498D4  movss   xmm1, dword ptr [rsi+8]
00000001400498D9  addss   xmm6, dword ptr [rsi]
00000001400498DD  movss   dword ptr [r8+rcx-3Ch], xmm3
00000001400498E4  movss   dword ptr [r9+rcx-3Ch], xmm6
00000001400498EB  addss   xmm0, dword ptr [r10+rcx-3Ch]
00000001400498F2  movss   dword ptr [rax+rcx-3Ch], xmm0
00000001400498F8  addss   xmm1, dword ptr [r11+rcx-3Ch]
00000001400498FF  movss   dword ptr [r8+rcx-3Ch], xmm1
0000000140049906  add     rcx, 0Ch
000000014004990A  sub     rdx, 1
000000014004990E  jnz     loc_140049865
0000000140049914  movsxd  r8, dword ptr [rdi+20h]
0000000140049918  xor     r10d, r10d
000000014004991B  cmp     r8, 4
000000014004991F  jl      loc_1400499B8
0000000140049925  mov     r11, [rdi+28h]
0000000140049929  lea     r9, [r8-4]
000000014004992D  shr     r9, 2
0000000140049931  inc     r9
0000000140049934  lea     rdx, [r11+28h]
0000000140049938  lea     r10, ds:0[r9*4]
0000000140049940  mov     eax, [rdx-4]
0000000140049943  lea     rdx, [rdx+30h]
0000000140049947  lea     eax, [rax+rax*2]
000000014004994A  cdqe
000000014004994C  movss   xmm0, dword ptr [rbp+rax*4+100h]
0000000140049955  movss   xmm1, dword ptr [rbp+rax*4+104h]
000000014004995E  movss   dword ptr [rbp-80h], xmm0
0000000140049963  movss   xmm0, dword ptr [rbp+rax*4+108h]
000000014004996C  mov     eax, [rdx-30h]
000000014004996F  movss   dword ptr [rbp-78h], xmm0
0000000140049974  movss   dword ptr [rbp-7Ch], xmm1
0000000140049979  lea     eax, [rax+rax*2]
000000014004997C  cdqe
000000014004997E  movss   xmm0, dword ptr [rbp+rax*4+100h]
0000000140049987  movss   xmm1, dword ptr [rbp+rax*4+104h]
0000000140049990  movss   dword ptr [rbp-70h], xmm0
0000000140049995  movss   xmm0, dword ptr [rbp+rax*4+108h]
000000014004999E  movss   dword ptr [rbp-68h], xmm0
00000001400499A3  movss   dword ptr [rbp-6Ch], xmm1
00000001400499A8  sub     r9, 1
00000001400499AC  jnz     short loc_140049940
00000001400499AE  cmp     r10, r8
00000001400499B1  jl      short loc_1400499C1
00000001400499B3  jmp     loc_140049A39
00000001400499B8  test    r8, r8
00000001400499BB  jle     short loc_140049A39
00000001400499BD  mov     r11, [rdi+28h]
00000001400499C1  lea     rax, [r10+r10*2]
00000001400499C5  sub     r8, r10
00000001400499C8  lea     rdx, [r11+rax*4]
00000001400499CC  mov     eax, [rdx]
00000001400499CE  lea     rdx, [rdx+0Ch]
00000001400499D2  lea     eax, [rax+rax*2]
00000001400499D5  cdqe
00000001400499D7  movss   xmm0, dword ptr [rbp+rax*4+100h]
00000001400499E0  movss   xmm1, dword ptr [rbp+rax*4+104h]
00000001400499E9  movss   dword ptr [rbp-80h], xmm0
00000001400499EE  movss   xmm0, dword ptr [rbp+rax*4+108h]
00000001400499F7  mov     eax, [rdx-8]
00000001400499FA  movss   dword ptr [rbp-78h], xmm0
00000001400499FF  movss   dword ptr [rbp-7Ch], xmm1
0000000140049A04  lea     eax, [rax+rax*2]
0000000140049A07  cdqe
0000000140049A09  movss   xmm0, dword ptr [rbp+rax*4+100h]
0000000140049A12  movss   xmm1, dword ptr [rbp+rax*4+104h]
0000000140049A1B  movss   dword ptr [rbp-70h], xmm0
0000000140049A20  movss   xmm0, dword ptr [rbp+rax*4+108h]
0000000140049A29  movss   dword ptr [rbp-68h], xmm0
0000000140049A2E  movss   dword ptr [rbp-6Ch], xmm1
0000000140049A33  sub     r8, 1
0000000140049A37  jnz     short loc_1400499CC
0000000140049A39  and     dword ptr [rbp+6230h], 1
0000000140049A40  movss   xmm13, cs:dword_140278178
0000000140049A49  movss   xmm14, cs:dword_140278148
0000000140049A52  movss   xmm15, cs:dword_140278304
0000000140049A5B  jnz     loc_140049BDB
0000000140049A61  xor     r15d, r15d
0000000140049A64  cmp     [r12], r15d
0000000140049A68  jle     loc_140049BDB
0000000140049A6E  xor     ecx, ecx
0000000140049A70  lea     rbx, [rbp+1908h]
0000000140049A77  xor     eax, eax
0000000140049A79  mov     [rsp+58h], rcx
0000000140049A7E  mov     [rsp+50h], eax
0000000140049A82  nop     dword ptr [rax+00h]
0000000140049A86  nop     word ptr [rax+rax+00000000h]
0000000140049A90  cdqe
0000000140049A92  lea     rdx, [rbp+1900h]
0000000140049A99  lea     r9, [rbp+3100h]
0000000140049AA0  lea     r8, [rbp+100h]
0000000140049AA7  lea     rdx, [rdx+rax*4]
0000000140049AAB  mov     rax, [r12+8]
0000000140049AB0  mov     [rsp+28h], rdx
0000000140049AB5  mov     rdx, rdi
0000000140049AB8  movsxd  rcx, dword ptr [rax+rcx+0Ch]
0000000140049ABD  lea     rax, [rcx+rcx*2]
0000000140049AC1  lea     rcx, [rbp+40h]
0000000140049AC5  lea     rcx, [rcx+rax*4]
0000000140049AC9  mov     [rsp+20h], rcx
0000000140049ACE  lea     rcx, [rbp+0]
0000000140049AD2  call    sub_14004A1D0
0000000140049AD7  test    eax, eax
0000000140049AD9  jz      loc_140049BAC
0000000140049ADF  movss   xmm4, dword ptr [rbp+4]
0000000140049AE4  lea     rax, [rbp+0Ch]
0000000140049AE8  movss   xmm3, dword ptr [rbp+0]
0000000140049AED  lea     r9, [rsp+60h]
0000000140049AF2  movss   xmm2, dword ptr [rbp+8]
0000000140049AF7  lea     r8, [rsp+70h]
0000000140049AFC  mov     edx, [rbp-60h]
0000000140049AFF  movaps  xmm0, xmm3
0000000140049B02  subss   xmm0, dword ptr [rbx-8]
0000000140049B07  mov     ecx, [rbp-5Ch]
0000000140049B0A  movaps  xmm1, xmm2
0000000140049B0D  subss   xmm1, dword ptr [rbx]
0000000140049B11  movss   dword ptr [rsp+40h], xmm13
0000000140049B18  movaps  xmm5, xmm4
0000000140049B1B  subss   xmm5, dword ptr [rbx-4]
0000000140049B20  mulss   xmm0, dword ptr [rbp+0Ch]
0000000140049B25  mulss   xmm1, dword ptr [rbp+14h]
0000000140049B2A  mulss   xmm5, dword ptr [rbp+10h]
0000000140049B2F  movss   dword ptr [rsp+38h], xmm14
0000000140049B36  movss   dword ptr [rsp+30h], xmm15
0000000140049B3D  addss   xmm5, xmm0
0000000140049B41  movaps  xmm0, xmm3
0000000140049B44  subss   xmm0, dword ptr [r14]
0000000140049B49  subss   xmm3, dword ptr [rsi]
0000000140049B4D  addss   xmm5, xmm1
0000000140049B51  movaps  xmm1, xmm4
0000000140049B54  subss   xmm1, dword ptr [r14+4]
0000000140049B5A  subss   xmm4, dword ptr [rsi+4]
0000000140049B5F  movss   dword ptr [rsp+70h], xmm0
0000000140049B65  movaps  xmm0, xmm2
0000000140049B68  subss   xmm0, dword ptr [r14+8]
0000000140049B6E  subss   xmm2, dword ptr [rsi+8]
0000000140049B73  movss   dword ptr [rsp+28h], xmm5
0000000140049B79  movss   dword ptr [rbp-48h], xmm5
0000000140049B7E  movss   dword ptr [rsp+74h], xmm1
0000000140049B84  movss   dword ptr [rsp+78h], xmm0
0000000140049B8A  movss   dword ptr [rsp+60h], xmm3
0000000140049B90  movss   dword ptr [rsp+64h], xmm4
0000000140049B96  movss   dword ptr [rsp+68h], xmm2
0000000140049B9C  mov     [rsp+20h], rax
0000000140049BA1  call    sub_1400052C0
0000000140049BA6  mov     r13d, 1
0000000140049BAC  mov     eax, [rsp+50h]
0000000140049BB0  inc     r15d
0000000140049BB3  mov     rcx, [rsp+58h]
0000000140049BB8  add     eax, 3
0000000140049BBB  add     rcx, 10h
0000000140049BBF  mov     [rsp+50h], eax
0000000140049BC3  add     rbx, 0Ch
0000000140049BC7  mov     [rsp+58h], rcx
0000000140049BCC  cmp     r15d, [r12]
0000000140049BD0  jl      loc_140049A90
0000000140049BD6  mov     [rsp+50h], r13d
0000000140049BDB  xor     r15d, r15d
0000000140049BDE  cmp     [rdi], r15d
0000000140049BE1  jle     loc_140049D4C
0000000140049BE7  xor     ecx, ecx
0000000140049BE9  lea     rbx, [rbp+108h]
0000000140049BF0  xor     eax, eax
0000000140049BF2  mov     [rsp+58h], rcx
0000000140049BF7  mov     [rsp+50h], eax
0000000140049BFB  nop     dword ptr [rax+rax+00h]
0000000140049C00  cdqe
0000000140049C02  lea     rdx, [rbp+100h]
0000000140049C09  lea     r9, [rbp+4900h]
0000000140049C10  lea     r8, [rbp+1900h]
0000000140049C17  lea     rdx, [rdx+rax*4]
0000000140049C1B  mov     rax, [rdi+8]
0000000140049C1F  mov     [rsp+28h], rdx
0000000140049C24  mov     rdx, r12
0000000140049C27  movsxd  rcx, dword ptr [rax+rcx+0Ch]
0000000140049C2C  lea     rax, [rcx+rcx*2]
0000000140049C30  lea     rcx, [rbp+0A0h]
0000000140049C37  lea     rcx, [rcx+rax*4]
0000000140049C3B  mov     [rsp+20h], rcx
0000000140049C40  lea     rcx, [rbp+0]
0000000140049C44  call    sub_14004A1D0
0000000140049C49  test    eax, eax
0000000140049C4B  jz      loc_140049D1E
0000000140049C51  movss   xmm4, dword ptr [rbp+4]
0000000140049C56  lea     rax, [rbp+0Ch]
0000000140049C5A  movss   xmm3, dword ptr [rbp+0]
0000000140049C5F  lea     r9, [rsp+60h]
0000000140049C64  movss   xmm2, dword ptr [rbp+8]
0000000140049C69  lea     r8, [rsp+70h]
0000000140049C6E  mov     edx, [rbp-5Ch]
0000000140049C71  movaps  xmm0, xmm3
0000000140049C74  subss   xmm0, dword ptr [rbx-8]
0000000140049C79  mov     ecx, [rbp-60h]
0000000140049C7C  movaps  xmm1, xmm2
0000000140049C7F  subss   xmm1, dword ptr [rbx]
0000000140049C83  movss   dword ptr [rsp+40h], xmm13
0000000140049C8A  movaps  xmm5, xmm4
0000000140049C8D  subss   xmm5, dword ptr [rbx-4]
0000000140049C92  mulss   xmm0, dword ptr [rbp+0Ch]
0000000140049C97  mulss   xmm1, dword ptr [rbp+14h]
0000000140049C9C  mulss   xmm5, dword ptr [rbp+10h]
0000000140049CA1  movss   dword ptr [rsp+38h], xmm14
0000000140049CA8  movss   dword ptr [rsp+30h], xmm15
0000000140049CAF  addss   xmm5, xmm0
0000000140049CB3  movaps  xmm0, xmm3
0000000140049CB6  subss   xmm0, dword ptr [rsi]
0000000140049CBA  subss   xmm3, dword ptr [r14]
0000000140049CBF  addss   xmm5, xmm1
0000000140049CC3  movaps  xmm1, xmm4
0000000140049CC6  subss   xmm1, dword ptr [rsi+4]
0000000140049CCB  subss   xmm4, dword ptr [r14+4]
0000000140049CD1  movss   dword ptr [rsp+70h], xmm0
0000000140049CD7  movaps  xmm0, xmm2
0000000140049CDA  subss   xmm0, dword ptr [rsi+8]
0000000140049CDF  subss   xmm2, dword ptr [r14+8]
0000000140049CE5  movss   dword ptr [rsp+28h], xmm5
0000000140049CEB  movss   dword ptr [rbp-48h], xmm5
0000000140049CF0  movss   dword ptr [rsp+74h], xmm1
0000000140049CF6  movss   dword ptr [rsp+78h], xmm0
0000000140049CFC  movss   dword ptr [rsp+60h], xmm3
0000000140049D02  movss   dword ptr [rsp+64h], xmm4
0000000140049D08  movss   dword ptr [rsp+68h], xmm2
0000000140049D0E  mov     [rsp+20h], rax
0000000140049D13  call    sub_1400052C0
0000000140049D18  mov     r13d, 1
0000000140049D1E  mov     eax, [rsp+50h]
0000000140049D22  inc     r15d
0000000140049D25  mov     rcx, [rsp+58h]
0000000140049D2A  add     eax, 3
0000000140049D2D  add     rcx, 10h
0000000140049D31  mov     [rsp+50h], eax
0000000140049D35  add     rbx, 0Ch
0000000140049D39  mov     [rsp+58h], rcx
0000000140049D3E  cmp     r15d, [rdi]
0000000140049D41  jl      loc_140049C00
0000000140049D47  mov     [rsp+50h], r13d
0000000140049D4C  xor     eax, eax
0000000140049D4E  mov     [rbp-20h], eax
0000000140049D51  cmp     [r12+20h], eax
0000000140049D56  jle     loc_14004A0CB
0000000140049D5C  movss   xmm12, cs:dword_140278338
0000000140049D65  xor     edx, edx
0000000140049D67  mov     [rsp+58h], rdx
0000000140049D6C  nop     dword ptr [rax+00h]
0000000140049D70  xor     r15d, r15d
0000000140049D73  cmp     [rdi+20h], r15d
0000000140049D77  jle     loc_14004A0AC
0000000140049D7D  xor     ebx, ebx
0000000140049D7F  nop
0000000140049D80  mov     r12, [r12+28h]
0000000140049D85  lea     r9, [rsp+70h]
0000000140049D8A  mov     r13, [rdi+28h]
0000000140049D8E  lea     r8, [rbp-48h]
0000000140049D92  lea     rcx, [rbp-30h]
0000000140049D96  mov     eax, [rdx+r12]
0000000140049D9A  lea     eax, [rax+rax*2]
0000000140049D9D  cdqe
0000000140049D9F  movss   xmm0, dword ptr [rbp+rax*4+1900h]
0000000140049DA8  movss   xmm1, dword ptr [rbp+rax*4+1904h]
0000000140049DB1  movss   dword ptr [rsp+70h], xmm0
0000000140049DB7  movss   xmm0, dword ptr [rbp+rax*4+1908h]
0000000140049DC0  mov     eax, [rdx+r12+4]
0000000140049DC5  lea     rdx, [rbp-40h]
0000000140049DC9  movss   dword ptr [rsp+78h], xmm0
0000000140049DCF  movss   dword ptr [rsp+74h], xmm1
0000000140049DD5  lea     eax, [rax+rax*2]
0000000140049DD8  cdqe
0000000140049DDA  movss   xmm0, dword ptr [rbp+rax*4+1900h]
0000000140049DE3  movss   xmm1, dword ptr [rbp+rax*4+1904h]
0000000140049DEC  movss   dword ptr [rsp+60h], xmm0
0000000140049DF2  movss   xmm0, dword ptr [rbp+rax*4+1908h]
0000000140049DFB  mov     eax, [rbx+r13]
0000000140049DFF  movss   dword ptr [rsp+68h], xmm0
0000000140049E05  movss   dword ptr [rsp+64h], xmm1
0000000140049E0B  lea     eax, [rax+rax*2]
0000000140049E0E  cdqe
0000000140049E10  movss   xmm0, dword ptr [rbp+rax*4+100h]
0000000140049E19  movss   xmm1, dword ptr [rbp+rax*4+104h]
0000000140049E22  movss   dword ptr [rbp-80h], xmm0
0000000140049E27  movss   xmm0, dword ptr [rbp+rax*4+108h]
0000000140049E30  mov     eax, [rbx+r13+4]
0000000140049E35  movss   dword ptr [rbp-78h], xmm0
0000000140049E3A  movss   dword ptr [rbp-7Ch], xmm1
0000000140049E3F  lea     eax, [rax+rax*2]
0000000140049E42  cdqe
0000000140049E44  movss   xmm0, dword ptr [rbp+rax*4+100h]
0000000140049E4D  movss   xmm1, dword ptr [rbp+rax*4+104h]
0000000140049E56  movss   dword ptr [rbp-70h], xmm0
0000000140049E5B  movss   xmm0, dword ptr [rbp+rax*4+108h]
0000000140049E64  lea     rax, [rbp-70h]
0000000140049E68  mov     [rsp+30h], rax
0000000140049E6D  lea     rax, [rbp-80h]
0000000140049E71  mov     [rsp+28h], rax
0000000140049E76  lea     rax, [rsp+60h]
0000000140049E7B  mov     [rsp+20h], rax
0000000140049E80  movss   dword ptr [rbp-6Ch], xmm1
0000000140049E85  movss   dword ptr [rbp-68h], xmm0
0000000140049E8A  call    sub_14008CEB0
0000000140049E8F  test    eax, eax
0000000140049E91  jz      loc_14004A08F
0000000140049E97  cmp     dword ptr [rbp+6230h], 0
0000000140049E9E  jnz     short loc_140049EDA
0000000140049EA0  mov     rax, [rsp+58h]
0000000140049EA5  lea     r8, [rbp+40h]
0000000140049EA9  lea     r9, [rsp+70h]
0000000140049EAE  lea     rdx, [rbp-70h]
0000000140049EB2  movsxd  rax, dword ptr [rax+r12+8]
0000000140049EB7  lea     rcx, [rax+rax*2]
0000000140049EBB  lea     r8, [r8+rcx*4]
0000000140049EBF  lea     rax, [rsp+60h]
0000000140049EC4  lea     rcx, [rbp-80h]
0000000140049EC8  mov     [rsp+20h], rax
0000000140049ECD  call    sub_140187410
0000000140049ED2  test    eax, eax
0000000140049ED4  jz      loc_14004A08F
0000000140049EDA  movsxd  rax, dword ptr [rbx+r13+8]
0000000140049EDF  lea     r8, [rbp+0A0h]
0000000140049EE6  lea     r9, [rbp-80h]
0000000140049EEA  lea     rdx, [rsp+60h]
0000000140049EEF  lea     rcx, [rax+rax*2]
0000000140049EF3  lea     r8, [r8+rcx*4]
0000000140049EF7  lea     rax, [rbp-70h]
0000000140049EFB  lea     rcx, [rsp+70h]
0000000140049F00  mov     [rsp+20h], rax
0000000140049F05  call    sub_140187410
0000000140049F0A  test    eax, eax
0000000140049F0C  jz      loc_14004A08F
0000000140049F12  movss   xmm9, dword ptr [rbp-40h]
0000000140049F18  movss   xmm10, dword ptr [rbp-3Ch]
0000000140049F1E  movaps  xmm6, xmm9
0000000140049F22  movss   xmm4, dword ptr [rbp-30h]
0000000140049F27  movaps  xmm7, xmm10
0000000140049F2B  movss   xmm5, dword ptr [rbp-2Ch]
0000000140049F30  subss   xmm6, xmm4
0000000140049F34  movss   xmm11, dword ptr [rbp-38h]
0000000140049F3A  subss   xmm7, xmm5
0000000140049F3E  movss   xmm3, dword ptr [rbp-28h]
0000000140049F43  movaps  xmm8, xmm11
0000000140049F47  subss   xmm8, xmm3
0000000140049F4C  movaps  xmm0, xmm6
0000000140049F4F  mulss   xmm0, xmm6
0000000140049F53  movaps  xmm2, xmm7
0000000140049F56  mulss   xmm2, xmm7
0000000140049F5A  movaps  xmm1, xmm8
0000000140049F5E  mulss   xmm1, xmm8
0000000140049F63  addss   xmm2, xmm0
0000000140049F67  xorps   xmm0, xmm0
0000000140049F6A  addss   xmm2, xmm1
0000000140049F6E  xorps   xmm1, xmm1
0000000140049F71  sqrtss  xmm0, xmm2
0000000140049F75  ucomiss xmm0, xmm1
0000000140049F78  jz      short loc_140049FAA
0000000140049F7A  movss   xmm2, cs:dword_1402783F4
0000000140049F82  divss   xmm2, xmm0
0000000140049F86  movaps  xmm0, xmm2
0000000140049F89  movaps  xmm1, xmm2
0000000140049F8C  mulss   xmm0, xmm6
0000000140049F90  mulss   xmm1, xmm7
0000000140049F94  mulss   xmm2, xmm8
0000000140049F99  movss   dword ptr [rbp-58h], xmm0
0000000140049F9E  movss   dword ptr [rbp-54h], xmm1
0000000140049FA3  movss   dword ptr [rbp-50h], xmm2
0000000140049FA8  jmp     short loc_140049FB9
0000000140049FAA  mov     qword ptr [rbp-58h], 0
0000000140049FB2  mov     dword ptr [rbp-50h], 0
0000000140049FB9  mov     edx, [rbp-60h]
0000000140049FBC  addss   xmm4, xmm9
0000000140049FC1  mov     ecx, [rbp-5Ch]
0000000140049FC4  addss   xmm5, xmm10
0000000140049FC9  addss   xmm3, xmm11
0000000140049FCE  movss   dword ptr [rsp+40h], xmm13
0000000140049FD5  movss   dword ptr [rsp+38h], xmm14
0000000140049FDC  lea     r9, [rsp+60h]
0000000140049FE1  movss   dword ptr [rsp+30h], xmm15
0000000140049FE8  lea     r8, [rsp+70h]
0000000140049FED  mulss   xmm4, xmm12
0000000140049FF2  mulss   xmm5, xmm12
0000000140049FF7  mulss   xmm3, xmm12
0000000140049FFC  movaps  xmm0, xmm4
0000000140049FFF  unpcklps xmm0, xmm5
000000014004A002  movaps  xmm1, xmm5
000000014004A005  subss   xmm1, dword ptr [r14+4]
000000014004A00B  subss   xmm5, dword ptr [rsi+4]
000000014004A010  movsd   qword ptr [rsp+60h], xmm0
000000014004A016  movsd   qword ptr [rbp-30h], xmm0
000000014004A01B  movsd   qword ptr [rbp-40h], xmm0
000000014004A020  movaps  xmm0, xmm4
000000014004A023  subss   xmm0, dword ptr [r14]
000000014004A028  subss   xmm4, dword ptr [rsi]
000000014004A02C  movss   dword ptr [rsp+68h], xmm3
000000014004A032  mov     eax, [rsp+68h]
000000014004A036  mov     [rbp-28h], eax
000000014004A039  movss   dword ptr [rsp+70h], xmm0
000000014004A03F  movaps  xmm0, xmm3
000000014004A042  subss   xmm0, dword ptr [r14+8]
000000014004A048  subss   xmm3, dword ptr [rsi+8]
000000014004A04D  mov     [rbp-38h], eax
000000014004A050  lea     rax, [rbp-58h]
000000014004A054  movss   dword ptr [rsp+74h], xmm1
000000014004A05A  movss   dword ptr [rsp+60h], xmm4
000000014004A060  movss   dword ptr [rsp+78h], xmm0
000000014004A066  movss   xmm0, dword ptr [rbp-48h]
000000014004A06B  movss   dword ptr [rsp+28h], xmm0
000000014004A071  mov     [rsp+20h], rax
000000014004A076  movss   dword ptr [rsp+64h], xmm5
000000014004A07C  movss   dword ptr [rsp+68h], xmm3
000000014004A082  call    sub_1400052C0
000000014004A087  mov     dword ptr [rsp+50h], 1
000000014004A08F  mov     rdx, [rsp+58h]
000000014004A094  inc     r15d
000000014004A097  mov     r12, [rbp-18h]
000000014004A09B  add     rbx, 0Ch
000000014004A09F  cmp     r15d, [rdi+20h]
000000014004A0A3  jl      loc_140049D80
000000014004A0A9  mov     eax, [rbp-20h]
000000014004A0AC  inc     eax
000000014004A0AE  add     rdx, 0Ch
000000014004A0B2  mov     [rbp-20h], eax
000000014004A0B5  mov     [rsp+58h], rdx
000000014004A0BA  cmp     eax, [r12+20h]
000000014004A0BF  jl      loc_140049D70
000000014004A0C5  mov     eax, [rsp+50h]
000000014004A0C9  jmp     short loc_14004A0CE
000000014004A0CB  mov     eax, r13d
000000014004A0CE  mov     rcx, [rbp+6100h]
000000014004A0D5  xor     rcx, rsp
000000014004A0D8  call    1401F8B20h
000000014004A0DD  lea     r11, [rsp+62B0h]
000000014004A0E5  mov     rbx, [r11+40h]
000000014004A0E9  movaps  xmm6, xmmword ptr [r11-10h]
000000014004A0EE  movaps  xmm7, xmmword ptr [r11-20h]
000000014004A0F3  movaps  xmm8, xmmword ptr [r11-30h]
000000014004A0F8  movaps  xmm9, xmmword ptr [r11-40h]
000000014004A0FD  movaps  xmm10, xmmword ptr [r11-50h]
000000014004A102  movaps  xmm11, xmmword ptr [r11-60h]
000000014004A107  movaps  xmm12, xmmword ptr [r11-70h]
000000014004A10C  movaps  xmm13, xmmword ptr [r11-80h]
000000014004A111  movaps  xmm14, xmmword ptr [r11-90h]
000000014004A119  movaps  xmm15, xmmword ptr [r11-0A0h]
000000014004A121  mov     rsp, r11
000000014004A124  pop     r15
000000014004A126  pop     r14
000000014004A128  pop     r13
000000014004A12A  pop     r12
000000014004A12C  pop     rdi
000000014004A12D  pop     rsi
000000014004A12E  pop     rbp
000000014004A12F  retn
