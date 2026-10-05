; 0x1402656fc: ??$common_open@D@@YAHQEBDHH@Z
; Decompilation failed: call analysis failed
00000001402656FC  push    rbx
00000001402656FE  sub     rsp, 50h
0000000140265702  test    rcx, rcx
0000000140265705  jnz     short loc_140265720
0000000140265707  call    _errno
000000014026570C  mov     dword ptr [rax], 16h
0000000140265712  call    sub_14024CF6C
0000000140265717  or      eax, 0FFFFFFFFh
000000014026571A  add     rsp, 50h
000000014026571E  pop     rbx
000000014026571F  retn
0000000140265720  or      [rsp+58h+arg_0], 0FFFFFFFFh
0000000140265725  and     [rsp+58h+arg_18], 0
000000014026572A  and     [rsp+58h+var_18], 0
000000014026572F  and     [rsp+58h+var_28], 0
0000000140265734  mov     [rsp+58h+var_30], r8d
0000000140265739  mov     [rsp+58h+var_38], 40h ; '@'
0000000140265741  mov     r9d, edx
0000000140265744  mov     r8, rcx
0000000140265747  lea     rdx, [rsp+58h+arg_0]
000000014026574C  lea     rcx, [rsp+58h+arg_18]
0000000140265751  call    _sopen_nolock
0000000140265756  mov     ebx, eax
0000000140265758  mov     [rsp+58h+var_18], eax
000000014026575C  cmp     [rsp+58h+arg_18], 0
0000000140265761  jz      short loc_140265793
0000000140265763  test    ebx, ebx
0000000140265765  jz      short loc_14026578A
0000000140265767  movsxd  rcx, [rsp+58h+arg_0]
000000014026576C  mov     rax, rcx
000000014026576F  sar     rax, 6
0000000140265773  lea     rdx, dword_140404A6C+48BA8E4h
000000014026577A  and     ecx, 3Fh
000000014026577D  lea     rcx, [rcx+rcx*8]
0000000140265781  mov     rax, [rdx+rax*8]
0000000140265785  and     byte ptr [rax+rcx*8+38h], 0FEh
000000014026578A  mov     ecx, [rsp+58h+arg_0]
000000014026578E  call    sub_140261150
0000000140265793  test    ebx, ebx
0000000140265795  jz      short loc_1402657A3
0000000140265797  call    _errno
000000014026579C  mov     [rax], ebx
000000014026579E  jmp     loc_140265717
00000001402657A3  mov     eax, [rsp+58h+arg_0]
00000001402657A7  jmp     loc_14026571A
