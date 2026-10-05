; 0x14023e7d4: acos
; Decompilation failed: call analysis failed
000000014023E7D4  sub     rsp, 68h
000000014023E7D8  mov     r8, 7FFFFFFFFFFFFFFFh
000000014023E7E2  movaps  [rsp+68h+var_18], xmm6
000000014023E7E7  xorps   xmm1, xmm1
000000014023E7EA  movaps  xmm3, xmm0
000000014023E7ED  movsd   [rsp+68h+arg_0], xmm1
000000014023E7F3  movsd   [rsp+68h+arg_10], xmm0
000000014023E7FC  mov     rcx, [rsp+68h+arg_10]
000000014023E804  mov     rdx, rcx
000000014023E807  mov     rax, rcx
000000014023E80A  shr     rdx, 34h
000000014023E80E  and     rax, r8
000000014023E811  and     edx, 7FFh
000000014023E817  mov     r8, 7FF0000000000000h
000000014023E821  cmp     rax, r8
000000014023E824  jbe     short loc_14023E834
000000014023E826  movaps  xmm6, [rsp+68h+var_18]
000000014023E82B  add     rsp, 68h
000000014023E82F  jmp     _handle_nan
000000014023E834  cmp     edx, 3C7h
000000014023E83A  jnb     short loc_14023E846
000000014023E83C  movsd   xmm6, cs:qword_140278598
000000014023E844  jmp     short loc_14023E87A
000000014023E846  cmp     edx, 3FFh
000000014023E84C  jb      loc_14023E8D2
000000014023E852  ucomisd xmm3, cs:Y
000000014023E85A  jp      short loc_14023E866
000000014023E85C  jnz     short loc_14023E866
000000014023E85E  xorps   xmm0, xmm0
000000014023E861  jmp     loc_14023EA6E
000000014023E866  ucomisd xmm3, cs:qword_140278CA0
000000014023E86E  jp      short loc_14023E88C
000000014023E870  jnz     short loc_14023E88C
000000014023E872  movsd   xmm6, cs:qword_1402785E0
000000014023E87A  mov     ecx, 20h ; ' '
000000014023E87F  call    _set_statfp
000000014023E884  movaps  xmm0, xmm6
000000014023E887  jmp     loc_14023EA6E
000000014023E88C  mov     r9d, 1
000000014023E892  lea     rcx, cs:140285E90h; "acos"
000000014023E899  mov     [rsp+68h+var_28], r9d
000000014023E89E  mov     r8, 0FFF8000000000000h
000000014023E8A8  movsd   [rsp+68h+var_30], xmm1
000000014023E8AE  movsd   [rsp+68h+var_38], xmm3
000000014023E8B4  mov     [rsp+68h+var_40], 21h ; '!'
000000014023E8BC  lea     edx, [r9+0Ch]
000000014023E8C0  mov     [rsp+68h+var_48], 8
000000014023E8C8  call    _handle_error
000000014023E8CD  jmp     loc_14023EA6E
000000014023E8D2  movaps  xmm5, xmm3
000000014023E8D5  test    rcx, rcx
000000014023E8D8  jns     short loc_14023E8E1
000000014023E8DA  xorps   xmm5, cs:xmmword_140279860
000000014023E8E1  mov     eax, 3FEh
000000014023E8E6  cmp     edx, eax
000000014023E8E8  jb      short loc_14023E91B
000000014023E8EA  movsd   xmm6, cs:Y
000000014023E8F2  subsd   xmm6, xmm5
000000014023E8F6  mulsd   xmm6, cs:qword_140278508
000000014023E8FE  movsd   [rsp+68h+arg_8], xmm6
000000014023E904  sqrtsd  xmm2, [rsp+68h+arg_8]
000000014023E90A  movsd   [rsp+68h+arg_0], xmm2
000000014023E910  movsd   xmm1, [rsp+68h+arg_0]
000000014023E916  movaps  xmm5, xmm1
000000014023E919  jmp     short loc_14023E92E
000000014023E91B  movsd   xmm1, [rsp+68h+arg_0]
000000014023E921  movaps  xmm6, xmm5
000000014023E924  mulsd   xmm6, xmm5
000000014023E928  movsd   [rsp+68h+arg_8], xmm6
000000014023E92E  movaps  xmm4, xmm6
000000014023E931  movaps  xmm0, xmm6
000000014023E934  mulsd   xmm4, cs:qword_140285EA0
000000014023E93C  mulsd   xmm0, cs:qword_140285EB8
000000014023E944  addsd   xmm4, cs:qword_140285EA8
000000014023E94C  subsd   xmm0, cs:qword_140285ED8
000000014023E954  mulsd   xmm4, xmm6
000000014023E958  mulsd   xmm0, xmm6
000000014023E95C  subsd   xmm4, cs:qword_140285EB0
000000014023E964  addsd   xmm0, cs:qword_140285EE8
000000014023E96C  mulsd   xmm4, xmm6
000000014023E970  mulsd   xmm0, xmm6
000000014023E974  addsd   xmm4, cs:qword_140285EC8
000000014023E97C  subsd   xmm0, cs:qword_140285EF0
000000014023E984  mulsd   xmm4, xmm6
000000014023E988  mulsd   xmm0, xmm6
000000014023E98C  subsd   xmm4, cs:qword_140285ED0
000000014023E994  addsd   xmm0, cs:qword_140285EE0
000000014023E99C  mulsd   xmm4, xmm6
000000014023E9A0  addsd   xmm4, cs:qword_140285EC0
000000014023E9A8  mulsd   xmm4, xmm6
000000014023E9AC  divsd   xmm4, xmm0
000000014023E9B0  jb      loc_14023EA4E
000000014023E9B6  test    rcx, rcx
000000014023E9B9  jns     short loc_14023E9E0
000000014023E9BB  movsd   xmm0, cs:qword_1402785E0
000000014023E9C3  mulsd   xmm4, xmm5
000000014023E9C7  subsd   xmm4, cs:qword_140285E98
000000014023E9CF  addsd   xmm4, xmm1
000000014023E9D3  addsd   xmm4, xmm4
000000014023E9D7  subsd   xmm0, xmm4
000000014023E9DB  jmp     loc_14023EA6E
000000014023E9E0  movsd   [rsp+68h+arg_10], xmm1
000000014023E9E9  addsd   xmm5, xmm5
000000014023E9ED  mov     rax, [rsp+68h+arg_10]
000000014023E9F5  mov     rcx, 0FFFFFFFF00000000h
000000014023E9FF  and     rax, rcx
000000014023EA02  mov     [rsp+68h+arg_10], rax
000000014023EA0A  movsd   xmm3, [rsp+68h+arg_10]
000000014023EA13  movsd   xmm2, [rsp+68h+arg_8]
000000014023EA19  movaps  xmm0, xmm3
000000014023EA1C  mulsd   xmm0, xmm3
000000014023EA20  movaps  xmm1, xmm3
000000014023EA23  addsd   xmm1, [rsp+68h+arg_0]
000000014023EA29  mulsd   xmm3, cs:X
000000014023EA31  subsd   xmm2, xmm0
000000014023EA35  mulsd   xmm5, xmm4
000000014023EA39  divsd   xmm2, xmm1
000000014023EA3D  addsd   xmm2, xmm2
000000014023EA41  addsd   xmm5, xmm2
000000014023EA45  addsd   xmm5, xmm3
000000014023EA49  movaps  xmm0, xmm5
000000014023EA4C  jmp     short loc_14023EA6E
000000014023EA4E  movsd   xmm0, cs:qword_140285E98
000000014023EA56  mulsd   xmm4, xmm3
000000014023EA5A  subsd   xmm0, xmm4
000000014023EA5E  subsd   xmm3, xmm0
000000014023EA62  movsd   xmm0, cs:qword_140278598
000000014023EA6A  subsd   xmm0, xmm3
000000014023EA6E  movaps  xmm6, [rsp+68h+var_18]
000000014023EA73  add     rsp, 68h
000000014023EA77  retn
