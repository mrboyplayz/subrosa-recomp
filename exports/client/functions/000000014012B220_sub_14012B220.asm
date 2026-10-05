; 0x14012b220: sub_14012B220
; Decompilation failed: call analysis failed
000000014012B220  mov     [rsp+arg_0], rbx
000000014012B225  mov     [rsp+arg_8], rsi
000000014012B22A  push    rdi
000000014012B22B  sub     rsp, 30h
000000014012B22F  movaps  [rsp+38h+var_18], xmm6
000000014012B234  lea     rdi, dword_140404A6C+457CCE0h
000000014012B23B  movss   xmm6, cs:dword_1402780C0
000000014012B243  lea     rbx, dword_140404A6C+457CC90h
000000014012B24A  mov     esi, 2000h
000000014012B24F  nop
000000014012B250  cmp     dword ptr [rbx-1Ch], 0
000000014012B254  jz      short loc_14012B2A4
000000014012B256  cmp     dword ptr [rbx-14h], 0
000000014012B25A  jnz     short loc_14012B2A4
000000014012B25C  movss   xmm1, dword ptr [rbx+0Ch]
000000014012B261  lea     r9, [rdi+24h]
000000014012B265  subss   xmm1, xmm6
000000014012B269  mov     r8, rdi
000000014012B26C  lea     rdx, [rdi-0Ch]
000000014012B270  lea     rcx, [rdi-30h]
000000014012B274  movss   dword ptr [rbx+0Ch], xmm1
000000014012B279  movss   xmm0, dword ptr [rbx+8]
000000014012B27E  addss   xmm0, dword ptr [rbx-4]
000000014012B283  movss   dword ptr [rbx-4], xmm0
000000014012B288  addss   xmm1, dword ptr [rbx]
000000014012B28C  movss   dword ptr [rbx], xmm1
000000014012B290  movss   xmm0, dword ptr [rbx+10h]
000000014012B295  addss   xmm0, dword ptr [rbx+4]
000000014012B29A  movss   dword ptr [rbx+4], xmm0
000000014012B29F  call    sub_14012B2D0
000000014012B2A4  add     rdi, 0BCh
000000014012B2AB  add     rbx, 0BCh
000000014012B2B2  sub     rsi, 1
000000014012B2B6  jnz     short loc_14012B250
000000014012B2B8  mov     rbx, [rsp+38h+arg_0]
000000014012B2BD  mov     rsi, [rsp+38h+arg_8]
000000014012B2C2  movaps  xmm6, [rsp+38h+var_18]
000000014012B2C7  add     rsp, 30h
000000014012B2CB  pop     rdi
000000014012B2CC  retn
