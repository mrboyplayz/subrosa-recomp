; 0x14026585c: ??$common_sopen_dispatch@D@@YAHQEBDHHHQEAHH@Z
; Decompilation failed: call analysis failed
000000014026585C  mov     [rsp+arg_0], rbx
0000000140265861  push    rdi
0000000140265862  sub     rsp, 50h
0000000140265866  mov     rbx, [rsp+58h+arg_20]
000000014026586E  test    rbx, rbx
0000000140265871  jnz     short loc_140265891
0000000140265873  call    _errno
0000000140265878  mov     ebx, 16h
000000014026587D  mov     [rax], ebx
000000014026587F  call    sub_14024CF6C
0000000140265884  mov     eax, ebx
0000000140265886  mov     rbx, [rsp+58h+arg_0]
000000014026588B  add     rsp, 50h
000000014026588F  pop     rdi
0000000140265890  retn
0000000140265891  or      dword ptr [rbx], 0FFFFFFFFh
0000000140265894  test    rcx, rcx
0000000140265897  jz      short loc_140265873
0000000140265899  mov     eax, [rsp+58h+arg_28]
00000001402658A0  test    eax, eax
00000001402658A2  jz      short loc_1402658AD
00000001402658A4  test    r9d, 0FFFFFE7Fh
00000001402658AB  jnz     short loc_140265873
00000001402658AD  and     [rsp+58h+var_18], 0
00000001402658B2  and     [rsp+58h+var_14], 0
00000001402658B7  mov     [rsp+58h+var_28], eax
00000001402658BB  mov     [rsp+58h+var_30], r9d
00000001402658C0  mov     [rsp+58h+var_38], r8d
00000001402658C5  mov     r9d, edx
00000001402658C8  mov     r8, rcx
00000001402658CB  mov     rdx, rbx
00000001402658CE  lea     rcx, [rsp+58h+var_18]
00000001402658D3  call    _sopen_nolock
00000001402658D8  mov     edi, eax
00000001402658DA  mov     [rsp+58h+var_14], eax
00000001402658DE  cmp     [rsp+58h+var_18], 0
00000001402658E3  jz      short loc_140265911
00000001402658E5  test    edi, edi
00000001402658E7  jz      short loc_14026590A
00000001402658E9  movsxd  rcx, dword ptr [rbx]
00000001402658EC  mov     rax, rcx
00000001402658EF  sar     rax, 6
00000001402658F3  lea     rdx, dword_140404A6C+48BA8E4h
00000001402658FA  and     ecx, 3Fh
00000001402658FD  lea     rcx, [rcx+rcx*8]
0000000140265901  mov     rax, [rdx+rax*8]
0000000140265905  and     byte ptr [rax+rcx*8+38h], 0FEh
000000014026590A  mov     ecx, [rbx]
000000014026590C  call    sub_140261150
0000000140265911  test    edi, edi
0000000140265913  jz      short loc_140265918
0000000140265915  or      dword ptr [rbx], 0FFFFFFFFh
0000000140265918  mov     eax, edi
000000014026591A  jmp     loc_140265886
