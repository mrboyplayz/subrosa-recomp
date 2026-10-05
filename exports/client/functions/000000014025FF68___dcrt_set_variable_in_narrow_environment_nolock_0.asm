; 0x14025ff68: __dcrt_set_variable_in_narrow_environment_nolock_0
; Decompilation failed: call analysis failed
000000014025FF68  mov     [rsp+arg_10], rbx
000000014025FF6D  mov     [rsp+arg_8], edx
000000014025FF71  push    rbp
000000014025FF72  push    rsi
000000014025FF73  push    rdi
000000014025FF74  push    r12
000000014025FF76  push    r13
000000014025FF78  push    r14
000000014025FF7A  push    r15
000000014025FF7C  sub     rsp, 30h
000000014025FF80  xor     esi, esi
000000014025FF82  mov     ebx, edx
000000014025FF84  mov     r15, rcx
000000014025FF87  test    rcx, rcx
000000014025FF8A  jnz     short loc_14025FFA0
000000014025FF8C  call    _errno
000000014025FF91  mov     dword ptr [rax], 16h
000000014025FF97  or      rax, 0FFFFFFFFFFFFFFFFh
000000014025FF9B  jmp     loc_14026025B
000000014025FFA0  mov     edx, 3Dh ; '='
000000014025FFA5  mov     rdi, r15
000000014025FFA8  call    14026CE7Ch
000000014025FFAD  mov     r13, rax
000000014025FFB0  test    rax, rax
000000014025FFB3  jz      loc_14026023A
000000014025FFB9  cmp     rax, r15
000000014025FFBC  jz      loc_14026023A
000000014025FFC2  mov     r14, qword ptr cs:dword_140404A6C+48BA074h
000000014025FFC9  cmp     r14, qword ptr cs:dword_140404A6C+48BA08Ch
000000014025FFD0  mov     bpl, [rax+1]
000000014025FFD4  mov     [rsp+68h+arg_0], bpl
000000014025FFD9  jnz     short loc_14025FFED
000000014025FFDB  mov     rcx, r14
000000014025FFDE  call    ??$copy_environment@D@@YAPEAPEADQEAPEAD@Z; copy_environment<char>(char * * const)
000000014025FFE3  mov     r14, rax
000000014025FFE6  mov     qword ptr cs:dword_140404A6C+48BA074h, rax
000000014025FFED  mov     r12d, 1
000000014025FFF3  test    r14, r14
000000014025FFF6  jnz     loc_1402600B1
000000014025FFFC  test    ebx, ebx
000000014025FFFE  jz      short loc_14026003F
0000000140260000  cmp     qword ptr cs:dword_140404A6C+48BA07Ch, rsi
0000000140260007  jz      short loc_14026003F
0000000140260009  call    unknown_libname_764; Microsoft VisualC 64bit universal runtime
000000014026000E  test    rax, rax
0000000140260011  jz      loc_14026023A
0000000140260017  mov     r14, qword ptr cs:dword_140404A6C+48BA074h
000000014026001E  cmp     r14, qword ptr cs:dword_140404A6C+48BA08Ch
0000000140260025  jnz     loc_1402600AC
000000014026002B  mov     rcx, r14
000000014026002E  call    ??$copy_environment@D@@YAPEAPEADQEAPEAD@Z; copy_environment<char>(char * * const)
0000000140260033  mov     r14, rax
0000000140260036  mov     qword ptr cs:dword_140404A6C+48BA074h, rax
000000014026003D  jmp     short loc_1402600AC
000000014026003F  test    bpl, bpl
0000000140260042  jz      loc_140260249
0000000140260048  mov     edx, 8; Size
000000014026004D  mov     rcx, r12; Count
0000000140260050  call    _calloc_base
0000000140260055  xor     ecx, ecx; Block
0000000140260057  mov     qword ptr cs:dword_140404A6C+48BA074h, rax
000000014026005E  call    _free_base
0000000140260063  mov     r14, qword ptr cs:dword_140404A6C+48BA074h
000000014026006A  test    r14, r14
000000014026006D  jnz     short loc_140260078
000000014026006F  or      rbp, 0FFFFFFFFFFFFFFFFh
0000000140260073  jmp     loc_14026024B
0000000140260078  cmp     qword ptr cs:dword_140404A6C+48BA07Ch, rsi
000000014026007F  jnz     short loc_1402600AC
0000000140260081  mov     edx, 8; Size
0000000140260086  mov     rcx, r12; Count
0000000140260089  call    _calloc_base
000000014026008E  xor     ecx, ecx; Block
0000000140260090  mov     qword ptr cs:dword_140404A6C+48BA07Ch, rax
0000000140260097  call    _free_base
000000014026009C  cmp     qword ptr cs:dword_140404A6C+48BA07Ch, rsi
00000001402600A3  jz      short loc_14026006F
00000001402600A5  mov     r14, qword ptr cs:dword_140404A6C+48BA074h
00000001402600AC  test    r14, r14
00000001402600AF  jz      short loc_14026006F
00000001402600B1  mov     rax, [r14]
00000001402600B4  mov     r12, r13
00000001402600B7  sub     r12, r15
00000001402600BA  mov     rbx, r14
00000001402600BD  test    rax, rax
00000001402600C0  jz      short loc_1402600F6
00000001402600C2  mov     r8, r12; MaxCount
00000001402600C5  mov     rdx, rax; String2
00000001402600C8  mov     rcx, r15; String1
00000001402600CB  call    _strnicoll
00000001402600D0  test    eax, eax
00000001402600D2  jnz     short loc_1402600E4
00000001402600D4  mov     rax, [rbx]
00000001402600D7  cmp     byte ptr [r12+rax], 3Dh ; '='
00000001402600DC  jz      short loc_1402600ED
00000001402600DE  cmp     [r12+rax], sil
00000001402600E2  jz      short loc_1402600ED
00000001402600E4  add     rbx, 8
00000001402600E8  mov     rax, [rbx]
00000001402600EB  jmp     short loc_1402600BD
00000001402600ED  sub     rbx, r14
00000001402600F0  sar     rbx, 3
00000001402600F4  jmp     short loc_140260100
00000001402600F6  sub     rbx, r14
00000001402600F9  sar     rbx, 3
00000001402600FD  neg     rbx
0000000140260100  test    rbx, rbx
0000000140260103  js      short loc_14026015C
0000000140260105  cmp     [r14], rsi
0000000140260108  jz      short loc_14026015C
000000014026010A  mov     rcx, [r14+rbx*8]; Block
000000014026010E  call    _free_base
0000000140260113  test    bpl, bpl
0000000140260116  jz      short loc_14026012D
0000000140260118  mov     [r14+rbx*8], r15
000000014026011C  jmp     loc_1402601B6
0000000140260121  mov     rax, [r14+rbx*8+8]
0000000140260126  mov     [r14+rbx*8], rax
000000014026012A  inc     rbx
000000014026012D  cmp     [r14+rbx*8], rsi
0000000140260131  jnz     short loc_140260121
0000000140260133  mov     r8d, 8; Size
0000000140260139  mov     rdx, rbx; Count
000000014026013C  mov     rcx, r14; Block
000000014026013F  call    _recalloc_base
0000000140260144  xor     ecx, ecx; Block
0000000140260146  mov     rbx, rax
0000000140260149  call    _free_base
000000014026014E  test    rbx, rbx
0000000140260151  jz      short loc_1402601B9
0000000140260153  mov     qword ptr cs:dword_140404A6C+48BA074h, rbx
000000014026015A  jmp     short loc_1402601B9
000000014026015C  test    bpl, bpl
000000014026015F  jz      loc_14026024D
0000000140260165  neg     rbx
0000000140260168  lea     rdx, [rbx+2]; Count
000000014026016C  cmp     rdx, rbx
000000014026016F  jnb     short loc_14026017A
0000000140260171  or      rbp, 0FFFFFFFFFFFFFFFFh
0000000140260175  jmp     loc_14026024F
000000014026017A  mov     rax, 1FFFFFFFFFFFFFFFh
0000000140260184  cmp     rdx, rax
0000000140260187  jnb     short loc_140260171
0000000140260189  mov     r8d, 8; Size
000000014026018F  mov     rcx, r14; Block
0000000140260192  call    _recalloc_base
0000000140260197  xor     ecx, ecx; Block
0000000140260199  mov     r14, rax
000000014026019C  call    _free_base
00000001402601A1  test    r14, r14
00000001402601A4  jz      short loc_140260171
00000001402601A6  mov     [r14+rbx*8], r15
00000001402601AA  mov     [r14+rbx*8+8], rsi
00000001402601AF  mov     qword ptr cs:dword_140404A6C+48BA074h, r14
00000001402601B6  mov     rdi, rsi
00000001402601B9  cmp     [rsp+68h+arg_8], esi
00000001402601BD  jz      loc_140260251
00000001402601C3  or      rbp, 0FFFFFFFFFFFFFFFFh
00000001402601C7  mov     r14, rbp
00000001402601CA  inc     r14
00000001402601CD  cmp     [r15+r14], sil
00000001402601D1  jnz     short loc_1402601CA
00000001402601D3  mov     edx, 1; Size
00000001402601D8  lea     rcx, [r14+2]; Count
00000001402601DC  call    _calloc_base
00000001402601E1  mov     rbx, rax
00000001402601E4  test    rax, rax
00000001402601E7  jz      short loc_140260230
00000001402601E9  mov     r8, r15; Source
00000001402601EC  lea     rdx, [r14+2]; SizeInBytes
00000001402601F0  mov     rcx, rax; Destination
00000001402601F3  call    strcpy_s
00000001402601F8  test    eax, eax
00000001402601FA  jnz     short loc_140260273
00000001402601FC  mov     rax, rbx
00000001402601FF  lea     rcx, [r13+1]
0000000140260203  sub     rax, r15
0000000140260206  add     rcx, rax
0000000140260209  neg     [rsp+68h+arg_0]
000000014026020D  sbb     rdx, rdx
0000000140260210  and     rdx, rcx
0000000140260213  mov     [rcx-1], sil
0000000140260217  mov     rcx, rbx
000000014026021A  call    __acrt_SetEnvironmentVariableA
000000014026021F  test    eax, eax
0000000140260221  jnz     short loc_140260230
0000000140260223  call    _errno
0000000140260228  mov     esi, ebp
000000014026022A  mov     dword ptr [rax], 2Ah ; '*'
0000000140260230  mov     rcx, rbx; Block
0000000140260233  call    _free_base
0000000140260238  jmp     short loc_140260251
000000014026023A  call    _errno
000000014026023F  or      rsi, 0FFFFFFFFFFFFFFFFh
0000000140260243  mov     dword ptr [rax], 16h
0000000140260249  mov     ebp, esi
000000014026024B  mov     esi, ebp
000000014026024D  mov     ebp, esi
000000014026024F  mov     esi, ebp
0000000140260251  mov     rcx, rdi; Block
0000000140260254  call    _free_base
0000000140260259  mov     eax, esi
000000014026025B  mov     rbx, [rsp+68h+arg_10]
0000000140260263  add     rsp, 30h
0000000140260267  pop     r15
0000000140260269  pop     r14
000000014026026B  pop     r13
000000014026026D  pop     r12
000000014026026F  pop     rdi
0000000140260270  pop     rsi
0000000140260271  pop     rbp
0000000140260272  retn
0000000140260273  xor     r9d, r9d
0000000140260276  mov     qword ptr [rsp+68h+Reserved], rsi
000000014026027B  xor     r8d, r8d
000000014026027E  xor     edx, edx
0000000140260280  xor     ecx, ecx
0000000140260282  call    sub_14024CFBC
0000000140260287  int     3; Trap to Debugger
