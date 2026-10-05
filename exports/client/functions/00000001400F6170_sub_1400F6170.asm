; 0x1400f6170: sub_1400F6170
; Decompilation failed: call analysis failed
00000001400F6170  mov     rax, rsp
00000001400F6173  mov     [rax+8], rbx
00000001400F6177  mov     [rax+10h], rbp
00000001400F617B  mov     [rax+18h], rsi
00000001400F617F  mov     [rax+20h], rdi
00000001400F6183  push    r12
00000001400F6185  push    r14
00000001400F6187  push    r15
00000001400F6189  sub     rsp, 0A0h
00000001400F6190  movaps  xmmword ptr [rax-28h], xmm6
00000001400F6194  mov     rax, cs:__security_cookie
00000001400F619B  xor     rax, rsp
00000001400F619E  mov     [rsp+0B8h+var_50], rax
00000001400F61A3  mov     eax, cs:dword_140404A6C+43ABB260h
00000001400F61A9  cmp     eax, 1
00000001400F61AC  jnz     loc_1400F66E5
00000001400F61B2  xor     esi, esi
00000001400F61B4  lea     rdx, dword_140404A6C+115A230Ch
00000001400F61BB  mov     ecx, eax
00000001400F61BD  mov     ebp, esi
00000001400F61BF  lea     rax, dword_140404A6C+1121EF0Ch
00000001400F61C6  cmp     [rax-2D18h], esi
00000001400F61CC  jz      short loc_1400F61DD
00000001400F61CE  cmp     [rax], esi
00000001400F61D0  jnz     short loc_1400F61DD
00000001400F61D2  inc     ebp
00000001400F61D4  cmp     [rax-2CD0h], esi
00000001400F61DA  cmovz   ecx, esi
00000001400F61DD  add     rax, 3834h
00000001400F61E3  cmp     rax, rdx
00000001400F61E6  jl      short loc_1400F61C6
00000001400F61E8  mov     r14d, cs:dword_140404A6C+43ABB268h
00000001400F61EF  lea     rbx, cs:140000000h
00000001400F61F6  test    ebp, ebp
00000001400F61F8  mov     r15d, esi
00000001400F61FB  mov     r12d, 708h
00000001400F6201  cmovnz  r15d, ecx
00000001400F6205  cmp     r14d, r12d
00000001400F6208  jnz     loc_1400F657E
00000001400F620E  mov     edi, cs:dword_140404A6C+1FF5C8D8h
00000001400F6214  mov     eax, esi
00000001400F6216  mov     cs:dword_140404A6C+681C2134h, eax
00000001400F621C  mov     edx, esi
00000001400F621E  test    edi, edi
00000001400F6220  jle     short loc_1400F6268
00000001400F6222  lea     rcx, dword_140404A6C+1FF5C92Ch
00000001400F6229  nop     dword ptr [rax+00000000h]
00000001400F6230  mov     r8d, [rcx]
00000001400F6233  test    r8d, r8d
00000001400F6236  jle     short loc_1400F625E
00000001400F6238  cdqe
00000001400F623A  mov     (rva dword_140404A6C+683C2138h)[rbx+rax*4], r8d
00000001400F6242  movsxd  rax, cs:dword_140404A6C+681C2134h
00000001400F6249  mov     (rva dword_140404A6C+684C2138h)[rbx+rax*4], edx
00000001400F6250  mov     eax, cs:dword_140404A6C+681C2134h
00000001400F6256  inc     eax
00000001400F6258  mov     cs:dword_140404A6C+681C2134h, eax
00000001400F625E  inc     edx
00000001400F6260  add     rcx, 70h ; 'p'
00000001400F6264  cmp     edx, edi
00000001400F6266  jl      short loc_1400F6230
00000001400F6268  call    sub_14007D710
00000001400F626D  mov     edx, cs:dword_140404A6C+681C2134h
00000001400F6273  test    edx, edx
00000001400F6275  jle     short loc_1400F62C0
00000001400F6277  movsxd  rax, cs:dword_140404A6C+681C2138h
00000001400F627E  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6285  test    ecx, ecx
00000001400F6287  js      short loc_1400F628D
00000001400F6289  cmp     ecx, edi
00000001400F628B  jl      short loc_1400F628F
00000001400F628D  mov     ecx, esi
00000001400F628F  mov     eax, ecx
00000001400F6291  imul    rcx, rax, 70h ; 'p'
00000001400F6295  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F629D  mov     eax, [rcx+rbx+20361398h]
00000001400F62A4  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F62AC  mov     cs:dword_140404A6C+2AE9E034h, eax
00000001400F62B2  movups  xmmword ptr cs:dword_140404A6C+2AE9DFF4h, xmm0
00000001400F62B9  movups  xmmword ptr cs:dword_140404A6C+2AE9E004h, xmm1
00000001400F62C0  cmp     edx, 1
00000001400F62C3  jle     short loc_1400F630E
00000001400F62C5  movsxd  rax, cs:dword_140404A6C+681C213Ch
00000001400F62CC  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F62D3  test    ecx, ecx
00000001400F62D5  js      short loc_1400F62DB
00000001400F62D7  cmp     ecx, edi
00000001400F62D9  jl      short loc_1400F62DD
00000001400F62DB  mov     ecx, esi
00000001400F62DD  mov     eax, ecx
00000001400F62DF  imul    rcx, rax, 70h ; 'p'
00000001400F62E3  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F62EB  mov     eax, [rcx+rbx+20361398h]
00000001400F62F2  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F62FA  mov     cs:dword_140404A6C+2AE9E078h, eax
00000001400F6300  movups  xmmword ptr cs:dword_140404A6C+2AE9E038h, xmm0
00000001400F6307  movups  xmmword ptr cs:dword_140404A6C+2AE9E048h, xmm1
00000001400F630E  cmp     edx, 2
00000001400F6311  jle     short loc_1400F635C
00000001400F6313  movsxd  rax, cs:dword_140404A6C+681C2140h
00000001400F631A  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6321  test    ecx, ecx
00000001400F6323  js      short loc_1400F6329
00000001400F6325  cmp     ecx, edi
00000001400F6327  jl      short loc_1400F632B
00000001400F6329  mov     ecx, esi
00000001400F632B  mov     eax, ecx
00000001400F632D  imul    rcx, rax, 70h ; 'p'
00000001400F6331  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6339  mov     eax, [rcx+rbx+20361398h]
00000001400F6340  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6348  mov     cs:dword_140404A6C+2AE9E0BCh, eax
00000001400F634E  movups  xmmword ptr cs:dword_140404A6C+2AE9E07Ch, xmm0
00000001400F6355  movups  xmmword ptr cs:dword_140404A6C+2AE9E08Ch, xmm1
00000001400F635C  cmp     edx, 3
00000001400F635F  jle     short loc_1400F63AA
00000001400F6361  movsxd  rax, cs:dword_140404A6C+681C2144h
00000001400F6368  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F636F  test    ecx, ecx
00000001400F6371  js      short loc_1400F6377
00000001400F6373  cmp     ecx, edi
00000001400F6375  jl      short loc_1400F6379
00000001400F6377  mov     ecx, esi
00000001400F6379  mov     eax, ecx
00000001400F637B  imul    rcx, rax, 70h ; 'p'
00000001400F637F  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6387  mov     eax, [rcx+rbx+20361398h]
00000001400F638E  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6396  mov     cs:dword_140404A6C+2AE9E100h, eax
00000001400F639C  movups  xmmword ptr cs:dword_140404A6C+2AE9E0C0h, xmm0
00000001400F63A3  movups  xmmword ptr cs:dword_140404A6C+2AE9E0D0h, xmm1
00000001400F63AA  cmp     edx, 4
00000001400F63AD  jle     short loc_1400F63F8
00000001400F63AF  movsxd  rax, cs:dword_140404A6C+681C2148h
00000001400F63B6  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F63BD  test    ecx, ecx
00000001400F63BF  js      short loc_1400F63C5
00000001400F63C1  cmp     ecx, edi
00000001400F63C3  jl      short loc_1400F63C7
00000001400F63C5  mov     ecx, esi
00000001400F63C7  mov     eax, ecx
00000001400F63C9  imul    rcx, rax, 70h ; 'p'
00000001400F63CD  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F63D5  mov     eax, [rcx+rbx+20361398h]
00000001400F63DC  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F63E4  mov     cs:dword_140404A6C+2AE9E144h, eax
00000001400F63EA  movups  xmmword ptr cs:dword_140404A6C+2AE9E104h, xmm0
00000001400F63F1  movups  xmmword ptr cs:dword_140404A6C+2AE9E114h, xmm1
00000001400F63F8  cmp     edx, 5
00000001400F63FB  jle     short loc_1400F6446
00000001400F63FD  movsxd  rax, cs:dword_140404A6C+681C214Ch
00000001400F6404  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F640B  test    ecx, ecx
00000001400F640D  js      short loc_1400F6413
00000001400F640F  cmp     ecx, edi
00000001400F6411  jl      short loc_1400F6415
00000001400F6413  mov     ecx, esi
00000001400F6415  mov     eax, ecx
00000001400F6417  imul    rcx, rax, 70h ; 'p'
00000001400F641B  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6423  mov     eax, [rcx+rbx+20361398h]
00000001400F642A  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6432  mov     cs:dword_140404A6C+2AE9E188h, eax
00000001400F6438  movups  xmmword ptr cs:dword_140404A6C+2AE9E148h, xmm0
00000001400F643F  movups  xmmword ptr cs:dword_140404A6C+2AE9E158h, xmm1
00000001400F6446  cmp     edx, 6
00000001400F6449  jle     short loc_1400F6494
00000001400F644B  movsxd  rax, cs:dword_140404A6C+681C2150h
00000001400F6452  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6459  test    ecx, ecx
00000001400F645B  js      short loc_1400F6461
00000001400F645D  cmp     ecx, edi
00000001400F645F  jl      short loc_1400F6463
00000001400F6461  mov     ecx, esi
00000001400F6463  mov     eax, ecx
00000001400F6465  imul    rcx, rax, 70h ; 'p'
00000001400F6469  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6471  mov     eax, [rcx+rbx+20361398h]
00000001400F6478  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6480  mov     cs:dword_140404A6C+2AE9E1CCh, eax
00000001400F6486  movups  xmmword ptr cs:dword_140404A6C+2AE9E18Ch, xmm0
00000001400F648D  movups  xmmword ptr cs:dword_140404A6C+2AE9E19Ch, xmm1
00000001400F6494  cmp     edx, 7
00000001400F6497  jle     short loc_1400F64E2
00000001400F6499  movsxd  rax, cs:dword_140404A6C+681C2154h
00000001400F64A0  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F64A7  test    ecx, ecx
00000001400F64A9  js      short loc_1400F64AF
00000001400F64AB  cmp     ecx, edi
00000001400F64AD  jl      short loc_1400F64B1
00000001400F64AF  mov     ecx, esi
00000001400F64B1  mov     eax, ecx
00000001400F64B3  imul    rcx, rax, 70h ; 'p'
00000001400F64B7  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F64BF  mov     eax, [rcx+rbx+20361398h]
00000001400F64C6  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F64CE  mov     cs:dword_140404A6C+2AE9E210h, eax
00000001400F64D4  movups  xmmword ptr cs:dword_140404A6C+2AE9E1D0h, xmm0
00000001400F64DB  movups  xmmword ptr cs:dword_140404A6C+2AE9E1E0h, xmm1
00000001400F64E2  cmp     edx, 8
00000001400F64E5  jle     short loc_1400F6530
00000001400F64E7  movsxd  rax, cs:dword_140404A6C+681C2158h
00000001400F64EE  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F64F5  test    ecx, ecx
00000001400F64F7  js      short loc_1400F64FD
00000001400F64F9  cmp     ecx, edi
00000001400F64FB  jl      short loc_1400F64FF
00000001400F64FD  mov     ecx, esi
00000001400F64FF  mov     eax, ecx
00000001400F6501  imul    rcx, rax, 70h ; 'p'
00000001400F6505  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F650D  mov     eax, [rcx+rbx+20361398h]
00000001400F6514  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F651C  mov     cs:dword_140404A6C+2AE9E254h, eax
00000001400F6522  movups  xmmword ptr cs:dword_140404A6C+2AE9E214h, xmm0
00000001400F6529  movups  xmmword ptr cs:dword_140404A6C+2AE9E224h, xmm1
00000001400F6530  cmp     edx, 9
00000001400F6533  jle     short loc_1400F657E
00000001400F6535  movsxd  rax, cs:dword_140404A6C+681C215Ch
00000001400F653C  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6543  test    ecx, ecx
00000001400F6545  js      short loc_1400F654B
00000001400F6547  cmp     ecx, edi
00000001400F6549  jl      short loc_1400F654D
00000001400F654B  mov     ecx, esi
00000001400F654D  mov     eax, ecx
00000001400F654F  imul    rcx, rax, 70h ; 'p'
00000001400F6553  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F655B  mov     eax, [rcx+rbx+20361398h]
00000001400F6562  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F656A  mov     cs:dword_140404A6C+2AE9E298h, eax
00000001400F6570  movups  xmmword ptr cs:dword_140404A6C+2AE9E258h, xmm0
00000001400F6577  movups  xmmword ptr cs:dword_140404A6C+2AE9E268h, xmm1
00000001400F657E  test    ebp, ebp
00000001400F6580  cmovz   r14d, r12d
00000001400F6584  lea     eax, [r14-1]
00000001400F6588  mov     cs:dword_140404A6C+43ABB268h, eax
00000001400F658E  test    r15d, r15d
00000001400F6591  jz      short loc_1400F65A7
00000001400F6593  cmp     eax, 3Ch ; '<'
00000001400F6596  jle     short loc_1400F65A7
00000001400F6598  mov     cs:dword_140404A6C+43ABB268h, 3Ch ; '<'
00000001400F65A2  jmp     loc_1400F6C1C
00000001400F65A7  test    eax, eax
00000001400F65A9  jg      loc_1400F6C1C
00000001400F65AF  movss   xmm1, cs:dword_140404A6C+43B75398h
00000001400F65B7  lea     rdi, dword_140404A6C+1121C290h
00000001400F65BE  addss   xmm1, cs:dword_140278774
00000001400F65C6  movss   xmm0, cs:dword_140404A6C+43B7539Ch
00000001400F65CE  mov     ebp, esi
00000001400F65D0  movss   xmm6, cs:dword_140404A6C+43B753A0h
00000001400F65D8  addss   xmm6, cs:dword_140278774
00000001400F65E0  movaps  [rsp+0B8h+var_38], xmm7
00000001400F65E8  movss   xmm7, cs:dword_140278D00
00000001400F65F0  movaps  [rsp+0B8h+var_48], xmm8
00000001400F65F6  movss   xmm8, cs:dword_140278C40
00000001400F65FF  movss   [rsp+0B8h+var_88], xmm1
00000001400F6605  movss   [rsp+0B8h+var_84], xmm0
00000001400F660B  nop     dword ptr [rax+rax+00h]
00000001400F6610  cmp     [rdi-9Ch], esi
00000001400F6616  jz      loc_1400F669C
00000001400F661C  movaps  xmm0, cs:xmmword_140278D30
00000001400F6623  addss   xmm6, xmm7
00000001400F6627  movaps  xmm1, xmm0
00000001400F662A  mov     [rsp+0B8h+var_58], 3F800000h
00000001400F6632  movaps  xmm2, xmm8
00000001400F6636  lea     rdx, [rsp+0B8h+var_78+0Ch]
00000001400F663B  lea     rcx, [rsp+0B8h+var_78]
00000001400F6640  movups  [rsp+0B8h+var_78], xmm0
00000001400F6645  movss   [rsp+0B8h+var_80], xmm6
00000001400F664B  movups  [rsp+0B8h+var_68], xmm0
00000001400F6650  call    sub_14007B2A0
00000001400F6655  mov     r8d, ebp
00000001400F6658  lea     rdx, [rsp+0B8h+var_78]
00000001400F665D  lea     rcx, [rsp+0B8h+var_88]
00000001400F6662  call    sub_140053840
00000001400F6667  lea     r9, [rsp+0B8h+var_78]
00000001400F666C  mov     [rdi], eax
00000001400F666E  xor     r8d, r8d
00000001400F6671  mov     [rsp+0B8h+var_98], 1
00000001400F6679  lea     rdx, [rsp+0B8h+var_88]
00000001400F667E  xor     ecx, ecx
00000001400F6680  call    sub_14005BCA0
00000001400F6685  movsxd  rcx, dword ptr [rdi]
00000001400F6688  imul    rdx, rcx, 6FF8h
00000001400F668F  mov     [rdi+0C8h], esi
00000001400F6695  mov     [rdx+rbx+4329E330h], eax
00000001400F669C  inc     ebp
00000001400F669E  add     rdi, 3834h
00000001400F66A5  cmp     ebp, 10h
00000001400F66A8  jl      loc_1400F6610
00000001400F66AE  mov     ecx, 100h
00000001400F66B3  call    sub_14012E960
00000001400F66B8  movaps  xmm8, [rsp+0B8h+var_48]
00000001400F66BE  movaps  xmm7, [rsp+0B8h+var_38]
00000001400F66C6  mov     cs:dword_140404A6C+43ABB260h, 2
00000001400F66D0  mov     cs:dword_140404A6C+43ABB268h, 6270h
00000001400F66DA  mov     cs:dword_140404A6C+43B75518h, esi
00000001400F66E0  jmp     loc_1400F6C1C
00000001400F66E5  cmp     eax, 2
00000001400F66E8  jnz     loc_1400F6C00
00000001400F66EE  mov     r10d, cs:dword_140404A6C+43B75518h
00000001400F66F5  lea     rbx, cs:140000000h
00000001400F66FC  mov     r8d, cs:dword_140404A6C+43ABB268h
00000001400F6703  xor     esi, esi
00000001400F6705  mov     r15d, 384h
00000001400F670B  test    r10d, r10d
00000001400F670E  jle     loc_1400F684A
00000001400F6714  mov     ebp, cs:dword_140404A6C+43B75394h
00000001400F671A  lea     r14d, [rax-1]
00000001400F671E  movss   xmm4, dword ptr cs:xmmword_140279840
00000001400F6726  lea     rdi, dword_140404A6C+1121C290h
00000001400F672D  movss   xmm5, cs:dword_1402785B8
00000001400F6735  lea     r12, dword_140404A6C+42E99AC0h
00000001400F673C  movss   xmm6, cs:dword_1402788D8
00000001400F6744  mov     r11d, 100h
00000001400F674A  xorps   xmm3, xmm3
00000001400F674D  nop     dword ptr [rax]
00000001400F6750  cmp     [rdi-9Ch], esi
00000001400F6756  jz      loc_1400F6828
00000001400F675C  movsxd  rcx, dword ptr [rdi]
00000001400F675F  cmp     ecx, 0FFFFFFFFh
00000001400F6762  jz      loc_1400F6828
00000001400F6768  movsxd  r9, dword ptr [rdi-28h]
00000001400F676C  cmp     r9d, ebp
00000001400F676F  jge     loc_1400F6828
00000001400F6775  imul    rcx, 6FF8h
00000001400F677C  mov     [rdi-1Ch], r10d
00000001400F6780  lea     rdx, [r9+r9*2]
00000001400F6784  mov     r14d, esi
00000001400F6787  movss   xmm0, dword ptr [rcx+r12]
00000001400F678D  movss   xmm2, dword ptr [rcx+r12+4]
00000001400F6794  movss   xmm1, dword ptr [rcx+r12+8]
00000001400F679B  subss   xmm0, (rva dword_140404A6C+43B75398h)[rbx+rdx*4]
00000001400F67A4  subss   xmm2, (rva dword_140404A6C+43B7539Ch)[rbx+rdx*4]
00000001400F67AD  subss   xmm1, (rva dword_140404A6C+43B753A0h)[rbx+rdx*4]
00000001400F67B6  test    r9d, r9d
00000001400F67B9  jnz     short loc_1400F67C2
00000001400F67BB  comiss  xmm0, xmm3
00000001400F67BE  jbe     short loc_1400F6828
00000001400F67C0  jmp     short loc_1400F67EA
00000001400F67C2  lea     eax, [rbp-1]
00000001400F67C5  cmp     r9d, eax
00000001400F67C8  jnz     short loc_1400F67D1
00000001400F67CA  comiss  xmm0, xmm3
00000001400F67CD  jbe     short loc_1400F6828
00000001400F67CF  jmp     short loc_1400F67EA
00000001400F67D1  andps   xmm2, xmm4
00000001400F67D4  comiss  xmm2, xmm5
00000001400F67D7  jnb     short loc_1400F6828
00000001400F67D9  mulss   xmm1, xmm1
00000001400F67DD  mulss   xmm0, xmm0
00000001400F67E1  addss   xmm1, xmm0
00000001400F67E5  comiss  xmm1, xmm6
00000001400F67E8  jnb     short loc_1400F6828
00000001400F67EA  lea     eax, [r9+1]
00000001400F67EE  mov     [rdi-28h], eax
00000001400F67F1  cmp     eax, ebp
00000001400F67F3  jl      short loc_1400F6828
00000001400F67F5  movsxd  rax, dword ptr [rdi-60h]
00000001400F67F9  cmp     r8d, r15d
00000001400F67FC  cmovg   r8d, r15d
00000001400F6800  mov     cs:dword_140404A6C+43ABB268h, r8d
00000001400F6807  cmp     eax, 0FFFFFFFFh
00000001400F680A  jz      short loc_1400F6828
00000001400F680C  imul    rcx, rax, 70h ; 'p'
00000001400F6810  mov     eax, [rcx+rbx+20361398h]
00000001400F6817  test    eax, eax
00000001400F6819  jz      short loc_1400F6820
00000001400F681B  cmp     eax, r10d
00000001400F681E  jle     short loc_1400F6828
00000001400F6820  mov     [rcx+rbx+20361398h], r10d
00000001400F6828  add     rdi, 3834h
00000001400F682F  sub     r11, 1
00000001400F6833  jnz     loc_1400F6750
00000001400F6839  test    r14d, r14d
00000001400F683C  jz      short loc_1400F684A
00000001400F683E  mov     eax, 78h ; 'x'
00000001400F6843  cmp     r8d, eax
00000001400F6846  cmovg   r8d, eax
00000001400F684A  dec     r8d
00000001400F684D  mov     cs:dword_140404A6C+43ABB268h, r8d
00000001400F6854  test    r10d, r10d
00000001400F6857  jnz     short loc_1400F686E
00000001400F6859  cmp     r8d, 6018h
00000001400F6860  jge     short loc_1400F6878
00000001400F6862  mov     cs:dword_140404A6C+43B75518h, 1
00000001400F686C  jmp     short loc_1400F6878
00000001400F686E  inc     r10d
00000001400F6871  mov     cs:dword_140404A6C+43B75518h, r10d
00000001400F6878  test    r8d, r8d
00000001400F687B  jg      loc_1400F6C1C
00000001400F6881  mov     edi, cs:dword_140404A6C+1FF5C8D8h
00000001400F6887  mov     eax, esi
00000001400F6889  mov     cs:dword_140404A6C+681C2134h, eax
00000001400F688F  mov     edx, esi
00000001400F6891  mov     cs:dword_140404A6C+43ABB260h, 3
00000001400F689B  mov     cs:dword_140404A6C+43ABB268h, r15d
00000001400F68A2  test    edi, edi
00000001400F68A4  jle     short loc_1400F68E8
00000001400F68A6  lea     rcx, dword_140404A6C+1FF5C92Ch
00000001400F68AD  nop     dword ptr [rax]
00000001400F68B0  mov     r8d, [rcx]
00000001400F68B3  test    r8d, r8d
00000001400F68B6  jle     short loc_1400F68DE
00000001400F68B8  cdqe
00000001400F68BA  mov     (rva dword_140404A6C+683C2138h)[rbx+rax*4], r8d
00000001400F68C2  movsxd  rax, cs:dword_140404A6C+681C2134h
00000001400F68C9  mov     (rva dword_140404A6C+684C2138h)[rbx+rax*4], edx
00000001400F68D0  mov     eax, cs:dword_140404A6C+681C2134h
00000001400F68D6  inc     eax
00000001400F68D8  mov     cs:dword_140404A6C+681C2134h, eax
00000001400F68DE  inc     edx
00000001400F68E0  add     rcx, 70h ; 'p'
00000001400F68E4  cmp     edx, edi
00000001400F68E6  jl      short loc_1400F68B0
00000001400F68E8  call    sub_14007D710
00000001400F68ED  mov     edx, cs:dword_140404A6C+681C2134h
00000001400F68F3  test    edx, edx
00000001400F68F5  jle     short loc_1400F6940
00000001400F68F7  movsxd  rax, cs:dword_140404A6C+681C2138h
00000001400F68FE  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6905  test    ecx, ecx
00000001400F6907  js      short loc_1400F690D
00000001400F6909  cmp     ecx, edi
00000001400F690B  jl      short loc_1400F690F
00000001400F690D  mov     ecx, esi
00000001400F690F  mov     eax, ecx
00000001400F6911  imul    rcx, rax, 70h ; 'p'
00000001400F6915  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F691D  mov     eax, [rcx+rbx+20361398h]
00000001400F6924  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F692C  mov     cs:dword_140404A6C+2AE9E034h, eax
00000001400F6932  movups  xmmword ptr cs:dword_140404A6C+2AE9DFF4h, xmm0
00000001400F6939  movups  xmmword ptr cs:dword_140404A6C+2AE9E004h, xmm1
00000001400F6940  cmp     edx, 1
00000001400F6943  jle     short loc_1400F698E
00000001400F6945  movsxd  rax, cs:dword_140404A6C+681C213Ch
00000001400F694C  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6953  test    ecx, ecx
00000001400F6955  js      short loc_1400F695B
00000001400F6957  cmp     ecx, edi
00000001400F6959  jl      short loc_1400F695D
00000001400F695B  mov     ecx, esi
00000001400F695D  mov     eax, ecx
00000001400F695F  imul    rcx, rax, 70h ; 'p'
00000001400F6963  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F696B  mov     eax, [rcx+rbx+20361398h]
00000001400F6972  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F697A  mov     cs:dword_140404A6C+2AE9E078h, eax
00000001400F6980  movups  xmmword ptr cs:dword_140404A6C+2AE9E038h, xmm0
00000001400F6987  movups  xmmword ptr cs:dword_140404A6C+2AE9E048h, xmm1
00000001400F698E  cmp     edx, 2
00000001400F6991  jle     short loc_1400F69DC
00000001400F6993  movsxd  rax, cs:dword_140404A6C+681C2140h
00000001400F699A  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F69A1  test    ecx, ecx
00000001400F69A3  js      short loc_1400F69A9
00000001400F69A5  cmp     ecx, edi
00000001400F69A7  jl      short loc_1400F69AB
00000001400F69A9  mov     ecx, esi
00000001400F69AB  mov     eax, ecx
00000001400F69AD  imul    rcx, rax, 70h ; 'p'
00000001400F69B1  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F69B9  mov     eax, [rcx+rbx+20361398h]
00000001400F69C0  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F69C8  mov     cs:dword_140404A6C+2AE9E0BCh, eax
00000001400F69CE  movups  xmmword ptr cs:dword_140404A6C+2AE9E07Ch, xmm0
00000001400F69D5  movups  xmmword ptr cs:dword_140404A6C+2AE9E08Ch, xmm1
00000001400F69DC  cmp     edx, 3
00000001400F69DF  jle     short loc_1400F6A2A
00000001400F69E1  movsxd  rax, cs:dword_140404A6C+681C2144h
00000001400F69E8  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F69EF  test    ecx, ecx
00000001400F69F1  js      short loc_1400F69F7
00000001400F69F3  cmp     ecx, edi
00000001400F69F5  jl      short loc_1400F69F9
00000001400F69F7  mov     ecx, esi
00000001400F69F9  mov     eax, ecx
00000001400F69FB  imul    rcx, rax, 70h ; 'p'
00000001400F69FF  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6A07  mov     eax, [rcx+rbx+20361398h]
00000001400F6A0E  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6A16  mov     cs:dword_140404A6C+2AE9E100h, eax
00000001400F6A1C  movups  xmmword ptr cs:dword_140404A6C+2AE9E0C0h, xmm0
00000001400F6A23  movups  xmmword ptr cs:dword_140404A6C+2AE9E0D0h, xmm1
00000001400F6A2A  cmp     edx, 4
00000001400F6A2D  jle     short loc_1400F6A78
00000001400F6A2F  movsxd  rax, cs:dword_140404A6C+681C2148h
00000001400F6A36  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6A3D  test    ecx, ecx
00000001400F6A3F  js      short loc_1400F6A45
00000001400F6A41  cmp     ecx, edi
00000001400F6A43  jl      short loc_1400F6A47
00000001400F6A45  mov     ecx, esi
00000001400F6A47  mov     eax, ecx
00000001400F6A49  imul    rcx, rax, 70h ; 'p'
00000001400F6A4D  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6A55  mov     eax, [rcx+rbx+20361398h]
00000001400F6A5C  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6A64  mov     cs:dword_140404A6C+2AE9E144h, eax
00000001400F6A6A  movups  xmmword ptr cs:dword_140404A6C+2AE9E104h, xmm0
00000001400F6A71  movups  xmmword ptr cs:dword_140404A6C+2AE9E114h, xmm1
00000001400F6A78  cmp     edx, 5
00000001400F6A7B  jle     short loc_1400F6AC6
00000001400F6A7D  movsxd  rax, cs:dword_140404A6C+681C214Ch
00000001400F6A84  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6A8B  test    ecx, ecx
00000001400F6A8D  js      short loc_1400F6A93
00000001400F6A8F  cmp     ecx, edi
00000001400F6A91  jl      short loc_1400F6A95
00000001400F6A93  mov     ecx, esi
00000001400F6A95  mov     eax, ecx
00000001400F6A97  imul    rcx, rax, 70h ; 'p'
00000001400F6A9B  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6AA3  mov     eax, [rcx+rbx+20361398h]
00000001400F6AAA  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6AB2  mov     cs:dword_140404A6C+2AE9E188h, eax
00000001400F6AB8  movups  xmmword ptr cs:dword_140404A6C+2AE9E148h, xmm0
00000001400F6ABF  movups  xmmword ptr cs:dword_140404A6C+2AE9E158h, xmm1
00000001400F6AC6  cmp     edx, 6
00000001400F6AC9  jle     short loc_1400F6B14
00000001400F6ACB  movsxd  rax, cs:dword_140404A6C+681C2150h
00000001400F6AD2  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6AD9  test    ecx, ecx
00000001400F6ADB  js      short loc_1400F6AE1
00000001400F6ADD  cmp     ecx, edi
00000001400F6ADF  jl      short loc_1400F6AE3
00000001400F6AE1  mov     ecx, esi
00000001400F6AE3  mov     eax, ecx
00000001400F6AE5  imul    rcx, rax, 70h ; 'p'
00000001400F6AE9  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6AF1  mov     eax, [rcx+rbx+20361398h]
00000001400F6AF8  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6B00  mov     cs:dword_140404A6C+2AE9E1CCh, eax
00000001400F6B06  movups  xmmword ptr cs:dword_140404A6C+2AE9E18Ch, xmm0
00000001400F6B0D  movups  xmmword ptr cs:dword_140404A6C+2AE9E19Ch, xmm1
00000001400F6B14  cmp     edx, 7
00000001400F6B17  jle     short loc_1400F6B62
00000001400F6B19  movsxd  rax, cs:dword_140404A6C+681C2154h
00000001400F6B20  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6B27  test    ecx, ecx
00000001400F6B29  js      short loc_1400F6B2F
00000001400F6B2B  cmp     ecx, edi
00000001400F6B2D  jl      short loc_1400F6B31
00000001400F6B2F  mov     ecx, esi
00000001400F6B31  mov     eax, ecx
00000001400F6B33  imul    rcx, rax, 70h ; 'p'
00000001400F6B37  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6B3F  mov     eax, [rcx+rbx+20361398h]
00000001400F6B46  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6B4E  mov     cs:dword_140404A6C+2AE9E210h, eax
00000001400F6B54  movups  xmmword ptr cs:dword_140404A6C+2AE9E1D0h, xmm0
00000001400F6B5B  movups  xmmword ptr cs:dword_140404A6C+2AE9E1E0h, xmm1
00000001400F6B62  cmp     edx, 8
00000001400F6B65  jle     short loc_1400F6BB0
00000001400F6B67  movsxd  rax, cs:dword_140404A6C+681C2158h
00000001400F6B6E  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6B75  test    ecx, ecx
00000001400F6B77  js      short loc_1400F6B7D
00000001400F6B79  cmp     ecx, edi
00000001400F6B7B  jl      short loc_1400F6B7F
00000001400F6B7D  mov     ecx, esi
00000001400F6B7F  mov     eax, ecx
00000001400F6B81  imul    rcx, rax, 70h ; 'p'
00000001400F6B85  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6B8D  mov     eax, [rcx+rbx+20361398h]
00000001400F6B94  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6B9C  mov     cs:dword_140404A6C+2AE9E254h, eax
00000001400F6BA2  movups  xmmword ptr cs:dword_140404A6C+2AE9E214h, xmm0
00000001400F6BA9  movups  xmmword ptr cs:dword_140404A6C+2AE9E224h, xmm1
00000001400F6BB0  cmp     edx, 9
00000001400F6BB3  jle     short loc_1400F6C1C
00000001400F6BB5  movsxd  rax, cs:dword_140404A6C+681C215Ch
00000001400F6BBC  mov     ecx, (rva dword_140404A6C+684C2138h)[rbx+rax*4]
00000001400F6BC3  test    ecx, ecx
00000001400F6BC5  js      short loc_1400F6BCB
00000001400F6BC7  cmp     ecx, edi
00000001400F6BC9  jl      short loc_1400F6BCD
00000001400F6BCB  mov     ecx, esi
00000001400F6BCD  mov     eax, ecx
00000001400F6BCF  imul    rcx, rax, 70h ; 'p'
00000001400F6BD3  movups  xmm0, xmmword ptr [rcx+rbx+20361360h]
00000001400F6BDB  mov     eax, [rcx+rbx+20361398h]
00000001400F6BE2  movups  xmm1, xmmword ptr [rcx+rbx+20361370h]
00000001400F6BEA  mov     cs:dword_140404A6C+2AE9E298h, eax
00000001400F6BF0  movups  xmmword ptr cs:dword_140404A6C+2AE9E258h, xmm0
00000001400F6BF7  movups  xmmword ptr cs:dword_140404A6C+2AE9E268h, xmm1
00000001400F6BFE  jmp     short loc_1400F6C1C
00000001400F6C00  cmp     eax, 3
00000001400F6C03  jnz     short loc_1400F6C1C
00000001400F6C05  mov     eax, cs:dword_140404A6C+43ABB268h
00000001400F6C0B  dec     eax
00000001400F6C0D  mov     cs:dword_140404A6C+43ABB268h, eax
00000001400F6C13  test    eax, eax
00000001400F6C15  jg      short loc_1400F6C1C
00000001400F6C17  call    sub_140127910
00000001400F6C1C  mov     rcx, [rsp+0B8h+var_50]
00000001400F6C21  xor     rcx, rsp
00000001400F6C24  call    1401F8B20h
00000001400F6C29  lea     r11, [rsp+0B8h+var_18]
00000001400F6C31  mov     rbx, [r11+20h]
00000001400F6C35  mov     rbp, [r11+28h]
00000001400F6C39  mov     rsi, [r11+30h]
00000001400F6C3D  mov     rdi, [r11+38h]
00000001400F6C41  movaps  xmm6, xmmword ptr [r11-10h]
00000001400F6C46  mov     rsp, r11
00000001400F6C49  pop     r15
00000001400F6C4B  pop     r14
00000001400F6C4D  pop     r12
00000001400F6C4F  retn
