; 0x14006d930: sub_14006D930
; Decompilation failed: call analysis failed
000000014006D930  push    rbx
000000014006D932  push    rdi
000000014006D933  mov     eax, 10098h
000000014006D938  call    sub_1401F89D0
000000014006D93D  sub     rsp, rax
000000014006D940  movaps  [rsp+10h+arg_10068], xmm6
000000014006D948  movaps  [rsp+10h+arg_10058], xmm7
000000014006D950  movaps  [rsp+10h+arg_10048], xmm8
000000014006D959  mov     rax, cs:__security_cookie
000000014006D960  xor     rax, rsp
000000014006D963  mov     [rsp+10h+arg_10038], rax
000000014006D96B  mov     edi, [rsp+10h+arg_100B8]
000000014006D972  movaps  xmm6, xmm3
000000014006D975  movaps  xmm7, xmm2
000000014006D978  movaps  xmm8, xmm1
000000014006D97C  test    dil, 40h
000000014006D980  jnz     short loc_14006D99F
000000014006D982  mov     rdx, rcx
000000014006D985  lea     r9, [rsp+10h+arg_100E0]
000000014006D98D  lea     rcx, [rsp+10h+arg_38]
000000014006D992  mov     r8d, 2710h
000000014006D998  call    sub_14006E530
000000014006D99D  jmp     short loc_14006D9BE
000000014006D99F  lea     rdx, [rsp+10h+arg_38]
000000014006D9A4  sub     rdx, rcx
000000014006D9A7  nop     word ptr [rax+rax+00000000h]
000000014006D9B0  movzx   eax, byte ptr [rcx]
000000014006D9B3  mov     [rdx+rcx], al
000000014006D9B6  lea     rcx, [rcx+1]
000000014006D9BA  test    al, al
000000014006D9BC  jnz     short loc_14006D9B0
000000014006D9BE  movss   xmm2, cs:dword_140278BD0
000000014006D9C6  xorps   xmm3, xmm3
000000014006D9C9  test    dil, 1
000000014006D9CD  jz      short loc_14006DA33
000000014006D9CF  movsxd  r9, cs:dword_140404A6C+687F2F54h
000000014006D9D6  lea     r8, dword_140404A6C+1159F5F4h
000000014006D9DD  imul    rax, r9, 3820h
000000014006D9E4  xorps   xmm1, xmm1
000000014006D9E7  cmp     dword ptr [rax+r8], 0
000000014006D9EC  jz      short loc_14006DA28
000000014006D9EE  cmp     byte ptr [rsp+10h+arg_38], 0
000000014006D9F3  jz      short loc_14006DA28
000000014006D9F5  xor     edx, edx
000000014006D9F7  cmp     rdx, 0FFFFh
000000014006D9FE  jge     short loc_14006DA28
000000014006DA00  movsx   rcx, byte ptr [rsp+rdx+10h+arg_38]
000000014006DA06  movaps  xmm0, xmm6
000000014006DA09  imul    rax, r9, 0E08h
000000014006DA10  inc     rdx
000000014006DA13  add     rcx, rax
000000014006DA16  cmp     byte ptr [rsp+rdx+10h+arg_38], 0
000000014006DA1B  mulss   xmm0, dword ptr [r8+rcx*4+20h]
000000014006DA22  addss   xmm1, xmm0
000000014006DA26  jnz     short loc_14006D9F7
000000014006DA28  mulss   xmm1, xmm2
000000014006DA2C  addss   xmm8, xmm1
000000014006DA31  jmp     short loc_14006DA97
000000014006DA33  test    dil, 2
000000014006DA37  jz      short loc_14006DA97
000000014006DA39  movsxd  r9, cs:dword_140404A6C+687F2F54h
000000014006DA40  lea     r8, dword_140404A6C+1159F5F4h
000000014006DA47  imul    rax, r9, 3820h
000000014006DA4E  xorps   xmm1, xmm1
000000014006DA51  cmp     dword ptr [rax+r8], 0
000000014006DA56  jz      short loc_14006DA92
000000014006DA58  cmp     byte ptr [rsp+10h+arg_38], 0
000000014006DA5D  jz      short loc_14006DA92
000000014006DA5F  xor     edx, edx
000000014006DA61  cmp     rdx, 0FFFFh
000000014006DA68  jge     short loc_14006DA92
000000014006DA6A  movsx   rcx, byte ptr [rsp+rdx+10h+arg_38]
000000014006DA70  movaps  xmm0, xmm6
000000014006DA73  imul    rax, r9, 0E08h
000000014006DA7A  inc     rdx
000000014006DA7D  add     rcx, rax
000000014006DA80  cmp     byte ptr [rsp+rdx+10h+arg_38], 0
000000014006DA85  mulss   xmm0, dword ptr [r8+rcx*4+20h]
000000014006DA8C  addss   xmm1, xmm0
000000014006DA90  jnz     short loc_14006DA61
000000014006DA92  subss   xmm8, xmm1
000000014006DA97  test    dil, 4
000000014006DA9B  jz      short loc_14006DAAA
000000014006DA9D  movaps  xmm0, xmm6
000000014006DAA0  mulss   xmm0, xmm2
000000014006DAA4  addss   xmm7, xmm0
000000014006DAA8  jmp     short loc_14006DAB4
000000014006DAAA  test    dil, 8
000000014006DAAE  jz      short loc_14006DAB4
000000014006DAB0  subss   xmm7, xmm6
000000014006DAB4  mov     ebx, edi
000000014006DAB6  shr     ebx, 7
000000014006DAB9  and     ebx, 1
000000014006DABC  test    dil, 20h
000000014006DAC0  jz      short loc_14006DB0B
000000014006DAC2  movss   xmm0, [rsp+10h+arg_100D8]
000000014006DACB  lea     rcx, [rsp+10h+arg_38]
000000014006DAD0  mov     [rsp+10h+arg_28], ebx
000000014006DAD4  movaps  xmm1, xmm6
000000014006DAD7  mulss   xmm1, cs:dword_1402781BC
000000014006DADF  movss   [rsp+10h+arg_20], xmm0
000000014006DAE5  movss   [rsp+10h+arg_18], xmm3
000000014006DAEB  movaps  xmm2, xmm1
000000014006DAEE  movss   [rsp+10h+arg_10], xmm3
000000014006DAF4  movss   [rsp+10h+arg_8], xmm3
000000014006DAFA  addss   xmm2, xmm7
000000014006DAFE  addss   xmm1, xmm8
000000014006DB03  movaps  xmm3, xmm6
000000014006DB06  call    sub_14006DB90
000000014006DB0B  movss   xmm0, [rsp+10h+arg_100D8]
000000014006DB14  lea     rcx, [rsp+10h+arg_38]
000000014006DB19  movss   xmm1, [rsp+10h+arg_100D0]
000000014006DB22  movaps  xmm3, xmm6
000000014006DB25  mov     [rsp+10h+arg_28], ebx
000000014006DB29  movaps  xmm2, xmm7
000000014006DB2C  movss   [rsp+10h+arg_20], xmm0
000000014006DB32  movss   xmm0, [rsp+10h+arg_100C8]
000000014006DB3B  movss   [rsp+10h+arg_18], xmm1
000000014006DB41  movss   xmm1, [rsp+10h+arg_100C0]
000000014006DB4A  movss   [rsp+10h+arg_10], xmm0
000000014006DB50  movss   [rsp+10h+arg_8], xmm1
000000014006DB56  movaps  xmm1, xmm8
000000014006DB5A  call    sub_14006DB90
000000014006DB5F  mov     rcx, [rsp+10h+arg_10038]
000000014006DB67  xor     rcx, rsp
000000014006DB6A  call    1401F8B20h
000000014006DB6F  lea     r11, [rsp+10h+arg_10080]
000000014006DB77  movaps  xmm6, xmmword ptr [r11-18h]
000000014006DB7C  movaps  xmm7, xmmword ptr [r11-28h]
000000014006DB81  movaps  xmm8, xmmword ptr [r11-38h]
000000014006DB86  mov     rsp, r11
000000014006DB89  pop     rdi
000000014006DB8A  pop     rbx
000000014006DB8B  retn
