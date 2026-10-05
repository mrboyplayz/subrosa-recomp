; 0x140244e7c: sqrt
; Decompilation failed: call analysis failed
0000000140244E7C  movsd   [rsp+arg_0], xmm0
0000000140244E82  sub     rsp, 58h
0000000140244E86  mov     rcx, 7FF0000000000000h
0000000140244E90  movsd   [rsp+58h+arg_8], xmm0
0000000140244E96  mov     rdx, [rsp+58h+arg_8]
0000000140244E9B  mov     rax, rdx
0000000140244E9E  and     rax, rcx
0000000140244EA1  cmp     rax, rcx
0000000140244EA4  jnz     short loc_140244F12
0000000140244EA6  mov     rax, 0FFFFFFFFFFFFFh
0000000140244EB0  test    rax, rdx
0000000140244EB3  jz      short loc_140244EC1
0000000140244EB5  mov     rcx, rdx
0000000140244EB8  add     rsp, 58h
0000000140244EBC  jmp     _handle_nan
0000000140244EC1  test    rdx, rdx
0000000140244EC4  jns     short loc_140244F12
0000000140244EC6  movsd   xmm1, [rsp+58h+arg_0]
0000000140244ECC  lea     rcx, cs:140289E4Ch; "sqrt"
0000000140244ED3  mov     r9d, 1
0000000140244ED9  xorps   xmm0, xmm0
0000000140244EDC  mov     [rsp+58h+var_18], r9d
0000000140244EE1  mov     r8, 0FFF8000000000000h
0000000140244EEB  movsd   [rsp+58h+var_20], xmm0
0000000140244EF1  movsd   [rsp+58h+var_28], xmm1
0000000140244EF7  mov     [rsp+58h+var_30], 21h ; '!'
0000000140244EFF  lea     edx, [r9+4]
0000000140244F03  mov     [rsp+58h+var_38], 8
0000000140244F0B  call    _handle_error
0000000140244F10  jmp     short loc_140244F40
0000000140244F12  mov     rax, 7FFFFFFFFFFFFFFFh
0000000140244F1C  test    rax, rdx
0000000140244F1F  setnz   cl
0000000140244F22  bt      rdx, 3Fh ; '?'
0000000140244F27  setb    al
0000000140244F2A  test    al, cl
0000000140244F2C  jnz     short loc_140244EC6
0000000140244F2E  sqrtsd  xmm2, [rsp+58h+arg_0]
0000000140244F34  movsd   [rsp+58h+arg_10], xmm2
0000000140244F3A  movsd   xmm0, [rsp+58h+arg_10]
0000000140244F40  add     rsp, 58h
0000000140244F44  retn
