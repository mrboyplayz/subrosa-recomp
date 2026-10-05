; 0x14020b144: sub_14020B144
; Decompilation failed: call analysis failed
000000014020B144  mov     rax, rsp
000000014020B147  mov     [rax+10h], rbx
000000014020B14B  mov     [rax+18h], rsi
000000014020B14F  movsd   qword ptr [rax+8], xmm0
000000014020B154  push    rdi
000000014020B155  sub     rsp, 40h
000000014020B159  movaps  xmmword ptr [rax-18h], xmm6
000000014020B15D  movaps  xmm6, xmm0
000000014020B160  mov     rbx, rdx
000000014020B163  test    rdx, rdx
000000014020B166  jnz     short loc_14020B180
000000014020B168  call    _errno
000000014020B16D  mov     dword ptr [rax], 16h
000000014020B173  call    sub_14024CF6C
000000014020B178  xorps   xmm0, xmm0
000000014020B17B  jmp     loc_14020B227
000000014020B180  mov     esi, 0FFC0h
000000014020B185  mov     ecx, 1F80h
000000014020B18A  mov     edx, esi
000000014020B18C  call    _ctrlfp
000000014020B191  movzx   ecx, [rsp+48h+arg_6]
000000014020B196  mov     rdi, rax
000000014020B199  mov     eax, 7FF0h
000000014020B19E  and     cx, ax
000000014020B1A1  cmp     cx, ax
000000014020B1A4  jnz     short loc_14020B1E4
000000014020B1A6  or      dword ptr [rbx], 0FFFFFFFFh
000000014020B1A9  movaps  xmm0, xmm6
000000014020B1AC  call    _sptype
000000014020B1B1  sub     eax, 1
000000014020B1B4  jz      short loc_14020B219
000000014020B1B6  sub     eax, 1
000000014020B1B9  jz      short loc_14020B219
000000014020B1BB  cmp     eax, 1
000000014020B1BE  jz      short loc_14020B219
000000014020B1C0  movaps  xmm3, xmm6
000000014020B1C3  mov     ecx, 8
000000014020B1C8  addsd   xmm3, cs:Y
000000014020B1D0  mov     edx, 17h
000000014020B1D5  mov     [rsp+48h+var_28], rdi
000000014020B1DA  movaps  xmm2, xmm6
000000014020B1DD  call    _except1
000000014020B1E2  jmp     short loc_14020B227
000000014020B1E4  ucomisd xmm6, cs:qword_1402831A8
000000014020B1EC  jp      short loc_14020B20B
000000014020B1EE  jnz     short loc_14020B20B
000000014020B1F0  movaps  xmm0, xmm6
000000014020B1F3  call    14024D0E0h
000000014020B1F8  test    eax, eax
000000014020B1FA  jz      short loc_14020B20B
000000014020B1FC  and     dword ptr [rbx], 0
000000014020B1FF  movsd   xmm3, cs:qword_140284BF0
000000014020B207  xor     ecx, ecx
000000014020B209  jmp     short loc_14020B1D0
000000014020B20B  mov     rdx, rbx
000000014020B20E  movaps  xmm0, xmm6
000000014020B211  call    _decomp
000000014020B216  movaps  xmm6, xmm0
000000014020B219  mov     rdx, rsi
000000014020B21C  mov     rcx, rdi
000000014020B21F  call    _ctrlfp
000000014020B224  movaps  xmm0, xmm6
000000014020B227  mov     rbx, [rsp+48h+arg_8]
000000014020B22C  mov     rsi, [rsp+48h+arg_10]
000000014020B231  movaps  xmm6, [rsp+48h+var_18]
000000014020B236  add     rsp, 40h
000000014020B23A  pop     rdi
000000014020B23B  retn
