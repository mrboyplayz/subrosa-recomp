; 0x140172080: sub_140172080
; Decompilation failed: function frame is wrong
0000000140172080  push    rbp
0000000140172082  push    rbx
0000000140172083  push    rdi
0000000140172084  push    r14
0000000140172086  push    r15
0000000140172088  lea     rbp, [rsp-0FF0h]
0000000140172090  mov     eax, 10F0h
0000000140172095  call    sub_1401F89D0
000000014017209A  sub     rsp, rax
000000014017209D  mov     rax, cs:__security_cookie
00000001401720A4  xor     rax, rsp
00000001401720A7  mov     [rbp+0F30h], rax
00000001401720AE  mov     r15, [rbp+1040h]
00000001401720B5  mov     r14d, r9d
00000001401720B8  mov     [rsp+58h], r8d
00000001401720BD  mov     r11d, r8d
00000001401720C0  mov     [rbp-80h], rcx
00000001401720C4  mov     ebx, edx
00000001401720C6  mov     rdi, rcx
00000001401720C9  test    r15, r15
00000001401720CC  jz      loc_1401737CD
00000001401720D2  test    edx, edx
00000001401720D4  jz      loc_1401737CD
00000001401720DA  test    r8d, r8d
00000001401720DD  jz      loc_1401737CD
00000001401720E3  lea     eax, [r9-1]
00000001401720E7  cmp     eax, 3
00000001401720EA  ja      loc_1401737CD
00000001401720F0  mov     eax, [rbp+1048h]
00000001401720F6  test    eax, eax
00000001401720F8  mov     [rsp+1138h], rsi
0000000140172100  mov     [rsp+10E8h], r12
0000000140172108  mov     r12d, 5Ah ; 'Z'
000000014017210E  mov     [rsp+10E0h], r13
0000000140172116  cmovnz  r12d, eax
000000014017211A  movaps  xmmword ptr [rsp+10D0h], xmm6
0000000140172122  movaps  xmmword ptr [rsp+10C0h], xmm7
000000014017212A  movaps  xmmword ptr [rsp+10B0h], xmm8
0000000140172133  movaps  xmmword ptr [rsp+10A0h], xmm9
000000014017213C  cmp     r12d, 1
0000000140172140  jge     short loc_140172154
0000000140172142  mov     eax, 1388h
0000000140172147  mov     ecx, 1
000000014017214C  cdq
000000014017214D  idiv    ecx
000000014017214F  mov     r9d, eax
0000000140172152  jmp     short loc_14017217C
0000000140172154  mov     r9d, 64h ; 'd'
000000014017215A  mov     ecx, r12d
000000014017215D  cmp     r12d, r9d
0000000140172160  cmovg   ecx, r9d
0000000140172164  cmp     ecx, 32h ; '2'
0000000140172167  jge     short loc_140172176
0000000140172169  mov     eax, 1388h
000000014017216E  cdq
000000014017216F  idiv    ecx
0000000140172171  mov     r9d, eax
0000000140172174  jmp     short loc_14017217C
0000000140172176  sub     r9d, ecx
0000000140172179  add     r9d, r9d
000000014017217C  xor     r8d, r8d
000000014017217F  lea     r13, cs:140000000h
0000000140172186  mov     esi, 0FFh
000000014017218B  nop     dword ptr [rax+rax+00h]
0000000140172190  mov     ecx, ds:rva dword_14026F9D0[r13+r8*4]
0000000140172198  mov     eax, 51EB851Fh
000000014017219D  imul    ecx, r9d
00000001401721A1  add     ecx, 32h ; '2'
00000001401721A4  imul    ecx
00000001401721A6  sar     edx, 5
00000001401721A9  mov     eax, edx
00000001401721AB  shr     eax, 1Fh
00000001401721AE  add     edx, eax
00000001401721B0  cmp     edx, 1
00000001401721B3  jge     short loc_1401721BC
00000001401721B5  mov     edx, 1
00000001401721BA  jmp     short loc_1401721C1
00000001401721BC  cmp     edx, esi
00000001401721BE  cmovg   edx, esi
00000001401721C1  mov     ecx, ds:rva dword_14026FAD0[r13+r8*4]
00000001401721C9  mov     eax, 51EB851Fh
00000001401721CE  movzx   r10d, byte ptr [r8+r13+26E780h]
00000001401721D7  imul    ecx, r9d
00000001401721DB  mov     [rbp+r10+0EB0h], dl
00000001401721E3  add     ecx, 32h ; '2'
00000001401721E6  imul    ecx
00000001401721E8  sar     edx, 5
00000001401721EB  mov     eax, edx
00000001401721ED  shr     eax, 1Fh
00000001401721F0  add     edx, eax
00000001401721F2  cmp     edx, 1
00000001401721F5  jge     short loc_1401721FE
00000001401721F7  mov     edx, 1
00000001401721FC  jmp     short loc_140172203
00000001401721FE  cmp     edx, esi
0000000140172200  cmovg   edx, esi
0000000140172203  inc     r8
0000000140172206  mov     [rbp+r10+0EF0h], dl
000000014017220E  cmp     r8, 40h ; '@'
0000000140172212  jl      loc_140172190
0000000140172218  movss   xmm3, cs:dword_1402782F0
0000000140172220  lea     r8, unk_14026E8E8
0000000140172227  movss   xmm4, cs:dword_140278284
000000014017222F  lea     r9, cs:14026E908h; "JFIF"
0000000140172236  movss   xmm5, cs:dword_14027828C
000000014017223E  xor     edx, edx
0000000140172240  movss   xmm6, cs:dword_1402782AC
0000000140172248  movss   xmm7, cs:dword_140278314
0000000140172250  movss   xmm8, cs:dword_140278378
0000000140172259  movss   xmm9, cs:dword_140278438
0000000140172262  movss   xmm2, dword ptr [r8]
0000000140172267  movaps  xmm0, xmm3
000000014017226A  movzx   ecx, byte ptr [rdx+r13+26E780h]
0000000140172273  movzx   eax, byte ptr [rbp+rcx+0EB0h]
000000014017227B  movd    xmm1, eax
000000014017227F  movzx   eax, byte ptr [rbp+rcx+0EF0h]
0000000140172287  movzx   ecx, byte ptr [rdx+r13+26E781h]
0000000140172290  cvtdq2ps xmm1, xmm1
0000000140172293  mulss   xmm1, xmm2
0000000140172297  divss   xmm0, xmm1
000000014017229B  movd    xmm1, eax
000000014017229F  movzx   eax, byte ptr [rbp+rcx+0EB0h]
00000001401722A7  cvtdq2ps xmm1, xmm1
00000001401722AA  movss   dword ptr [rbp+rdx*4+90h], xmm0
00000001401722B3  movaps  xmm0, xmm3
00000001401722B6  mulss   xmm1, xmm2
00000001401722BA  divss   xmm0, xmm1
00000001401722BE  movd    xmm1, eax
00000001401722C2  movzx   eax, byte ptr [rbp+rcx+0EF0h]
00000001401722CA  movzx   ecx, byte ptr [rdx+r13+26E782h]
00000001401722D3  cvtdq2ps xmm1, xmm1
00000001401722D6  movss   dword ptr [rbp+rdx*4+190h], xmm0
00000001401722DF  movaps  xmm0, xmm4
00000001401722E2  mulss   xmm1, xmm2
00000001401722E6  divss   xmm0, xmm1
00000001401722EA  movd    xmm1, eax
00000001401722EE  movzx   eax, byte ptr [rbp+rcx+0EB0h]
00000001401722F6  cvtdq2ps xmm1, xmm1
00000001401722F9  movss   dword ptr [rbp+rdx*4+94h], xmm0
0000000140172302  movaps  xmm0, xmm4
0000000140172305  mulss   xmm1, xmm2
0000000140172309  divss   xmm0, xmm1
000000014017230D  movd    xmm1, eax
0000000140172311  movzx   eax, byte ptr [rbp+rcx+0EF0h]
0000000140172319  movzx   ecx, byte ptr [rdx+r13+26E783h]
0000000140172322  cvtdq2ps xmm1, xmm1
0000000140172325  movss   dword ptr [rbp+rdx*4+194h], xmm0
000000014017232E  movaps  xmm0, xmm5
0000000140172331  mulss   xmm1, xmm2
0000000140172335  divss   xmm0, xmm1
0000000140172339  movd    xmm1, eax
000000014017233D  movzx   eax, byte ptr [rbp+rcx+0EB0h]
0000000140172345  cvtdq2ps xmm1, xmm1
0000000140172348  movss   dword ptr [rbp+rdx*4+98h], xmm0
0000000140172351  movaps  xmm0, xmm5
0000000140172354  mulss   xmm1, xmm2
0000000140172358  divss   xmm0, xmm1
000000014017235C  movd    xmm1, eax
0000000140172360  movzx   eax, byte ptr [rbp+rcx+0EF0h]
0000000140172368  movzx   ecx, byte ptr [rdx+r13+26E784h]
0000000140172371  cvtdq2ps xmm1, xmm1
0000000140172374  movss   dword ptr [rbp+rdx*4+198h], xmm0
000000014017237D  movaps  xmm0, xmm6
0000000140172380  mulss   xmm1, xmm2
0000000140172384  divss   xmm0, xmm1
0000000140172388  movd    xmm1, eax
000000014017238C  movzx   eax, byte ptr [rbp+rcx+0EB0h]
0000000140172394  cvtdq2ps xmm1, xmm1
0000000140172397  movss   dword ptr [rbp+rdx*4+9Ch], xmm0
00000001401723A0  movaps  xmm0, xmm6
00000001401723A3  mulss   xmm1, xmm2
00000001401723A7  divss   xmm0, xmm1
00000001401723AB  movd    xmm1, eax
00000001401723AF  movzx   eax, byte ptr [rbp+rcx+0EF0h]
00000001401723B7  movzx   ecx, byte ptr [rdx+r13+26E785h]
00000001401723C0  cvtdq2ps xmm1, xmm1
00000001401723C3  movss   dword ptr [rbp+rdx*4+19Ch], xmm0
00000001401723CC  movaps  xmm0, xmm3
00000001401723CF  mulss   xmm1, xmm2
00000001401723D3  divss   xmm0, xmm1
00000001401723D7  movd    xmm1, eax
00000001401723DB  movzx   eax, byte ptr [rbp+rcx+0EB0h]
00000001401723E3  cvtdq2ps xmm1, xmm1
00000001401723E6  movss   dword ptr [rbp+rdx*4+0A0h], xmm0
00000001401723EF  movaps  xmm0, xmm3
00000001401723F2  mulss   xmm1, xmm2
00000001401723F6  divss   xmm0, xmm1
00000001401723FA  movd    xmm1, eax
00000001401723FE  cvtdq2ps xmm1, xmm1
0000000140172401  movss   dword ptr [rbp+rdx*4+1A0h], xmm0
000000014017240A  mulss   xmm1, xmm2
000000014017240E  movzx   eax, byte ptr [rbp+rcx+0EF0h]
0000000140172416  movaps  xmm0, xmm7
0000000140172419  movzx   ecx, byte ptr [rdx+r13+26E786h]
0000000140172422  lea     rdx, [rdx+8]
0000000140172426  divss   xmm0, xmm1
000000014017242A  add     r8, 4
000000014017242E  movd    xmm1, eax
0000000140172432  movzx   eax, byte ptr [rbp+rcx+0EB0h]
000000014017243A  movss   dword ptr [rbp+rdx*4+84h], xmm0
0000000140172443  movaps  xmm0, xmm7
0000000140172446  cvtdq2ps xmm1, xmm1
0000000140172449  mulss   xmm1, xmm2
000000014017244D  divss   xmm0, xmm1
0000000140172451  movd    xmm1, eax
0000000140172455  movzx   eax, byte ptr [rbp+rcx+0EF0h]
000000014017245D  movzx   ecx, byte ptr [rdx+r13+26E77Fh]
0000000140172466  movss   dword ptr [rbp+rdx*4+184h], xmm0
000000014017246F  movaps  xmm0, xmm8
0000000140172473  cvtdq2ps xmm1, xmm1
0000000140172476  mulss   xmm1, xmm2
000000014017247A  divss   xmm0, xmm1
000000014017247E  movd    xmm1, eax
0000000140172482  movzx   eax, byte ptr [rbp+rcx+0EB0h]
000000014017248A  movss   dword ptr [rbp+rdx*4+88h], xmm0
0000000140172493  movaps  xmm0, xmm8
0000000140172497  cvtdq2ps xmm1, xmm1
000000014017249A  mulss   xmm1, xmm2
000000014017249E  divss   xmm0, xmm1
00000001401724A2  movd    xmm1, eax
00000001401724A6  movzx   eax, byte ptr [rbp+rcx+0EF0h]
00000001401724AE  movss   dword ptr [rbp+rdx*4+188h], xmm0
00000001401724B7  movaps  xmm0, xmm9
00000001401724BB  cvtdq2ps xmm1, xmm1
00000001401724BE  mulss   xmm1, xmm2
00000001401724C2  divss   xmm0, xmm1
00000001401724C6  movd    xmm1, eax
00000001401724CA  movss   dword ptr [rbp+rdx*4+8Ch], xmm0
00000001401724D3  movaps  xmm0, xmm9
00000001401724D7  cvtdq2ps xmm1, xmm1
00000001401724DA  mulss   xmm1, xmm2
00000001401724DE  divss   xmm0, xmm1
00000001401724E2  movss   dword ptr [rbp+rdx*4+18Ch], xmm0
00000001401724EB  cmp     r8, r9
00000001401724EE  jl      loc_140172262
00000001401724F4  movaps  xmmword ptr [rsp+1090h], xmm10
00000001401724FD  lea     rdx, unk_14026FBD0
0000000140172504  mov     ecx, 22h ; '"'
0000000140172509  movaps  xmmword ptr [rsp+1080h], xmm11
0000000140172512  mov     eax, r11d
0000000140172515  movaps  xmmword ptr [rsp+1070h], xmm12
000000014017251E  sar     eax, 8
0000000140172521  mov     [rbp+0E95h], al
0000000140172527  mov     eax, ebx
0000000140172529  sar     eax, 8
000000014017252C  lea     r8d, [rcx-9]
0000000140172530  mov     [rbp+0E97h], al
0000000140172536  cmp     r12d, 5Ah ; 'Z'
000000014017253A  mov     eax, 11h
000000014017253F  movaps  xmmword ptr [rsp+1060h], xmm13
0000000140172548  cmovle  eax, ecx
000000014017254B  movaps  xmmword ptr [rsp+1050h], xmm14
0000000140172554  mov     rcx, [rdi+8]
0000000140172558  mov     [rbp+0E9Bh], al
000000014017255E  mov     dword ptr [rbp+0E90h], 1100C0FFh
0000000140172568  mov     byte ptr [rbp+0E94h], 8
000000014017256F  mov     [rbp+0E96h], r11b
0000000140172576  mov     [rbp+0E98h], bl
000000014017257C  mov     word ptr [rbp+0E99h], 103h
0000000140172585  mov     dword ptr [rbp+0E9Ch], 1110200h
000000014017258F  mov     dword ptr [rbp+0EA0h], 0FF011103h
0000000140172599  mov     dword ptr [rbp+0EA4h], 0A201C4h
00000001401725A3  call    qword ptr [rdi]
00000001401725A5  mov     rcx, [rdi+8]
00000001401725A9  lea     rdx, [rbp+0EB0h]
00000001401725B0  mov     r8d, 40h ; '@'
00000001401725B6  call    qword ptr [rdi]
00000001401725B8  mov     rcx, [rdi+8]
00000001401725BC  lea     rdx, [rsp+50h]
00000001401725C1  mov     r8d, 1
00000001401725C7  mov     byte ptr [rsp+50h], 1
00000001401725CC  call    qword ptr [rdi]
00000001401725CE  mov     rcx, [rdi+8]
00000001401725D2  lea     rdx, [rbp+0EF0h]
00000001401725D9  mov     r8d, 40h ; '@'
00000001401725DF  call    qword ptr [rdi]
00000001401725E1  mov     rcx, [rdi+8]
00000001401725E5  lea     rdx, [rbp+0E90h]
00000001401725EC  mov     r13d, 18h
00000001401725F2  mov     r8d, r13d
00000001401725F5  call    qword ptr [rdi]
00000001401725F7  mov     rcx, [rdi+8]
00000001401725FB  lea     r8d, [r13-8]
00000001401725FF  lea     rdx, unk_14026E7C1
0000000140172606  call    qword ptr [rdi]
0000000140172608  mov     rcx, [rdi+8]
000000014017260C  lea     r8d, [r13-0Ch]
0000000140172610  lea     rdx, unk_14026E7D8
0000000140172617  call    qword ptr [rdi]
0000000140172619  mov     rcx, [rdi+8]
000000014017261D  lea     r8d, [r13-17h]
0000000140172621  lea     rdx, [rsp+50h]
0000000140172626  mov     byte ptr [rsp+50h], 10h
000000014017262B  call    qword ptr [rdi]
000000014017262D  mov     rcx, [rdi+8]
0000000140172631  lea     r8d, [r13-8]
0000000140172635  lea     rdx, unk_14026E7E9
000000014017263C  call    qword ptr [rdi]
000000014017263E  mov     rcx, [rdi+8]
0000000140172642  lea     rdx, unk_14026E800
0000000140172649  mov     r8d, 0A2h
000000014017264F  call    qword ptr [rdi]
0000000140172651  mov     rcx, [rdi+8]
0000000140172655  lea     r8d, [r13-17h]
0000000140172659  lea     rdx, [rsp+50h]
000000014017265E  mov     byte ptr [rsp+50h], 1
0000000140172663  call    qword ptr [rdi]
0000000140172665  mov     rcx, [rdi+8]
0000000140172669  lea     r8d, [r13-8]
000000014017266D  lea     rdx, unk_14026E8A9
0000000140172674  call    qword ptr [rdi]
0000000140172676  mov     rcx, [rdi+8]
000000014017267A  lea     r8d, [r13-0Ch]
000000014017267E  lea     rdx, unk_14026E8C0
0000000140172685  call    qword ptr [rdi]
0000000140172687  mov     byte ptr [rsp+50h], 11h
000000014017268C  mov     rcx, [rdi+8]
0000000140172690  lea     r8d, [r13-17h]
0000000140172694  lea     rdx, [rsp+50h]
0000000140172699  call    qword ptr [rdi]
000000014017269B  mov     rcx, [rdi+8]
000000014017269F  lea     r8d, [r13-8]
00000001401726A3  lea     rdx, unk_14026E8D1
00000001401726AA  call    qword ptr [rdi]
00000001401726AC  mov     rcx, [rdi+8]
00000001401726B0  lea     rdx, unk_14026E910
00000001401726B7  mov     r8d, 0A2h
00000001401726BD  call    qword ptr [rdi]
00000001401726BF  mov     rcx, [rdi+8]
00000001401726C3  lea     r8d, [r13-0Ah]
00000001401726C7  lea     rdx, unk_14026E9B8
00000001401726CE  call    qword ptr [rdi]
00000001401726D0  mov     ecx, [rsp+58h]
00000001401726D4  xor     esi, esi
00000001401726D6  cmp     r14d, 2
00000001401726DA  mov     dword ptr [rsp+6Ch], 0
00000001401726E2  mov     eax, 2
00000001401726E7  mov     dword ptr [rsp+70h], 0
00000001401726EF  setnle  sil
00000001401726F3  mov     dword ptr [rsp+74h], 0
00000001401726FB  xor     edi, edi
00000001401726FD  mov     dword ptr [rsp+60h], 0
0000000140172705  add     rsi, r15
0000000140172708  mov     dword ptr [rsp+5Ch], 0
0000000140172710  cmp     r14d, eax
0000000140172713  cmovg   edi, eax
0000000140172716  xor     r8d, r8d
0000000140172719  add     rdi, r15
000000014017271C  mov     [rsp+64h], r8d
0000000140172721  cmp     r12d, 5Ah ; 'Z'
0000000140172725  jg      loc_140173129
000000014017272B  test    ecx, ecx
000000014017272D  jle     loc_1401736C7
0000000140172733  movss   xmm7, cs:dword_1402782A4
000000014017273B  movss   xmm8, cs:dword_140278360
0000000140172744  movss   xmm9, cs:dword_140278200
000000014017274D  movss   xmm10, cs:dword_140278864
0000000140172756  movss   xmm6, cs:dword_140278338
000000014017275E  movss   xmm11, cs:dword_140278244
0000000140172767  movss   xmm12, cs:dword_1402782C8
0000000140172770  movss   xmm13, cs:dword_140278308
0000000140172779  movss   xmm14, cs:dword_1402781D4
0000000140172782  movaps  xmmword ptr [rsp+1040h], xmm15
000000014017278B  movss   xmm15, cs:dword_140278280
0000000140172794  test    ebx, ebx
0000000140172796  jle     loc_140173109
000000014017279C  mov     r13d, 10h
00000001401727A2  mov     [rsp+68h], r13d
00000001401727A7  nop     word ptr [rax+rax+00000000h]
00000001401727B0  xor     edx, edx
00000001401727B2  mov     [rsp+7Ch], r13d
00000001401727B7  lea     eax, [r8+10h]
00000001401727BB  mov     r12d, r8d
00000001401727BE  cmp     r8d, eax
00000001401727C1  jge     loc_140172BBE
00000001401727C7  nop     word ptr [rax+rax+00000000h]
00000001401727D0  cmp     r12d, ecx
00000001401727D3  lea     eax, [rcx-1]
00000001401727D6  mov     r10d, r12d
00000001401727D9  lea     r8d, [r13-10h]
00000001401727DD  cmovge  r10d, eax
00000001401727E1  mov     eax, ecx
00000001401727E3  sub     eax, r10d
00000001401727E6  dec     eax
00000001401727E8  cmp     cs:dword_140404A6C+457CB54h, 0
00000001401727EF  cmovnz  r10d, eax
00000001401727F3  imul    r10d, ebx
00000001401727F7  cmp     r8d, r13d
00000001401727FA  jge     loc_140172BAB
0000000140172800  lea     eax, [r13-3]
0000000140172804  lea     r11d, [r13-0Eh]
0000000140172808  mov     r13d, eax
000000014017280B  lea     r9d, [rbx-1]
000000014017280F  nop
0000000140172810  cmp     r8d, ebx
0000000140172813  lea     eax, [rbx-1]
0000000140172816  mov     ecx, r8d
0000000140172819  cmovge  r9d, eax
000000014017281D  lea     eax, [rbx-1]
0000000140172820  cmovge  ecx, eax
0000000140172823  add     ecx, r10d
0000000140172826  imul    ecx, r14d
000000014017282A  movsxd  rcx, ecx
000000014017282D  movzx   eax, byte ptr [rcx+r15]
0000000140172832  movd    xmm5, eax
0000000140172836  movzx   eax, byte ptr [rcx+rsi]
000000014017283A  cvtdq2ps xmm5, xmm5
000000014017283D  movd    xmm3, eax
0000000140172841  movzx   eax, byte ptr [rcx+rdi]
0000000140172845  movaps  xmm2, xmm5
0000000140172848  mulss   xmm2, xmm7
000000014017284C  mov     ecx, r9d
000000014017284F  cvtdq2ps xmm3, xmm3
0000000140172852  movd    xmm4, eax
0000000140172856  lea     eax, [r11-1]
000000014017285A  movaps  xmm0, xmm3
000000014017285D  cmp     eax, ebx
000000014017285F  mulss   xmm0, xmm8
0000000140172864  cmovl   ecx, eax
0000000140172867  cvtdq2ps xmm4, xmm4
000000014017286A  lea     eax, [r10+rcx]
000000014017286E  addss   xmm2, xmm0
0000000140172872  movaps  xmm0, xmm3
0000000140172875  movaps  xmm1, xmm4
0000000140172878  imul    eax, r14d
000000014017287C  mulss   xmm1, xmm9
0000000140172881  mulss   xmm0, xmm12
0000000140172886  addss   xmm2, xmm1
000000014017288A  mulss   xmm3, xmm13
000000014017288F  movsxd  rcx, eax
0000000140172892  movaps  xmm1, xmm5
0000000140172895  mulss   xmm5, xmm6
0000000140172899  mulss   xmm1, xmm11
000000014017289E  movzx   eax, byte ptr [rcx+r15]
00000001401728A3  subss   xmm2, xmm10
00000001401728A8  subss   xmm5, xmm3
00000001401728AC  addss   xmm1, xmm0
00000001401728B0  movss   dword ptr [rbp+rdx*4+0A90h], xmm2
00000001401728B9  movaps  xmm2, xmm4
00000001401728BC  mulss   xmm2, xmm6
00000001401728C0  mulss   xmm4, xmm14
00000001401728C5  subss   xmm2, xmm1
00000001401728C9  subss   xmm5, xmm4
00000001401728CD  movss   dword ptr [rbp+rdx*4+290h], xmm2
00000001401728D6  movss   dword ptr [rbp+rdx*4+690h], xmm5
00000001401728DF  movd    xmm5, eax
00000001401728E3  movzx   eax, byte ptr [rcx+rsi]
00000001401728E7  cvtdq2ps xmm5, xmm5
00000001401728EA  movd    xmm3, eax
00000001401728EE  movzx   eax, byte ptr [rcx+rdi]
00000001401728F2  movaps  xmm2, xmm5
00000001401728F5  mulss   xmm2, xmm7
00000001401728F9  cvtdq2ps xmm3, xmm3
00000001401728FC  movd    xmm4, eax
0000000140172900  movaps  xmm0, xmm3
0000000140172903  mulss   xmm0, xmm8
0000000140172908  cvtdq2ps xmm4, xmm4
000000014017290B  addss   xmm2, xmm0
000000014017290F  movaps  xmm0, xmm3
0000000140172912  movaps  xmm1, xmm4
0000000140172915  mulss   xmm0, xmm12
000000014017291A  mulss   xmm1, xmm9
000000014017291F  mulss   xmm3, xmm13
0000000140172924  addss   xmm2, xmm1
0000000140172928  movaps  xmm1, xmm5
000000014017292B  mulss   xmm1, xmm11
0000000140172930  mulss   xmm5, xmm6
0000000140172934  subss   xmm2, xmm10
0000000140172939  addss   xmm1, xmm0
000000014017293D  subss   xmm5, xmm3
0000000140172941  movss   dword ptr [rbp+rdx*4+0A94h], xmm2
000000014017294A  movaps  xmm2, xmm4
000000014017294D  mulss   xmm2, xmm6
0000000140172951  subss   xmm2, xmm1
0000000140172955  movss   dword ptr [rbp+rdx*4+294h], xmm2
000000014017295E  mulss   xmm4, xmm14
0000000140172963  subss   xmm5, xmm4
0000000140172967  movss   dword ptr [rbp+rdx*4+694h], xmm5
0000000140172970  cmp     r11d, ebx
0000000140172973  jge     short loc_14017297E
0000000140172975  mov     eax, r11d
0000000140172978  lea     r9d, [rbx-1]
000000014017297C  jmp     short loc_140172981
000000014017297E  mov     eax, r9d
0000000140172981  add     eax, r10d
0000000140172984  imul    eax, r14d
0000000140172988  movsxd  rcx, eax
000000014017298B  movzx   eax, byte ptr [rcx+r15]
0000000140172990  movd    xmm5, eax
0000000140172994  movzx   eax, byte ptr [rcx+rsi]
0000000140172998  cvtdq2ps xmm5, xmm5
000000014017299B  movd    xmm3, eax
000000014017299F  movzx   eax, byte ptr [rcx+rdi]
00000001401729A3  movaps  xmm2, xmm5
00000001401729A6  mulss   xmm2, xmm7
00000001401729AA  cvtdq2ps xmm3, xmm3
00000001401729AD  movd    xmm4, eax
00000001401729B1  lea     eax, [r11+1]
00000001401729B5  cmp     eax, ebx
00000001401729B7  movaps  xmm0, xmm3
00000001401729BA  mulss   xmm0, xmm8
00000001401729BF  cmovge  eax, r9d
00000001401729C3  add     r8d, 4
00000001401729C7  cvtdq2ps xmm4, xmm4
00000001401729CA  add     eax, r10d
00000001401729CD  add     r11d, 4
00000001401729D1  addss   xmm2, xmm0
00000001401729D5  imul    eax, r14d
00000001401729D9  movaps  xmm1, xmm4
00000001401729DC  movaps  xmm0, xmm3
00000001401729DF  mulss   xmm1, xmm9
00000001401729E4  mulss   xmm0, xmm12
00000001401729E9  movsxd  rcx, eax
00000001401729EC  addss   xmm2, xmm1
00000001401729F0  mulss   xmm3, xmm13
00000001401729F5  movaps  xmm1, xmm5
00000001401729F8  mulss   xmm5, xmm6
00000001401729FC  movzx   eax, byte ptr [rcx+r15]
0000000140172A01  mulss   xmm1, xmm11
0000000140172A06  subss   xmm2, xmm10
0000000140172A0B  subss   xmm5, xmm3
0000000140172A0F  addss   xmm1, xmm0
0000000140172A13  movss   dword ptr [rbp+rdx*4+0A98h], xmm2
0000000140172A1C  movaps  xmm2, xmm4
0000000140172A1F  mulss   xmm2, xmm6
0000000140172A23  mulss   xmm4, xmm14
0000000140172A28  subss   xmm2, xmm1
0000000140172A2C  subss   xmm5, xmm4
0000000140172A30  movss   dword ptr [rbp+rdx*4+298h], xmm2
0000000140172A39  movss   dword ptr [rbp+rdx*4+698h], xmm5
0000000140172A42  movd    xmm5, eax
0000000140172A46  movzx   eax, byte ptr [rcx+rsi]
0000000140172A4A  cvtdq2ps xmm5, xmm5
0000000140172A4D  movd    xmm3, eax
0000000140172A51  movzx   eax, byte ptr [rcx+rdi]
0000000140172A55  movaps  xmm2, xmm5
0000000140172A58  mulss   xmm2, xmm7
0000000140172A5C  cvtdq2ps xmm3, xmm3
0000000140172A5F  movd    xmm4, eax
0000000140172A63  cvtdq2ps xmm4, xmm4
0000000140172A66  movaps  xmm0, xmm3
0000000140172A69  mulss   xmm0, xmm8
0000000140172A6E  movaps  xmm1, xmm4
0000000140172A71  mulss   xmm1, xmm9
0000000140172A76  addss   xmm2, xmm0
0000000140172A7A  movaps  xmm0, xmm3
0000000140172A7D  mulss   xmm0, xmm12
0000000140172A82  mulss   xmm3, xmm13
0000000140172A87  addss   xmm2, xmm1
0000000140172A8B  movaps  xmm1, xmm5
0000000140172A8E  mulss   xmm5, xmm6
0000000140172A92  mulss   xmm1, xmm11
0000000140172A97  subss   xmm2, xmm10
0000000140172A9C  subss   xmm5, xmm3
0000000140172AA0  addss   xmm1, xmm0
0000000140172AA4  movss   dword ptr [rbp+rdx*4+0A9Ch], xmm2
0000000140172AAD  movaps  xmm2, xmm4
0000000140172AB0  mulss   xmm2, xmm6
0000000140172AB4  mulss   xmm4, xmm14
0000000140172AB9  subss   xmm2, xmm1
0000000140172ABD  subss   xmm5, xmm4
0000000140172AC1  movss   dword ptr [rbp+rdx*4+29Ch], xmm2
0000000140172ACA  movss   dword ptr [rbp+rdx*4+69Ch], xmm5
0000000140172AD3  add     rdx, 4
0000000140172AD7  cmp     r8d, r13d
0000000140172ADA  jl      loc_140172810
0000000140172AE0  mov     r13d, [rsp+68h]
0000000140172AE5  cmp     r8d, r13d
0000000140172AE8  jge     loc_140172BA7
0000000140172AEE  cmp     r8d, ebx
0000000140172AF1  mov     eax, r8d
0000000140172AF4  cmovge  eax, r9d
0000000140172AF8  inc     r8d
0000000140172AFB  add     eax, r10d
0000000140172AFE  imul    eax, r14d
0000000140172B02  movsxd  rcx, eax
0000000140172B05  movzx   eax, byte ptr [rcx+r15]
0000000140172B0A  movd    xmm5, eax
0000000140172B0E  movzx   eax, byte ptr [rcx+rsi]
0000000140172B12  cvtdq2ps xmm5, xmm5
0000000140172B15  movd    xmm3, eax
0000000140172B19  movzx   eax, byte ptr [rcx+rdi]
0000000140172B1D  movaps  xmm2, xmm5
0000000140172B20  mulss   xmm2, xmm7
0000000140172B24  cvtdq2ps xmm3, xmm3
0000000140172B27  movd    xmm4, eax
0000000140172B2B  cvtdq2ps xmm4, xmm4
0000000140172B2E  movaps  xmm0, xmm3
0000000140172B31  mulss   xmm0, xmm8
0000000140172B36  movaps  xmm1, xmm4
0000000140172B39  mulss   xmm1, xmm9
0000000140172B3E  addss   xmm2, xmm0
0000000140172B42  movaps  xmm0, xmm3
0000000140172B45  mulss   xmm0, xmm12
0000000140172B4A  mulss   xmm3, xmm13
0000000140172B4F  addss   xmm2, xmm1
0000000140172B53  movaps  xmm1, xmm5
0000000140172B56  mulss   xmm5, xmm6
0000000140172B5A  mulss   xmm1, xmm11
0000000140172B5F  subss   xmm2, xmm10
0000000140172B64  subss   xmm5, xmm3
0000000140172B68  addss   xmm1, xmm0
0000000140172B6C  movss   dword ptr [rbp+rdx*4+0A90h], xmm2
0000000140172B75  movaps  xmm2, xmm4
0000000140172B78  mulss   xmm2, xmm6
0000000140172B7C  mulss   xmm4, xmm14
0000000140172B81  subss   xmm2, xmm1
0000000140172B85  subss   xmm5, xmm4
0000000140172B89  movss   dword ptr [rbp+rdx*4+290h], xmm2
0000000140172B92  movss   dword ptr [rbp+rdx*4+690h], xmm5
0000000140172B9B  inc     rdx
0000000140172B9E  cmp     r8d, r13d
0000000140172BA1  jl      loc_140172AEE
0000000140172BA7  mov     ecx, [rsp+58h]
0000000140172BAB  mov     eax, [rsp+64h]
0000000140172BAF  inc     r12d
0000000140172BB2  add     eax, 10h
0000000140172BB5  cmp     r12d, eax
0000000140172BB8  jl      loc_1401727D0
0000000140172BBE  mov     r12, [rbp-80h]
0000000140172BC2  lea     rax, unk_14026F1D0
0000000140172BC9  mov     [rsp+40h], rax
0000000140172BCE  lea     r9, [rbp+0A90h]
0000000140172BD5  lea     rax, unk_14026E9D0
0000000140172BDC  mov     rcx, r12
0000000140172BDF  mov     [rsp+38h], rax
0000000140172BE4  lea     r8, [rsp+5Ch]
0000000140172BE9  mov     eax, [rsp+6Ch]
0000000140172BED  lea     rdx, [rsp+60h]
0000000140172BF2  mov     [rsp+30h], eax
0000000140172BF6  lea     rax, [rbp+90h]
0000000140172BFD  mov     [rsp+28h], rax
0000000140172C02  mov     dword ptr [rsp+20h], 10h
0000000140172C0A  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
0000000140172C0F  lea     rcx, unk_14026F1D0
0000000140172C16  mov     [rsp+40h], rcx
0000000140172C1B  lea     r9, [rbp+0AB0h]
0000000140172C22  lea     rcx, unk_14026E9D0
0000000140172C29  mov     [rsp+38h], rcx
0000000140172C2E  lea     r8, [rsp+5Ch]
0000000140172C33  mov     [rsp+30h], eax
0000000140172C37  lea     rdx, [rsp+60h]
0000000140172C3C  lea     rax, [rbp+90h]
0000000140172C43  mov     rcx, r12
0000000140172C46  mov     [rsp+28h], rax
0000000140172C4B  mov     dword ptr [rsp+20h], 10h
0000000140172C53  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
0000000140172C58  lea     rcx, unk_14026F1D0
0000000140172C5F  mov     [rsp+40h], rcx
0000000140172C64  lea     r9, [rbp+0C90h]
0000000140172C6B  lea     rcx, unk_14026E9D0
0000000140172C72  mov     [rsp+38h], rcx
0000000140172C77  lea     r8, [rsp+5Ch]
0000000140172C7C  mov     [rsp+30h], eax
0000000140172C80  lea     rdx, [rsp+60h]
0000000140172C85  lea     rax, [rbp+90h]
0000000140172C8C  mov     rcx, r12
0000000140172C8F  mov     [rsp+28h], rax
0000000140172C94  mov     dword ptr [rsp+20h], 10h
0000000140172C9C  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
0000000140172CA1  lea     rcx, unk_14026F1D0
0000000140172CA8  mov     [rsp+40h], rcx
0000000140172CAD  lea     r9, [rbp+0CB0h]
0000000140172CB4  lea     rcx, unk_14026E9D0
0000000140172CBB  mov     [rsp+38h], rcx
0000000140172CC0  lea     r8, [rsp+5Ch]
0000000140172CC5  mov     [rsp+30h], eax
0000000140172CC9  lea     rdx, [rsp+60h]
0000000140172CCE  lea     rax, [rbp+90h]
0000000140172CD5  mov     rcx, r12
0000000140172CD8  mov     [rsp+28h], rax
0000000140172CDD  mov     dword ptr [rsp+20h], 10h
0000000140172CE5  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
0000000140172CEA  xor     ecx, ecx
0000000140172CEC  mov     [rsp+6Ch], eax
0000000140172CF0  xor     eax, eax
0000000140172CF2  movss   xmm1, dword ptr [rbp+rax+2D4h]
0000000140172CFB  addss   xmm1, dword ptr [rbp+rax+2D0h]
0000000140172D04  movss   xmm0, dword ptr [rbp+rax+294h]
0000000140172D0D  addss   xmm0, dword ptr [rbp+rax+290h]
0000000140172D16  movss   xmm2, dword ptr [rbp+rax+6D4h]
0000000140172D1F  addss   xmm2, dword ptr [rbp+rax+6D0h]
0000000140172D28  addss   xmm1, xmm0
0000000140172D2C  movss   xmm0, dword ptr [rbp+rax+694h]
0000000140172D35  addss   xmm0, dword ptr [rbp+rax+690h]
0000000140172D3E  mulss   xmm1, xmm15
0000000140172D43  addss   xmm2, xmm0
0000000140172D47  movss   xmm0, dword ptr [rbp+rax+29Ch]
0000000140172D50  addss   xmm0, dword ptr [rbp+rax+298h]
0000000140172D59  movss   dword ptr [rbp+rcx*4-70h], xmm1
0000000140172D5F  movss   xmm1, dword ptr [rbp+rax+2DCh]
0000000140172D68  addss   xmm1, dword ptr [rbp+rax+2D8h]
0000000140172D71  mulss   xmm2, xmm15
0000000140172D76  addss   xmm1, xmm0
0000000140172D7A  movss   dword ptr [rbp+rcx*4+0A90h], xmm2
0000000140172D83  movss   xmm2, dword ptr [rbp+rax+6DCh]
0000000140172D8C  addss   xmm2, dword ptr [rbp+rax+6D8h]
0000000140172D95  movss   xmm0, dword ptr [rbp+rax+69Ch]
0000000140172D9E  addss   xmm0, dword ptr [rbp+rax+698h]
0000000140172DA7  mulss   xmm1, xmm15
0000000140172DAC  addss   xmm2, xmm0
0000000140172DB0  movss   dword ptr [rbp+rcx*4-6Ch], xmm1
0000000140172DB6  movss   xmm1, dword ptr [rbp+rax+2E4h]
0000000140172DBF  addss   xmm1, dword ptr [rbp+rax+2E0h]
0000000140172DC8  movss   xmm0, dword ptr [rbp+rax+2A0h]
0000000140172DD1  addss   xmm0, dword ptr [rbp+rax+2A4h]
0000000140172DDA  mulss   xmm2, xmm15
0000000140172DDF  addss   xmm1, xmm0
0000000140172DE3  movss   dword ptr [rbp+rcx*4+0A94h], xmm2
0000000140172DEC  movss   xmm2, dword ptr [rbp+rax+6E4h]
0000000140172DF5  addss   xmm2, dword ptr [rbp+rax+6E0h]
0000000140172DFE  movss   xmm0, dword ptr [rbp+rax+6A0h]
0000000140172E07  addss   xmm0, dword ptr [rbp+rax+6A4h]
0000000140172E10  mulss   xmm1, xmm15
0000000140172E15  addss   xmm2, xmm0
0000000140172E19  movss   dword ptr [rbp+rcx*4-68h], xmm1
0000000140172E1F  movss   xmm1, dword ptr [rbp+rax+2ECh]
0000000140172E28  addss   xmm1, dword ptr [rbp+rax+2E8h]
0000000140172E31  movss   xmm0, dword ptr [rbp+rax+2A8h]
0000000140172E3A  addss   xmm0, dword ptr [rbp+rax+2ACh]
0000000140172E43  mulss   xmm2, xmm15
0000000140172E48  addss   xmm1, xmm0
0000000140172E4C  movss   dword ptr [rbp+rcx*4+0A98h], xmm2
0000000140172E55  movss   xmm2, dword ptr [rbp+rax+6ECh]
0000000140172E5E  addss   xmm2, dword ptr [rbp+rax+6E8h]
0000000140172E67  movss   xmm0, dword ptr [rbp+rax+6A8h]
0000000140172E70  addss   xmm0, dword ptr [rbp+rax+6ACh]
0000000140172E79  mulss   xmm1, xmm15
0000000140172E7E  addss   xmm2, xmm0
0000000140172E82  movss   dword ptr [rbp+rcx*4-64h], xmm1
0000000140172E88  movss   xmm1, dword ptr [rbp+rax+2F4h]
0000000140172E91  addss   xmm1, dword ptr [rbp+rax+2F0h]
0000000140172E9A  movss   xmm0, dword ptr [rbp+rax+2B0h]
0000000140172EA3  addss   xmm0, dword ptr [rbp+rax+2B4h]
0000000140172EAC  mulss   xmm2, xmm15
0000000140172EB1  addss   xmm1, xmm0
0000000140172EB5  movss   dword ptr [rbp+rcx*4+0A9Ch], xmm2
0000000140172EBE  movss   xmm2, dword ptr [rbp+rax+6F4h]
0000000140172EC7  addss   xmm2, dword ptr [rbp+rax+6F0h]
0000000140172ED0  movss   xmm0, dword ptr [rbp+rax+6B0h]
0000000140172ED9  addss   xmm0, dword ptr [rbp+rax+6B4h]
0000000140172EE2  mulss   xmm1, xmm15
0000000140172EE7  addss   xmm2, xmm0
0000000140172EEB  movss   dword ptr [rbp+rcx*4-60h], xmm1
0000000140172EF1  movss   xmm0, dword ptr [rbp+rax+2B8h]
0000000140172EFA  addss   xmm0, dword ptr [rbp+rax+2BCh]
0000000140172F03  movss   xmm1, dword ptr [rbp+rax+2FCh]
0000000140172F0C  addss   xmm1, dword ptr [rbp+rax+2F8h]
0000000140172F15  mulss   xmm2, xmm15
0000000140172F1A  addss   xmm1, xmm0
0000000140172F1E  movss   dword ptr [rbp+rcx*4+0AA0h], xmm2
0000000140172F27  movss   xmm2, dword ptr [rbp+rax+6FCh]
0000000140172F30  movss   xmm0, dword ptr [rbp+rax+6B8h]
0000000140172F39  addss   xmm2, dword ptr [rbp+rax+6F8h]
0000000140172F42  addss   xmm0, dword ptr [rbp+rax+6BCh]
0000000140172F4B  mulss   xmm1, xmm15
0000000140172F50  movss   dword ptr [rbp+rcx*4-5Ch], xmm1
0000000140172F56  movss   xmm1, dword ptr [rbp+rax+304h]
0000000140172F5F  addss   xmm2, xmm0
0000000140172F63  addss   xmm1, dword ptr [rbp+rax+300h]
0000000140172F6C  movss   xmm0, dword ptr [rbp+rax+2C0h]
0000000140172F75  addss   xmm0, dword ptr [rbp+rax+2C4h]
0000000140172F7E  mulss   xmm2, xmm15
0000000140172F83  addss   xmm1, xmm0
0000000140172F87  movss   xmm0, dword ptr [rbp+rax+6C0h]
0000000140172F90  addss   xmm0, dword ptr [rbp+rax+6C4h]
0000000140172F99  movss   dword ptr [rbp+rcx*4+0AA4h], xmm2
0000000140172FA2  movss   xmm2, dword ptr [rbp+rax+704h]
0000000140172FAB  addss   xmm2, dword ptr [rbp+rax+700h]
0000000140172FB4  mulss   xmm1, xmm15
0000000140172FB9  addss   xmm2, xmm0
0000000140172FBD  movss   dword ptr [rbp+rcx*4-58h], xmm1
0000000140172FC3  movss   xmm0, dword ptr [rbp+rax+2C8h]
0000000140172FCC  addss   xmm0, dword ptr [rbp+rax+2CCh]
0000000140172FD5  movss   xmm1, dword ptr [rbp+rax+30Ch]
0000000140172FDE  addss   xmm1, dword ptr [rbp+rax+308h]
0000000140172FE7  mulss   xmm2, xmm15
0000000140172FEC  movss   dword ptr [rbp+rcx*4+0AA8h], xmm2
0000000140172FF5  addss   xmm1, xmm0
0000000140172FF9  movss   xmm2, dword ptr [rbp+rax+70Ch]
0000000140173002  addss   xmm2, dword ptr [rbp+rax+708h]
000000014017300B  movss   xmm0, dword ptr [rbp+rax+6C8h]
0000000140173014  addss   xmm0, dword ptr [rbp+rax+6CCh]
000000014017301D  mulss   xmm1, xmm15
0000000140173022  sub     rax, 0FFFFFFFFFFFFFF80h
0000000140173026  addss   xmm2, xmm0
000000014017302A  movss   dword ptr [rbp+rcx*4-54h], xmm1
0000000140173030  mulss   xmm2, xmm15
0000000140173035  movss   dword ptr [rbp+rcx*4+0AACh], xmm2
000000014017303E  add     rcx, 8
0000000140173042  cmp     rax, 400h
0000000140173048  jl      loc_140172CF2
000000014017304E  lea     rax, unk_14026F5D0
0000000140173055  mov     rcx, r12
0000000140173058  mov     [rsp+40h], rax
000000014017305D  lea     r9, [rbp-70h]
0000000140173061  lea     rax, unk_14026EDD0
0000000140173068  mov     [rsp+38h], rax
000000014017306D  lea     r8, [rsp+5Ch]
0000000140173072  mov     eax, [rsp+70h]
0000000140173076  lea     rdx, [rsp+60h]
000000014017307B  mov     [rsp+30h], eax
000000014017307F  lea     rax, [rbp+190h]
0000000140173086  mov     [rsp+28h], rax
000000014017308B  mov     dword ptr [rsp+20h], 8
0000000140173093  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
0000000140173098  mov     [rsp+70h], eax
000000014017309C  lea     r9, [rbp+0A90h]
00000001401730A3  lea     rax, unk_14026F5D0
00000001401730AA  mov     rcx, r12
00000001401730AD  mov     [rsp+40h], rax
00000001401730B2  lea     r8, [rsp+5Ch]
00000001401730B7  lea     rax, unk_14026EDD0
00000001401730BE  mov     [rsp+38h], rax
00000001401730C3  lea     rdx, [rsp+60h]
00000001401730C8  mov     eax, [rsp+74h]
00000001401730CC  mov     [rsp+30h], eax
00000001401730D0  lea     rax, [rbp+190h]
00000001401730D7  mov     [rsp+28h], rax
00000001401730DC  mov     dword ptr [rsp+20h], 8
00000001401730E4  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
00000001401730E9  mov     ecx, [rsp+58h]
00000001401730ED  add     r13d, 10h
00000001401730F1  mov     r8d, [rsp+64h]
00000001401730F6  mov     [rsp+74h], eax
00000001401730FA  mov     [rsp+68h], r13d
00000001401730FF  cmp     [rsp+7Ch], ebx
0000000140173103  jl      loc_1401727B0
0000000140173109  add     r8d, 10h
000000014017310D  mov     [rsp+64h], r8d
0000000140173112  cmp     r8d, ecx
0000000140173115  jl      loc_140172794
000000014017311B  movaps  xmm15, xmmword ptr [rsp+1040h]
0000000140173124  jmp     loc_1401736C1
0000000140173129  test    ecx, ecx
000000014017312B  jle     loc_1401736C7
0000000140173131  movss   xmm7, cs:dword_1402782A4
0000000140173139  movss   xmm8, cs:dword_140278360
0000000140173142  movss   xmm9, cs:dword_140278200
000000014017314B  movss   xmm10, cs:dword_140278864
0000000140173154  movss   xmm6, cs:dword_140278338
000000014017315C  movss   xmm11, cs:dword_140278244
0000000140173165  movss   xmm12, cs:dword_1402782C8
000000014017316E  movss   xmm13, cs:dword_140278308
0000000140173177  movss   xmm14, cs:dword_1402781D4
0000000140173180  test    ebx, ebx
0000000140173182  jle     loc_1401736AF
0000000140173188  mov     r13d, 8
000000014017318E  mov     [rsp+68h], r13d
0000000140173193  nop     dword ptr [rax+00h]
0000000140173197  nop     word ptr [rax+rax+00000000h]
00000001401731A0  xor     edx, edx
00000001401731A2  mov     [rsp+78h], r13d
00000001401731A7  lea     eax, [r8+8]
00000001401731AB  mov     r12d, r8d
00000001401731AE  cmp     r8d, eax
00000001401731B1  jge     loc_14017359F
00000001401731B7  nop     word ptr [rax+rax+00000000h]
00000001401731C0  cmp     r12d, ecx
00000001401731C3  lea     eax, [rcx-1]
00000001401731C6  mov     r10d, r12d
00000001401731C9  lea     r8d, [r13-8]
00000001401731CD  cmovge  r10d, eax
00000001401731D1  mov     eax, ecx
00000001401731D3  sub     eax, r10d
00000001401731D6  dec     eax
00000001401731D8  cmp     cs:dword_140404A6C+457CB54h, 0
00000001401731DF  cmovnz  r10d, eax
00000001401731E3  imul    r10d, ebx
00000001401731E7  cmp     r8d, r13d
00000001401731EA  jge     loc_14017358C
00000001401731F0  lea     eax, [r13-3]
00000001401731F4  lea     r11d, [r13-6]
00000001401731F8  mov     r13d, eax
00000001401731FB  lea     r9d, [rbx-1]
00000001401731FF  nop
0000000140173200  cmp     r8d, ebx
0000000140173203  lea     eax, [rbx-1]
0000000140173206  mov     ecx, r8d
0000000140173209  cmovge  r9d, eax
000000014017320D  lea     eax, [rbx-1]
0000000140173210  cmovge  ecx, eax
0000000140173213  add     ecx, r10d
0000000140173216  imul    ecx, r14d
000000014017321A  movsxd  rcx, ecx
000000014017321D  movzx   eax, byte ptr [rcx+r15]
0000000140173222  movd    xmm5, eax
0000000140173226  movzx   eax, byte ptr [rcx+rsi]
000000014017322A  cvtdq2ps xmm5, xmm5
000000014017322D  movd    xmm3, eax
0000000140173231  movzx   eax, byte ptr [rcx+rdi]
0000000140173235  movaps  xmm0, xmm5
0000000140173238  mulss   xmm0, xmm7
000000014017323C  mov     ecx, r9d
000000014017323F  cvtdq2ps xmm3, xmm3
0000000140173242  movd    xmm4, eax
0000000140173246  lea     eax, [r11-1]
000000014017324A  movaps  xmm2, xmm3
000000014017324D  cmp     eax, ebx
000000014017324F  mulss   xmm2, xmm8
0000000140173254  cmovl   ecx, eax
0000000140173257  cvtdq2ps xmm4, xmm4
000000014017325A  lea     eax, [rcx+r10]
000000014017325E  addss   xmm2, xmm0
0000000140173262  movaps  xmm0, xmm3
0000000140173265  movaps  xmm1, xmm4
0000000140173268  imul    eax, r14d
000000014017326C  mulss   xmm1, xmm9
0000000140173271  mulss   xmm0, xmm12
0000000140173276  addss   xmm2, xmm1
000000014017327A  mulss   xmm3, xmm13
000000014017327F  movsxd  rcx, eax
0000000140173282  movaps  xmm1, xmm5
0000000140173285  mulss   xmm5, xmm6
0000000140173289  mulss   xmm1, xmm11
000000014017328E  movzx   eax, byte ptr [rcx+r15]
0000000140173293  subss   xmm2, xmm10
0000000140173298  subss   xmm5, xmm3
000000014017329C  addss   xmm1, xmm0
00000001401732A0  movss   dword ptr [rbp+rdx*4+0A90h], xmm2
00000001401732A9  movaps  xmm2, xmm4
00000001401732AC  mulss   xmm2, xmm6
00000001401732B0  mulss   xmm4, xmm14
00000001401732B5  subss   xmm2, xmm1
00000001401732B9  subss   xmm5, xmm4
00000001401732BD  movss   dword ptr [rbp+rdx*4-70h], xmm2
00000001401732C3  movss   dword ptr [rbp+rdx*4+290h], xmm5
00000001401732CC  movd    xmm5, eax
00000001401732D0  movzx   eax, byte ptr [rcx+rsi]
00000001401732D4  cvtdq2ps xmm5, xmm5
00000001401732D7  movd    xmm3, eax
00000001401732DB  movzx   eax, byte ptr [rcx+rdi]
00000001401732DF  movaps  xmm0, xmm5
00000001401732E2  cvtdq2ps xmm3, xmm3
00000001401732E5  mulss   xmm0, xmm7
00000001401732E9  movaps  xmm2, xmm3
00000001401732EC  movd    xmm4, eax
00000001401732F0  mulss   xmm2, xmm8
00000001401732F5  cvtdq2ps xmm4, xmm4
00000001401732F8  addss   xmm2, xmm0
00000001401732FC  movaps  xmm0, xmm3
00000001401732FF  movaps  xmm1, xmm4
0000000140173302  mulss   xmm0, xmm12
0000000140173307  mulss   xmm1, xmm9
000000014017330C  mulss   xmm3, xmm13
0000000140173311  addss   xmm2, xmm1
0000000140173315  movaps  xmm1, xmm5
0000000140173318  mulss   xmm1, xmm11
000000014017331D  mulss   xmm5, xmm6
0000000140173321  subss   xmm2, xmm10
0000000140173326  addss   xmm1, xmm0
000000014017332A  subss   xmm5, xmm3
000000014017332E  movss   dword ptr [rbp+rdx*4+0A94h], xmm2
0000000140173337  movaps  xmm2, xmm4
000000014017333A  mulss   xmm2, xmm6
000000014017333E  subss   xmm2, xmm1
0000000140173342  movss   dword ptr [rbp+rdx*4-6Ch], xmm2
0000000140173348  mulss   xmm4, xmm14
000000014017334D  subss   xmm5, xmm4
0000000140173351  movss   dword ptr [rbp+rdx*4+294h], xmm5
000000014017335A  cmp     r11d, ebx
000000014017335D  jge     short loc_140173368
000000014017335F  mov     eax, r11d
0000000140173362  lea     r9d, [rbx-1]
0000000140173366  jmp     short loc_14017336B
0000000140173368  mov     eax, r9d
000000014017336B  add     eax, r10d
000000014017336E  imul    eax, r14d
0000000140173372  movsxd  rcx, eax
0000000140173375  movzx   eax, byte ptr [rcx+r15]
000000014017337A  movd    xmm5, eax
000000014017337E  movzx   eax, byte ptr [rcx+rsi]
0000000140173382  cvtdq2ps xmm5, xmm5
0000000140173385  movd    xmm3, eax
0000000140173389  movzx   eax, byte ptr [rcx+rdi]
000000014017338D  movaps  xmm0, xmm5
0000000140173390  mulss   xmm0, xmm7
0000000140173394  cvtdq2ps xmm3, xmm3
0000000140173397  movd    xmm4, eax
000000014017339B  lea     eax, [r11+1]
000000014017339F  cmp     eax, ebx
00000001401733A1  movaps  xmm2, xmm3
00000001401733A4  mulss   xmm2, xmm8
00000001401733A9  cmovge  eax, r9d
00000001401733AD  add     r8d, 4
00000001401733B1  cvtdq2ps xmm4, xmm4
00000001401733B4  add     eax, r10d
00000001401733B7  add     r11d, 4
00000001401733BB  addss   xmm2, xmm0
00000001401733BF  imul    eax, r14d
00000001401733C3  movaps  xmm1, xmm4
00000001401733C6  movaps  xmm0, xmm3
00000001401733C9  mulss   xmm1, xmm9
00000001401733CE  mulss   xmm0, xmm12
00000001401733D3  movsxd  rcx, eax
00000001401733D6  addss   xmm2, xmm1
00000001401733DA  mulss   xmm3, xmm13
00000001401733DF  movaps  xmm1, xmm5
00000001401733E2  mulss   xmm5, xmm6
00000001401733E6  movzx   eax, byte ptr [rcx+r15]
00000001401733EB  mulss   xmm1, xmm11
00000001401733F0  subss   xmm2, xmm10
00000001401733F5  subss   xmm5, xmm3
00000001401733F9  addss   xmm1, xmm0
00000001401733FD  movss   dword ptr [rbp+rdx*4+0A98h], xmm2
0000000140173406  movaps  xmm2, xmm4
0000000140173409  mulss   xmm2, xmm6
000000014017340D  mulss   xmm4, xmm14
0000000140173412  subss   xmm2, xmm1
0000000140173416  subss   xmm5, xmm4
000000014017341A  movss   dword ptr [rbp+rdx*4-68h], xmm2
0000000140173420  movss   dword ptr [rbp+rdx*4+298h], xmm5
0000000140173429  movd    xmm5, eax
000000014017342D  movzx   eax, byte ptr [rcx+rsi]
0000000140173431  cvtdq2ps xmm5, xmm5
0000000140173434  movd    xmm3, eax
0000000140173438  movzx   eax, byte ptr [rcx+rdi]
000000014017343C  movaps  xmm0, xmm5
000000014017343F  cvtdq2ps xmm3, xmm3
0000000140173442  mulss   xmm0, xmm7
0000000140173446  movaps  xmm2, xmm3
0000000140173449  movd    xmm4, eax
000000014017344D  mulss   xmm2, xmm8
0000000140173452  cvtdq2ps xmm4, xmm4
0000000140173455  addss   xmm2, xmm0
0000000140173459  movaps  xmm0, xmm3
000000014017345C  movaps  xmm1, xmm4
000000014017345F  mulss   xmm0, xmm12
0000000140173464  mulss   xmm1, xmm9
0000000140173469  mulss   xmm3, xmm13
000000014017346E  addss   xmm2, xmm1
0000000140173472  movaps  xmm1, xmm5
0000000140173475  mulss   xmm5, xmm6
0000000140173479  mulss   xmm1, xmm11
000000014017347E  subss   xmm2, xmm10
0000000140173483  subss   xmm5, xmm3
0000000140173487  addss   xmm1, xmm0
000000014017348B  movss   dword ptr [rbp+rdx*4+0A9Ch], xmm2
0000000140173494  movaps  xmm2, xmm4
0000000140173497  mulss   xmm2, xmm6
000000014017349B  mulss   xmm4, xmm14
00000001401734A0  subss   xmm2, xmm1
00000001401734A4  subss   xmm5, xmm4
00000001401734A8  movss   dword ptr [rbp+rdx*4-64h], xmm2
00000001401734AE  movss   dword ptr [rbp+rdx*4+29Ch], xmm5
00000001401734B7  add     rdx, 4
00000001401734BB  cmp     r8d, r13d
00000001401734BE  jl      loc_140173200
00000001401734C4  mov     r13d, [rsp+68h]
00000001401734C9  cmp     r8d, r13d
00000001401734CC  jge     loc_140173588
00000001401734D2  cmp     r8d, ebx
00000001401734D5  mov     eax, r8d
00000001401734D8  cmovge  eax, r9d
00000001401734DC  inc     r8d
00000001401734DF  add     eax, r10d
00000001401734E2  imul    eax, r14d
00000001401734E6  movsxd  rcx, eax
00000001401734E9  movzx   eax, byte ptr [rcx+r15]
00000001401734EE  movd    xmm5, eax
00000001401734F2  movzx   eax, byte ptr [rcx+rsi]
00000001401734F6  cvtdq2ps xmm5, xmm5
00000001401734F9  movd    xmm3, eax
00000001401734FD  movzx   eax, byte ptr [rcx+rdi]
0000000140173501  movaps  xmm0, xmm5
0000000140173504  cvtdq2ps xmm3, xmm3
0000000140173507  mulss   xmm0, xmm7
000000014017350B  movaps  xmm2, xmm3
000000014017350E  movd    xmm4, eax
0000000140173512  mulss   xmm2, xmm8
0000000140173517  cvtdq2ps xmm4, xmm4
000000014017351A  addss   xmm2, xmm0
000000014017351E  movaps  xmm0, xmm3
0000000140173521  movaps  xmm1, xmm4
0000000140173524  mulss   xmm0, xmm12
0000000140173529  mulss   xmm1, xmm9
000000014017352E  mulss   xmm3, xmm13
0000000140173533  addss   xmm2, xmm1
0000000140173537  movaps  xmm1, xmm5
000000014017353A  mulss   xmm5, xmm6
000000014017353E  mulss   xmm1, xmm11
0000000140173543  subss   xmm2, xmm10
0000000140173548  subss   xmm5, xmm3
000000014017354C  addss   xmm1, xmm0
0000000140173550  movss   dword ptr [rbp+rdx*4+0A90h], xmm2
0000000140173559  movaps  xmm2, xmm4
000000014017355C  mulss   xmm2, xmm6
0000000140173560  mulss   xmm4, xmm14
0000000140173565  subss   xmm2, xmm1
0000000140173569  subss   xmm5, xmm4
000000014017356D  movss   dword ptr [rbp+rdx*4-70h], xmm2
0000000140173573  movss   dword ptr [rbp+rdx*4+290h], xmm5
000000014017357C  inc     rdx
000000014017357F  cmp     r8d, r13d
0000000140173582  jl      loc_1401734D2
0000000140173588  mov     ecx, [rsp+58h]
000000014017358C  mov     eax, [rsp+64h]
0000000140173590  inc     r12d
0000000140173593  add     eax, 8
0000000140173596  cmp     r12d, eax
0000000140173599  jl      loc_1401731C0
000000014017359F  mov     r12, [rbp-80h]
00000001401735A3  lea     rax, unk_14026F1D0
00000001401735AA  mov     [rsp+40h], rax
00000001401735AF  lea     r9, [rbp+0A90h]
00000001401735B6  lea     rax, unk_14026E9D0
00000001401735BD  mov     rcx, r12
00000001401735C0  mov     [rsp+38h], rax
00000001401735C5  lea     r8, [rsp+5Ch]
00000001401735CA  mov     eax, [rsp+6Ch]
00000001401735CE  lea     rdx, [rsp+60h]
00000001401735D3  mov     [rsp+30h], eax
00000001401735D7  lea     rax, [rbp+90h]
00000001401735DE  mov     [rsp+28h], rax
00000001401735E3  mov     dword ptr [rsp+20h], 8
00000001401735EB  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
00000001401735F0  mov     [rsp+6Ch], eax
00000001401735F4  lea     r9, [rbp-70h]
00000001401735F8  lea     rax, unk_14026F5D0
00000001401735FF  mov     rcx, r12
0000000140173602  mov     [rsp+40h], rax
0000000140173607  lea     r8, [rsp+5Ch]
000000014017360C  lea     rax, unk_14026EDD0
0000000140173613  mov     [rsp+38h], rax
0000000140173618  lea     rdx, [rsp+60h]
000000014017361D  mov     eax, [rsp+70h]
0000000140173621  mov     [rsp+30h], eax
0000000140173625  lea     rax, [rbp+190h]
000000014017362C  mov     [rsp+28h], rax
0000000140173631  mov     dword ptr [rsp+20h], 8
0000000140173639  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
000000014017363E  mov     [rsp+70h], eax
0000000140173642  lea     r9, [rbp+290h]
0000000140173649  lea     rax, unk_14026F5D0
0000000140173650  mov     rcx, r12
0000000140173653  mov     [rsp+40h], rax
0000000140173658  lea     r8, [rsp+5Ch]
000000014017365D  lea     rax, unk_14026EDD0
0000000140173664  mov     [rsp+38h], rax
0000000140173669  lea     rdx, [rsp+60h]
000000014017366E  mov     eax, [rsp+74h]
0000000140173672  mov     [rsp+30h], eax
0000000140173676  lea     rax, [rbp+190h]
000000014017367D  mov     [rsp+28h], rax
0000000140173682  mov     dword ptr [rsp+20h], 8
000000014017368A  call    ?OnDrawTab@CMFCVisualManager@@UEAAXPEAVCDC@@VCRect@@HHPEBVCMFCBaseTabCtrl@@@Z; CMFCVisualManager::OnDrawTab(CDC *,CRect,int,int,CMFCBaseTabCtrl const *)
000000014017368F  mov     ecx, [rsp+58h]
0000000140173693  add     r13d, 8
0000000140173697  mov     r8d, [rsp+64h]
000000014017369C  mov     [rsp+74h], eax
00000001401736A0  mov     [rsp+68h], r13d
00000001401736A5  cmp     [rsp+78h], ebx
00000001401736A9  jl      loc_1401731A0
00000001401736AF  add     r8d, 8
00000001401736B3  mov     [rsp+64h], r8d
00000001401736B8  cmp     r8d, ecx
00000001401736BB  jl      loc_140173180
00000001401736C1  mov     r13d, 18h
00000001401736C7  mov     eax, [rsp+5Ch]
00000001401736CB  mov     edi, 7Fh
00000001401736D0  movaps  xmm14, xmmword ptr [rsp+1050h]
00000001401736D9  add     eax, 7
00000001401736DC  movaps  xmm13, xmmword ptr [rsp+1060h]
00000001401736E5  sub     r13d, eax
00000001401736E8  movaps  xmm12, xmmword ptr [rsp+1070h]
00000001401736F1  movzx   ecx, r13b
00000001401736F5  movaps  xmm11, xmmword ptr [rsp+1080h]
00000001401736FE  movaps  xmm10, xmmword ptr [rsp+1090h]
0000000140173707  movaps  xmm9, xmmword ptr [rsp+10A0h]
0000000140173710  movaps  xmm8, xmmword ptr [rsp+10B0h]
0000000140173719  movaps  xmm7, xmmword ptr [rsp+10C0h]
0000000140173721  movaps  xmm6, xmmword ptr [rsp+10D0h]
0000000140173729  mov     r13, [rsp+10E0h]
0000000140173731  mov     r12, [rsp+10E8h]
0000000140173739  mov     r14, [rbp-80h]
000000014017373D  shl     edi, cl
000000014017373F  or      edi, [rsp+60h]
0000000140173743  cmp     eax, 8
0000000140173746  jl      short loc_140173790
0000000140173748  mov     esi, eax
000000014017374A  shr     rsi, 3
000000014017374E  xchg    ax, ax
0000000140173750  mov     rcx, [r14+8]
0000000140173754  lea     rdx, [rsp+50h]
0000000140173759  mov     ebx, edi
000000014017375B  mov     r8d, 1
0000000140173761  sar     ebx, 10h
0000000140173764  mov     [rsp+50h], bl
0000000140173768  call    qword ptr [r14]
000000014017376B  cmp     bl, 0FFh
000000014017376E  jnz     short loc_140173787
0000000140173770  mov     rcx, [r14+8]
0000000140173774  lea     rdx, [rsp+50h]
0000000140173779  mov     r8d, 1
000000014017377F  mov     byte ptr [rsp+50h], 0
0000000140173784  call    qword ptr [r14]
0000000140173787  shl     edi, 8
000000014017378A  sub     rsi, 1
000000014017378E  jnz     short loc_140173750
0000000140173790  mov     rcx, [r14+8]
0000000140173794  lea     rdx, [rsp+50h]
0000000140173799  mov     r8d, 1
000000014017379F  mov     byte ptr [rsp+50h], 0FFh
00000001401737A4  call    qword ptr [r14]
00000001401737A7  mov     rcx, [r14+8]
00000001401737AB  lea     rdx, [rsp+50h]
00000001401737B0  mov     r8d, 1
00000001401737B6  mov     byte ptr [rsp+50h], 0D9h
00000001401737BB  call    qword ptr [r14]
00000001401737BE  mov     rsi, [rsp+1138h]
00000001401737C6  mov     eax, 1
00000001401737CB  jmp     short loc_1401737CF
00000001401737CD  xor     eax, eax
00000001401737CF  mov     rcx, [rbp+0F30h]
00000001401737D6  xor     rcx, rsp
00000001401737D9  call    1401F8B20h
00000001401737DE  add     rsp, 10F0h
00000001401737E5  pop     r15
00000001401737E7  pop     r14
00000001401737E9  pop     rdi
00000001401737EA  pop     rbx
00000001401737EB  pop     rbp
00000001401737EC  retn
