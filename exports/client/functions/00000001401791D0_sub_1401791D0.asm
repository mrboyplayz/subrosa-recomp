; 0x1401791d0: sub_1401791D0
; Decompilation failed: call analysis failed
00000001401791D0  mov     [rsp+arg_0], rbx
00000001401791D5  mov     [rsp+arg_8], rsi
00000001401791DA  mov     [rsp+arg_10], rdi
00000001401791DF  push    r14
00000001401791E1  sub     rsp, 60h
00000001401791E5  mov     rsi, r9
00000001401791E8  mov     r14, r8
00000001401791EB  mov     rdi, rcx
00000001401791EE  call    sub_140178410
00000001401791F3  cmp     dword ptr [rdi+4Ch], 0
00000001401791F7  mov     edx, eax
00000001401791F9  mov     rcx, rdi
00000001401791FC  jz      loc_14017928B
0000000140179202  xor     ebx, ebx
0000000140179204  mov     [rsp+68h+var_48], 1
000000014017920D  xorps   xmm0, xmm0
0000000140179210  mov     [rsp+68h+var_20], rbx
0000000140179215  xorps   xmm1, xmm1
0000000140179218  mov     [rsp+68h+var_18], ebx
000000014017921C  lea     r8, [rsp+68h+var_48]
0000000140179221  movups  [rsp+68h+var_40], xmm0
0000000140179226  movdqu  [rsp+68h+var_30], xmm1
000000014017922C  call    sub_140182AD0
0000000140179231  mov     edx, eax
0000000140179233  test    r14, r14
0000000140179236  jz      short loc_140179244
0000000140179238  test    eax, eax
000000014017923A  mov     ecx, ebx
000000014017923C  cmovnz  ecx, dword ptr [rsp+68h+var_30]
0000000140179241  mov     [r14], ecx
0000000140179244  test    rsi, rsi
0000000140179247  jz      short loc_140179254
0000000140179249  test    edx, edx
000000014017924B  mov     ecx, ebx
000000014017924D  cmovnz  ecx, dword ptr [rsp+68h+var_30+8]
0000000140179252  mov     [rsi], ecx
0000000140179254  mov     rcx, [rsp+68h+arg_20]
000000014017925C  test    rcx, rcx
000000014017925F  jz      short loc_14017926C
0000000140179261  test    edx, edx
0000000140179263  mov     eax, ebx
0000000140179265  cmovnz  eax, dword ptr [rsp+68h+var_30+4]
000000014017926A  mov     [rcx], eax
000000014017926C  mov     rax, [rsp+68h+arg_28]
0000000140179274  test    rax, rax
0000000140179277  jz      loc_140179341
000000014017927D  test    edx, edx
000000014017927F  cmovnz  ebx, dword ptr [rsp+68h+var_30+0Ch]
0000000140179284  mov     [rax], ebx
0000000140179286  jmp     loc_140179341
000000014017928B  call    sub_14017DA60
0000000140179290  test    eax, eax
0000000140179292  jns     short loc_14017929D
0000000140179294  xor     ebx, ebx
0000000140179296  mov     eax, ebx
0000000140179298  jmp     loc_140179346
000000014017929D  movsxd  r10, eax
00000001401792A0  mov     ebx, 100h
00000001401792A5  test    r14, r14
00000001401792A8  jz      short loc_1401792C7
00000001401792AA  mov     r8, [rdi+8]
00000001401792AE  movsx   ecx, bx
00000001401792B1  movzx   eax, byte ptr [r8+r10+3]
00000001401792B7  movzx   edx, byte ptr [r8+r10+2]
00000001401792BD  imul    edx, ecx
00000001401792C0  add     ax, dx
00000001401792C3  cwde
00000001401792C4  mov     [r14], eax
00000001401792C7  test    rsi, rsi
00000001401792CA  jz      short loc_1401792E8
00000001401792CC  mov     r8, [rdi+8]
00000001401792D0  movsx   ecx, bx
00000001401792D3  movzx   eax, byte ptr [r8+r10+5]
00000001401792D9  movzx   edx, byte ptr [r8+r10+4]
00000001401792DF  imul    edx, ecx
00000001401792E2  add     ax, dx
00000001401792E5  cwde
00000001401792E6  mov     [rsi], eax
00000001401792E8  mov     r9, [rsp+68h+arg_20]
00000001401792F0  test    r9, r9
00000001401792F3  jz      short loc_140179312
00000001401792F5  mov     r8, [rdi+8]
00000001401792F9  movsx   ecx, bx
00000001401792FC  movzx   eax, byte ptr [r8+r10+7]
0000000140179302  movzx   edx, byte ptr [r8+r10+6]
0000000140179308  imul    edx, ecx
000000014017930B  add     ax, dx
000000014017930E  cwde
000000014017930F  mov     [r9], eax
0000000140179312  mov     r11, [rsp+68h+arg_28]
000000014017931A  test    r11, r11
000000014017931D  jz      short loc_140179341
000000014017931F  mov     r9, [rdi+8]
0000000140179323  movsx   edx, bx
0000000140179326  movzx   ecx, byte ptr [r9+r10+9]
000000014017932C  movzx   r8d, byte ptr [r9+r10+8]
0000000140179332  imul    r8d, edx
0000000140179336  add     r8w, cx
000000014017933A  movsx   ecx, r8w
000000014017933E  mov     [r11], ecx
0000000140179341  mov     eax, 1
0000000140179346  mov     rbx, [rsp+68h+arg_0]
000000014017934B  mov     rsi, [rsp+68h+arg_8]
0000000140179350  mov     rdi, [rsp+68h+arg_10]
0000000140179358  add     rsp, 60h
000000014017935C  pop     r14
000000014017935E  retn
