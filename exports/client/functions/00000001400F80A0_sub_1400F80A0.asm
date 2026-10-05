; 0x1400f80a0: sub_1400F80A0
; Decompilation failed: function frame is wrong
00000001400F80A0  mov     [rsp+8], rbx
00000001400F80A5  mov     [rsp+10h], rsi
00000001400F80AA  mov     [rsp+18h], rdi
00000001400F80AF  push    rbp
00000001400F80B0  push    r12
00000001400F80B2  push    r13
00000001400F80B4  push    r14
00000001400F80B6  push    r15
00000001400F80B8  lea     rbp, [rsp-1410h]
00000001400F80C0  mov     eax, 1510h
00000001400F80C5  call    sub_1401F89D0
00000001400F80CA  sub     rsp, rax
00000001400F80CD  movaps  xmmword ptr [rsp+1500h], xmm6
00000001400F80D5  movaps  xmmword ptr [rsp+14F0h], xmm7
00000001400F80DD  movaps  xmmword ptr [rsp+14E0h], xmm8
00000001400F80E6  movaps  xmmword ptr [rsp+14D0h], xmm9
00000001400F80EF  movaps  xmmword ptr [rsp+14C0h], xmm10
00000001400F80F8  movaps  xmmword ptr [rsp+14B0h], xmm11
00000001400F8101  movaps  xmmword ptr [rsp+14A0h], xmm12
00000001400F810A  movaps  xmmword ptr [rsp+1490h], xmm13
00000001400F8113  mov     rax, cs:__security_cookie
00000001400F811A  xor     rax, rsp
00000001400F811D  mov     [rbp+1370h], rax
00000001400F8124  mov     eax, cs:dword_140404A6C+43ABB260h
00000001400F812A  cmp     eax, 1
00000001400F812D  jnz     loc_1400F8D23
00000001400F8133  xor     ebx, ebx
00000001400F8135  lea     r8, dword_140404A6C+1121EF0Ch
00000001400F813C  mov     edi, ebx
00000001400F813E  mov     edx, eax
00000001400F8140  mov     esi, 100h
00000001400F8145  cmp     [r8-2D18h], ebx
00000001400F814C  jz      short loc_1400F8167
00000001400F814E  cmp     [r8], ebx
00000001400F8151  jnz     short loc_1400F8167
00000001400F8153  mov     ecx, [r8-2CD0h]
00000001400F815A  lea     eax, [rdi+1]
00000001400F815D  test    ecx, ecx
00000001400F815F  cmovz   eax, edi
00000001400F8162  cmovz   edx, ebx
00000001400F8165  mov     edi, eax
00000001400F8167  add     r8, 3834h
00000001400F816E  sub     rsi, 1
00000001400F8172  jnz     short loc_1400F8145
00000001400F8174  mov     ecx, cs:dword_140404A6C+43ABB268h
00000001400F817A  mov     eax, ebx
00000001400F817C  dec     ecx
00000001400F817E  cmp     edi, 3
00000001400F8181  mov     cs:dword_140404A6C+43ABB268h, ecx
00000001400F8187  cmovge  eax, edx
00000001400F818A  test    eax, eax
00000001400F818C  jz      short loc_1400F819E
00000001400F818E  mov     eax, 0B4h
00000001400F8193  cmp     ecx, eax
00000001400F8195  cmovg   ecx, eax
00000001400F8198  mov     cs:dword_140404A6C+43ABB268h, ecx
00000001400F819E  cmp     edi, 3
00000001400F81A1  jge     short loc_1400F81B7
00000001400F81A3  mov     esi, 708h
00000001400F81A8  cmp     ecx, esi
00000001400F81AA  jge     short loc_1400F81B7
00000001400F81AC  mov     cs:dword_140404A6C+43ABB268h, esi
00000001400F81B2  jmp     loc_1400F993D
00000001400F81B7  test    ecx, ecx
00000001400F81B9  jg      loc_1400F993D
00000001400F81BF  mov     ecx, 80h
00000001400F81C4  call    sub_14012E960
00000001400F81C9  movsxd  rax, cs:dword_140404A6C+35BCC9F0h
00000001400F81D0  xorps   xmm0, xmm0
00000001400F81D3  movdqu  xmmword ptr cs:dword_140404A6C+43B758B4h, xmm0
00000001400F81DB  test    eax, eax
00000001400F81DD  jle     short loc_1400F81F4
00000001400F81DF  mov     r8, rax
00000001400F81E2  lea     rcx, [rbp+370h]
00000001400F81E9  shl     r8, 2
00000001400F81ED  xor     edx, edx
00000001400F81EF  call    1401FCD30h
00000001400F81F4  lea     r13, dword_140404A6C+1121C23Ch
00000001400F81FB  mov     r15d, ebx
00000001400F81FE  mov     rax, r13
00000001400F8201  lea     rdx, [rsp+70h]
00000001400F8206  mov     ecx, ebx
00000001400F8208  cmp     [rax-48h], ebx
00000001400F820B  jz      short loc_1400F8222
00000001400F820D  cmp     [rax], ebx
00000001400F820F  jz      short loc_1400F8222
00000001400F8211  cmp     [rax+2CD0h], ebx
00000001400F8217  jnz     short loc_1400F8222
00000001400F8219  inc     r15d
00000001400F821C  mov     [rdx], ecx
00000001400F821E  add     rdx, 4
00000001400F8222  inc     ecx
00000001400F8224  add     rax, 3834h
00000001400F822A  cmp     ecx, 100h
00000001400F8230  jl      short loc_1400F8208
00000001400F8232  mov     cs:dword_140404A6C+43B758B0h, r15d
00000001400F8239  call    rand
00000001400F823E  mov     r12d, eax
00000001400F8241  lea     r14, cs:140000000h
00000001400F8248  mov     eax, 55555556h
00000001400F824D  imul    r12d
00000001400F8250  mov     eax, edx
00000001400F8252  shr     eax, 1Fh
00000001400F8255  add     edx, eax
00000001400F8257  lea     eax, [rdx+rdx*2]
00000001400F825A  sub     r12d, eax
00000001400F825D  mov     eax, cs:dword_140404A6C+43B758B4h
00000001400F8263  add     r12d, 3
00000001400F8267  test    eax, eax
00000001400F8269  jz      short loc_1400F8274
00000001400F826B  cmp     r15d, r12d
00000001400F826E  jl      loc_1400F8370
00000001400F8274  cmp     eax, 8
00000001400F8277  jge     loc_1400F8370
00000001400F827D  test    r15d, r15d
00000001400F8280  jle     loc_1400F8363
00000001400F8286  call    rand
00000001400F828B  cdq
00000001400F828C  lea     rdi, [rsp+70h]
00000001400F8291  idiv    r15d
00000001400F8294  movsxd  rax, cs:dword_140404A6C+43B758B4h
00000001400F829B  dec     r15d
00000001400F829E  movsxd  r8, edx
00000001400F82A1  lea     rdi, [rdi+r8*4]
00000001400F82A5  lea     rcx, [rax+rax*8]
00000001400F82A9  mov     eax, [rdi]
00000001400F82AB  mov     (rva dword_140404A6C+43B758BCh)[r14+rcx*4], eax
00000001400F82B3  movsxd  rcx, r15d
00000001400F82B6  cmp     r8, rcx
00000001400F82B9  jge     short loc_1400F82C9
00000001400F82BB  lea     rsi, [rsp+74h]
00000001400F82C0  sub     rcx, r8
00000001400F82C3  lea     rsi, [rsi+r8*4]
00000001400F82C7  rep movsd
00000001400F82C9  test    r15d, r15d
00000001400F82CC  jle     loc_1400F835D
00000001400F82D2  call    rand
00000001400F82D7  cdq
00000001400F82D8  lea     rdi, [rsp+70h]
00000001400F82DD  idiv    r15d
00000001400F82E0  movsxd  rax, cs:dword_140404A6C+43B758B4h
00000001400F82E7  dec     r15d
00000001400F82EA  movsxd  r8, edx
00000001400F82ED  lea     rdi, [rdi+r8*4]
00000001400F82F1  lea     rcx, [rax+rax*8]
00000001400F82F5  mov     eax, [rdi]
00000001400F82F7  mov     (rva dword_140404A6C+43B758B8h)[r14+rcx*4], eax
00000001400F82FF  movsxd  rcx, r15d
00000001400F8302  cmp     r8, rcx
00000001400F8305  jge     short loc_1400F8315
00000001400F8307  lea     rsi, [rsp+74h]
00000001400F830C  sub     rcx, r8
00000001400F830F  lea     rsi, [rsi+r8*4]
00000001400F8313  rep movsd
00000001400F8315  test    r15d, r15d
00000001400F8318  jle     short loc_1400F835D
00000001400F831A  call    rand
00000001400F831F  cdq
00000001400F8320  lea     rdi, [rsp+70h]
00000001400F8325  idiv    r15d
00000001400F8328  movsxd  rax, cs:dword_140404A6C+43B758B4h
00000001400F832F  dec     r15d
00000001400F8332  movsxd  r8, edx
00000001400F8335  lea     rdi, [rdi+r8*4]
00000001400F8339  lea     rcx, [rax+rax*8]
00000001400F833D  mov     eax, [rdi]
00000001400F833F  mov     (rva dword_140404A6C+43B758C0h)[r14+rcx*4], eax
00000001400F8347  movsxd  rcx, r15d
00000001400F834A  cmp     r8, rcx
00000001400F834D  jge     short loc_1400F835D
00000001400F834F  lea     rsi, [rsp+74h]
00000001400F8354  sub     rcx, r8
00000001400F8357  lea     rsi, [rsi+r8*4]
00000001400F835B  rep movsd
00000001400F835D  mov     eax, cs:dword_140404A6C+43B758B4h
00000001400F8363  inc     eax
00000001400F8365  mov     cs:dword_140404A6C+43B758B4h, eax
00000001400F836B  jmp     loc_1400F8267
00000001400F8370  movss   xmm9, cs:dword_1402783F4
00000001400F8379  mov     esi, ebx
00000001400F837B  movss   xmm8, cs:dword_140278688
00000001400F8384  mov     eax, ebx
00000001400F8386  mov     [rsp+40h], ebx
00000001400F838A  mov     rdi, 0C000100040000h
00000001400F8394  xorps   xmm13, xmm13
00000001400F8398  nop     dword ptr [rax+rax+00000000h]
00000001400F83A0  cmp     [r13-48h], ebx
00000001400F83A4  jz      loc_1400F86BF
00000001400F83AA  cmp     [r13+0], ebx
00000001400F83AE  jz      loc_1400F86BF
00000001400F83B4  cmp     [r13+2CD0h], ebx
00000001400F83BB  jnz     loc_1400F86BF
00000001400F83C1  cmp     cs:dword_140404A6C+35BCC9F0h, ebx
00000001400F83C7  mov     [r13+3Ch], ebx
00000001400F83CB  jle     short loc_1400F8400
00000001400F83CD  call    rand
00000001400F83D2  cdq
00000001400F83D3  idiv    cs:dword_140404A6C+35BCC9F0h
00000001400F83D9  cmp     edx, 33h ; '3'
00000001400F83DC  ja      short loc_1400F83E7
00000001400F83DE  movsxd  rax, edx
00000001400F83E1  bt      rdi, rax
00000001400F83E5  jb      short loc_1400F83CD
00000001400F83E7  movsxd  rax, edx
00000001400F83EA  cmp     [rbp+rax*4+370h], ebx
00000001400F83F1  jnz     short loc_1400F83CD
00000001400F83F3  mov     dword ptr [rbp+rax*4+370h], 1
00000001400F83FE  jmp     short loc_1400F8402
00000001400F8400  mov     edx, ebx
00000001400F8402  movaps  xmm1, cs:xmmword_140278D30
00000001400F8409  lea     rcx, [rsp+48h]
00000001400F840E  movsxd  rax, edx
00000001400F8411  movaps  xmm2, xmm13
00000001400F8415  imul    rdi, rax, 88h
00000001400F841C  movups  xmmword ptr [rsp+48h], xmm1
00000001400F8421  movups  xmmword ptr [rsp+58h], xmm1
00000001400F8426  lea     rdx, [rsp+54h]
00000001400F842B  mov     dword ptr [rsp+68h], 3F800000h
00000001400F8433  movss   xmm0, dword ptr [rdi+r14+35FD1474h]
00000001400F843D  movss   xmm6, dword ptr [rdi+r14+35FD1470h]
00000001400F8447  addss   xmm0, xmm9
00000001400F844C  movss   xmm7, dword ptr [rdi+r14+35FD1478h]
00000001400F8456  movss   dword ptr [rsp+34h], xmm0
00000001400F845C  movaps  xmm0, xmm1
00000001400F845F  call    sub_14007B2A0
00000001400F8464  mov     eax, [rdi+r14+35FD1494h]
00000001400F846C  lea     rdx, [rsp+48h]
00000001400F8471  dec     eax
00000001400F8473  mov     qword ptr [r13+3778h], 1
00000001400F847E  mov     r8d, esi
00000001400F8481  lea     rcx, [rsp+30h]
00000001400F8486  movd    xmm0, eax
00000001400F848A  mov     eax, [rdi+r14+35FD1498h]
00000001400F8492  cvtdq2ps xmm0, xmm0
00000001400F8495  dec     eax
00000001400F8497  mulss   xmm0, xmm8
00000001400F849C  addss   xmm0, xmm6
00000001400F84A0  movss   dword ptr [rsp+30h], xmm0
00000001400F84A6  movd    xmm0, eax
00000001400F84AA  cvtdq2ps xmm0, xmm0
00000001400F84AD  mulss   xmm0, xmm8
00000001400F84B2  addss   xmm0, xmm7
00000001400F84B6  movss   dword ptr [rsp+38h], xmm0
00000001400F84BC  call    sub_140053840
00000001400F84C1  mov     r12d, cs:dword_140404A6C+43B758B4h
00000001400F84C8  movsxd  r8, eax
00000001400F84CB  mov     [r13+54h], r8d
00000001400F84CF  cmp     r8d, 0FFFFFFFFh
00000001400F84D3  jz      short loc_1400F8520
00000001400F84D5  test    r12d, r12d
00000001400F84D8  jle     short loc_1400F8511
00000001400F84DA  lea     rdx, dword_140404A6C+43B758BCh
00000001400F84E1  mov     edi, r12d
00000001400F84E4  cmp     esi, [rdx]
00000001400F84E6  jnz     short loc_1400F8507
00000001400F84E8  imul    rcx, r8, 6FF8h
00000001400F84EF  mov     dword ptr [rcx+r14+4329E344h], 64h ; 'd'
00000001400F84FB  mov     dword ptr [rcx+r14+4329E348h], 1
00000001400F8507  add     rdx, 24h ; '$'
00000001400F850B  sub     rdi, 1
00000001400F850F  jnz     short loc_1400F84E4
00000001400F8511  imul    rcx, r8, 6FF8h
00000001400F8518  mov     [rcx+r14+4329E3A0h], ebx
00000001400F8520  mov     ecx, esi
00000001400F8522  mov     [r13+11Ch], ebx
00000001400F8529  call    sub_140051DC0
00000001400F852E  mov     r15d, cs:dword_140404A6C+43ABB2C8h
00000001400F8535  mov     r9d, ebx
00000001400F8538  mov     r10d, cs:dword_140404A6C+6CC46354h
00000001400F853F  test    r12d, r12d
00000001400F8542  jle     loc_1400F8653
00000001400F8548  mov     r11, r12
00000001400F854B  lea     r8, dword_140404A6C+43B758C0h
00000001400F8552  mov     r12d, [rsp+40h]
00000001400F8557  cmp     esi, [r8-4]
00000001400F855B  jnz     short loc_1400F85C0
00000001400F855D  mov     r9d, 1
00000001400F8563  test    r10d, r10d
00000001400F8566  jz      loc_1400F863C
00000001400F856C  movsxd  rcx, cs:dword_140404A6C+498191F8h
00000001400F8573  mov     rax, rcx
00000001400F8576  shl     rax, 7
00000001400F857A  inc     ecx
00000001400F857C  mov     cs:dword_140404A6C+498191F8h, ecx
00000001400F8582  mov     dword ptr [rax+r14+473DE460h], 15h
00000001400F858E  mov     [rax+r14+473DE464h], r15d
00000001400F8596  mov     [rax+r14+473DE480h], esi
00000001400F859E  mov     [rax+r14+473DE484h], ebx
00000001400F85A6  mov     [rax+r14+473DE488h], r9
00000001400F85AE  mov     [rax+r14+473DE468h], rbx
00000001400F85B6  mov     [rax+r14+473DE470h], ebx
00000001400F85BE  jmp     short loc_1400F8635
00000001400F85C0  cmp     esi, [r8]
00000001400F85C3  jnz     short loc_1400F863C
00000001400F85C5  mov     r9d, 1
00000001400F85CB  test    r10d, r10d
00000001400F85CE  jz      short loc_1400F863C
00000001400F85D0  movsxd  rdi, cs:dword_140404A6C+498191F8h
00000001400F85D7  mov     ecx, [r8-8]
00000001400F85DB  mov     rdx, rdi
00000001400F85DE  shl     rdx, 7
00000001400F85E2  add     ecx, r12d
00000001400F85E5  inc     edi
00000001400F85E7  mov     cs:dword_140404A6C+498191F8h, edi
00000001400F85ED  mov     dword ptr [rdx+r14+473DE460h], 15h
00000001400F85F9  mov     [rdx+r14+473DE464h], r15d
00000001400F8601  mov     [rdx+r14+473DE480h], esi
00000001400F8609  mov     [rdx+r14+473DE484h], ebx
00000001400F8611  mov     dword ptr [rdx+r14+473DE488h], 2
00000001400F861D  mov     [rdx+r14+473DE48Ch], ecx
00000001400F8625  mov     [rdx+r14+473DE468h], rbx
00000001400F862D  mov     [rdx+r14+473DE470h], ebx
00000001400F8635  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F863C  add     r8, 24h ; '$'
00000001400F8640  sub     r11, 1
00000001400F8644  jnz     loc_1400F8557
00000001400F864A  test    r9d, r9d
00000001400F864D  jnz     loc_1400F8725
00000001400F8653  mov     rdi, 0C000100040000h
00000001400F865D  test    r10d, r10d
00000001400F8660  jz      short loc_1400F86BB
00000001400F8662  movsxd  rcx, cs:dword_140404A6C+498191F8h
00000001400F8669  mov     rax, rcx
00000001400F866C  shl     rax, 7
00000001400F8670  inc     ecx
00000001400F8672  mov     cs:dword_140404A6C+498191F8h, ecx
00000001400F8678  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F867F  mov     dword ptr [rax+r14+473DE460h], 15h
00000001400F868B  mov     [rax+r14+473DE464h], r15d
00000001400F8693  mov     [rax+r14+473DE480h], esi
00000001400F869B  mov     [rax+r14+473DE484h], rbx
00000001400F86A3  mov     [rax+r14+473DE48Ch], ebx
00000001400F86AB  mov     [rax+r14+473DE468h], rbx
00000001400F86B3  mov     [rax+r14+473DE470h], ebx
00000001400F86BB  mov     eax, [rsp+40h]
00000001400F86BF  add     eax, 400h
00000001400F86C4  inc     esi
00000001400F86C6  add     r13, 3834h
00000001400F86CD  mov     [rsp+40h], eax
00000001400F86D1  cmp     eax, 40000h
00000001400F86D6  jl      loc_1400F83A0
00000001400F86DC  movss   xmm12, cs:dword_140278654
00000001400F86E5  mov     r13d, ebx
00000001400F86E8  movss   xmm10, cs:dword_1402782F8
00000001400F86F1  mov     r12, rbx
00000001400F86F4  call    rand
00000001400F86F9  and     eax, 0Fh
00000001400F86FC  cmp     eax, 6
00000001400F86FF  jnb     short loc_1400F8734
00000001400F8701  mov     r15d, 0Fh
00000001400F8707  call    rand
00000001400F870C  mov     edi, eax
00000001400F870E  mov     eax, 2AAAAAABh
00000001400F8713  imul    edi
00000001400F8715  mov     ecx, edx
00000001400F8717  shr     ecx, 1Fh
00000001400F871A  add     edx, ecx
00000001400F871C  lea     ecx, [rdx+rdx*2]
00000001400F871F  add     ecx, ecx
00000001400F8721  sub     edi, ecx
00000001400F8723  jmp     short loc_1400F8761
00000001400F8725  mov     eax, r12d
00000001400F8728  mov     rdi, 0C000100040000h
00000001400F8732  jmp     short loc_1400F86BF
00000001400F8734  mov     r15d, 6
00000001400F873A  cmp     eax, 0Bh
00000001400F873D  jb      short loc_1400F8745
00000001400F873F  mov     r15d, 10h
00000001400F8745  call    rand
00000001400F874A  mov     edi, eax
00000001400F874C  mov     eax, 2AAAAAABh
00000001400F8751  imul    edi
00000001400F8753  mov     eax, edx
00000001400F8755  shr     eax, 1Fh
00000001400F8758  add     edx, eax
00000001400F875A  lea     eax, [rdx+rdx*2]
00000001400F875D  add     eax, eax
00000001400F875F  sub     edi, eax
00000001400F8761  mov     esi, [r12+r14+43EC4918h]
00000001400F8769  mov     ecx, ebx
00000001400F876B  mov     rdx, rbx
00000001400F876E  test    esi, esi
00000001400F8770  jle     short loc_1400F8795
00000001400F8772  lea     rax, (rva dword_140404A6C+43ABFEB0h)[r14]
00000001400F8779  add     rax, r12
00000001400F877C  nop     dword ptr [rax+00h]
00000001400F8780  cmp     [rax], ebx
00000001400F8782  jz      loc_1400F8CD3
00000001400F8788  inc     ecx
00000001400F878A  inc     rdx
00000001400F878D  add     rax, 34h ; '4'
00000001400F8791  cmp     ecx, esi
00000001400F8793  jl      short loc_1400F8780
00000001400F8795  mov     edi, 0FFFFFFFFh
00000001400F879A  movss   dword ptr [rsp+28h], xmm13
00000001400F87A1  xor     r9d, r9d
00000001400F87A4  xor     r8d, r8d
00000001400F87A7  mov     [rsp+20h], ebx
00000001400F87AB  xor     edx, edx
00000001400F87AD  mov     ecx, r15d
00000001400F87B0  call    sub_14012CEB0
00000001400F87B5  movaps  xmm0, cs:xmmword_140278D30
00000001400F87BC  movss   xmm8, dword ptr [r12+r14+43EBFD94h]
00000001400F87C6  movaps  xmm1, xmm0
00000001400F87C9  movss   xmm9, dword ptr [r12+r14+43EBFD98h]
00000001400F87D3  movss   xmm11, dword ptr [r12+r14+43EBFD9Ch]
00000001400F87DD  movss   xmm2, dword ptr [r12+r14+43EBFD90h]
00000001400F87E7  movsxd  rcx, eax
00000001400F87EA  imul    rdx, rcx, 5FCh
00000001400F87F1  movss   dword ptr [rsp+30h], xmm8
00000001400F87F8  movss   dword ptr [rsp+34h], xmm9
00000001400F87FF  movss   dword ptr [rsp+38h], xmm11
00000001400F8806  movups  xmmword ptr [rsp+48h], xmm0
00000001400F880B  movsxd  rcx, edi
00000001400F880E  movups  xmmword ptr [rsp+58h], xmm0
00000001400F8813  mov     dword ptr [rsp+68h], 3F800000h
00000001400F881B  mov     [rdx+r14+1FD162DCh], ebx
00000001400F8823  mov     [rdx+r14+1FD16268h], edi
00000001400F882B  imul    rdx, rcx, 5168h
00000001400F8832  lea     rcx, [rsp+48h]
00000001400F8837  mov     [rdx+r14+1F2DC848h], eax
00000001400F883F  lea     rdx, [rsp+54h]
00000001400F8844  call    sub_14007B2A0
00000001400F8849  movaps  xmm2, xmm12
00000001400F884D  lea     rdx, [rsp+54h]
00000001400F8852  lea     rcx, [rsp+48h]
00000001400F8857  call    sub_14007B2A0
00000001400F885C  mov     edi, 3
00000001400F8861  call    rand
00000001400F8866  xor     r8d, r8d
00000001400F8869  lea     r9, [rsp+48h]
00000001400F886E  lea     rdx, [rsp+30h]
00000001400F8873  lea     ecx, [r8+0Bh]
00000001400F8877  call    sub_140054130
00000001400F887C  movss   xmm0, dword ptr [rsp+48h]
00000001400F8882  lea     r9, [rsp+48h]
00000001400F8887  mulss   xmm0, xmm10
00000001400F888C  lea     rdx, [rsp+30h]
00000001400F8891  xor     r8d, r8d
00000001400F8894  addss   xmm8, xmm0
00000001400F8899  movss   xmm0, dword ptr [rsp+4Ch]
00000001400F889F  mulss   xmm0, xmm10
00000001400F88A4  lea     ecx, [r8+0Ch]
00000001400F88A8  addss   xmm9, xmm0
00000001400F88AD  movss   dword ptr [rsp+30h], xmm8
00000001400F88B4  movss   xmm0, dword ptr [rsp+50h]
00000001400F88BA  mulss   xmm0, xmm10
00000001400F88BF  movss   dword ptr [rsp+34h], xmm9
00000001400F88C6  addss   xmm11, xmm0
00000001400F88CB  movss   dword ptr [rsp+38h], xmm11
00000001400F88D2  call    sub_140054130
00000001400F88D7  movss   xmm6, dword ptr [rsp+48h]
00000001400F88DD  lea     r9, [rsp+48h]
00000001400F88E2  movss   xmm7, dword ptr [rsp+4Ch]
00000001400F88E8  lea     rdx, [rsp+30h]
00000001400F88ED  xor     r8d, r8d
00000001400F88F0  mulss   xmm6, xmm10
00000001400F88F5  mulss   xmm7, xmm10
00000001400F88FA  addss   xmm6, xmm8
00000001400F88FF  movss   xmm8, dword ptr [rsp+50h]
00000001400F8906  mulss   xmm8, xmm10
00000001400F890B  lea     ecx, [r8+0Ch]
00000001400F890F  addss   xmm7, xmm9
00000001400F8914  addss   xmm8, xmm11
00000001400F8919  movss   dword ptr [rsp+30h], xmm6
00000001400F891F  movss   dword ptr [rsp+34h], xmm7
00000001400F8925  movss   dword ptr [rsp+38h], xmm8
00000001400F892C  call    sub_140054130
00000001400F8931  movss   xmm9, dword ptr [rsp+48h]
00000001400F8938  lea     r9, [rsp+48h]
00000001400F893D  xor     r8d, r8d
00000001400F8940  mulss   xmm9, xmm10
00000001400F8945  lea     rdx, [rsp+30h]
00000001400F894A  addss   xmm9, xmm6
00000001400F894F  movss   xmm6, dword ptr [rsp+4Ch]
00000001400F8955  mulss   xmm6, xmm10
00000001400F895A  lea     ecx, [r8+0Ch]
00000001400F895E  addss   xmm6, xmm7
00000001400F8962  movss   dword ptr [rsp+30h], xmm9
00000001400F8969  movss   xmm7, dword ptr [rsp+50h]
00000001400F896F  mulss   xmm7, xmm10
00000001400F8974  movss   dword ptr [rsp+34h], xmm6
00000001400F897A  addss   xmm7, xmm8
00000001400F897F  movss   dword ptr [rsp+38h], xmm7
00000001400F8985  call    sub_140054130
00000001400F898A  movss   xmm8, dword ptr [rsp+48h]
00000001400F8991  movss   xmm11, dword ptr [rsp+50h]
00000001400F8998  mulss   xmm8, xmm10
00000001400F899D  mulss   xmm11, xmm10
00000001400F89A2  addss   xmm8, xmm9
00000001400F89A7  movss   xmm9, dword ptr [rsp+4Ch]
00000001400F89AE  mulss   xmm9, xmm10
00000001400F89B3  addss   xmm11, xmm7
00000001400F89B8  movss   dword ptr [rsp+30h], xmm8
00000001400F89BF  addss   xmm9, xmm6
00000001400F89C4  movss   dword ptr [rsp+38h], xmm11
00000001400F89CB  movss   dword ptr [rsp+34h], xmm9
00000001400F89D2  sub     rdi, 1
00000001400F89D6  jnz     loc_1400F8861
00000001400F89DC  call    rand
00000001400F89E1  and     eax, 1
00000001400F89E4  add     eax, 1
00000001400F89E7  jz      short loc_1400F8A51
00000001400F89E9  mov     edi, eax
00000001400F89EB  nop     dword ptr [rax+rax+00h]
00000001400F89F0  xor     r8d, r8d
00000001400F89F3  lea     r9, [rsp+48h]
00000001400F89F8  lea     rdx, [rsp+30h]
00000001400F89FD  lea     ecx, [r8+0Eh]
00000001400F8A01  call    sub_140054130
00000001400F8A06  movss   xmm0, dword ptr [rsp+48h]
00000001400F8A0C  movss   xmm1, dword ptr [rsp+4Ch]
00000001400F8A12  mulss   xmm0, xmm10
00000001400F8A17  mulss   xmm1, xmm10
00000001400F8A1C  addss   xmm8, xmm0
00000001400F8A21  movss   xmm0, dword ptr [rsp+50h]
00000001400F8A27  mulss   xmm0, xmm10
00000001400F8A2C  addss   xmm9, xmm1
00000001400F8A31  movss   dword ptr [rsp+30h], xmm8
00000001400F8A38  addss   xmm11, xmm0
00000001400F8A3D  movss   dword ptr [rsp+34h], xmm9
00000001400F8A44  movss   dword ptr [rsp+38h], xmm11
00000001400F8A4B  sub     rdi, 1
00000001400F8A4F  jnz     short loc_1400F89F0
00000001400F8A51  xor     r8d, r8d
00000001400F8A54  lea     r9, [rsp+48h]
00000001400F8A59  lea     rdx, [rsp+30h]
00000001400F8A5E  lea     ecx, [r8+19h]
00000001400F8A62  call    sub_140054130
00000001400F8A67  movss   xmm6, dword ptr [rsp+48h]
00000001400F8A6D  movss   xmm7, dword ptr [rsp+4Ch]
00000001400F8A73  mulss   xmm6, xmm10
00000001400F8A78  movsxd  rdi, eax
00000001400F8A7B  mulss   xmm7, xmm10
00000001400F8A80  addss   xmm6, xmm8
00000001400F8A85  movss   xmm8, dword ptr [rsp+50h]
00000001400F8A8C  mulss   xmm8, xmm10
00000001400F8A91  addss   xmm7, xmm9
00000001400F8A96  movss   dword ptr [rsp+30h], xmm6
00000001400F8A9C  addss   xmm8, xmm11
00000001400F8AA1  movss   dword ptr [rsp+34h], xmm7
00000001400F8AA7  movss   dword ptr [rsp+38h], xmm8
00000001400F8AAE  cmp     edi, 0FFFFFFFFh
00000001400F8AB1  jz      short loc_1400F8ADB
00000001400F8AB3  imul    rdx, rdi, 1B80h
00000001400F8ABA  lea     eax, [r13+1]
00000001400F8ABE  imul    ecx, eax, 457h
00000001400F8AC4  mov     [rdx+r14+42BBB3F8h], ebx
00000001400F8ACC  mov     [rdx+r14+42BBB2E0h], ecx
00000001400F8AD4  mov     ecx, edi
00000001400F8AD6  call    sub_140051940
00000001400F8ADB  xor     r8d, r8d
00000001400F8ADE  lea     r9, [rsp+48h]
00000001400F8AE3  lea     rdx, [rsp+30h]
00000001400F8AE8  lea     ecx, [r8+23h]
00000001400F8AEC  call    sub_140054130
00000001400F8AF1  movss   xmm0, dword ptr [rsp+48h]
00000001400F8AF7  inc     r13d
00000001400F8AFA  movss   xmm1, dword ptr [rsp+4Ch]
00000001400F8B00  add     r12, 5BC4h
00000001400F8B07  mulss   xmm0, xmm10
00000001400F8B0C  mulss   xmm1, xmm10
00000001400F8B11  addss   xmm0, xmm6
00000001400F8B15  addss   xmm1, xmm7
00000001400F8B19  movss   dword ptr [rsp+30h], xmm0
00000001400F8B1F  movss   xmm0, dword ptr [rsp+50h]
00000001400F8B25  mulss   xmm0, xmm10
00000001400F8B2A  movss   dword ptr [rsp+34h], xmm1
00000001400F8B30  addss   xmm0, xmm8
00000001400F8B35  movss   dword ptr [rsp+38h], xmm0
00000001400F8B3B  cmp     r13d, 3
00000001400F8B3F  jl      loc_1400F86F4
00000001400F8B45  mov     edx, cs:dword_140404A6C+6CC46354h
00000001400F8B4B  mov     edi, cs:dword_140404A6C+43ABB2C8h
00000001400F8B51  test    edx, edx
00000001400F8B53  jz      short loc_1400F8B9A
00000001400F8B55  movsxd  rcx, cs:dword_140404A6C+498191F8h
00000001400F8B5C  mov     rax, rcx
00000001400F8B5F  shl     rax, 7
00000001400F8B63  inc     ecx
00000001400F8B65  mov     cs:dword_140404A6C+498191F8h, ecx
00000001400F8B6B  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F8B72  mov     dword ptr [rax+r14+473DE460h], 0Ah
00000001400F8B7E  mov     [rax+r14+473DE464h], edi
00000001400F8B86  mov     [rax+r14+473DE480h], ebx
00000001400F8B8E  mov     dword ptr [rax+r14+473DE484h], 1
00000001400F8B9A  mov     cs:dword_140404A6C+43ABB354h, 1
00000001400F8BA4  test    edx, edx
00000001400F8BA6  jz      short loc_1400F8BF1
00000001400F8BA8  movsxd  rcx, cs:dword_140404A6C+498191F8h
00000001400F8BAF  mov     rax, rcx
00000001400F8BB2  shl     rax, 7
00000001400F8BB6  inc     ecx
00000001400F8BB8  mov     cs:dword_140404A6C+498191F8h, ecx
00000001400F8BBE  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F8BC5  mov     dword ptr [rax+r14+473DE460h], 0Ah
00000001400F8BD1  mov     [rax+r14+473DE464h], edi
00000001400F8BD9  mov     dword ptr [rax+r14+473DE480h], 1
00000001400F8BE5  mov     dword ptr [rax+r14+473DE484h], 1
00000001400F8BF1  mov     cs:dword_140404A6C+43AC0F18h, 1
00000001400F8BFB  test    edx, edx
00000001400F8BFD  jz      short loc_1400F8C48
00000001400F8BFF  movsxd  rcx, cs:dword_140404A6C+498191F8h
00000001400F8C06  mov     rax, rcx
00000001400F8C09  shl     rax, 7
00000001400F8C0D  inc     ecx
00000001400F8C0F  mov     cs:dword_140404A6C+498191F8h, ecx
00000001400F8C15  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F8C1C  mov     dword ptr [rax+r14+473DE460h], 0Ah
00000001400F8C28  mov     [rax+r14+473DE464h], edi
00000001400F8C30  mov     dword ptr [rax+r14+473DE480h], 2
00000001400F8C3C  mov     dword ptr [rax+r14+473DE484h], 1
00000001400F8C48  cmp     cs:dword_140404A6C+43B758B4h, ebx
00000001400F8C4E  mov     edi, ebx
00000001400F8C50  mov     cs:dword_140404A6C+43AC6ADCh, 1
00000001400F8C5A  jle     short loc_1400F8CB9
00000001400F8C5C  lea     rdx, dword_140404A6C+43B758D8h
00000001400F8C63  lea     r9, dword_140404A6C+42E99AC0h
00000001400F8C6A  nop     word ptr [rax+rax+00h]
00000001400F8C70  mov     [rdx-8], rbx
00000001400F8C74  mov     [rdx], ebx
00000001400F8C76  movsxd  rax, dword ptr [rdx-20h]
00000001400F8C7A  imul    rcx, rax, 3834h
00000001400F8C81  movsxd  rax, dword ptr [rcx+r14+11620CFCh]
00000001400F8C89  cmp     eax, 0FFFFFFFFh
00000001400F8C8C  jz      short loc_1400F8CAB
00000001400F8C8E  imul    rcx, rax, 6FF8h
00000001400F8C95  mov     eax, [rcx+r9]
00000001400F8C99  mov     [rdx-8], eax
00000001400F8C9C  mov     eax, [rcx+r9+4]
00000001400F8CA1  mov     [rdx-4], eax
00000001400F8CA4  mov     eax, [rcx+r9+8]
00000001400F8CA9  mov     [rdx], eax
00000001400F8CAB  inc     edi
00000001400F8CAD  add     rdx, 24h ; '$'
00000001400F8CB1  cmp     edi, cs:dword_140404A6C+43B758B4h
00000001400F8CB7  jl      short loc_1400F8C70
00000001400F8CB9  mov     cs:dword_140404A6C+43ABB260h, 2
00000001400F8CC3  mov     qword ptr cs:dword_140404A6C+43ABB268h, 0D2F0h
00000001400F8CCE  jmp     loc_1400F993D
00000001400F8CD3  imul    rax, rdx, 34h ; '4'
00000001400F8CD7  lea     r9, (rva dword_140404A6C+43ABFEC0h)[r14]
00000001400F8CDE  mov     [rsp+20h], edi
00000001400F8CE2  add     rax, r12
00000001400F8CE5  xor     r8d, r8d
00000001400F8CE8  mov     dword ptr [rax+r14+43EC491Ch], 1
00000001400F8CF4  mov     eax, ecx
00000001400F8CF6  mov     ecx, r15d
00000001400F8CF9  imul    rdx, rax, 34h ; '4'
00000001400F8CFD  mov     eax, r13d
00000001400F8D00  imul    rax, 5BC4h
00000001400F8D07  add     rax, rdx
00000001400F8D0A  lea     rdx, (rva dword_140404A6C+43ABFEB4h)[r14]
00000001400F8D11  add     rdx, rax
00000001400F8D14  add     r9, rax
00000001400F8D17  call    sub_14005BCA0
00000001400F8D1C  mov     edi, eax
00000001400F8D1E  jmp     loc_1400F879A
00000001400F8D23  cmp     eax, 2
00000001400F8D26  jnz     loc_1400F9921
00000001400F8D2C  mov     r11d, cs:dword_140404A6C+43ABB268h
00000001400F8D33  lea     r13, dword_140404A6C+1121EF0Ch
00000001400F8D3A  mov     edi, cs:dword_140404A6C+43ABB26Ch
00000001400F8D40  lea     rcx, dword_140404A6C+115A230Ch
00000001400F8D47  dec     r11d
00000001400F8D4A  inc     edi
00000001400F8D4C  xor     ebx, ebx
00000001400F8D4E  mov     cs:dword_140404A6C+43ABB268h, r11d
00000001400F8D55  mov     r12d, ebx
00000001400F8D58  mov     cs:dword_140404A6C+43ABB26Ch, edi
00000001400F8D5E  mov     rax, r13
00000001400F8D61  cmp     [rax-2D18h], ebx
00000001400F8D67  jz      short loc_1400F8D78
00000001400F8D69  cmp     [rax], ebx
00000001400F8D6B  jnz     short loc_1400F8D78
00000001400F8D6D  cmp     [rax-2CD0h], ebx
00000001400F8D73  jz      short loc_1400F8D78
00000001400F8D75  inc     r12d
00000001400F8D78  add     rax, 3834h
00000001400F8D7E  cmp     rax, rcx
00000001400F8D81  jl      short loc_1400F8D61
00000001400F8D83  mov     r8d, cs:dword_140404A6C+43B758B4h
00000001400F8D8A  lea     r14, cs:140000000h
00000001400F8D91  cmp     edi, 4650h
00000001400F8D97  lea     r9, dword_140404A6C+42E99AC0h
00000001400F8D9E  mov     eax, 0A8Ch
00000001400F8DA3  mov     esi, 708h
00000001400F8DA8  cmovl   esi, eax
00000001400F8DAB  cmp     edi, 7080h
00000001400F8DB1  mov     eax, 384h
00000001400F8DB6  cmovge  esi, eax
00000001400F8DB9  cmp     edi, 9AB0h
00000001400F8DBF  mov     eax, 12Ch
00000001400F8DC4  cmovge  esi, eax
00000001400F8DC7  test    r8d, r8d
00000001400F8DCA  jle     short loc_1400F8E2A
00000001400F8DCC  lea     rdx, dword_140404A6C+43B758B8h
00000001400F8DD3  mov     r10d, r8d
00000001400F8DD6  movsxd  rax, dword ptr [rdx]
00000001400F8DD9  imul    rcx, rax, 3834h
00000001400F8DE0  movsxd  rax, dword ptr [rcx+r14+11620CFCh]
00000001400F8DE8  cmp     eax, 0FFFFFFFFh
00000001400F8DEB  jz      short loc_1400F8E20
00000001400F8DED  imul    rcx, rax, 6FF8h
00000001400F8DF4  movss   xmm0, dword ptr [rcx+r9]
00000001400F8DFA  movss   xmm1, dword ptr [rcx+r9+4]
00000001400F8E01  movss   cs:dword_140404A6C+43B75B34h, xmm0
00000001400F8E09  movss   xmm0, dword ptr [rcx+r9+8]
00000001400F8E10  movss   cs:dword_140404A6C+43B75B3Ch, xmm0
00000001400F8E18  movss   cs:dword_140404A6C+43B75B38h, xmm1
00000001400F8E20  add     rdx, 24h ; '$'
00000001400F8E24  sub     r10, 1
00000001400F8E28  jnz     short loc_1400F8DD6
00000001400F8E2A  mov     r10d, cs:dword_140404A6C+6CC46354h
00000001400F8E31  cmp     edi, 1C20h
00000001400F8E37  jl      loc_1400F9004
00000001400F8E3D  mov     eax, r11d
00000001400F8E40  cdq
00000001400F8E41  idiv    esi
00000001400F8E43  test    edx, edx
00000001400F8E45  jnz     loc_1400F9004
00000001400F8E4B  mov     esi, ebx
00000001400F8E4D  test    r8d, r8d
00000001400F8E50  jle     loc_1400F9004
00000001400F8E56  lea     rdi, dword_140404A6C+43B758D4h
00000001400F8E5D  nop     dword ptr [rax]
00000001400F8E60  movss   xmm0, dword ptr [rdi-4]
00000001400F8E65  movss   dword ptr [rdi-10h], xmm0
00000001400F8E6A  movss   xmm2, dword ptr [rdi]
00000001400F8E6E  movss   dword ptr [rdi-0Ch], xmm2
00000001400F8E73  movss   xmm1, dword ptr [rdi+4]
00000001400F8E78  movss   dword ptr [rdi-8], xmm1
00000001400F8E7D  cmp     cs:dword_140404A6C+43ABB26Ch, 2A30h
00000001400F8E87  jl      short loc_1400F8F02
00000001400F8E89  test    r10d, r10d
00000001400F8E8C  jz      short loc_1400F8F02
00000001400F8E8E  movsxd  rdx, cs:dword_140404A6C+498191F8h
00000001400F8E95  mov     eax, cs:dword_140404A6C+43ABB2C8h
00000001400F8E9B  mov     rcx, rdx
00000001400F8E9E  shl     rcx, 7
00000001400F8EA2  inc     edx
00000001400F8EA4  mov     dword ptr [rcx+r14+473DE460h], 15h
00000001400F8EB0  mov     [rcx+r14+473DE464h], eax
00000001400F8EB8  mov     eax, [rdi-18h]
00000001400F8EBB  mov     [rcx+r14+473DE480h], eax
00000001400F8EC3  mov     qword ptr [rcx+r14+473DE484h], 1
00000001400F8ECF  mov     [rcx+r14+473DE48Ch], ebx
00000001400F8ED7  movss   dword ptr [rcx+r14+473DE468h], xmm0
00000001400F8EE1  movss   dword ptr [rcx+r14+473DE46Ch], xmm2
00000001400F8EEB  movss   dword ptr [rcx+r14+473DE470h], xmm1
00000001400F8EF5  mov     cs:dword_140404A6C+498191F8h, edx
00000001400F8EFB  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F8F02  movsxd  rax, dword ptr [rdi-1Ch]
00000001400F8F06  imul    rcx, rax, 3834h
00000001400F8F0D  movsxd  rax, dword ptr [rcx+r14+11620CFCh]
00000001400F8F15  cmp     eax, 0FFFFFFFFh
00000001400F8F18  jz      short loc_1400F8F38
00000001400F8F1A  imul    rcx, rax, 6FF8h
00000001400F8F21  mov     eax, [rcx+r9]
00000001400F8F25  movss   xmm0, dword ptr [rcx+r9+8]
00000001400F8F2C  mov     [rdi-4], eax
00000001400F8F2F  mov     eax, [rcx+r9+4]
00000001400F8F34  mov     [rdi], eax
00000001400F8F36  jmp     short loc_1400F8F59
00000001400F8F38  movss   xmm0, cs:dword_140404A6C+43B75B34h
00000001400F8F40  movss   dword ptr [rdi-4], xmm0
00000001400F8F45  movss   xmm1, cs:dword_140404A6C+43B75B38h
00000001400F8F4D  movss   dword ptr [rdi], xmm1
00000001400F8F51  movss   xmm0, cs:dword_140404A6C+43B75B3Ch
00000001400F8F59  movss   dword ptr [rdi+4], xmm0
00000001400F8F5E  test    r10d, r10d
00000001400F8F61  jz      short loc_1400F8FE1
00000001400F8F63  movsxd  rdx, cs:dword_140404A6C+498191F8h
00000001400F8F6A  mov     eax, cs:dword_140404A6C+43ABB2C8h
00000001400F8F70  mov     rcx, rdx
00000001400F8F73  movss   xmm1, dword ptr [rdi+4]
00000001400F8F78  movss   xmm0, dword ptr [rdi]
00000001400F8F7C  shl     rcx, 7
00000001400F8F80  inc     edx
00000001400F8F82  mov     dword ptr [rcx+r14+473DE460h], 15h
00000001400F8F8E  mov     [rcx+r14+473DE464h], eax
00000001400F8F96  mov     eax, [rdi-14h]
00000001400F8F99  mov     [rcx+r14+473DE480h], eax
00000001400F8FA1  mov     eax, [rdi-4]
00000001400F8FA4  mov     qword ptr [rcx+r14+473DE484h], 1
00000001400F8FB0  mov     [rcx+r14+473DE48Ch], ebx
00000001400F8FB8  mov     [rcx+r14+473DE468h], eax
00000001400F8FC0  movss   dword ptr [rcx+r14+473DE46Ch], xmm0
00000001400F8FCA  movss   dword ptr [rcx+r14+473DE470h], xmm1
00000001400F8FD4  mov     cs:dword_140404A6C+498191F8h, edx
00000001400F8FDA  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F8FE1  mov     r8d, cs:dword_140404A6C+43B758B4h
00000001400F8FE8  inc     esi
00000001400F8FEA  add     rdi, 24h ; '$'
00000001400F8FEE  cmp     esi, r8d
00000001400F8FF1  jl      loc_1400F8E60
00000001400F8FF7  mov     edi, cs:dword_140404A6C+43ABB26Ch
00000001400F8FFD  mov     r11d, cs:dword_140404A6C+43ABB268h
00000001400F9004  mov     esi, 3
00000001400F9009  cmp     edi, 2A30h
00000001400F900F  jl      loc_1400F9763
00000001400F9015  mov     eax, 91A2B3C5h
00000001400F901A  imul    edi
00000001400F901C  add     edx, edi
00000001400F901E  sar     edx, 0Bh
00000001400F9021  mov     eax, edx
00000001400F9023  shr     eax, 1Fh
00000001400F9026  add     edx, eax
00000001400F9028  imul    eax, edx, 0E10h
00000001400F902E  cmp     edi, eax
00000001400F9030  jnz     loc_1400F9763
00000001400F9036  movaps  xmmword ptr [rsp+1480h], xmm14
00000001400F903F  call    rand
00000001400F9044  mov     edi, eax
00000001400F9046  and     edi, 80000007h
00000001400F904C  jge     short loc_1400F9055
00000001400F904E  dec     edi
00000001400F9050  or      edi, 0FFFFFFF8h
00000001400F9053  inc     edi
00000001400F9055  movss   xmm1, cs:dword_140278280
00000001400F905D  lea     rcx, [rsp+30h]
00000001400F9062  xorps   xmm2, xmm2
00000001400F9065  call    sub_1400A56B0
00000001400F906A  movss   xmm0, dword ptr [rsp+30h]
00000001400F9070  lea     r13, dword_140404A6C+74253350h
00000001400F9077  movss   xmm1, dword ptr [rsp+34h]
00000001400F907D  lea     r9, [rsp+48h]
00000001400F9082  movss   xmm6, cs:dword_1402783F4
00000001400F908A  lea     rdx, [rsp+30h]
00000001400F908F  movsxd  rax, edi
00000001400F9092  xor     r8d, r8d
00000001400F9095  imul    rcx, rax, 4Ch ; 'L'
00000001400F9099  mov     dword ptr [rsp+68h], 3F800000h
00000001400F90A1  addss   xmm0, dword ptr [rcx+r13]
00000001400F90A7  addss   xmm1, dword ptr [rcx+r13+4]
00000001400F90AE  movss   dword ptr [rsp+30h], xmm0
00000001400F90B4  movss   xmm0, dword ptr [rsp+38h]
00000001400F90BA  addss   xmm0, dword ptr [rcx+r13+8]
00000001400F90C1  movss   dword ptr [rsp+34h], xmm1
00000001400F90C7  lea     ecx, [r8+0Dh]
00000001400F90CB  movss   dword ptr [rsp+38h], xmm0
00000001400F90D1  movaps  xmm0, cs:xmmword_140278D30
00000001400F90D8  movaps  xmm1, xmm0
00000001400F90DB  movups  xmmword ptr [rsp+48h], xmm0
00000001400F90E0  movups  xmmword ptr [rsp+58h], xmm0
00000001400F90E5  call    sub_140054130
00000001400F90EA  call    rand
00000001400F90EF  mov     esi, eax
00000001400F90F1  and     esi, 80000007h
00000001400F90F7  jge     short loc_1400F9100
00000001400F90F9  dec     esi
00000001400F90FB  or      esi, 0FFFFFFF8h
00000001400F90FE  inc     esi
00000001400F9100  call    rand
00000001400F9105  mov     edi, eax
00000001400F9107  mov     eax, 66666667h
00000001400F910C  imul    edi
00000001400F910E  sar     edx, 1
00000001400F9110  mov     ecx, edx
00000001400F9112  shr     ecx, 1Fh
00000001400F9115  add     edx, ecx
00000001400F9117  lea     ecx, [rdx+rdx*4]
00000001400F911A  sub     edi, ecx
00000001400F911C  jnz     short loc_1400F9124
00000001400F911E  lea     r15d, [rdi+0Bh]
00000001400F9122  jmp     short loc_1400F914C
00000001400F9124  cmp     edi, 1
00000001400F9127  jnz     short loc_1400F912F
00000001400F9129  lea     r15d, [rdi+6]
00000001400F912D  jmp     short loc_1400F914C
00000001400F912F  cmp     edi, 2
00000001400F9132  jnz     short loc_1400F913A
00000001400F9134  lea     r15d, [rdi-1]
00000001400F9138  jmp     short loc_1400F914C
00000001400F913A  cmp     edi, 3
00000001400F913D  mov     r15d, 9
00000001400F9143  mov     eax, 3
00000001400F9148  cmovz   r15d, eax
00000001400F914C  movsxd  rax, esi
00000001400F914F  mov     edi, ebx
00000001400F9151  imul    rsi, rax, 4Ch ; 'L'
00000001400F9155  add     rsi, r13
00000001400F9158  lea     r13d, [r15+1]
00000001400F915C  nop     dword ptr [rax+00h]
00000001400F9160  xorps   xmm2, xmm2
00000001400F9163  lea     rcx, [rsp+30h]
00000001400F9168  movaps  xmm1, xmm6
00000001400F916B  call    sub_1400A56B0
00000001400F9170  movss   xmm0, dword ptr [rsp+30h]
00000001400F9176  lea     r9, [rsp+48h]
00000001400F917B  addss   xmm0, dword ptr [rsi]
00000001400F917F  movss   xmm1, dword ptr [rsp+38h]
00000001400F9185  lea     rdx, [rsp+30h]
00000001400F918A  addss   xmm1, dword ptr [rsi+8]
00000001400F918F  mov     ecx, r15d
00000001400F9192  test    edi, edi
00000001400F9194  movss   dword ptr [rsp+30h], xmm0
00000001400F919A  cmovnz  ecx, r13d
00000001400F919E  movss   xmm0, dword ptr [rsi+4]
00000001400F91A3  xor     r8d, r8d
00000001400F91A6  movss   dword ptr [rsp+34h], xmm0
00000001400F91AC  movss   dword ptr [rsp+38h], xmm1
00000001400F91B2  call    sub_140054130
00000001400F91B7  inc     edi
00000001400F91B9  cmp     edi, 4
00000001400F91BC  jl      short loc_1400F9160
00000001400F91BE  call    rand
00000001400F91C3  mov     edi, eax
00000001400F91C5  mov     eax, 55555556h
00000001400F91CA  imul    edi
00000001400F91CC  mov     ecx, edx
00000001400F91CE  shr     ecx, 1Fh
00000001400F91D1  add     edx, ecx
00000001400F91D3  lea     ecx, [rdx+rdx*2]
00000001400F91D6  mov     edx, 1
00000001400F91DB  sub     edi, ecx
00000001400F91DD  mov     ecx, edi
00000001400F91DF  shl     edx, cl
00000001400F91E1  mov     [rsp+40h], edx
00000001400F91E5  cmp     r12d, 0Eh
00000001400F91E9  jle     short loc_1400F91F2
00000001400F91EB  mov     edx, 7
00000001400F91F0  jmp     short loc_1400F9206
00000001400F91F2  cmp     r12d, 7
00000001400F91F6  jle     short loc_1400F920A
00000001400F91F8  lea     eax, [rdi+1]
00000001400F91FB  mov     ecx, ebx
00000001400F91FD  cmp     eax, 2
00000001400F9200  cmovle  ecx, eax
00000001400F9203  bts     edx, ecx
00000001400F9206  mov     [rsp+40h], edx
00000001400F920A  movss   xmm14, cs:dword_140278654
00000001400F9213  lea     r12, dword_140404A6C+43ABB330h
00000001400F921A  movss   xmm11, cs:dword_1402782F8
00000001400F9223  lea     rsi, dword_140404A6C+427B6778h
00000001400F922A  movss   xmm10, cs:dword_140278338
00000001400F9233  lea     rdi, dword_140404A6C+42E96778h
00000001400F923A  mov     r13d, ebx
00000001400F923D  mov     r14d, 3
00000001400F9243  nop     dword ptr [rax+00h]
00000001400F9247  nop     word ptr [rax+rax+00000000h]
00000001400F9250  mov     eax, edx
00000001400F9252  mov     ecx, r13d
00000001400F9255  sar     eax, cl
00000001400F9257  test    al, 1
00000001400F9259  jz      loc_1400F971F
00000001400F925F  movaps  xmm0, cs:xmmword_140278D30
00000001400F9266  lea     rdx, [rsp+54h]
00000001400F926B  movss   xmm2, dword ptr [r12-0Ch]
00000001400F9272  lea     rcx, [rsp+48h]
00000001400F9277  movss   xmm12, dword ptr [r12-8]
00000001400F927E  movaps  xmm1, xmm0
00000001400F9281  movss   xmm9, dword ptr [r12-4]
00000001400F9288  movss   xmm13, dword ptr [r12]
00000001400F928E  movups  xmmword ptr [rsp+48h], xmm0
00000001400F9293  mov     dword ptr [rsp+68h], 3F800000h
00000001400F929B  movups  xmmword ptr [rsp+58h], xmm0
00000001400F92A0  call    sub_14007B2A0
00000001400F92A5  movaps  xmm2, xmm14
00000001400F92A9  lea     rdx, [rsp+54h]
00000001400F92AE  lea     rcx, [rsp+48h]
00000001400F92B3  call    sub_14007B2A0
00000001400F92B8  movss   xmm7, dword ptr [rsp+4Ch]
00000001400F92BE  mov     ecx, 10h
00000001400F92C3  movss   xmm6, dword ptr [rsp+48h]
00000001400F92C9  movss   xmm8, dword ptr [rsp+50h]
00000001400F92D0  mulss   xmm7, xmm11
00000001400F92D5  mulss   xmm6, xmm11
00000001400F92DA  addss   xmm9, xmm7
00000001400F92DF  mulss   xmm8, xmm11
00000001400F92E4  addss   xmm12, xmm6
00000001400F92E9  addss   xmm13, xmm8
00000001400F92EE  movaps  xmm3, xmm9
00000001400F92F2  movss   dword ptr [rsp+34h], xmm9
00000001400F92F9  subss   xmm3, xmm10
00000001400F92FE  movss   dword ptr [rsp+30h], xmm12
00000001400F9305  movaps  xmm4, xmm12
00000001400F9309  movss   dword ptr [rsp+38h], xmm13
00000001400F9310  movaps  xmm5, xmm13
00000001400F9314  mov     rax, rsi
00000001400F9317  cmp     [rax-64h], ebx
00000001400F931A  jz      short loc_1400F935D
00000001400F931C  movaps  xmm0, xmm5
00000001400F931F  movaps  xmm1, xmm4
00000001400F9322  subss   xmm0, dword ptr [rax]
00000001400F9326  subss   xmm1, dword ptr [rax-8]
00000001400F932B  movaps  xmm2, xmm3
00000001400F932E  subss   xmm2, dword ptr [rax-4]
00000001400F9333  mulss   xmm0, xmm0
00000001400F9337  mulss   xmm1, xmm1
00000001400F933B  mulss   xmm2, xmm2
00000001400F933F  addss   xmm2, xmm1
00000001400F9343  addss   xmm2, xmm0
00000001400F9347  xorps   xmm0, xmm0
00000001400F934A  sqrtss  xmm0, xmm2
00000001400F934E  comiss  xmm0, xmm10
00000001400F9352  jnb     short loc_1400F935D
00000001400F9354  cmp     dword ptr [rax-40h], 0FFFFFFFFh
00000001400F9358  jnz     short loc_1400F935D
00000001400F935A  mov     [rax-48h], ebx
00000001400F935D  cmp     [rax+1B1Ch], ebx
00000001400F9363  jz      short loc_1400F93B6
00000001400F9365  movaps  xmm0, xmm5
00000001400F9368  movaps  xmm1, xmm4
00000001400F936B  subss   xmm0, dword ptr [rax+1B80h]
00000001400F9373  subss   xmm1, dword ptr [rax+1B78h]
00000001400F937B  movaps  xmm2, xmm3
00000001400F937E  subss   xmm2, dword ptr [rax+1B7Ch]
00000001400F9386  mulss   xmm0, xmm0
00000001400F938A  mulss   xmm1, xmm1
00000001400F938E  mulss   xmm2, xmm2
00000001400F9392  addss   xmm2, xmm1
00000001400F9396  addss   xmm2, xmm0
00000001400F939A  xorps   xmm0, xmm0
00000001400F939D  sqrtss  xmm0, xmm2
00000001400F93A1  comiss  xmm0, xmm10
00000001400F93A5  jnb     short loc_1400F93B6
00000001400F93A7  cmp     dword ptr [rax+1B40h], 0FFFFFFFFh
00000001400F93AE  jnz     short loc_1400F93B6
00000001400F93B0  mov     [rax+1B38h], ebx
00000001400F93B6  cmp     [rax+369Ch], ebx
00000001400F93BC  jz      short loc_1400F940F
00000001400F93BE  movaps  xmm0, xmm5
00000001400F93C1  movaps  xmm1, xmm4
00000001400F93C4  subss   xmm0, dword ptr [rax+3700h]
00000001400F93CC  subss   xmm1, dword ptr [rax+36F8h]
00000001400F93D4  movaps  xmm2, xmm3
00000001400F93D7  subss   xmm2, dword ptr [rax+36FCh]
00000001400F93DF  mulss   xmm0, xmm0
00000001400F93E3  mulss   xmm1, xmm1
00000001400F93E7  mulss   xmm2, xmm2
00000001400F93EB  addss   xmm2, xmm1
00000001400F93EF  addss   xmm2, xmm0
00000001400F93F3  xorps   xmm0, xmm0
00000001400F93F6  sqrtss  xmm0, xmm2
00000001400F93FA  comiss  xmm0, xmm10
00000001400F93FE  jnb     short loc_1400F940F
00000001400F9400  cmp     dword ptr [rax+36C0h], 0FFFFFFFFh
00000001400F9407  jnz     short loc_1400F940F
00000001400F9409  mov     [rax+36B8h], ebx
00000001400F940F  cmp     [rax+521Ch], ebx
00000001400F9415  jz      short loc_1400F9468
00000001400F9417  movaps  xmm0, xmm5
00000001400F941A  movaps  xmm1, xmm4
00000001400F941D  subss   xmm0, dword ptr [rax+5280h]
00000001400F9425  subss   xmm1, dword ptr [rax+5278h]
00000001400F942D  movaps  xmm2, xmm3
00000001400F9430  subss   xmm2, dword ptr [rax+527Ch]
00000001400F9438  mulss   xmm0, xmm0
00000001400F943C  mulss   xmm1, xmm1
00000001400F9440  mulss   xmm2, xmm2
00000001400F9444  addss   xmm2, xmm1
00000001400F9448  addss   xmm2, xmm0
00000001400F944C  xorps   xmm0, xmm0
00000001400F944F  sqrtss  xmm0, xmm2
00000001400F9453  comiss  xmm0, xmm10
00000001400F9457  jnb     short loc_1400F9468
00000001400F9459  cmp     dword ptr [rax+5240h], 0FFFFFFFFh
00000001400F9460  jnz     short loc_1400F9468
00000001400F9462  mov     [rax+5238h], ebx
00000001400F9468  add     rax, 6E00h
00000001400F946E  cmp     rax, rdi
00000001400F9471  jl      loc_1400F9317
00000001400F9477  addss   xmm4, xmm6
00000001400F947B  addss   xmm3, xmm7
00000001400F947F  addss   xmm5, xmm8
00000001400F9484  sub     rcx, 1
00000001400F9488  jnz     loc_1400F9314
00000001400F948E  mov     r15, r14
00000001400F9491  call    rand
00000001400F9496  mov     edi, eax
00000001400F9498  mov     eax, 66666667h
00000001400F949D  imul    edi
00000001400F949F  sar     edx, 1
00000001400F94A1  mov     ecx, edx
00000001400F94A3  shr     ecx, 1Fh
00000001400F94A6  add     edx, ecx
00000001400F94A8  lea     ecx, [rdx+rdx*4]
00000001400F94AB  sub     edi, ecx
00000001400F94AD  jnz     short loc_1400F94B4
00000001400F94AF  lea     esi, [rdi+0Bh]
00000001400F94B2  jmp     short loc_1400F94D4
00000001400F94B4  cmp     edi, 1
00000001400F94B7  jnz     short loc_1400F94BE
00000001400F94B9  lea     esi, [rdi+6]
00000001400F94BC  jmp     short loc_1400F94D4
00000001400F94BE  cmp     edi, 2
00000001400F94C1  jnz     short loc_1400F94C8
00000001400F94C3  lea     esi, [rdi-1]
00000001400F94C6  jmp     short loc_1400F94D4
00000001400F94C8  cmp     edi, r14d
00000001400F94CB  mov     esi, 9
00000001400F94D0  cmovz   esi, r14d
00000001400F94D4  lea     r9, [rsp+48h]
00000001400F94D9  xor     r8d, r8d
00000001400F94DC  lea     rdx, [rsp+30h]
00000001400F94E1  mov     ecx, esi
00000001400F94E3  call    sub_140054130
00000001400F94E8  movss   xmm0, dword ptr [rsp+48h]
00000001400F94EE  lea     r9, [rsp+48h]
00000001400F94F3  mulss   xmm0, xmm11
00000001400F94F8  lea     rdx, [rsp+30h]
00000001400F94FD  xor     r8d, r8d
00000001400F9500  lea     ecx, [rsi+1]
00000001400F9503  addss   xmm12, xmm0
00000001400F9508  movss   xmm0, dword ptr [rsp+4Ch]
00000001400F950E  mulss   xmm0, xmm11
00000001400F9513  addss   xmm9, xmm0
00000001400F9518  movss   dword ptr [rsp+30h], xmm12
00000001400F951F  movss   xmm0, dword ptr [rsp+50h]
00000001400F9525  mulss   xmm0, xmm11
00000001400F952A  movss   dword ptr [rsp+34h], xmm9
00000001400F9531  addss   xmm13, xmm0
00000001400F9536  movss   dword ptr [rsp+38h], xmm13
00000001400F953D  call    sub_140054130
00000001400F9542  movss   xmm6, dword ptr [rsp+48h]
00000001400F9548  lea     r9, [rsp+48h]
00000001400F954D  movss   xmm7, dword ptr [rsp+4Ch]
00000001400F9553  lea     rdx, [rsp+30h]
00000001400F9558  movss   xmm8, dword ptr [rsp+50h]
00000001400F955F  lea     ecx, [rsi+1]
00000001400F9562  mulss   xmm6, xmm11
00000001400F9567  xor     r8d, r8d
00000001400F956A  mulss   xmm7, xmm11
00000001400F956F  mulss   xmm8, xmm11
00000001400F9574  addss   xmm6, xmm12
00000001400F9579  addss   xmm7, xmm9
00000001400F957E  addss   xmm8, xmm13
00000001400F9583  movss   dword ptr [rsp+30h], xmm6
00000001400F9589  movss   dword ptr [rsp+34h], xmm7
00000001400F958F  movss   dword ptr [rsp+38h], xmm8
00000001400F9596  call    sub_140054130
00000001400F959B  movss   xmm9, dword ptr [rsp+48h]
00000001400F95A2  lea     r9, [rsp+48h]
00000001400F95A7  mulss   xmm9, xmm11
00000001400F95AC  lea     rdx, [rsp+30h]
00000001400F95B1  xor     r8d, r8d
00000001400F95B4  lea     ecx, [rsi+1]
00000001400F95B7  addss   xmm9, xmm6
00000001400F95BC  movss   xmm6, dword ptr [rsp+4Ch]
00000001400F95C2  mulss   xmm6, xmm11
00000001400F95C7  addss   xmm6, xmm7
00000001400F95CB  movss   dword ptr [rsp+30h], xmm9
00000001400F95D2  movss   xmm7, dword ptr [rsp+50h]
00000001400F95D8  mulss   xmm7, xmm11
00000001400F95DD  movss   dword ptr [rsp+34h], xmm6
00000001400F95E3  addss   xmm7, xmm8
00000001400F95E8  movss   dword ptr [rsp+38h], xmm7
00000001400F95EE  call    sub_140054130
00000001400F95F3  movss   xmm12, dword ptr [rsp+48h]
00000001400F95FA  movss   xmm13, dword ptr [rsp+50h]
00000001400F9601  mulss   xmm12, xmm11
00000001400F9606  mulss   xmm13, xmm11
00000001400F960B  addss   xmm12, xmm9
00000001400F9610  movss   xmm9, dword ptr [rsp+4Ch]
00000001400F9617  mulss   xmm9, xmm11
00000001400F961C  addss   xmm13, xmm7
00000001400F9621  movss   dword ptr [rsp+30h], xmm12
00000001400F9628  addss   xmm9, xmm6
00000001400F962D  movss   dword ptr [rsp+38h], xmm13
00000001400F9634  movss   dword ptr [rsp+34h], xmm9
00000001400F963B  sub     r15, 1
00000001400F963F  jnz     loc_1400F9491
00000001400F9645  lea     r9, [rsp+48h]
00000001400F964A  xor     r8d, r8d
00000001400F964D  lea     rdx, [rsp+30h]
00000001400F9652  lea     ecx, [r15+0Dh]
00000001400F9656  call    sub_140054130
00000001400F965B  movss   xmm6, dword ptr [rsp+48h]
00000001400F9661  movss   xmm7, dword ptr [rsp+4Ch]
00000001400F9667  movss   xmm8, dword ptr [rsp+50h]
00000001400F966E  mulss   xmm6, xmm11
00000001400F9673  mulss   xmm7, xmm11
00000001400F9678  mulss   xmm8, xmm11
00000001400F967D  addss   xmm6, xmm12
00000001400F9682  addss   xmm7, xmm9
00000001400F9687  addss   xmm8, xmm13
00000001400F968C  movss   dword ptr [rsp+30h], xmm6
00000001400F9692  movss   dword ptr [rsp+34h], xmm7
00000001400F9698  movss   dword ptr [rsp+38h], xmm8
00000001400F969F  call    rand
00000001400F96A4  and     eax, 1
00000001400F96A7  add     eax, 1
00000001400F96AA  jz      short loc_1400F970D
00000001400F96AC  mov     edi, eax
00000001400F96AE  xchg    ax, ax
00000001400F96B0  xor     r8d, r8d
00000001400F96B3  lea     r9, [rsp+48h]
00000001400F96B8  lea     rdx, [rsp+30h]
00000001400F96BD  lea     ecx, [r8+0Eh]
00000001400F96C1  call    sub_140054130
00000001400F96C6  movss   xmm0, dword ptr [rsp+48h]
00000001400F96CC  movss   xmm1, dword ptr [rsp+4Ch]
00000001400F96D2  mulss   xmm0, xmm11
00000001400F96D7  mulss   xmm1, xmm11
00000001400F96DC  addss   xmm6, xmm0
00000001400F96E0  movss   xmm0, dword ptr [rsp+50h]
00000001400F96E6  mulss   xmm0, xmm11
00000001400F96EB  addss   xmm7, xmm1
00000001400F96EF  movss   dword ptr [rsp+30h], xmm6
00000001400F96F5  addss   xmm8, xmm0
00000001400F96FA  movss   dword ptr [rsp+34h], xmm7
00000001400F9700  movss   dword ptr [rsp+38h], xmm8
00000001400F9707  sub     rdi, 1
00000001400F970B  jnz     short loc_1400F96B0
00000001400F970D  mov     edx, [rsp+40h]
00000001400F9711  lea     rsi, dword_140404A6C+427B6778h
00000001400F9718  lea     rdi, dword_140404A6C+42E96778h
00000001400F971F  inc     r13d
00000001400F9722  add     r12, 5BC4h
00000001400F9729  cmp     r13d, r14d
00000001400F972C  jl      loc_1400F9250
00000001400F9732  mov     r8d, cs:dword_140404A6C+43B758B4h
00000001400F9739  lea     r14, cs:140000000h
00000001400F9740  mov     r11d, cs:dword_140404A6C+43ABB268h
00000001400F9747  lea     r13, dword_140404A6C+1121EF0Ch
00000001400F974E  mov     r10d, cs:dword_140404A6C+6CC46354h
00000001400F9755  mov     esi, 3
00000001400F975A  movaps  xmm14, xmmword ptr [rsp+1480h]
00000001400F9763  lea     r15, dword_140404A6C+43B758BCh
00000001400F976A  mov     edi, ebx
00000001400F976C  mov     ecx, ebx
00000001400F976E  test    r8d, r8d
00000001400F9771  jle     short loc_1400F97A0
00000001400F9773  mov     rdx, r15
00000001400F9776  movsxd  rax, dword ptr [rdx]
00000001400F9779  imul    rax, 3834h
00000001400F9780  cmp     [rax+r14+11620C60h], ebx
00000001400F9788  jz      short loc_1400F9795
00000001400F978A  cmp     dword ptr [rax+r14+11620CFCh], 0FFFFFFFFh
00000001400F9793  jnz     short loc_1400F97BF
00000001400F9795  inc     ecx
00000001400F9797  add     rdx, 24h ; '$'
00000001400F979B  cmp     ecx, r8d
00000001400F979E  jl      short loc_1400F9776
00000001400F97A0  mov     cs:dword_140404A6C+43ABB344h, 64h ; 'd'
00000001400F97AA  mov     edi, 1
00000001400F97AF  mov     cs:dword_140404A6C+43AC0F08h, ebx
00000001400F97B5  mov     cs:dword_140404A6C+43AC6ACCh, 64h ; 'd'
00000001400F97BF  mov     ecx, ebx
00000001400F97C1  test    r8d, r8d
00000001400F97C4  jle     short loc_1400F97FE
00000001400F97C6  lea     r9, dword_140404A6C+43B758B8h
00000001400F97CD  nop     dword ptr [rax]
00000001400F97D0  movsxd  rax, dword ptr [r9]
00000001400F97D3  imul    rdx, rax, 3834h
00000001400F97DA  cmp     [rdx+r14+11620C60h], ebx
00000001400F97E2  jz      short loc_1400F97F3
00000001400F97E4  cmp     dword ptr [rdx+r14+11620CFCh], 0FFFFFFFFh
00000001400F97ED  jnz     loc_1400F98F5
00000001400F97F3  inc     ecx
00000001400F97F5  add     r9, 24h ; '$'
00000001400F97F9  cmp     ecx, r8d
00000001400F97FC  jl      short loc_1400F97D0
00000001400F97FE  mov     cs:dword_140404A6C+43ABB344h, ebx
00000001400F9804  mov     cs:dword_140404A6C+43AC0F08h, 64h ; 'd'
00000001400F980E  mov     cs:dword_140404A6C+43AC6ACCh, ebx
00000001400F9814  mov     r11d, cs:dword_140404A6C+43ABB2C8h
00000001400F981B  mov     r9d, ebx
00000001400F981E  mov     cs:dword_140404A6C+43ABB260h, esi
00000001400F9824  mov     cs:dword_140404A6C+43ABB268h, 4B0h
00000001400F982E  xchg    ax, ax
00000001400F9830  cmp     [r13-2D18h], ebx
00000001400F9837  jz      loc_1400F98DC
00000001400F983D  cmp     [r13+0], ebx
00000001400F9841  jnz     loc_1400F98DC
00000001400F9847  mov     esi, ebx
00000001400F9849  test    r8d, r8d
00000001400F984C  jle     loc_1400F98DC
00000001400F9852  mov     rdi, r15
00000001400F9855  test    r10d, r10d
00000001400F9858  jz      short loc_1400F98CD
00000001400F985A  movsxd  rdx, cs:dword_140404A6C+498191F8h
00000001400F9861  mov     eax, [rdi+4]
00000001400F9864  mov     rcx, rdx
00000001400F9867  shl     rcx, 7
00000001400F986B  shl     eax, 0Ah
00000001400F986E  add     eax, [rdi]
00000001400F9870  shl     eax, 0Ah
00000001400F9873  add     eax, [rdi-4]
00000001400F9876  mov     dword ptr [rcx+r14+473DE460h], 15h
00000001400F9882  inc     edx
00000001400F9884  mov     [rcx+r14+473DE464h], r11d
00000001400F988C  mov     [rcx+r14+473DE480h], r9d
00000001400F9894  mov     dword ptr [rcx+r14+473DE484h], 2
00000001400F98A0  mov     [rcx+r14+473DE488h], esi
00000001400F98A8  mov     [rcx+r14+473DE48Ch], eax
00000001400F98B0  mov     cs:dword_140404A6C+498191F8h, edx
00000001400F98B6  mov     [rcx+r14+473DE468h], rbx
00000001400F98BE  mov     [rcx+r14+473DE470h], ebx
00000001400F98C6  mov     word ptr cs:dword_140404A6C+498191FAh, bx
00000001400F98CD  inc     esi
00000001400F98CF  add     rdi, 24h ; '$'
00000001400F98D3  cmp     esi, r8d
00000001400F98D6  jl      loc_1400F9855
00000001400F98DC  inc     r9d
00000001400F98DF  add     r13, 3834h
00000001400F98E6  cmp     r9d, 100h
00000001400F98ED  jl      loc_1400F9830
00000001400F98F3  jmp     short loc_1400F993D
00000001400F98F5  test    edi, edi
00000001400F98F7  jnz     loc_1400F9814
00000001400F98FD  test    r11d, r11d
00000001400F9900  jg      short loc_1400F993D
00000001400F9902  mov     cs:dword_140404A6C+43ABB344h, 64h ; 'd'
00000001400F990C  mov     cs:dword_140404A6C+43AC0F08h, ebx
00000001400F9912  mov     cs:dword_140404A6C+43AC6ACCh, 64h ; 'd'
00000001400F991C  jmp     loc_1400F9814
00000001400F9921  cmp     eax, 3
00000001400F9924  jnz     short loc_1400F993D
00000001400F9926  mov     eax, cs:dword_140404A6C+43ABB268h
00000001400F992C  dec     eax
00000001400F992E  mov     cs:dword_140404A6C+43ABB268h, eax
00000001400F9934  test    eax, eax
00000001400F9936  jg      short loc_1400F993D
00000001400F9938  call    sub_140127910
00000001400F993D  mov     rcx, [rbp+1370h]
00000001400F9944  xor     rcx, rsp
00000001400F9947  call    1401F8B20h
00000001400F994C  lea     r11, [rsp+1510h]
00000001400F9954  mov     rbx, [r11+30h]
00000001400F9958  mov     rsi, [r11+38h]
00000001400F995C  mov     rdi, [r11+40h]
00000001400F9960  movaps  xmm6, xmmword ptr [r11-10h]
00000001400F9965  movaps  xmm7, xmmword ptr [r11-20h]
00000001400F996A  movaps  xmm8, xmmword ptr [r11-30h]
00000001400F996F  movaps  xmm9, xmmword ptr [r11-40h]
00000001400F9974  movaps  xmm10, xmmword ptr [r11-50h]
00000001400F9979  movaps  xmm11, xmmword ptr [r11-60h]
00000001400F997E  movaps  xmm12, xmmword ptr [r11-70h]
00000001400F9983  movaps  xmm13, xmmword ptr [r11-80h]
00000001400F9988  mov     rsp, r11
00000001400F998B  pop     r15
00000001400F998D  pop     r14
00000001400F998F  pop     r13
00000001400F9991  pop     r12
00000001400F9993  pop     rbp
00000001400F9994  retn
