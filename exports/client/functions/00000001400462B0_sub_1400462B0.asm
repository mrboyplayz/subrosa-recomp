; 0x1400462b0: sub_1400462B0
; Decompilation failed: call analysis failed
00000001400462B0  mov     [rsp+10h], rbx
00000001400462B5  push    rbp
00000001400462B6  push    rsi
00000001400462B7  push    rdi
00000001400462B8  push    r12
00000001400462BA  push    r13
00000001400462BC  push    r14
00000001400462BE  push    r15
00000001400462C0  lea     rbp, [rsp-1950h]
00000001400462C8  mov     eax, 1A50h
00000001400462CD  call    sub_1401F89D0
00000001400462D2  sub     rsp, rax
00000001400462D5  movaps  xmmword ptr [rsp+1A40h], xmm6
00000001400462DD  movaps  xmmword ptr [rsp+1A30h], xmm7
00000001400462E5  movaps  xmmword ptr [rsp+1A20h], xmm8
00000001400462EE  movaps  xmmword ptr [rsp+1A10h], xmm9
00000001400462F7  movaps  xmmword ptr [rsp+1A00h], xmm10
0000000140046300  movaps  xmmword ptr [rsp+19F0h], xmm11
0000000140046309  movaps  xmmword ptr [rsp+19E0h], xmm12
0000000140046312  mov     rax, cs:__security_cookie
0000000140046319  xor     rax, rsp
000000014004631C  mov     [rbp+18A0h], rax
0000000140046323  mov     r14, [rbp+19B8h]
000000014004632A  lea     rdx, cs:140000000h
0000000140046331  mov     rsi, [rbp+19C0h]
0000000140046338  lea     rdi, dword_140404A6C+4FE931F8h
000000014004633F  movsxd  r13, r9d
0000000140046342  mov     rbx, rcx
0000000140046345  imul    r12, r13, 5168h
000000014004634C  movaps  xmmword ptr [rsp+19D0h], xmm13
0000000140046355  movaps  xmmword ptr [rsp+19C0h], xmm14
000000014004635E  movaps  xmmword ptr [rsp+19B0h], xmm15
0000000140046367  mov     [rbp+18h], rcx
000000014004636B  mov     r9d, r8d
000000014004636E  mov     [rsp+50h], r8d
0000000140046373  xor     r11d, r11d
0000000140046376  mov     [rsp+54h], r13d
000000014004637B  mov     [rbp+20h], r12
000000014004637F  movsxd  rax, dword ptr [r12+rdx+1F2D9204h]
0000000140046387  imul    rcx, rax, 2C040h
000000014004638E  movsxd  r8, dword ptr [rcx+rdx+50297C5Ch]
0000000140046396  mov     [rbp-50h], r8
000000014004639A  cmp     r8, 4
000000014004639E  jl      loc_140046F10
00000001400463A4  movsxd  rax, dword ptr [r12+rdx+1F2D9204h]
00000001400463AC  lea     rcx, (rva dword_140404A6C+4FE931F8h)[rdx]
00000001400463B3  movss   xmm8, dword ptr [r14]
00000001400463B8  lea     rbx, [rbp+0CCh]
00000001400463BF  movss   xmm10, dword ptr [r14+4]
00000001400463C5  lea     rdx, [rbp+0A4h]
00000001400463CC  movss   xmm12, dword ptr [r14+8]
00000001400463D2  lea     r9, [rbp+0A8h]
00000001400463D9  movss   xmm7, dword ptr [rsi]
00000001400463DD  lea     r14, dword_140404A6C+4FE931F8h
00000001400463E4  movss   xmm9, dword ptr [rsi+4]
00000001400463EA  lea     r10, [rbp+0B0h]
00000001400463F1  movss   xmm11, dword ptr [rsi+8]
00000001400463F7  lea     r11, [rbp+0B4h]
00000001400463FE  movss   xmm13, dword ptr [rsi+0Ch]
0000000140046404  lea     rdi, [rbp+0BCh]
000000014004640B  movss   xmm14, dword ptr [rsi+10h]
0000000140046411  lea     r15, [rbp+0C0h]
0000000140046418  movss   xmm15, dword ptr [rsi+14h]
000000014004641E  lea     r13, [rbp+0C8h]
0000000140046425  mov     [rbp+0], rax
0000000140046429  imul    rax, 2C040h
0000000140046430  sub     rbx, rax
0000000140046433  sub     rdx, rax
0000000140046436  sub     rbx, r14
0000000140046439  sub     r9, rax
000000014004643C  mov     [rbp+28h], rbx
0000000140046440  sub     r10, rax
0000000140046443  mov     r12, [rbp+28h]
0000000140046447  lea     rbx, [rbp+0A0h]
000000014004644E  sub     rbx, rax
0000000140046451  sub     r11, rax
0000000140046454  sub     rbx, r14
0000000140046457  sub     rdi, rax
000000014004645A  mov     [rbp+10h], rbx
000000014004645E  sub     r15, rax
0000000140046461  sub     r13, rax
0000000140046464  lea     rbx, [rbp+0ACh]
000000014004646B  sub     rbx, rax
000000014004646E  add     rcx, rax
0000000140046471  sub     rbx, r14
0000000140046474  sub     rdx, r14
0000000140046477  mov     [rbp+30h], rbx
000000014004647B  sub     r9, r14
000000014004647E  sub     r10, r14
0000000140046481  lea     rbx, [rbp+0B8h]
0000000140046488  sub     rbx, rax
000000014004648B  sub     r11, r14
000000014004648E  sub     rbx, r14
0000000140046491  sub     rdi, r14
0000000140046494  mov     [rbp-40h], rbx
0000000140046498  sub     r15, r14
000000014004649B  sub     r13, r14
000000014004649E  lea     rbx, [rbp+0C4h]
00000001400464A5  sub     rbx, rax
00000001400464A8  lea     rax, [r8-4]
00000001400464AC  sub     rbx, r14
00000001400464AF  shr     rax, 2
00000001400464B3  mov     r14, [rbp+10h]
00000001400464B7  inc     rax
00000001400464BA  mov     [rbp-68h], rbx
00000001400464BE  lea     r8, ds:0[rax*4]
00000001400464C6  mov     [rbp+8], r8
00000001400464CA  mov     r8, [rbp+30h]
00000001400464CE  xchg    ax, ax
00000001400464D0  movss   xmm6, dword ptr [rcx-4]
00000001400464D5  movss   xmm4, dword ptr [rcx]
00000001400464D9  movaps  xmm2, xmm6
00000001400464DC  movss   xmm5, dword ptr [rcx+4]
00000001400464E1  movaps  xmm3, xmm6
00000001400464E4  mov     rbx, [rbp-40h]
00000001400464E8  movaps  xmm0, xmm4
00000001400464EB  mulss   xmm2, xmm7
00000001400464EF  movaps  xmm1, xmm5
00000001400464F2  mulss   xmm1, dword ptr [rsi+18h]
00000001400464F7  addss   xmm2, xmm8
00000001400464FC  mulss   xmm3, xmm9
0000000140046501  mulss   xmm0, xmm13
0000000140046506  addss   xmm3, xmm10
000000014004650B  mulss   xmm6, xmm11
0000000140046510  addss   xmm2, xmm0
0000000140046514  movaps  xmm0, xmm4
0000000140046517  mulss   xmm0, xmm14
000000014004651C  addss   xmm6, xmm12
0000000140046521  mulss   xmm4, xmm15
0000000140046526  addss   xmm2, xmm1
000000014004652A  movaps  xmm1, xmm5
000000014004652D  mulss   xmm1, dword ptr [rsi+1Ch]
0000000140046532  addss   xmm3, xmm0
0000000140046536  mulss   xmm5, dword ptr [rsi+20h]
000000014004653B  addss   xmm6, xmm4
000000014004653F  movss   xmm4, dword ptr [rcx+0Ch]
0000000140046544  addss   xmm3, xmm1
0000000140046548  movss   dword ptr [r14+rcx], xmm2
000000014004654E  movaps  xmm0, xmm4
0000000140046551  addss   xmm6, xmm5
0000000140046555  mulss   xmm0, xmm13
000000014004655A  movss   xmm5, dword ptr [rcx+10h]
000000014004655F  movss   dword ptr [rdx+rcx], xmm3
0000000140046564  movaps  xmm1, xmm5
0000000140046567  mulss   xmm1, dword ptr [rsi+18h]
000000014004656C  movss   dword ptr [r9+rcx], xmm6
0000000140046572  movss   xmm6, dword ptr [rcx+8]
0000000140046577  movaps  xmm2, xmm6
000000014004657A  movaps  xmm3, xmm6
000000014004657D  mulss   xmm2, xmm7
0000000140046581  mulss   xmm3, xmm9
0000000140046586  addss   xmm2, xmm8
000000014004658B  mulss   xmm6, xmm11
0000000140046590  addss   xmm3, xmm10
0000000140046595  addss   xmm6, xmm12
000000014004659A  addss   xmm2, xmm0
000000014004659E  movaps  xmm0, xmm4
00000001400465A1  mulss   xmm0, xmm14
00000001400465A6  mulss   xmm4, xmm15
00000001400465AB  addss   xmm2, xmm1
00000001400465AF  movaps  xmm1, xmm5
00000001400465B2  mulss   xmm1, dword ptr [rsi+1Ch]
00000001400465B7  addss   xmm3, xmm0
00000001400465BB  mulss   xmm5, dword ptr [rsi+20h]
00000001400465C0  addss   xmm6, xmm4
00000001400465C4  movss   xmm4, dword ptr [rcx+18h]
00000001400465C9  addss   xmm3, xmm1
00000001400465CD  movss   dword ptr [r8+rcx], xmm2
00000001400465D3  movaps  xmm0, xmm4
00000001400465D6  addss   xmm6, xmm5
00000001400465DA  mulss   xmm0, xmm13
00000001400465DF  movss   xmm5, dword ptr [rcx+1Ch]
00000001400465E4  movss   dword ptr [r10+rcx], xmm3
00000001400465EA  movaps  xmm1, xmm5
00000001400465ED  mulss   xmm1, dword ptr [rsi+18h]
00000001400465F2  movss   dword ptr [r11+rcx], xmm6
00000001400465F8  movss   xmm6, dword ptr [rcx+14h]
00000001400465FD  movaps  xmm2, xmm6
0000000140046600  movaps  xmm3, xmm6
0000000140046603  mulss   xmm2, xmm7
0000000140046607  mulss   xmm3, xmm9
000000014004660C  addss   xmm2, xmm8
0000000140046611  addss   xmm3, xmm10
0000000140046616  addss   xmm2, xmm0
000000014004661A  movaps  xmm0, xmm4
000000014004661D  mulss   xmm0, xmm14
0000000140046622  addss   xmm2, xmm1
0000000140046626  movaps  xmm1, xmm5
0000000140046629  addss   xmm3, xmm0
000000014004662D  movss   dword ptr [rbx+rcx], xmm2
0000000140046632  mulss   xmm1, dword ptr [rsi+1Ch]
0000000140046637  mov     rbx, [rbp-68h]
000000014004663B  mulss   xmm5, dword ptr [rsi+20h]
0000000140046640  movss   xmm2, dword ptr [rcx+28h]
0000000140046645  addss   xmm3, xmm1
0000000140046649  movss   xmm1, dword ptr [rcx+24h]
000000014004664E  movaps  xmm0, xmm1
0000000140046651  mulss   xmm4, xmm15
0000000140046656  mulss   xmm0, xmm13
000000014004665B  movss   dword ptr [rdi+rcx], xmm3
0000000140046660  mulss   xmm6, xmm11
0000000140046665  addss   xmm6, xmm12
000000014004666A  addss   xmm6, xmm4
000000014004666E  addss   xmm6, xmm5
0000000140046672  movss   xmm5, dword ptr [rcx+20h]
0000000140046677  movaps  xmm4, xmm5
000000014004667A  movaps  xmm3, xmm5
000000014004667D  mulss   xmm4, xmm7
0000000140046681  mulss   xmm3, xmm9
0000000140046686  movss   dword ptr [r15+rcx], xmm6
000000014004668C  addss   xmm4, xmm8
0000000140046691  mulss   xmm5, xmm11
0000000140046696  addss   xmm3, xmm10
000000014004669B  addss   xmm4, xmm0
000000014004669F  movaps  xmm0, xmm1
00000001400466A2  mulss   xmm0, xmm14
00000001400466A7  addss   xmm5, xmm12
00000001400466AC  mulss   xmm1, xmm15
00000001400466B1  addss   xmm3, xmm0
00000001400466B5  movss   dword ptr [rsp+60h], xmm4
00000001400466BB  movaps  xmm0, xmm2
00000001400466BE  mulss   xmm0, dword ptr [rsi+18h]
00000001400466C3  addss   xmm5, xmm1
00000001400466C7  movaps  xmm1, xmm2
00000001400466CA  mulss   xmm2, dword ptr [rsi+20h]
00000001400466CF  mulss   xmm1, dword ptr [rsi+1Ch]
00000001400466D4  addss   xmm0, xmm4
00000001400466D8  addss   xmm2, xmm5
00000001400466DC  movss   dword ptr [rsp+64h], xmm3
00000001400466E2  movss   dword ptr [rsp+68h], xmm5
00000001400466E8  addss   xmm1, xmm3
00000001400466EC  movss   dword ptr [rbx+rcx], xmm0
00000001400466F1  mov     rbx, [rbp+18h]
00000001400466F5  movss   dword ptr [rcx+r13], xmm1
00000001400466FB  movss   dword ptr [r12+rcx], xmm2
0000000140046701  add     rcx, 30h ; '0'
0000000140046705  sub     rax, 1
0000000140046709  jnz     loc_1400464D0
000000014004670F  mov     r8, [rbp-50h]
0000000140046713  mov     r11, [rbp+8]
0000000140046717  mov     r14, [rbp+19B8h]
000000014004671E  cmp     r11, r8
0000000140046721  jge     loc_14004683D
0000000140046727  mov     r9, [rbp+0]
000000014004672B  lea     rdx, cs:140000000h
0000000140046732  lea     rdi, dword_140404A6C+4FE931F8h
0000000140046739  movss   xmm6, dword ptr [rsi+0Ch]
000000014004673E  lea     r10, [rbp+0A0h]
0000000140046745  movss   xmm13, dword ptr [rsi+10h]
000000014004674B  movss   xmm14, dword ptr [rsi+14h]
0000000140046751  movss   xmm15, dword ptr [rsi+18h]
0000000140046757  imul    rax, r9, 3AB0h
000000014004675E  add     rax, r11
0000000140046761  lea     rcx, [rax+rax*2]
0000000140046765  imul    rax, r9, 2C040h
000000014004676C  lea     rdx, [rdx+rcx*4]
0000000140046770  sub     r10, rax
0000000140046773  lea     rcx, [rbp+0A4h]
000000014004677A  sub     rcx, rax
000000014004677D  lea     r9, [rbp+0A8h]
0000000140046784  sub     r9, rax
0000000140046787  lea     rdx, [rdx+50297C64h]
000000014004678E  sub     rcx, rdi
0000000140046791  sub     r9, rdi
0000000140046794  sub     r10, rdi
0000000140046797  sub     r8, r11
000000014004679A  movss   xmm1, dword ptr [rdx]
000000014004679E  movss   xmm5, dword ptr [rdx-4]
00000001400467A3  movaps  xmm0, xmm1
00000001400467A6  movss   xmm2, dword ptr [rdx+4]
00000001400467AB  movaps  xmm4, xmm5
00000001400467AE  mulss   xmm0, xmm6
00000001400467B2  movaps  xmm3, xmm5
00000001400467B5  mulss   xmm4, xmm7
00000001400467B9  mulss   xmm3, xmm9
00000001400467BE  mulss   xmm5, xmm11
00000001400467C3  addss   xmm4, xmm8
00000001400467C8  addss   xmm3, xmm10
00000001400467CD  addss   xmm5, xmm12
00000001400467D2  addss   xmm4, xmm0
00000001400467D6  movaps  xmm0, xmm1
00000001400467D9  mulss   xmm0, xmm13
00000001400467DE  mulss   xmm1, xmm14
00000001400467E3  addss   xmm3, xmm0
00000001400467E7  movss   dword ptr [rsp+60h], xmm4
00000001400467ED  movaps  xmm0, xmm2
00000001400467F0  addss   xmm5, xmm1
00000001400467F4  mulss   xmm0, xmm15
00000001400467F9  movaps  xmm1, xmm2
00000001400467FC  mulss   xmm2, dword ptr [rsi+20h]
0000000140046801  mulss   xmm1, dword ptr [rsi+1Ch]
0000000140046806  addss   xmm0, xmm4
000000014004680A  addss   xmm2, xmm5
000000014004680E  movss   dword ptr [rsp+64h], xmm3
0000000140046814  movss   dword ptr [rsp+68h], xmm5
000000014004681A  addss   xmm1, xmm3
000000014004681E  movss   dword ptr [rdx+r10], xmm0
0000000140046824  movss   dword ptr [rdx+r9], xmm2
000000014004682A  movss   dword ptr [rdx+rcx], xmm1
000000014004682F  add     rdx, 0Ch
0000000140046833  sub     r8, 1
0000000140046837  jnz     loc_14004679A
000000014004683D  mov     r9d, [rsp+50h]
0000000140046842  mov     r12, [rbp+19D0h]
0000000140046849  lea     rcx, [rbx+2628h]
0000000140046850  mov     rbx, [rbp+19C8h]
0000000140046857  mov     edx, 20h ; ' '
000000014004685C  nop     dword ptr [rax+00h]
0000000140046860  cmp     dword ptr [rcx-1Ch], 0
0000000140046864  mov     r11d, [rsp+54h]
0000000140046869  jle     loc_1400469C8
000000014004686F  lea     eax, [r9+1]
0000000140046873  cmp     [rcx-14h], eax
0000000140046876  jnz     loc_1400469C8
000000014004687C  cmp     [rcx-10h], r11d
0000000140046880  jnz     loc_1400469C8
0000000140046886  cmp     dword ptr [rcx-0Ch], 0
000000014004688A  jnz     loc_1400469C8
0000000140046890  movss   xmm6, dword ptr [rcx-4]
0000000140046895  subss   xmm6, dword ptr [rbx+4]
000000014004689A  movss   xmm3, dword ptr [rcx-8]
000000014004689F  subss   xmm3, dword ptr [rbx]
00000001400468A3  movss   xmm2, dword ptr [rcx]
00000001400468A7  subss   xmm2, dword ptr [rbx+8]
00000001400468AC  movaps  xmm4, xmm6
00000001400468AF  movss   dword ptr [rsp+64h], xmm6
00000001400468B5  mulss   xmm4, dword ptr [r12+4]
00000001400468BC  movaps  xmm5, xmm6
00000001400468BF  mulss   xmm5, dword ptr [r12+10h]
00000001400468C6  movaps  xmm0, xmm3
00000001400468C9  mulss   xmm0, dword ptr [r12]
00000001400468CF  movaps  xmm1, xmm2
00000001400468D2  mulss   xmm1, dword ptr [r12+8]
00000001400468D9  mulss   xmm6, dword ptr [r12+1Ch]
00000001400468E0  addss   xmm4, xmm0
00000001400468E4  movaps  xmm0, xmm3
00000001400468E7  movss   dword ptr [rsp+60h], xmm3
00000001400468ED  mulss   xmm0, dword ptr [r12+0Ch]
00000001400468F4  mulss   xmm3, dword ptr [r12+18h]
00000001400468FB  addss   xmm4, xmm1
00000001400468FF  movaps  xmm1, xmm2
0000000140046902  movss   dword ptr [rsp+68h], xmm2
0000000140046908  mulss   xmm1, dword ptr [r12+14h]
000000014004690F  addss   xmm5, xmm0
0000000140046913  mulss   xmm2, dword ptr [r12+20h]
000000014004691A  addss   xmm6, xmm3
000000014004691E  movaps  xmm0, xmm4
0000000140046921  movss   dword ptr [rsp+78h], xmm4
0000000140046927  mulss   xmm0, dword ptr [rsi]
000000014004692B  addss   xmm5, xmm1
000000014004692F  addss   xmm6, xmm2
0000000140046933  movaps  xmm1, xmm4
0000000140046936  addss   xmm0, dword ptr [r14]
000000014004693B  movaps  xmm3, xmm5
000000014004693E  movss   dword ptr [rsp+7Ch], xmm5
0000000140046944  movaps  xmm2, xmm5
0000000140046947  movss   dword ptr [rbp-80h], xmm6
000000014004694C  movss   dword ptr [rcx-8], xmm0
0000000140046951  mulss   xmm1, dword ptr [rsi+4]
0000000140046956  addss   xmm1, dword ptr [r14+4]
000000014004695C  movss   dword ptr [rcx-4], xmm1
0000000140046961  mulss   xmm4, dword ptr [rsi+8]
0000000140046966  addss   xmm4, dword ptr [r14+8]
000000014004696C  movss   dword ptr [rcx], xmm4
0000000140046970  mulss   xmm3, dword ptr [rsi+0Ch]
0000000140046975  addss   xmm3, xmm0
0000000140046979  movaps  xmm0, xmm6
000000014004697C  movss   dword ptr [rcx-8], xmm3
0000000140046981  mulss   xmm2, dword ptr [rsi+10h]
0000000140046986  addss   xmm2, xmm1
000000014004698A  movaps  xmm1, xmm6
000000014004698D  movss   dword ptr [rcx-4], xmm2
0000000140046992  mulss   xmm5, dword ptr [rsi+14h]
0000000140046997  addss   xmm5, xmm4
000000014004699B  movss   dword ptr [rcx], xmm5
000000014004699F  mulss   xmm0, dword ptr [rsi+18h]
00000001400469A4  addss   xmm0, xmm3
00000001400469A8  movss   dword ptr [rcx-8], xmm0
00000001400469AD  mulss   xmm1, dword ptr [rsi+1Ch]
00000001400469B2  addss   xmm1, xmm2
00000001400469B6  movss   dword ptr [rcx-4], xmm1
00000001400469BB  mulss   xmm6, dword ptr [rsi+20h]
00000001400469C0  addss   xmm6, xmm5
00000001400469C4  movss   dword ptr [rcx], xmm6
00000001400469C8  cmp     dword ptr [rcx+2Ch], 0
00000001400469CC  jle     loc_140046B2F
00000001400469D2  lea     eax, [r9+1]
00000001400469D6  cmp     [rcx+34h], eax
00000001400469D9  jnz     loc_140046B2F
00000001400469DF  cmp     [rcx+38h], r11d
00000001400469E3  jnz     loc_140046B2F
00000001400469E9  cmp     dword ptr [rcx+3Ch], 0
00000001400469ED  jnz     loc_140046B2F
00000001400469F3  movss   xmm6, dword ptr [rcx+44h]
00000001400469F8  subss   xmm6, dword ptr [rbx+4]
00000001400469FD  movss   xmm3, dword ptr [rcx+40h]
0000000140046A02  subss   xmm3, dword ptr [rbx]
0000000140046A06  movss   xmm2, dword ptr [rcx+48h]
0000000140046A0B  subss   xmm2, dword ptr [rbx+8]
0000000140046A10  movaps  xmm4, xmm6
0000000140046A13  movss   dword ptr [rsp+64h], xmm6
0000000140046A19  mulss   xmm4, dword ptr [r12+4]
0000000140046A20  movaps  xmm5, xmm6
0000000140046A23  mulss   xmm5, dword ptr [r12+10h]
0000000140046A2A  movaps  xmm0, xmm3
0000000140046A2D  mulss   xmm0, dword ptr [r12]
0000000140046A33  movaps  xmm1, xmm2
0000000140046A36  mulss   xmm1, dword ptr [r12+8]
0000000140046A3D  mulss   xmm6, dword ptr [r12+1Ch]
0000000140046A44  addss   xmm4, xmm0
0000000140046A48  movaps  xmm0, xmm3
0000000140046A4B  movss   dword ptr [rsp+60h], xmm3
0000000140046A51  mulss   xmm0, dword ptr [r12+0Ch]
0000000140046A58  mulss   xmm3, dword ptr [r12+18h]
0000000140046A5F  addss   xmm4, xmm1
0000000140046A63  movaps  xmm1, xmm2
0000000140046A66  movss   dword ptr [rsp+68h], xmm2
0000000140046A6C  mulss   xmm1, dword ptr [r12+14h]
0000000140046A73  addss   xmm5, xmm0
0000000140046A77  mulss   xmm2, dword ptr [r12+20h]
0000000140046A7E  addss   xmm6, xmm3
0000000140046A82  movaps  xmm0, xmm4
0000000140046A85  movss   dword ptr [rsp+78h], xmm4
0000000140046A8B  mulss   xmm0, dword ptr [rsi]
0000000140046A8F  addss   xmm5, xmm1
0000000140046A93  addss   xmm6, xmm2
0000000140046A97  movaps  xmm1, xmm4
0000000140046A9A  addss   xmm0, dword ptr [r14]
0000000140046A9F  movaps  xmm3, xmm5
0000000140046AA2  movss   dword ptr [rsp+7Ch], xmm5
0000000140046AA8  movaps  xmm2, xmm5
0000000140046AAB  movss   dword ptr [rbp-80h], xmm6
0000000140046AB0  movss   dword ptr [rcx+40h], xmm0
0000000140046AB5  mulss   xmm1, dword ptr [rsi+4]
0000000140046ABA  addss   xmm1, dword ptr [r14+4]
0000000140046AC0  movss   dword ptr [rcx+44h], xmm1
0000000140046AC5  mulss   xmm4, dword ptr [rsi+8]
0000000140046ACA  addss   xmm4, dword ptr [r14+8]
0000000140046AD0  movss   dword ptr [rcx+48h], xmm4
0000000140046AD5  mulss   xmm3, dword ptr [rsi+0Ch]
0000000140046ADA  addss   xmm3, xmm0
0000000140046ADE  movaps  xmm0, xmm6
0000000140046AE1  movss   dword ptr [rcx+40h], xmm3
0000000140046AE6  mulss   xmm2, dword ptr [rsi+10h]
0000000140046AEB  addss   xmm2, xmm1
0000000140046AEF  movaps  xmm1, xmm6
0000000140046AF2  movss   dword ptr [rcx+44h], xmm2
0000000140046AF7  mulss   xmm5, dword ptr [rsi+14h]
0000000140046AFC  addss   xmm5, xmm4
0000000140046B00  movss   dword ptr [rcx+48h], xmm5
0000000140046B05  mulss   xmm0, dword ptr [rsi+18h]
0000000140046B0A  addss   xmm0, xmm3
0000000140046B0E  movss   dword ptr [rcx+40h], xmm0
0000000140046B13  mulss   xmm1, dword ptr [rsi+1Ch]
0000000140046B18  addss   xmm1, xmm2
0000000140046B1C  movss   dword ptr [rcx+44h], xmm1
0000000140046B21  mulss   xmm6, dword ptr [rsi+20h]
0000000140046B26  addss   xmm6, xmm5
0000000140046B2A  movss   dword ptr [rcx+48h], xmm6
0000000140046B2F  add     rcx, 90h
0000000140046B36  sub     rdx, 1
0000000140046B3A  jnz     loc_140046860
0000000140046B40  mov     rbx, [rbp+18h]
0000000140046B44  xor     edi, edi
0000000140046B46  mov     r12, [rbp+20h]
0000000140046B4A  xorps   xmm12, xmm12
0000000140046B4E  movss   xmm6, dword ptr [rsp+58h]
0000000140046B54  mov     [rbp-50h], edi
0000000140046B57  cmp     [rbx], edi
0000000140046B59  jle     loc_140046F79
0000000140046B5F  movss   xmm8, cs:dword_140278280
0000000140046B68  movss   xmm9, cs:dword_14027812C
0000000140046B71  movsxd  rax, edi
0000000140046B74  lea     rcx, [rbx+2610h]
0000000140046B7B  imul    r13, rax, 5Ch ; '\'
0000000140046B7F  xor     r15d, r15d
0000000140046B82  mov     [rbp+88h], edi
0000000140046B88  xor     edx, edx
0000000140046B8A  movss   xmm0, dword ptr [rbx+r13+48h]
0000000140046B91  movss   xmm1, dword ptr [rbx+r13+4Ch]
0000000140046B98  movss   xmm7, dword ptr [rbx+r13+54h]
0000000140046B9F  movss   xmm2, dword ptr [rbx+r13+58h]
0000000140046BA6  movss   xmm3, dword ptr [rbx+r13+5Ch]
0000000140046BAD  movss   dword ptr [rbp+54h], xmm0
0000000140046BB2  movss   xmm0, dword ptr [rbx+r13+50h]
0000000140046BB9  movss   dword ptr [rbp+5Ch], xmm0
0000000140046BBE  movss   dword ptr [rbp+58h], xmm1
0000000140046BC3  cmp     dword ptr [rcx-4], 0
0000000140046BC7  jle     short loc_140046BE2
0000000140046BC9  cmp     [rcx], edi
0000000140046BCB  jnz     short loc_140046BE2
0000000140046BCD  lea     eax, [r9+1]
0000000140046BD1  cmp     [rcx+4], eax
0000000140046BD4  jnz     short loc_140046BE2
0000000140046BD6  cmp     [rcx+8], r11d
0000000140046BDA  jnz     short loc_140046BE2
0000000140046BDC  cmp     dword ptr [rcx+0Ch], 0
0000000140046BE0  jz      short loc_140046BF8
0000000140046BE2  inc     r15d
0000000140046BE5  inc     rdx
0000000140046BE8  add     rcx, 48h ; 'H'
0000000140046BEC  cmp     rdx, 40h ; '@'
0000000140046BF0  jl      short loc_140046BC3
0000000140046BF2  mov     r15d, 0FFFFFFFFh
0000000140046BF8  mov     rax, [rbp+19C8h]
0000000140046BFF  subss   xmm7, dword ptr [rax]
0000000140046C03  subss   xmm2, dword ptr [rax+4]
0000000140046C08  subss   xmm3, dword ptr [rax+8]
0000000140046C0D  mov     rax, [rbp+19D0h]
0000000140046C14  movss   dword ptr [rsp+60h], xmm7
0000000140046C1A  movaps  xmm5, xmm7
0000000140046C1D  movss   dword ptr [rsp+64h], xmm2
0000000140046C23  movaps  xmm0, xmm2
0000000140046C26  mulss   xmm5, dword ptr [rax]
0000000140046C2A  movaps  xmm1, xmm3
0000000140046C2D  mulss   xmm0, dword ptr [rax+4]
0000000140046C32  movaps  xmm4, xmm7
0000000140046C35  mulss   xmm1, dword ptr [rax+8]
0000000140046C3A  mulss   xmm4, dword ptr [rax+0Ch]
0000000140046C3F  addss   xmm5, xmm0
0000000140046C43  mulss   xmm7, dword ptr [rax+18h]
0000000140046C48  movaps  xmm0, xmm2
0000000140046C4B  mulss   xmm2, dword ptr [rax+1Ch]
0000000140046C50  mulss   xmm0, dword ptr [rax+10h]
0000000140046C55  addss   xmm5, xmm1
0000000140046C59  movss   dword ptr [rsp+68h], xmm3
0000000140046C5F  addss   xmm7, xmm2
0000000140046C63  movaps  xmm1, xmm3
0000000140046C66  mulss   xmm3, dword ptr [rax+20h]
0000000140046C6B  mulss   xmm1, dword ptr [rax+14h]
0000000140046C70  addss   xmm4, xmm0
0000000140046C74  movss   dword ptr [rsp+78h], xmm5
0000000140046C7A  addss   xmm7, xmm3
0000000140046C7E  movaps  xmm2, xmm5
0000000140046C81  movaps  xmm3, xmm5
0000000140046C84  mulss   xmm2, dword ptr [rsi]
0000000140046C88  mulss   xmm3, dword ptr [rsi+4]
0000000140046C8D  addss   xmm4, xmm1
0000000140046C91  mulss   xmm5, dword ptr [rsi+8]
0000000140046C96  movaps  xmm1, xmm7
0000000140046C99  mulss   xmm1, dword ptr [rsi+18h]
0000000140046C9E  movss   dword ptr [rsp+7Ch], xmm4
0000000140046CA4  movaps  xmm0, xmm4
0000000140046CA7  mulss   xmm0, dword ptr [rsi+0Ch]
0000000140046CAC  movss   dword ptr [rbp-80h], xmm7
0000000140046CB1  addss   xmm2, dword ptr [r14]
0000000140046CB6  addss   xmm3, dword ptr [r14+4]
0000000140046CBC  addss   xmm5, dword ptr [r14+8]
0000000140046CC2  addss   xmm2, xmm0
0000000140046CC6  movaps  xmm0, xmm4
0000000140046CC9  mulss   xmm0, dword ptr [rsi+10h]
0000000140046CCE  mulss   xmm4, dword ptr [rsi+14h]
0000000140046CD3  addss   xmm2, xmm1
0000000140046CD7  movaps  xmm1, xmm7
0000000140046CDA  mulss   xmm1, dword ptr [rsi+1Ch]
0000000140046CDF  addss   xmm3, xmm0
0000000140046CE3  mulss   xmm7, dword ptr [rsi+20h]
0000000140046CE8  addss   xmm5, xmm4
0000000140046CEC  movss   dword ptr [rbp+48h], xmm2
0000000140046CF1  addss   xmm3, xmm1
0000000140046CF5  addss   xmm5, xmm7
0000000140046CF9  movss   dword ptr [rbp+4Ch], xmm3
0000000140046CFE  movss   dword ptr [rbp+50h], xmm5
0000000140046D03  cmp     r15d, 0FFFFFFFFh
0000000140046D07  jz      short loc_140046D3A
0000000140046D09  movsxd  rax, r15d
0000000140046D0C  lea     rcx, [rax+rax*8]
0000000140046D10  movss   xmm0, dword ptr [rbx+rcx*8+2620h]
0000000140046D19  movss   xmm1, dword ptr [rbx+rcx*8+2624h]
0000000140046D22  movss   dword ptr [rbp+48h], xmm0
0000000140046D27  movss   xmm0, dword ptr [rbx+rcx*8+2628h]
0000000140046D30  movss   dword ptr [rbp+50h], xmm0
0000000140046D35  movss   dword ptr [rbp+4Ch], xmm1
0000000140046D3A  lea     r9, [rbp+54h]
0000000140046D3E  mov     dword ptr [rsp+20h], 0
0000000140046D46  lea     r8, [rbp+48h]
0000000140046D4A  mov     edx, r11d
0000000140046D4D  lea     rcx, [rbp-28h]
0000000140046D51  call    sub_1400E15A0
0000000140046D56  movss   xmm3, dword ptr [rbp-20h]
0000000140046D5B  movss   xmm4, dword ptr [rbp-24h]
0000000140046D60  movss   xmm5, dword ptr [rbp-28h]
0000000140046D65  movss   dword ptr [rbp+8], xmm3
0000000140046D6A  movss   dword ptr [rbp+0], xmm4
0000000140046D6F  movss   dword ptr [rbp-44h], xmm5
0000000140046D74  test    eax, eax
0000000140046D76  jz      loc_140046F60
0000000140046D7C  movss   xmm0, dword ptr [rbp-18h]
0000000140046D81  movaps  xmm6, xmm4
0000000140046D84  subss   xmm6, dword ptr [rbp+58h]
0000000140046D89  movss   xmm1, dword ptr [rbp-1Ch]
0000000140046D8E  movss   xmm2, dword ptr [rbp-14h]
0000000140046D93  movss   dword ptr [rbp-74h], xmm0
0000000140046D98  movss   dword ptr [rbp-78h], xmm1
0000000140046D9D  mulss   xmm6, xmm0
0000000140046DA1  movaps  xmm0, xmm5
0000000140046DA4  subss   xmm0, dword ptr [rbp+54h]
0000000140046DA9  movss   dword ptr [rbp-70h], xmm2
0000000140046DAE  mulss   xmm0, xmm1
0000000140046DB2  movaps  xmm1, xmm3
0000000140046DB5  subss   xmm1, dword ptr [rbp+5Ch]
0000000140046DBA  addss   xmm6, xmm0
0000000140046DBE  mulss   xmm1, xmm2
0000000140046DC2  movss   xmm2, cs:dword_1402781BC
0000000140046DCA  addss   xmm6, xmm1
0000000140046DCE  comiss  xmm6, xmm2
0000000140046DD1  movss   dword ptr [rsp+58h], xmm6
0000000140046DD7  jnb     short loc_140046DE2
0000000140046DD9  movss   dword ptr [rsp+58h], xmm2
0000000140046DDF  movaps  xmm6, xmm2
0000000140046DE2  movaps  xmm0, xmm5
0000000140046DE5  mov     qword ptr [rsp+60h], 0
0000000140046DEE  subss   xmm0, dword ptr [r14]
0000000140046DF3  movaps  xmm1, xmm4
0000000140046DF6  mov     dword ptr [rsp+68h], 0
0000000140046DFE  subss   xmm1, dword ptr [r14+4]
0000000140046E04  xor     esi, esi
0000000140046E06  movss   dword ptr [rsp+78h], xmm0
0000000140046E0C  movaps  xmm0, xmm3
0000000140046E0F  subss   xmm0, dword ptr [r14+8]
0000000140046E15  movss   dword ptr [rsp+7Ch], xmm1
0000000140046E1B  movss   dword ptr [rbp-80h], xmm0
0000000140046E20  cmp     [rbx+r13+4], esi
0000000140046E25  jle     short loc_140046E82
0000000140046E27  lea     rdi, [rbx+8]
0000000140046E2B  add     rdi, r13
0000000140046E2E  xchg    ax, ax
0000000140046E30  mov     edx, [rbp+19B0h]
0000000140046E36  lea     rax, [rbp-78h]
0000000140046E3A  mov     ecx, [rdi]
0000000140046E3C  lea     r9, [rsp+78h]
0000000140046E41  movss   dword ptr [rsp+40h], xmm8
0000000140046E48  lea     r8, [rsp+60h]
0000000140046E4D  movss   dword ptr [rsp+38h], xmm2
0000000140046E53  movss   dword ptr [rsp+30h], xmm9
0000000140046E5A  movss   dword ptr [rsp+28h], xmm6
0000000140046E60  mov     [rsp+20h], rax
0000000140046E65  call    sub_1400052C0
0000000140046E6A  movss   xmm2, cs:dword_1402781BC
0000000140046E72  lea     rdi, [rdi+10h]
0000000140046E76  inc     esi
0000000140046E78  cmp     esi, [rbx+r13+4]
0000000140046E7D  jl      short loc_140046E30
0000000140046E7F  mov     edi, [rbp-50h]
0000000140046E82  cmp     r15d, 0FFFFFFFFh
0000000140046E86  jnz     loc_140046F47
0000000140046E8C  mov     rcx, rbx
0000000140046E8F  call    sub_140048090
0000000140046E94  mov     r9d, [rsp+50h]
0000000140046E99  mov     r11d, [rsp+54h]
0000000140046E9E  mov     rsi, [rbp+19C0h]
0000000140046EA5  cmp     eax, r15d
0000000140046EA8  jz      loc_140046F6A
0000000140046EAE  movss   xmm0, dword ptr [rbp+48h]
0000000140046EB3  movss   xmm1, dword ptr [rbp+4Ch]
0000000140046EB8  cdqe
0000000140046EBA  lea     rcx, [rax+rax*8]
0000000140046EBE  mov     dword ptr [rbx+rcx*8+260Ch], 2
0000000140046EC9  lea     eax, [r9+1]
0000000140046ECD  mov     [rbx+rcx*8+2610h], edi
0000000140046ED4  mov     [rbx+rcx*8+2614h], eax
0000000140046EDB  mov     [rbx+rcx*8+2618h], r11d
0000000140046EE3  mov     dword ptr [rbx+rcx*8+261Ch], 0
0000000140046EEE  movss   dword ptr [rbx+rcx*8+2620h], xmm0
0000000140046EF7  movss   xmm0, dword ptr [rbp+50h]
0000000140046EFC  movss   dword ptr [rbx+rcx*8+2628h], xmm0
0000000140046F05  movss   dword ptr [rbx+rcx*8+2624h], xmm1
0000000140046F0E  jmp     short loc_140046F6A
0000000140046F10  test    r8, r8
0000000140046F13  jle     loc_140046842
0000000140046F19  movss   xmm7, dword ptr [rsi]
0000000140046F1D  movss   xmm8, dword ptr [r14]
0000000140046F22  movss   xmm9, dword ptr [rsi+4]
0000000140046F28  movss   xmm10, dword ptr [r14+4]
0000000140046F2E  movss   xmm11, dword ptr [rsi+8]
0000000140046F34  movss   xmm12, dword ptr [r14+8]
0000000140046F3A  movsxd  r9, dword ptr [r12+rdx+1F2D9204h]
0000000140046F42  jmp     loc_140046739
0000000140046F47  mov     rsi, [rbp+19C0h]
0000000140046F4E  movsxd  rax, r15d
0000000140046F51  lea     rcx, [rax+rax*8]
0000000140046F55  mov     dword ptr [rbx+rcx*8+260Ch], 2
0000000140046F60  mov     r9d, [rsp+50h]
0000000140046F65  mov     r11d, [rsp+54h]
0000000140046F6A  inc     edi
0000000140046F6C  mov     [rbp-50h], edi
0000000140046F6F  cmp     edi, [rbx]
0000000140046F71  jl      loc_140046B71
0000000140046F77  jmp     short loc_140046F97
0000000140046F79  movss   xmm3, dword ptr [rbp-20h]
0000000140046F7E  movss   xmm4, dword ptr [rbp-24h]
0000000140046F83  movss   xmm5, dword ptr [rbp-28h]
0000000140046F88  movss   dword ptr [rbp+8], xmm3
0000000140046F8D  movss   dword ptr [rbp+0], xmm4
0000000140046F92  movss   dword ptr [rbp-44h], xmm5
0000000140046F97  mov     eax, [rbx+1704h]
0000000140046F9D  movss   xmm11, cs:dword_1402783F4
0000000140046FA6  movss   dword ptr [rsp+70h], xmm6
0000000140046FAC  mov     dword ptr [rbp-40h], 0
0000000140046FB3  test    eax, eax
0000000140046FB5  jle     loc_140047965
0000000140046FBB  lea     rcx, [rbx+170Ch]
0000000140046FC2  mov     [rbp+28h], rcx
0000000140046FC6  lea     r15, [rbx+2610h]
0000000140046FCD  lea     r13, cs:140000000h
0000000140046FD4  jmp     short loc_140046FE5
0000000140046FE0  mov     r11d, [rsp+54h]
0000000140046FE5  movsxd  r10, dword ptr [rcx]
0000000140046FE8  xor     r9d, r9d
0000000140046FEB  movsxd  r8, dword ptr [rcx-4]
0000000140046FEF  imul    rcx, r8, 5Ch ; '\'
0000000140046FF3  imul    rax, r10, 5Ch ; '\'
0000000140046FF7  movss   xmm2, dword ptr [rcx+rbx+54h]
0000000140046FFD  movss   xmm3, dword ptr [rcx+rbx+58h]
0000000140047003  movss   xmm4, dword ptr [rcx+rbx+5Ch]
0000000140047009  mov     [rbp+38h], rcx
000000014004700D  xor     edx, edx
000000014004700F  mov     [rbp+88h], r8d
0000000140047016  mov     [rbp+8Ch], r10d
000000014004701D  mov     [rbp+40h], rax
0000000140047021  movss   xmm0, dword ptr [rax+rbx+54h]
0000000140047027  movss   xmm1, dword ptr [rax+rbx+5Ch]
000000014004702D  movss   dword ptr [rbp-50h], xmm0
0000000140047032  movss   xmm0, dword ptr [rax+rbx+58h]
0000000140047038  movss   dword ptr [rbp+30h], xmm0
000000014004703D  movss   xmm0, dword ptr [rax+rbx+48h]
0000000140047043  movss   dword ptr [rbp+10h], xmm1
0000000140047048  movss   xmm1, dword ptr [rax+rbx+4Ch]
000000014004704E  movss   dword ptr [rbp+60h], xmm0
0000000140047053  movss   xmm0, dword ptr [rax+rbx+50h]
0000000140047059  movss   dword ptr [rbp+64h], xmm1
000000014004705E  movss   xmm1, dword ptr [rcx+rbx+48h]
0000000140047064  movss   dword ptr [rbp+68h], xmm0
0000000140047069  movss   xmm0, dword ptr [rcx+rbx+4Ch]
000000014004706F  movss   dword ptr [rbp+6Ch], xmm1
0000000140047074  movss   xmm1, dword ptr [rcx+rbx+50h]
000000014004707A  mov     rcx, r15
000000014004707D  movss   dword ptr [rbp+70h], xmm0
0000000140047082  movss   dword ptr [rbp+74h], xmm1
0000000140047087  nop     word ptr [rax+rax+00000000h]
0000000140047090  cmp     dword ptr [rcx-4], 0
0000000140047094  mov     edi, [rsp+50h]
0000000140047098  jle     short loc_1400470B3
000000014004709A  cmp     [rcx], r8d
000000014004709D  jnz     short loc_1400470B3
000000014004709F  lea     eax, [rdi+1]
00000001400470A2  cmp     [rcx+4], eax
00000001400470A5  jnz     short loc_1400470B3
00000001400470A7  cmp     [rcx+8], r11d
00000001400470AB  jnz     short loc_1400470B3
00000001400470AD  cmp     dword ptr [rcx+0Ch], 0
00000001400470B1  jz      short loc_1400470C9
00000001400470B3  inc     r9d
00000001400470B6  inc     rdx
00000001400470B9  add     rcx, 48h ; 'H'
00000001400470BD  cmp     rdx, 40h ; '@'
00000001400470C1  jl      short loc_140047090
00000001400470C3  mov     r9d, 0FFFFFFFFh
00000001400470C9  xor     r8d, r8d
00000001400470CC  mov     [rbp+78h], r9d
00000001400470D0  xor     edx, edx
00000001400470D2  mov     rcx, r15
00000001400470D5  cmp     dword ptr [rcx-4], 0
00000001400470D9  jle     short loc_1400470F4
00000001400470DB  cmp     [rcx], r10d
00000001400470DE  jnz     short loc_1400470F4
00000001400470E0  lea     eax, [rdi+1]
00000001400470E3  cmp     [rcx+4], eax
00000001400470E6  jnz     short loc_1400470F4
00000001400470E8  cmp     [rcx+8], r11d
00000001400470EC  jnz     short loc_1400470F4
00000001400470EE  cmp     dword ptr [rcx+0Ch], 0
00000001400470F2  jz      short loc_14004710A
00000001400470F4  inc     r8d
00000001400470F7  inc     rdx
00000001400470FA  add     rcx, 48h ; 'H'
00000001400470FE  cmp     rdx, 40h ; '@'
0000000140047102  jl      short loc_1400470D5
0000000140047104  mov     r8d, 0FFFFFFFFh
000000014004710A  mov     rax, [rbp+19C8h]
0000000140047111  mov     [rbp+7Ch], r8d
0000000140047115  movss   xmm6, dword ptr [rax]
0000000140047119  movss   xmm7, dword ptr [rax+4]
000000014004711E  subss   xmm2, xmm6
0000000140047122  movss   xmm8, dword ptr [rax+8]
0000000140047128  subss   xmm3, xmm7
000000014004712C  mov     rax, [rbp+19D0h]
0000000140047133  subss   xmm4, xmm8
0000000140047138  movss   xmm10, dword ptr [rax+4]
000000014004713E  movss   xmm9, dword ptr [rax]
0000000140047143  movaps  xmm0, xmm10
0000000140047147  movss   xmm11, dword ptr [rax+8]
000000014004714D  movaps  xmm5, xmm9
0000000140047151  mulss   xmm0, xmm3
0000000140047155  movaps  xmm1, xmm11
0000000140047159  mulss   xmm1, xmm4
000000014004715D  movss   dword ptr [rbp-68h], xmm4
0000000140047162  movaps  xmm4, xmm3
0000000140047165  mulss   xmm4, dword ptr [rax+10h]
000000014004716A  mulss   xmm3, dword ptr [rax+1Ch]
000000014004716F  mulss   xmm5, xmm2
0000000140047173  addss   xmm5, xmm0
0000000140047177  movaps  xmm0, xmm2
000000014004717A  mulss   xmm0, dword ptr [rax+0Ch]
000000014004717F  mulss   xmm2, dword ptr [rax+18h]
0000000140047184  addss   xmm4, xmm0
0000000140047188  movss   xmm0, dword ptr [rbp-68h]
000000014004718D  addss   xmm5, xmm1
0000000140047191  movaps  xmm1, xmm0
0000000140047194  mulss   xmm1, dword ptr [rax+14h]
0000000140047199  addss   xmm3, xmm2
000000014004719D  mulss   xmm0, dword ptr [rax+20h]
00000001400471A2  movss   xmm2, dword ptr [rsi+18h]
00000001400471A7  addss   xmm4, xmm1
00000001400471AB  movss   xmm1, dword ptr [rsi]
00000001400471AF  addss   xmm3, xmm0
00000001400471B3  mulss   xmm1, xmm5
00000001400471B7  movss   xmm0, dword ptr [rsi+0Ch]
00000001400471BC  mulss   xmm0, xmm4
00000001400471C0  addss   xmm1, dword ptr [r14]
00000001400471C5  mulss   xmm2, xmm3
00000001400471C9  movss   dword ptr [rbp-68h], xmm3
00000001400471CE  mulss   xmm3, dword ptr [rsi+1Ch]
00000001400471D3  addss   xmm2, xmm0
00000001400471D7  movaps  xmm0, xmm4
00000001400471DA  mulss   xmm0, dword ptr [rsi+10h]
00000001400471DF  mulss   xmm4, dword ptr [rsi+14h]
00000001400471E4  addss   xmm2, xmm1
00000001400471E8  movss   xmm1, dword ptr [rsi+4]
00000001400471ED  mulss   xmm1, xmm5
00000001400471F1  addss   xmm3, xmm0
00000001400471F5  movss   xmm0, dword ptr [rsi+8]
00000001400471FA  mulss   xmm0, xmm5
00000001400471FE  addss   xmm1, dword ptr [r14+4]
0000000140047204  movss   dword ptr [rbp+48h], xmm2
0000000140047209  addss   xmm0, dword ptr [r14+8]
000000014004720F  movss   xmm2, dword ptr [rbp-50h]
0000000140047214  subss   xmm2, xmm6
0000000140047218  movss   xmm6, dword ptr [rbp+30h]
000000014004721D  addss   xmm3, xmm1
0000000140047221  movss   xmm1, dword ptr [rbp-68h]
0000000140047226  mulss   xmm1, dword ptr [rsi+20h]
000000014004722B  subss   xmm6, xmm7
000000014004722F  movss   xmm7, dword ptr [rbp+10h]
0000000140047234  subss   xmm7, xmm8
0000000140047239  movss   dword ptr [rsp+60h], xmm2
000000014004723F  addss   xmm1, xmm4
0000000140047243  movss   dword ptr [rbp+4Ch], xmm3
0000000140047248  movaps  xmm4, xmm2
000000014004724B  movss   dword ptr [rsp+64h], xmm6
0000000140047251  mulss   xmm4, xmm9
0000000140047256  movss   dword ptr [rsp+68h], xmm7
000000014004725C  addss   xmm1, xmm0
0000000140047260  movaps  xmm0, xmm6
0000000140047263  mulss   xmm0, xmm10
0000000140047268  movss   dword ptr [rbp+50h], xmm1
000000014004726D  addss   xmm4, xmm0
0000000140047271  movaps  xmm1, xmm7
0000000140047274  mulss   xmm1, xmm11
0000000140047279  addss   xmm4, xmm1
000000014004727D  movss   dword ptr [rsp+78h], xmm4
0000000140047283  movaps  xmm3, xmm6
0000000140047286  mulss   xmm3, dword ptr [rax+10h]
000000014004728B  movaps  xmm0, xmm2
000000014004728E  mulss   xmm0, dword ptr [rax+0Ch]
0000000140047293  movaps  xmm1, xmm7
0000000140047296  mulss   xmm6, dword ptr [rax+1Ch]
000000014004729B  mulss   xmm2, dword ptr [rax+18h]
00000001400472A0  addss   xmm3, xmm0
00000001400472A4  mulss   xmm1, dword ptr [rax+14h]
00000001400472A9  mulss   xmm7, dword ptr [rax+20h]
00000001400472AE  addss   xmm6, xmm2
00000001400472B2  addss   xmm3, xmm1
00000001400472B6  addss   xmm6, xmm7
00000001400472BA  movss   dword ptr [rsp+7Ch], xmm3
00000001400472C0  movaps  xmm0, xmm3
00000001400472C3  mulss   xmm0, dword ptr [rsi+0Ch]
00000001400472C8  movaps  xmm2, xmm3
00000001400472CB  mulss   xmm2, dword ptr [rsi+10h]
00000001400472D0  movaps  xmm1, xmm6
00000001400472D3  mulss   xmm1, dword ptr [rsi+18h]
00000001400472D8  mulss   xmm3, dword ptr [rsi+14h]
00000001400472DD  movss   dword ptr [rbp-80h], xmm6
00000001400472E2  addss   xmm1, xmm0
00000001400472E6  movss   xmm0, dword ptr [rsi]
00000001400472EA  mulss   xmm0, xmm4
00000001400472EE  addss   xmm0, dword ptr [r14]
00000001400472F3  addss   xmm1, xmm0
00000001400472F7  movaps  xmm0, xmm6
00000001400472FA  mulss   xmm0, dword ptr [rsi+1Ch]
00000001400472FF  mulss   xmm6, dword ptr [rsi+20h]
0000000140047304  movss   dword ptr [rbp+54h], xmm1
0000000140047309  addss   xmm2, xmm0
000000014004730D  movss   xmm0, dword ptr [rsi+4]
0000000140047312  mulss   xmm0, xmm4
0000000140047316  addss   xmm3, xmm6
000000014004731A  addss   xmm0, dword ptr [r14+4]
0000000140047320  addss   xmm2, xmm0
0000000140047324  movss   xmm0, dword ptr [rsi+8]
0000000140047329  mulss   xmm0, xmm4
000000014004732D  movss   dword ptr [rbp+58h], xmm2
0000000140047332  addss   xmm0, dword ptr [r14+8]
0000000140047338  addss   xmm3, xmm0
000000014004733C  movss   dword ptr [rbp+5Ch], xmm3
0000000140047341  cmp     r9d, 0FFFFFFFFh
0000000140047345  jz      short loc_140047378
0000000140047347  movsxd  rax, r9d
000000014004734A  lea     rcx, [rax+rax*8]
000000014004734E  movss   xmm0, dword ptr [rbx+rcx*8+2620h]
0000000140047357  movss   xmm1, dword ptr [rbx+rcx*8+2624h]
0000000140047360  movss   dword ptr [rbp+48h], xmm0
0000000140047365  movss   xmm0, dword ptr [rbx+rcx*8+2628h]
000000014004736E  movss   dword ptr [rbp+50h], xmm0
0000000140047373  movss   dword ptr [rbp+4Ch], xmm1
0000000140047378  cmp     r8d, 0FFFFFFFFh
000000014004737C  jz      short loc_1400473AF
000000014004737E  movsxd  rax, r8d
0000000140047381  lea     rcx, [rax+rax*8]
0000000140047385  movss   xmm0, dword ptr [rbx+rcx*8+2620h]
000000014004738E  movss   xmm1, dword ptr [rbx+rcx*8+2624h]
0000000140047397  movss   dword ptr [rbp+54h], xmm0
000000014004739C  movss   xmm0, dword ptr [rbx+rcx*8+2628h]
00000001400473A5  movss   dword ptr [rbp+5Ch], xmm0
00000001400473AA  movss   dword ptr [rbp+58h], xmm1
00000001400473AF  movsxd  rdx, dword ptr [r12+r13+1F2D9204h]
00000001400473B7  xor     r8d, r8d
00000001400473BA  movss   xmm6, cs:dword_140278ADC
00000001400473C2  mov     rcx, rdx
00000001400473C5  imul    rax, rdx, 2C040h
00000001400473CC  movss   dword ptr [rbp-50h], xmm6
00000001400473D1  mov     [rbp-68h], r8d
00000001400473D5  cmp     [rax+r13+5029AC60h], r8d
00000001400473DD  jle     loc_140047F0E
00000001400473E3  xor     r13d, r13d
00000001400473E6  lea     rbx, cs:140000000h
00000001400473ED  xor     r15d, r15d
00000001400473F0  mov     r14d, r8d
00000001400473F3  nop     dword ptr [rax+00h]
00000001400473F7  nop     word ptr [rax+rax+00000000h]
0000000140047400  add     rax, r13
0000000140047403  xor     edi, edi
0000000140047405  xor     esi, esi
0000000140047407  mov     r9d, [rax+rbx+5029AC68h]
000000014004740F  test    r9d, r9d
0000000140047412  jle     loc_140047701
0000000140047418  nop     dword ptr [rax+rax+00000000h]
0000000140047420  imul    r8, rcx, 0B010h
0000000140047427  lea     rax, [r15+r8]
000000014004742B  add     rax, rsi
000000014004742E  inc     edi
0000000140047430  movsxd  rax, (rva dword_140404A6C+4FE96200h)[rbx+rax*4]
0000000140047438  lea     rcx, [rax+rax*2]
000000014004743C  mov     eax, edi
000000014004743E  movss   xmm0, dword ptr [rbp+rcx*4+0A0h]
0000000140047447  cdq
0000000140047448  movss   xmm1, dword ptr [rbp+rcx*4+0A4h]
0000000140047451  idiv    r9d
0000000140047454  movss   dword ptr [rbp-28h], xmm0
0000000140047459  lea     r9, [rbp+60h]
000000014004745D  movss   xmm0, dword ptr [rbp+rcx*4+0A8h]
0000000140047466  movsxd  rax, edx
0000000140047469  lea     rdx, [rbp+48h]
000000014004746D  add     rax, r15
0000000140047470  movss   dword ptr [rbp-20h], xmm0
0000000140047475  add     rax, r8
0000000140047478  movss   dword ptr [rbp-24h], xmm1
000000014004747D  lea     r8, [rbp+54h]
0000000140047481  movsxd  rax, (rva dword_140404A6C+4FE96200h)[rbx+rax*4]
0000000140047489  lea     rcx, [rax+rax*2]
000000014004748D  movss   xmm0, dword ptr [rbp+rcx*4+0A0h]
0000000140047496  lea     rax, [rbp-1Ch]
000000014004749A  movss   xmm1, dword ptr [rbp+rcx*4+0A4h]
00000001400474A3  mov     [rsp+30h], rax
00000001400474A8  lea     rax, [rbp-28h]
00000001400474AC  mov     [rsp+28h], rax
00000001400474B1  lea     rax, [rbp+6Ch]
00000001400474B5  movss   dword ptr [rbp-1Ch], xmm0
00000001400474BA  movss   xmm0, dword ptr [rbp+rcx*4+0A8h]
00000001400474C3  lea     rcx, [rbp-60h]
00000001400474C7  mov     [rsp+20h], rax
00000001400474CC  movss   dword ptr [rbp-18h], xmm1
00000001400474D1  movss   dword ptr [rbp-14h], xmm0
00000001400474D6  call    sub_140184710
00000001400474DB  test    eax, eax
00000001400474DD  jz      loc_1400476CF
00000001400474E3  movss   xmm8, cs:dword_140278814
00000001400474EC  lea     rax, [rbp-1Ch]
00000001400474F0  movss   dword ptr [rsp+38h], xmm8
00000001400474F7  lea     r9, [rbp+48h]
00000001400474FB  mov     [rsp+30h], rax
0000000140047500  lea     r8, [rbp-48h]
0000000140047504  lea     rax, [rbp-28h]
0000000140047508  mov     [rsp+28h], rax
000000014004750D  lea     rdx, [rbp-38h]
0000000140047511  lea     rax, [rbp+54h]
0000000140047515  lea     rcx, [rbp-60h]
0000000140047519  mov     [rsp+20h], rax
000000014004751E  call    sub_1400D6890
0000000140047523  test    eax, eax
0000000140047525  jz      loc_1400476CF
000000014004752B  comiss  xmm6, dword ptr [rbp-48h]
000000014004752F  jbe     loc_1400476CF
0000000140047535  movss   xmm0, dword ptr [rbp-38h]
000000014004753A  xorps   xmm7, xmm7
000000014004753D  movss   xmm3, dword ptr [rbp-60h]
0000000140047542  mov     r14d, 1
0000000140047548  movss   xmm4, dword ptr [rbp-5Ch]
000000014004754D  subss   xmm3, xmm0
0000000140047551  movss   xmm5, dword ptr [rbp-58h]
0000000140047556  movss   xmm6, cs:dword_1402783F4
000000014004755E  movss   dword ptr [rbp-44h], xmm0
0000000140047563  movss   xmm0, dword ptr [rbp-34h]
0000000140047568  subss   xmm4, xmm0
000000014004756C  movss   dword ptr [rbp+0], xmm0
0000000140047571  movss   xmm0, dword ptr [rbp-30h]
0000000140047576  subss   xmm5, xmm0
000000014004757A  movss   dword ptr [rbp+8], xmm0
000000014004757F  movaps  xmm0, xmm3
0000000140047582  mulss   xmm0, xmm3
0000000140047586  movaps  xmm2, xmm4
0000000140047589  mulss   xmm2, xmm4
000000014004758D  movaps  xmm1, xmm5
0000000140047590  mulss   xmm1, xmm5
0000000140047594  addss   xmm2, xmm0
0000000140047598  xorps   xmm0, xmm0
000000014004759B  addss   xmm2, xmm1
000000014004759F  sqrtss  xmm0, xmm2
00000001400475A3  ucomiss xmm0, xmm7
00000001400475A6  movss   dword ptr [rsp+70h], xmm0
00000001400475AC  movss   dword ptr [rsp+58h], xmm0
00000001400475B2  jz      short loc_1400475DE
00000001400475B4  movaps  xmm2, xmm6
00000001400475B7  divss   xmm2, xmm0
00000001400475BB  movaps  xmm0, xmm2
00000001400475BE  movaps  xmm1, xmm2
00000001400475C1  mulss   xmm0, xmm3
00000001400475C5  mulss   xmm1, xmm4
00000001400475C9  mulss   xmm2, xmm5
00000001400475CD  movss   dword ptr [rbp-78h], xmm0
00000001400475D2  movss   dword ptr [rbp-74h], xmm1
00000001400475D7  movss   dword ptr [rbp-70h], xmm2
00000001400475DC  jmp     short loc_1400475ED
00000001400475DE  mov     qword ptr [rbp-78h], 0
00000001400475E6  mov     dword ptr [rbp-70h], 0
00000001400475ED  movss   dword ptr [rsp+38h], xmm8
00000001400475F4  lea     rax, [rbp-1Ch]
00000001400475F8  mov     [rsp+30h], rax
00000001400475FD  lea     r9, [rbp+60h]
0000000140047601  lea     rax, [rbp-28h]
0000000140047605  mov     [rsp+28h], rax
000000014004760A  lea     r8, [rbp-48h]
000000014004760E  lea     rax, [rbp+6Ch]
0000000140047612  lea     rdx, [rbp-38h]
0000000140047616  mov     [rsp+20h], rax
000000014004761B  lea     rcx, [rbp-60h]
000000014004761F  call    sub_1400D6890
0000000140047624  test    eax, eax
0000000140047626  jz      loc_1400476CA
000000014004762C  movss   xmm3, dword ptr [rbp-38h]
0000000140047631  subss   xmm3, dword ptr [rbp-60h]
0000000140047636  movss   xmm4, dword ptr [rbp-34h]
000000014004763B  subss   xmm4, dword ptr [rbp-5Ch]
0000000140047640  movss   xmm5, dword ptr [rbp-30h]
0000000140047645  subss   xmm5, dword ptr [rbp-58h]
000000014004764A  movaps  xmm0, xmm3
000000014004764D  movss   dword ptr [rsp+60h], xmm3
0000000140047653  mulss   xmm0, xmm3
0000000140047657  movaps  xmm2, xmm4
000000014004765A  movss   dword ptr [rsp+64h], xmm4
0000000140047660  mulss   xmm2, xmm4
0000000140047664  movaps  xmm1, xmm5
0000000140047667  mulss   xmm1, xmm5
000000014004766B  addss   xmm2, xmm0
000000014004766F  movss   dword ptr [rsp+68h], xmm5
0000000140047675  xorps   xmm0, xmm0
0000000140047678  addss   xmm2, xmm1
000000014004767C  sqrtss  xmm0, xmm2
0000000140047680  ucomiss xmm0, xmm7
0000000140047683  movss   dword ptr [rsp+70h], xmm0
0000000140047689  movss   dword ptr [rsp+58h], xmm0
000000014004768F  jz      short loc_1400476BB
0000000140047691  movaps  xmm2, xmm6
0000000140047694  divss   xmm2, xmm0
0000000140047698  movaps  xmm0, xmm2
000000014004769B  movaps  xmm1, xmm2
000000014004769E  mulss   xmm0, xmm3
00000001400476A2  mulss   xmm1, xmm4
00000001400476A6  mulss   xmm2, xmm5
00000001400476AA  movss   dword ptr [rbp-78h], xmm0
00000001400476AF  movss   dword ptr [rbp-74h], xmm1
00000001400476B4  movss   dword ptr [rbp-70h], xmm2
00000001400476B9  jmp     short loc_1400476CA
00000001400476BB  mov     qword ptr [rbp-78h], 0
00000001400476C3  mov     dword ptr [rbp-70h], 0
00000001400476CA  movss   xmm6, dword ptr [rbp-48h]
00000001400476CF  movsxd  rdx, dword ptr [r12+rbx+1F2D9204h]
00000001400476D7  inc     rsi
00000001400476DA  imul    rax, rdx, 2C040h
00000001400476E1  mov     rcx, rdx
00000001400476E4  add     rax, r13
00000001400476E7  mov     r9d, [rax+rbx+5029AC68h]
00000001400476EF  cmp     edi, r9d
00000001400476F2  jl      loc_140047420
00000001400476F8  mov     r8d, [rbp-68h]
00000001400476FC  movss   dword ptr [rbp-50h], xmm6
0000000140047701  inc     r8d
0000000140047704  movsxd  rcx, edx
0000000140047707  imul    rax, rcx, 2C040h
000000014004770E  add     r15, 1Ah
0000000140047712  mov     [rbp-68h], r8d
0000000140047716  add     r13, 68h ; 'h'
000000014004771A  cmp     r8d, [rax+rbx+5029AC60h]
0000000140047722  jl      loc_140047400
0000000140047728  mov     rbx, [rbp+18h]
000000014004772C  test    r14d, r14d
000000014004772F  mov     r14, [rbp+19B8h]
0000000140047736  movss   xmm6, dword ptr [rsp+70h]
000000014004773C  jz      loc_140047921
0000000140047742  movss   xmm7, cs:dword_1402781BC
000000014004774A  comiss  xmm6, xmm7
000000014004774D  jnb     short loc_14004775E
000000014004774F  movss   dword ptr [rsp+70h], xmm7
0000000140047755  movaps  xmm6, xmm7
0000000140047758  movss   dword ptr [rsp+58h], xmm7
000000014004775E  movss   xmm0, dword ptr [rbp-44h]
0000000140047763  lea     r9, [rsp+78h]
0000000140047768  subss   xmm0, dword ptr [r14]
000000014004776D  mov     rax, [rbp+38h]
0000000140047771  lea     r8, [rsp+60h]
0000000140047776  movss   xmm1, dword ptr [rbp+0]
000000014004777B  subss   xmm1, dword ptr [r14+4]
0000000140047781  mov     rsi, [rbp+40h]
0000000140047785  mov     ecx, [rax+rbx+8]
0000000140047789  lea     rax, [rbp-78h]
000000014004778D  mov     edx, [rbp+19B0h]
0000000140047793  movss   dword ptr [rsp+78h], xmm0
0000000140047799  movss   xmm0, dword ptr [rbp+8]
000000014004779E  subss   xmm0, dword ptr [r14+8]
00000001400477A4  movss   dword ptr [rsp+7Ch], xmm1
00000001400477AA  mov     qword ptr [rsp+60h], 0
00000001400477B3  mov     dword ptr [rsp+68h], 0
00000001400477BB  movss   dword ptr [rbp-80h], xmm0
00000001400477C0  cmp     ecx, [rsi+rbx+8]
00000001400477C4  jnz     short loc_1400477FC
00000001400477C6  movss   xmm0, cs:dword_140278280
00000001400477CE  movss   dword ptr [rsp+40h], xmm0
00000001400477D4  movss   xmm0, cs:dword_14027812C
00000001400477DC  movss   dword ptr [rsp+38h], xmm7
00000001400477E2  movss   dword ptr [rsp+30h], xmm0
00000001400477E8  movss   dword ptr [rsp+28h], xmm6
00000001400477EE  mov     [rsp+20h], rax
00000001400477F3  mov     rax, [rbp+28h]
00000001400477F7  mov     ecx, [rax+8]
00000001400477FA  jmp     short loc_140047869
00000001400477FC  movss   xmm8, cs:dword_140278280
0000000140047805  movss   xmm9, cs:dword_14027812C
000000014004780E  movss   dword ptr [rsp+40h], xmm8
0000000140047815  movss   dword ptr [rsp+38h], xmm7
000000014004781B  movss   dword ptr [rsp+30h], xmm9
0000000140047822  movss   dword ptr [rsp+28h], xmm6
0000000140047828  mov     [rsp+20h], rax
000000014004782D  call    sub_1400052C0
0000000140047832  mov     edx, [rbp+19B0h]
0000000140047838  lea     rax, [rbp-78h]
000000014004783C  mov     ecx, [rsi+rbx+8]
0000000140047840  lea     r9, [rsp+78h]
0000000140047845  movss   dword ptr [rsp+40h], xmm8
000000014004784C  lea     r8, [rsp+60h]
0000000140047851  movss   dword ptr [rsp+38h], xmm7
0000000140047857  movss   dword ptr [rsp+30h], xmm9
000000014004785E  movss   dword ptr [rsp+28h], xmm6
0000000140047864  mov     [rsp+20h], rax
0000000140047869  call    sub_1400052C0
000000014004786E  mov     r13d, [rsp+54h]
0000000140047873  lea     rsi, [rbp+50h]
0000000140047877  mov     r14d, [rsp+50h]
000000014004787C  xor     edi, edi
000000014004787E  lea     r15d, [rdi+2]
0000000140047882  movsxd  rax, dword ptr [rbp+rdi+78h]
0000000140047887  cmp     eax, 0FFFFFFFFh
000000014004788A  jnz     short loc_1400478F9
000000014004788C  mov     rcx, rbx
000000014004788F  call    sub_140048090
0000000140047894  mov     [rbp+rdi+78h], eax
0000000140047898  cmp     eax, 0FFFFFFFFh
000000014004789B  jz      short loc_140047908
000000014004789D  cdqe
000000014004789F  lea     rcx, [rax+rax*8]
00000001400478A3  mov     eax, [rbp+rdi+88h]
00000001400478AA  mov     dword ptr [rbx+rcx*8+260Ch], 2
00000001400478B5  mov     [rbx+rcx*8+2610h], eax
00000001400478BC  lea     eax, [r14+1]
00000001400478C0  mov     [rbx+rcx*8+2614h], eax
00000001400478C7  mov     eax, [rsi-8]
00000001400478CA  mov     [rbx+rcx*8+2618h], r13d
00000001400478D2  mov     dword ptr [rbx+rcx*8+261Ch], 0
00000001400478DD  mov     [rbx+rcx*8+2620h], eax
00000001400478E4  mov     eax, [rsi-4]
00000001400478E7  mov     [rbx+rcx*8+2624h], eax
00000001400478EE  mov     eax, [rsi]
00000001400478F0  mov     [rbx+rcx*8+2628h], eax
00000001400478F7  jmp     short loc_140047908
00000001400478F9  lea     rcx, [rax+rax*8]
00000001400478FD  mov     dword ptr [rbx+rcx*8+260Ch], 2
0000000140047908  add     rdi, 4
000000014004790C  add     rsi, 0Ch
0000000140047910  sub     r15, 1
0000000140047914  jnz     loc_140047882
000000014004791A  mov     r14, [rbp+19B8h]
0000000140047921  mov     rsi, [rbp+19C0h]
0000000140047928  lea     r13, cs:140000000h
000000014004792F  lea     r15, [rbx+2610h]
0000000140047936  mov     edi, [rbp-40h]
0000000140047939  mov     rcx, [rbp+28h]
000000014004793D  inc     edi
000000014004793F  mov     eax, [rbx+1704h]
0000000140047945  add     rcx, 14h
0000000140047949  mov     [rbp-40h], edi
000000014004794C  mov     [rbp+28h], rcx
0000000140047950  cmp     edi, eax
0000000140047952  jl      loc_140046FE0
0000000140047958  movss   xmm11, cs:dword_1402783F4
0000000140047961  xorps   xmm12, xmm12
0000000140047965  movaps  xmm15, xmmword ptr [rsp+19B0h]
000000014004796E  movaps  xmm14, xmmword ptr [rsp+19C0h]
0000000140047977  movaps  xmm13, xmmword ptr [rsp+19D0h]
0000000140047980  mov     dword ptr [rbp-68h], 0
0000000140047987  test    eax, eax
0000000140047989  jle     loc_14004803D
000000014004798F  lea     rsi, [rbx+2610h]
0000000140047996  lea     r13, [rbx+1714h]
000000014004799D  nop     dword ptr [rax]
00000001400479A0  movsxd  r8, dword ptr [r13-0Ch]
00000001400479A4  xor     r9d, r9d
00000001400479A7  movsxd  r10, dword ptr [r13-8]
00000001400479AB  imul    rcx, r8, 5Ch ; '\'
00000001400479AF  movss   xmm0, dword ptr [rcx+rbx+48h]
00000001400479B5  movss   xmm1, dword ptr [rcx+rbx+4Ch]
00000001400479BB  movss   dword ptr [rbp+48h], xmm0
00000001400479C0  movss   xmm0, dword ptr [rcx+rbx+50h]
00000001400479C6  imul    rcx, r10, 5Ch ; '\'
00000001400479CA  movss   dword ptr [rbp+50h], xmm0
00000001400479CF  movss   dword ptr [rbp+4Ch], xmm1
00000001400479D4  xor     edx, edx
00000001400479D6  movss   xmm0, dword ptr [rcx+rbx+48h]
00000001400479DC  movss   xmm1, dword ptr [rcx+rbx+4Ch]
00000001400479E2  movss   dword ptr [rbp+54h], xmm0
00000001400479E7  movss   xmm0, dword ptr [rcx+rbx+50h]
00000001400479ED  mov     rcx, rsi
00000001400479F0  movss   dword ptr [rbp+5Ch], xmm0
00000001400479F5  movss   dword ptr [rbp+58h], xmm1
00000001400479FA  nop     word ptr [rax+rax+00h]
0000000140047A00  cmp     dword ptr [rcx-4], 0
0000000140047A04  mov     edi, [rsp+50h]
0000000140047A08  mov     r11d, [rsp+54h]
0000000140047A0D  jle     short loc_140047A28
0000000140047A0F  cmp     [rcx], r8d
0000000140047A12  jnz     short loc_140047A28
0000000140047A14  lea     eax, [rdi+1]
0000000140047A17  cmp     [rcx+4], eax
0000000140047A1A  jnz     short loc_140047A28
0000000140047A1C  cmp     [rcx+8], r11d
0000000140047A20  jnz     short loc_140047A28
0000000140047A22  cmp     dword ptr [rcx+0Ch], 0
0000000140047A26  jz      short loc_140047A3E
0000000140047A28  inc     r9d
0000000140047A2B  inc     rdx
0000000140047A2E  add     rcx, 48h ; 'H'
0000000140047A32  cmp     rdx, 40h ; '@'
0000000140047A36  jl      short loc_140047A00
0000000140047A38  mov     r9d, 0FFFFFFFFh
0000000140047A3E  xor     r8d, r8d
0000000140047A41  mov     rcx, rsi
0000000140047A44  xor     edx, edx
0000000140047A46  cmp     dword ptr [rcx-4], 0
0000000140047A4A  jle     short loc_140047A65
0000000140047A4C  cmp     [rcx], r10d
0000000140047A4F  jnz     short loc_140047A65
0000000140047A51  lea     eax, [rdi+1]
0000000140047A54  cmp     [rcx+4], eax
0000000140047A57  jnz     short loc_140047A65
0000000140047A59  cmp     [rcx+8], r11d
0000000140047A5D  jnz     short loc_140047A65
0000000140047A5F  cmp     dword ptr [rcx+0Ch], 0
0000000140047A63  jz      short loc_140047A7B
0000000140047A65  inc     r8d
0000000140047A68  inc     rdx
0000000140047A6B  add     rcx, 48h ; 'H'
0000000140047A6F  cmp     rdx, 40h ; '@'
0000000140047A73  jl      short loc_140047A46
0000000140047A75  mov     r8d, 0FFFFFFFFh
0000000140047A7B  cmp     r9d, 0FFFFFFFFh
0000000140047A7F  jz      short loc_140047AB2
0000000140047A81  movsxd  rax, r9d
0000000140047A84  lea     rcx, [rax+rax*8]
0000000140047A88  movss   xmm0, dword ptr [rbx+rcx*8+2620h]
0000000140047A91  movss   xmm1, dword ptr [rbx+rcx*8+2624h]
0000000140047A9A  movss   dword ptr [rbp+48h], xmm0
0000000140047A9F  movss   xmm0, dword ptr [rbx+rcx*8+2628h]
0000000140047AA8  movss   dword ptr [rbp+50h], xmm0
0000000140047AAD  movss   dword ptr [rbp+4Ch], xmm1
0000000140047AB2  cmp     r8d, 0FFFFFFFFh
0000000140047AB6  jz      short loc_140047AE9
0000000140047AB8  movsxd  rax, r8d
0000000140047ABB  lea     rcx, [rax+rax*8]
0000000140047ABF  movss   xmm0, dword ptr [rbx+rcx*8+2620h]
0000000140047AC8  movss   xmm1, dword ptr [rbx+rcx*8+2624h]
0000000140047AD1  movss   dword ptr [rbp+54h], xmm0
0000000140047AD6  movss   xmm0, dword ptr [rbx+rcx*8+2628h]
0000000140047ADF  movss   dword ptr [rbp+5Ch], xmm0
0000000140047AE4  movss   dword ptr [rbp+58h], xmm1
0000000140047AE9  lea     r11, cs:140000000h
0000000140047AF0  xor     r15d, r15d
0000000140047AF3  movsxd  rdx, dword ptr [r12+r11+1F2D9204h]
0000000140047AFB  imul    rcx, rdx, 2C040h
0000000140047B02  cmp     [rcx+r11+5029AC60h], r15d
0000000140047B0A  jle     loc_140047D70
0000000140047B10  movss   xmm11, cs:dword_140278280
0000000140047B19  xor     esi, esi
0000000140047B1B  movss   xmm12, cs:dword_14027812C
0000000140047B24  lea     ebx, [rsi+1]
0000000140047B27  nop     word ptr [rax+rax+00000000h]
0000000140047B30  movss   xmm7, cs:dword_1402781BC
0000000140047B38  add     rcx, rsi
0000000140047B3B  xor     edi, edi
0000000140047B3D  cmp     dword ptr [rcx+r11+5029AC68h], 3
0000000140047B46  jnz     loc_140047BD7
0000000140047B4C  movsxd  rdx, dword ptr [rcx+r11+5029AC70h]
0000000140047B54  lea     r8, [rbp+0A0h]
0000000140047B5B  movsxd  rax, dword ptr [rcx+r11+5029AC74h]
0000000140047B63  lea     r9, [rbp+48h]
0000000140047B67  movsxd  rcx, dword ptr [rcx+r11+5029AC6Ch]
0000000140047B6F  lea     rax, [rax+rax*2]
0000000140047B73  lea     r8, [r8+rax*4]
0000000140047B77  mov     [rsp+40h], r8
0000000140047B7C  lea     rax, [rdx+rdx*2]
0000000140047B80  lea     rdx, [rbp+0A0h]
0000000140047B87  lea     rdx, [rdx+rax*4]
0000000140047B8B  lea     rax, [rcx+rcx*2]
0000000140047B8F  mov     [rsp+38h], rdx
0000000140047B94  lea     rcx, [rbp+0A0h]
0000000140047B9B  lea     rcx, [rcx+rax*4]
0000000140047B9F  mov     [rsp+30h], rcx
0000000140047BA4  lea     rax, [rbp+54h]
0000000140047BA8  movss   dword ptr [rsp+28h], xmm7
0000000140047BAE  lea     rcx, [rbp-60h]
0000000140047BB2  lea     r8, [rsp+58h]
0000000140047BB7  mov     [rsp+20h], rax
0000000140047BBC  lea     rdx, [rbp-78h]
0000000140047BC0  call    sub_140035B70
0000000140047BC5  movss   xmm6, dword ptr [rsp+58h]
0000000140047BCB  lea     r11, cs:140000000h
0000000140047BD2  test    eax, eax
0000000140047BD4  cmovnz  edi, ebx
0000000140047BD7  movsxd  rax, dword ptr [r12+r11+1F2D9204h]
0000000140047BDF  imul    r10, rax, 2C040h
0000000140047BE6  add     r10, rsi
0000000140047BE9  cmp     dword ptr [r10+r11+5029AC68h], 4
0000000140047BF2  jnz     loc_140047C9E
0000000140047BF8  movsxd  rax, dword ptr [r10+r11+5029AC78h]
0000000140047C00  lea     r9, [rbp+0A0h]
0000000140047C07  lea     r8, [rbp+0A0h]
0000000140047C0E  lea     rdx, [rbp+0A0h]
0000000140047C15  lea     rcx, [rax+rax*2]
0000000140047C19  movsxd  rax, dword ptr [r10+r11+5029AC74h]
0000000140047C21  lea     r9, [r9+rcx*4]
0000000140047C25  mov     [rsp+48h], r9
0000000140047C2A  lea     r9, [rbp+48h]
0000000140047C2E  lea     rcx, [rax+rax*2]
0000000140047C32  movsxd  rax, dword ptr [r10+r11+5029AC70h]
0000000140047C3A  lea     r8, [r8+rcx*4]
0000000140047C3E  mov     [rsp+40h], r8
0000000140047C43  lea     r8, [rsp+58h]
0000000140047C48  lea     rcx, [rax+rax*2]
0000000140047C4C  movsxd  rax, dword ptr [r10+r11+5029AC6Ch]
0000000140047C54  lea     rdx, [rdx+rcx*4]
0000000140047C58  mov     [rsp+38h], rdx
0000000140047C5D  lea     rdx, [rbp-78h]
0000000140047C61  lea     rcx, [rax+rax*2]
0000000140047C65  lea     rax, [rbp+0A0h]
0000000140047C6C  lea     rax, [rax+rcx*4]
0000000140047C70  mov     [rsp+30h], rax
0000000140047C75  lea     rcx, [rbp-60h]
0000000140047C79  lea     rax, [rbp+54h]
0000000140047C7D  movss   dword ptr [rsp+28h], xmm7
0000000140047C83  mov     [rsp+20h], rax
0000000140047C88  call    sub_1400346F0
0000000140047C8D  movss   xmm6, dword ptr [rsp+58h]
0000000140047C93  test    eax, eax
0000000140047C95  jnz     short loc_140047CA6
0000000140047C97  lea     r11, cs:140000000h
0000000140047C9E  test    edi, edi
0000000140047CA0  jz      loc_140047D3B
0000000140047CA6  movss   xmm1, dword ptr [rbp-5Ch]
0000000140047CAB  lea     rax, [rbp-78h]
0000000140047CAF  subss   xmm1, dword ptr [r14+4]
0000000140047CB5  mov     edx, [rbp+19B0h]
0000000140047CBB  lea     r9, [rsp+78h]
0000000140047CC0  mov     ecx, [r13+0]
0000000140047CC4  lea     r8, [rsp+60h]
0000000140047CC9  movaps  xmm0, xmm7
0000000140047CCC  movss   dword ptr [rsp+40h], xmm11
0000000140047CD3  subss   xmm0, xmm6
0000000140047CD7  movss   dword ptr [rsp+38h], xmm7
0000000140047CDD  movss   dword ptr [rsp+30h], xmm12
0000000140047CE4  movss   dword ptr [rsp+7Ch], xmm1
0000000140047CEA  mov     qword ptr [rsp+60h], 0
0000000140047CF3  mov     dword ptr [rsp+68h], 0
0000000140047CFB  movaps  xmm6, xmm0
0000000140047CFE  movss   xmm0, dword ptr [rbp-60h]
0000000140047D03  subss   xmm0, dword ptr [r14]
0000000140047D08  movss   dword ptr [rsp+28h], xmm6
0000000140047D0E  movss   dword ptr [rsp+58h], xmm6
0000000140047D14  mov     [rsp+20h], rax
0000000140047D19  movss   dword ptr [rsp+78h], xmm0
0000000140047D1F  movss   xmm0, dword ptr [rbp-58h]
0000000140047D24  subss   xmm0, dword ptr [r14+8]
0000000140047D2A  movss   dword ptr [rbp-80h], xmm0
0000000140047D2F  call    sub_1400052C0
0000000140047D34  lea     r11, cs:140000000h
0000000140047D3B  movsxd  rdx, dword ptr [r12+r11+1F2D9204h]
0000000140047D43  inc     r15d
0000000140047D46  imul    rcx, rdx, 2C040h
0000000140047D4D  add     rsi, 68h ; 'h'
0000000140047D51  cmp     r15d, [rcx+r11+5029AC60h]
0000000140047D59  jl      loc_140047B30
0000000140047D5F  movss   xmm11, cs:dword_1402783F4
0000000140047D68  xorps   xmm12, xmm12
0000000140047D6C  mov     rbx, [rbp+18h]
0000000140047D70  xor     r8d, r8d
0000000140047D73  movsxd  rcx, edx
0000000140047D76  imul    rax, rcx, 2C040h
0000000140047D7D  mov     [rbp-40h], r8d
0000000140047D81  cmp     [rax+r11+5029AC60h], r8d
0000000140047D89  jle     loc_14004801A
0000000140047D8F  mov     rbx, [rbp+20h]
0000000140047D93  xor     r12d, r12d
0000000140047D96  xor     r15d, r15d
0000000140047D99  nop     dword ptr [rax+00000000h]
0000000140047DA0  add     rax, r12
0000000140047DA3  xor     edi, edi
0000000140047DA5  xor     esi, esi
0000000140047DA7  mov     r9d, [rax+r11+5029AC68h]
0000000140047DAF  test    r9d, r9d
0000000140047DB2  jle     loc_140047FEB
0000000140047DB8  movss   xmm10, cs:dword_1402781BC
0000000140047DC1  imul    r8, rcx, 0B010h
0000000140047DC8  movss   dword ptr [rsp+38h], xmm10
0000000140047DCF  lea     rax, [r8+rsi]
0000000140047DD3  add     rax, r15
0000000140047DD6  inc     edi
0000000140047DD8  movsxd  rax, (rva dword_140404A6C+4FE96200h)[r11+rax*4]
0000000140047DE0  lea     rcx, [rax+rax*2]
0000000140047DE4  mov     eax, edi
0000000140047DE6  movss   xmm0, dword ptr [rbp+rcx*4+0A0h]
0000000140047DEF  cdq
0000000140047DF0  movss   xmm1, dword ptr [rbp+rcx*4+0A4h]
0000000140047DF9  idiv    r9d
0000000140047DFC  movss   dword ptr [rbp-28h], xmm0
0000000140047E01  lea     r9, [rbp+48h]
0000000140047E05  movss   xmm0, dword ptr [rbp+rcx*4+0A8h]
0000000140047E0E  movsxd  rax, edx
0000000140047E11  lea     rdx, [rbp-38h]
0000000140047E15  add     rax, r8
0000000140047E18  movss   dword ptr [rbp-20h], xmm0
0000000140047E1D  add     rax, r15
0000000140047E20  movss   dword ptr [rbp-24h], xmm1
0000000140047E25  lea     r8, [rbp-50h]
0000000140047E29  movsxd  rax, (rva dword_140404A6C+4FE96200h)[r11+rax*4]
0000000140047E31  lea     rcx, [rax+rax*2]
0000000140047E35  movss   xmm0, dword ptr [rbp+rcx*4+0A0h]
0000000140047E3E  lea     rax, [rbp-1Ch]
0000000140047E42  movss   xmm1, dword ptr [rbp+rcx*4+0A4h]
0000000140047E4B  mov     [rsp+30h], rax
0000000140047E50  lea     rax, [rbp-28h]
0000000140047E54  mov     [rsp+28h], rax
0000000140047E59  lea     rax, [rbp+54h]
0000000140047E5D  movss   dword ptr [rbp-1Ch], xmm0
0000000140047E62  movss   xmm0, dword ptr [rbp+rcx*4+0A8h]
0000000140047E6B  lea     rcx, [rbp-60h]
0000000140047E6F  mov     [rsp+20h], rax
0000000140047E74  movss   dword ptr [rbp-18h], xmm1
0000000140047E79  movss   dword ptr [rbp-14h], xmm0
0000000140047E7E  call    sub_1400D6890
0000000140047E83  test    eax, eax
0000000140047E85  jz      loc_140047FB7
0000000140047E8B  movss   xmm3, dword ptr [rbp-60h]
0000000140047E90  movss   xmm4, dword ptr [rbp-5Ch]
0000000140047E95  movss   xmm5, dword ptr [rbp-58h]
0000000140047E9A  movss   xmm7, dword ptr [rbp-38h]
0000000140047E9F  movss   xmm8, dword ptr [rbp-34h]
0000000140047EA5  subss   xmm3, xmm7
0000000140047EA9  movss   xmm9, dword ptr [rbp-30h]
0000000140047EAF  subss   xmm4, xmm8
0000000140047EB4  subss   xmm5, xmm9
0000000140047EB9  movaps  xmm0, xmm3
0000000140047EBC  mulss   xmm0, xmm3
0000000140047EC0  movaps  xmm2, xmm4
0000000140047EC3  mulss   xmm2, xmm4
0000000140047EC7  movaps  xmm1, xmm5
0000000140047ECA  mulss   xmm1, xmm5
0000000140047ECE  addss   xmm2, xmm0
0000000140047ED2  xorps   xmm0, xmm0
0000000140047ED5  addss   xmm2, xmm1
0000000140047ED9  sqrtss  xmm0, xmm2
0000000140047EDD  ucomiss xmm0, xmm12
0000000140047EE1  jz      short loc_140047F19
0000000140047EE3  movaps  xmm2, xmm11
0000000140047EE7  divss   xmm2, xmm0
0000000140047EEB  movaps  xmm0, xmm2
0000000140047EEE  movaps  xmm1, xmm2
0000000140047EF1  mulss   xmm0, xmm3
0000000140047EF5  mulss   xmm1, xmm4
0000000140047EF9  mulss   xmm2, xmm5
0000000140047EFD  movss   dword ptr [rbp-78h], xmm0
0000000140047F02  movss   dword ptr [rbp-74h], xmm1
0000000140047F07  movss   dword ptr [rbp-70h], xmm2
0000000140047F0C  jmp     short loc_140047F28
0000000140047F0E  movss   xmm6, dword ptr [rsp+70h]
0000000140047F14  jmp     loc_140047936
0000000140047F19  mov     qword ptr [rbp-78h], 0
0000000140047F21  mov     dword ptr [rbp-70h], 0
0000000140047F28  movss   xmm0, cs:dword_140278280
0000000140047F30  lea     rax, [rbp-78h]
0000000140047F34  subss   xmm7, dword ptr [r14]
0000000140047F39  subss   xmm8, dword ptr [r14+4]
0000000140047F3F  subss   xmm9, dword ptr [r14+8]
0000000140047F45  mov     edx, [rbp+19B0h]
0000000140047F4B  lea     r9, [rsp+78h]
0000000140047F50  mov     ecx, [r13+0]
0000000140047F54  lea     r8, [rsp+60h]
0000000140047F59  movss   dword ptr [rsp+40h], xmm0
0000000140047F5F  movaps  xmm6, xmm10
0000000140047F63  subss   xmm6, dword ptr [rbp-50h]
0000000140047F68  movss   xmm0, cs:dword_14027812C
0000000140047F70  movss   dword ptr [rsp+38h], xmm10
0000000140047F77  movss   dword ptr [rsp+30h], xmm0
0000000140047F7D  movss   dword ptr [rsp+78h], xmm7
0000000140047F83  movss   dword ptr [rsp+28h], xmm6
0000000140047F89  mov     [rsp+20h], rax
0000000140047F8E  movss   dword ptr [rsp+58h], xmm6
0000000140047F94  movss   dword ptr [rsp+7Ch], xmm8
0000000140047F9B  movss   dword ptr [rbp-80h], xmm9
0000000140047FA1  mov     qword ptr [rsp+60h], 0
0000000140047FAA  mov     dword ptr [rsp+68h], 0
0000000140047FB2  call    sub_1400052C0
0000000140047FB7  lea     r11, cs:140000000h
0000000140047FBE  inc     rsi
0000000140047FC1  movsxd  rdx, dword ptr [rbx+r11+1F2D9204h]
0000000140047FC9  imul    rax, rdx, 2C040h
0000000140047FD0  mov     rcx, rdx
0000000140047FD3  add     rax, r12
0000000140047FD6  mov     r9d, [rax+r11+5029AC68h]
0000000140047FDE  cmp     edi, r9d
0000000140047FE1  jl      loc_140047DC1
0000000140047FE7  mov     r8d, [rbp-40h]
0000000140047FEB  inc     r8d
0000000140047FEE  movsxd  rcx, edx
0000000140047FF1  imul    rax, rcx, 2C040h
0000000140047FF8  add     r15, 1Ah
0000000140047FFC  mov     [rbp-40h], r8d
0000000140048000  add     r12, 68h ; 'h'
0000000140048004  cmp     r8d, [rax+r11+5029AC60h]
000000014004800C  jl      loc_140047DA0
0000000140048012  mov     rbx, [rbp+18h]
0000000140048016  mov     r12, [rbp+20h]
000000014004801A  mov     r11d, [rbp-68h]
000000014004801E  lea     rsi, [rbx+2610h]
0000000140048025  inc     r11d
0000000140048028  add     r13, 14h
000000014004802C  mov     [rbp-68h], r11d
0000000140048030  cmp     r11d, [rbx+1704h]
0000000140048037  jl      loc_1400479A0
000000014004803D  mov     rcx, [rbp+18A0h]
0000000140048044  xor     rcx, rsp
0000000140048047  call    1401F8B20h
000000014004804C  lea     r11, [rsp+1A50h]
0000000140048054  mov     rbx, [r11+48h]
0000000140048058  movaps  xmm6, xmmword ptr [r11-10h]
000000014004805D  movaps  xmm7, xmmword ptr [r11-20h]
0000000140048062  movaps  xmm8, xmmword ptr [r11-30h]
0000000140048067  movaps  xmm9, xmmword ptr [r11-40h]
000000014004806C  movaps  xmm10, xmmword ptr [r11-50h]
0000000140048071  movaps  xmm11, xmmword ptr [r11-60h]
0000000140048076  movaps  xmm12, xmmword ptr [r11-70h]
000000014004807B  mov     rsp, r11
000000014004807E  pop     r15
0000000140048080  pop     r14
0000000140048082  pop     r13
0000000140048084  pop     r12
0000000140048086  pop     rdi
0000000140048087  pop     rsi
0000000140048088  pop     rbp
0000000140048089  retn
