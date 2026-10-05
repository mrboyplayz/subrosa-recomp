; 0x14023eb20: sub_14023EB20
; Decompilation failed: call analysis failed
000000014023EB20  sub     rsp, 68h
000000014023EB24  and     [rsp+68h+arg_0], 0
000000014023EB29  xorps   xmm1, xmm1
000000014023EB2C  movaps  [rsp+68h+var_18], xmm6
000000014023EB31  movaps  xmm6, xmm0
000000014023EB34  movss   [rsp+68h+arg_10], xmm6
000000014023EB3D  mov     ecx, [rsp+68h+arg_10]
000000014023EB44  mov     eax, ecx
000000014023EB46  shr     eax, 17h
000000014023EB49  movzx   edx, al
000000014023EB4C  mov     eax, ecx
000000014023EB4E  btr     eax, 1Fh
000000014023EB52  cmp     eax, 7F800000h
000000014023EB57  jbe     short loc_14023EB67
000000014023EB59  movaps  xmm6, [rsp+68h+var_18]
000000014023EB5E  add     rsp, 68h
000000014023EB62  jmp     _handle_nanf
000000014023EB67  cmp     edx, 71h ; 'q'
000000014023EB6A  jb      short loc_14023EB99
000000014023EB6C  cmp     edx, 7Fh
000000014023EB6F  jb      short loc_14023EBED
000000014023EB71  ucomiss xmm6, cs:dword_1402783F4
000000014023EB78  jp      short loc_14023EB86
000000014023EB7A  jnz     short loc_14023EB86
000000014023EB7C  movss   xmm6, cs:dword_1402784B0
000000014023EB84  jmp     short loc_14023EB99
000000014023EB86  ucomiss xmm6, cs:dword_140278C08
000000014023EB8D  jp      short loc_14023EBAB
000000014023EB8F  jnz     short loc_14023EBAB
000000014023EB91  movss   xmm6, cs:dword_140278C40
000000014023EB99  mov     ecx, 20h ; ' '
000000014023EB9E  call    _set_statfp
000000014023EBA3  movaps  xmm0, xmm6
000000014023EBA6  jmp     loc_14023ED30
000000014023EBAB  mov     r9d, 1
000000014023EBB1  lea     rcx, cs:140285F04h; "asinf"
000000014023EBB8  mov     [rsp+68h+var_28], r9d
000000014023EBBD  mov     r8d, 0FFC00000h
000000014023EBC3  movss   [rsp+68h+var_30], xmm1
000000014023EBC9  movss   [rsp+68h+var_38], xmm6
000000014023EBCF  mov     [rsp+68h+var_40], 21h ; '!'
000000014023EBD7  lea     edx, [r9+0Dh]
000000014023EBDB  mov     [rsp+68h+var_48], 8
000000014023EBE3  call    _handle_errorf
000000014023EBE8  jmp     loc_14023ED30
000000014023EBED  test    ecx, ecx
000000014023EBEF  jns     short loc_14023EBF8
000000014023EBF1  xorps   xmm6, cs:xmmword_140279870
000000014023EBF8  cmp     edx, 7Eh ; '~'
000000014023EBFB  jb      short loc_14023EC2E
000000014023EBFD  movss   xmm2, cs:dword_1402783F4
000000014023EC05  subss   xmm2, xmm6
000000014023EC09  mulss   xmm2, cs:dword_140278338
000000014023EC11  movss   [rsp+68h+arg_8], xmm2
000000014023EC17  sqrtss  xmm1, [rsp+68h+arg_8]
000000014023EC1D  movss   [rsp+68h+arg_0], xmm1
000000014023EC23  movss   xmm3, [rsp+68h+arg_0]
000000014023EC29  movaps  xmm6, xmm3
000000014023EC2C  jmp     short loc_14023EC41
000000014023EC2E  movss   xmm3, [rsp+68h+arg_0]
000000014023EC34  movaps  xmm2, xmm6
000000014023EC37  mulss   xmm2, xmm6
000000014023EC3B  movss   [rsp+68h+arg_8], xmm2
000000014023EC41  movss   xmm5, cs:dword_140285F28
000000014023EC49  movaps  xmm0, xmm2
000000014023EC4C  mulss   xmm0, cs:dword_140285F10
000000014023EC54  subss   xmm5, xmm0
000000014023EC58  movss   xmm0, cs:dword_140285F24
000000014023EC60  mulss   xmm5, xmm2
000000014023EC64  subss   xmm5, cs:dword_140285F14
000000014023EC6C  mulss   xmm5, xmm2
000000014023EC70  addss   xmm5, cs:dword_140285F18
000000014023EC78  mulss   xmm5, xmm2
000000014023EC7C  mulss   xmm2, cs:dword_140285F20
000000014023EC84  subss   xmm0, xmm2
000000014023EC88  divss   xmm5, xmm0
000000014023EC8C  jb      loc_14023ED1A
000000014023EC92  movss   [rsp+68h+arg_10], xmm3
000000014023EC9B  mov     eax, [rsp+68h+arg_10]
000000014023ECA2  and     eax, 0FFFF0000h
000000014023ECA7  mov     [rsp+68h+arg_10], eax
000000014023ECAE  movss   xmm4, [rsp+68h+arg_10]
000000014023ECB7  movss   xmm3, [rsp+68h+arg_0]
000000014023ECBD  movaps  xmm0, xmm4
000000014023ECC0  movss   xmm2, [rsp+68h+arg_8]
000000014023ECC6  movaps  xmm1, xmm4
000000014023ECC9  mulss   xmm0, xmm4
000000014023ECCD  addss   xmm1, xmm3
000000014023ECD1  mulss   xmm3, cs:dword_1402785B8
000000014023ECD9  mulss   xmm4, cs:dword_1402785B8
000000014023ECE1  subss   xmm2, xmm0
000000014023ECE5  movss   xmm0, cs:dword_140285F0C
000000014023ECED  mulss   xmm3, xmm5
000000014023ECF1  movss   xmm5, cs:dword_140285F1C
000000014023ECF9  divss   xmm2, xmm1
000000014023ECFD  addss   xmm2, xmm2
000000014023ED01  subss   xmm0, xmm2
000000014023ED05  subss   xmm3, xmm0
000000014023ED09  movaps  xmm0, xmm5
000000014023ED0C  subss   xmm0, xmm4
000000014023ED10  subss   xmm3, xmm0
000000014023ED14  subss   xmm5, xmm3
000000014023ED18  jmp     short loc_14023ED22
000000014023ED1A  mulss   xmm5, xmm6
000000014023ED1E  addss   xmm5, xmm6
000000014023ED22  test    ecx, ecx
000000014023ED24  jns     short loc_14023ED2D
000000014023ED26  xorps   xmm5, cs:xmmword_140279870
000000014023ED2D  movaps  xmm0, xmm5
000000014023ED30  movaps  xmm6, [rsp+68h+var_18]
000000014023ED35  add     rsp, 68h
000000014023ED39  retn
