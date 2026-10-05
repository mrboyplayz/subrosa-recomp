; 0x1400a63e0: sub_1400A63E0
; Decompilation failed: call analysis failed
00000001400A63E0  mov     [rsp+8], rbx
00000001400A63E5  mov     [rsp+10h], rsi
00000001400A63EA  push    rdi
00000001400A63EB  mov     eax, 1040h
00000001400A63F0  call    sub_1401F89D0
00000001400A63F5  sub     rsp, rax
00000001400A63F8  mov     rax, cs:__security_cookie
00000001400A63FF  xor     rax, rsp
00000001400A6402  mov     [rsp+1030h], rax
00000001400A640A  mov     byte ptr cs:dword_140404A6C+13D4C7D4h, 0
00000001400A6411  call    140198E51h
00000001400A6416  lea     rsi, dword_140404A6C+13D4C7D4h
00000001400A641D  mov     r8, rax
00000001400A6420  lea     rcx, [rsi-1]
00000001400A6424  cmp     byte ptr [rcx+1], 0
00000001400A6428  lea     rcx, [rcx+1]
00000001400A642C  jnz     short loc_1400A6424
00000001400A642E  xor     edx, edx
00000001400A6430  movzx   eax, byte ptr [r8+rdx]
00000001400A6435  mov     [rcx+rdx], al
00000001400A6438  lea     rdx, [rdx+1]
00000001400A643C  test    al, al
00000001400A643E  jnz     short loc_1400A6430
00000001400A6440  lea     rax, [rsi-1]
00000001400A6444  cmp     byte ptr [rax+1], 0
00000001400A6448  lea     rax, [rax+1]
00000001400A644C  jnz     short loc_1400A6444
00000001400A644E  movsd   xmm0, cs:qword_140276940
00000001400A6456  lea     rcx, [rsi-1]
00000001400A645A  movsd   qword ptr [rax], xmm0
00000001400A645E  xchg    ax, ax
00000001400A6460  cmp     byte ptr [rcx+1], 0
00000001400A6464  lea     rcx, [rcx+1]
00000001400A6468  jnz     short loc_1400A6460
00000001400A646A  movzx   eax, cs:word_140276948
00000001400A6471  mov     [rcx], ax
00000001400A6474  movzx   eax, cs:byte_14027694A
00000001400A647B  mov     [rcx+2], al
00000001400A647E  mov     ecx, 1F00h
00000001400A6483  call    cs:qword_140302FA8
00000001400A6489  mov     ecx, 1F01h
00000001400A648E  mov     rdi, rax
00000001400A6491  call    cs:qword_140302FA8
00000001400A6497  mov     ecx, 1F02h
00000001400A649C  mov     rbx, rax
00000001400A649F  call    cs:qword_140302FA8
00000001400A64A5  mov     r9, rbx
00000001400A64A8  lea     rdx, cs:140276950h; "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERS"...
00000001400A64AF  lea     rcx, [rsp+30h]
00000001400A64B4  mov     [rsp+20h], rax
00000001400A64B9  mov     r8, rdi
00000001400A64BC  call    sub_140158AB0
00000001400A64C1  lea     rcx, [rsi-1]
00000001400A64C5  cmp     byte ptr [rcx+1], 0
00000001400A64C9  lea     rcx, [rcx+1]
00000001400A64CD  jnz     short loc_1400A64C5
00000001400A64CF  lea     r8, [rsp+30h]
00000001400A64D4  xor     edx, edx
00000001400A64D6  nop     word ptr [rax+rax+00000000h]
00000001400A64E0  movzx   eax, byte ptr [r8+rdx]
00000001400A64E5  mov     [rcx+rdx], al
00000001400A64E8  lea     rdx, [rdx+1]
00000001400A64EC  test    al, al
00000001400A64EE  jnz     short loc_1400A64E0
00000001400A64F0  lea     rcx, [rsi-1]
00000001400A64F4  cmp     byte ptr [rcx+1], 0
00000001400A64F8  lea     rcx, [rcx+1]
00000001400A64FC  jnz     short loc_1400A64F4
00000001400A64FE  movzx   eax, cs:word_140276980
00000001400A6505  mov     [rcx], ax
00000001400A6508  call    140198EB1h
00000001400A650D  mov     r8d, eax
00000001400A6510  lea     rdx, cs:140276988h; "RAM: %d MB\n"
00000001400A6517  lea     rcx, [rsp+30h]
00000001400A651C  call    sub_140158AB0
00000001400A6521  lea     rcx, [rsi-1]
00000001400A6525  cmp     byte ptr [rcx+1], 0
00000001400A6529  lea     rcx, [rcx+1]
00000001400A652D  jnz     short loc_1400A6525
00000001400A652F  lea     r8, [rsp+30h]
00000001400A6534  xor     edx, edx
00000001400A6536  nop     word ptr [rax+rax+00000000h]
00000001400A6540  movzx   eax, byte ptr [r8+rdx]
00000001400A6545  mov     [rcx+rdx], al
00000001400A6548  lea     rdx, [rdx+1]
00000001400A654C  test    al, al
00000001400A654E  jnz     short loc_1400A6540
00000001400A6550  call    140198EABh
00000001400A6555  test    eax, eax
00000001400A6557  jz      short loc_1400A657D
00000001400A6559  lea     rdx, [rsi-1]
00000001400A655D  nop     dword ptr [rax]
00000001400A6560  cmp     byte ptr [rdx+1], 0
00000001400A6564  lea     rdx, [rdx+1]
00000001400A6568  jnz     short loc_1400A6560
00000001400A656A  mov     eax, cs:dword_140276994
00000001400A6570  mov     [rdx], eax
00000001400A6572  movzx   eax, cs:word_140276998
00000001400A6579  mov     [rdx+4], ax
00000001400A657D  mov     rcx, rsi
00000001400A6580  call    140198EA5h
00000001400A6585  mov     rcx, [rsp+1030h]
00000001400A658D  xor     rcx, rsp
00000001400A6590  call    1401F8B20h
00000001400A6595  lea     r11, [rsp+1040h]
00000001400A659D  mov     rbx, [r11+10h]
00000001400A65A1  mov     rsi, [r11+18h]
00000001400A65A5  mov     rsp, r11
00000001400A65A8  pop     rdi
00000001400A65A9  retn
