; 0x140118b70: sub_140118B70
; Decompilation failed: call analysis failed
0000000140118B70  mov     [rsp+arg_0], rbx
0000000140118B75  mov     [rsp+arg_8], rbp
0000000140118B7A  mov     [rsp+arg_10], rsi
0000000140118B7F  push    rdi
0000000140118B80  sub     rsp, 30h
0000000140118B84  movsxd  rbx, ecx
0000000140118B87  lea     rsi, cs:140000000h
0000000140118B8E  mov     ecx, cs:dword_140404A6C+42E981B8h
0000000140118B94  mov     ebp, 1
0000000140118B99  imul    rdi, rbx, 3834h
0000000140118BA0  mov     edx, [rdi+rsi+11620DC4h]
0000000140118BA7  lea     eax, [rdx-1]
0000000140118BAA  cmp     eax, ebp
0000000140118BAC  cmovbe  ecx, ebp
0000000140118BAF  mov     cs:dword_140404A6C+42E981B8h, ecx
0000000140118BB5  test    edx, edx
0000000140118BB7  jnz     short loc_140118BC8
0000000140118BB9  xor     r8d, r8d
0000000140118BBC  mov     cs:dword_140404A6C+42E981B8h, r8d
0000000140118BC3  jmp     loc_140119038
0000000140118BC8  test    ecx, ecx
0000000140118BCA  jz      loc_140119038
0000000140118BD0  movaps  [rsp+38h+var_18], xmm6
0000000140118BD5  movss   xmm6, cs:dword_1402787D4
0000000140118BDD  cmp     edx, ebp
0000000140118BDF  jnz     loc_140118C95
0000000140118BE5  movss   xmm0, cs:dword_1402788C4
0000000140118BED  movaps  xmm1, xmm6
0000000140118BF0  call    sub_1400755F0
0000000140118BF5  cmp     dword ptr [rdi+rsi+11620CE4h], 5
0000000140118BFD  movss   xmm0, cs:dword_140278920
0000000140118C05  movss   xmm1, cs:dword_1402788F4
0000000140118C0D  movss   cs:dword_140404A6C+10B5C66Ch, xmm0
0000000140118C15  movss   cs:dword_140404A6C+10B5C670h, xmm1
0000000140118C1D  ja      short loc_140118C51
0000000140118C1F  mov     eax, cs:dword_140404A6C+10B5C690h
0000000140118C25  lea     rcx, cs:140274AF0h; "Respawn at Base"
0000000140118C2C  cmp     dword ptr [rdi+rsi+11620CF8h], 0
0000000140118C34  cmovg   eax, ebp
0000000140118C37  mov     cs:dword_140404A6C+10B5C690h, eax
0000000140118C3D  call    ui_button_candidate; Immediate-mode button helper. Widget type code 0; returns true on active click/press interaction.
0000000140118C42  test    eax, eax
0000000140118C44  jz      short loc_140118C51
0000000140118C46  mov     dword ptr [rdi+rsi+11620DD0h], 2
0000000140118C51  mov     eax, cs:dword_140404A6C+10B5C690h
0000000140118C57  lea     rcx, cs:140274B00h; "Enter City"
0000000140118C5E  cmp     dword ptr [rdi+rsi+11620CF8h], 0
0000000140118C66  mov     cs:dword_140404A6C+10B5C688h, 1Eh
0000000140118C70  cmovg   eax, ebp
0000000140118C73  mov     cs:dword_140404A6C+10B5C690h, eax
0000000140118C79  call    ui_button_candidate; Immediate-mode button helper. Widget type code 0; returns true on active click/press interaction.
0000000140118C7E  test    eax, eax
0000000140118C80  jz      short loc_140118C89
0000000140118C82  mov     [rdi+rsi+11620DD0h], ebp
0000000140118C89  call    sub_1400753C0
0000000140118C8E  mov     edx, [rdi+rsi+11620DC4h]
0000000140118C95  cmp     edx, 0Eh
0000000140118C98  jb      short loc_140118CC2
0000000140118C9A  cmp     edx, 1Ah
0000000140118C9D  ja      loc_140119033
0000000140118CA3  cmp     cs:dword_140404A6C+43ABB040h, 4
0000000140118CAA  mov     ecx, ebx
0000000140118CAC  jnz     short loc_140118CB8
0000000140118CAE  call    sub_140119F70
0000000140118CB3  jmp     loc_140119033
0000000140118CB8  call    sub_140119220
0000000140118CBD  jmp     loc_140119033
0000000140118CC2  cmp     edx, 2
0000000140118CC5  jnz     short loc_140118CD3
0000000140118CC7  mov     ecx, ebx
0000000140118CC9  call    sub_14011ACC0
0000000140118CCE  jmp     loc_140119033
0000000140118CD3  cmp     edx, 9
0000000140118CD6  jnz     loc_140118D98
0000000140118CDC  movsxd  rax, cs:dword_140404A6C+10C3DE28h
0000000140118CE3  movss   xmm0, cs:dword_140278688
0000000140118CEB  movss   xmm1, cs:dword_140278864
0000000140118CF3  movss   cs:dword_140404A6C+10B5C66Ch, xmm0
0000000140118CFB  movss   cs:dword_140404A6C+10B5C670h, xmm1
0000000140118D03  cmp     eax, 10h
0000000140118D06  jge     short loc_140118D37
0000000140118D08  movss   xmm0, cs:dword_140404A6C+10B5C674h
0000000140118D10  movss   (rva dword_140404A6C+10C3DE2Ch)[rsi+rax*8], xmm0
0000000140118D19  movsxd  rax, cs:dword_140404A6C+10C3DE28h
0000000140118D20  movss   xmm0, cs:dword_140404A6C+10B5C678h
0000000140118D28  movss   (rva dword_140404A6C+10C3DE30h)[rsi+rax*8], xmm0
0000000140118D31  inc     cs:dword_140404A6C+10C3DE28h
0000000140118D37  movss   xmm0, cs:dword_1402788CC
0000000140118D3F  lea     rbx, (rva dword_140404A6C+1121C364h)[rsi]
0000000140118D46  add     rbx, rdi
0000000140118D49  movss   cs:dword_140404A6C+10B5C674h, xmm0
0000000140118D51  mov     rdx, rbx
0000000140118D54  mov     cs:dword_140404A6C+10B5C678h, 42000000h
0000000140118D5E  mov     r8d, ebp
0000000140118D61  lea     rcx, cs:140274CB4h; "Buy"
0000000140118D68  call    ui_select_value_candidate
0000000140118D6D  mov     r8d, 2
0000000140118D73  lea     rcx, cs:140274CB8h; "Sell"
0000000140118D7A  mov     rdx, rbx
0000000140118D7D  call    ui_select_value_candidate
0000000140118D82  xor     r8d, r8d
0000000140118D85  lea     rdx, dword_140404A6C+42E981B8h
0000000140118D8C  lea     rcx, cs:140274B0Ch; "Done"
0000000140118D93  jmp     loc_140118FE4
0000000140118D98  cmp     edx, 0Ah
0000000140118D9B  jnz     short loc_140118DA9
0000000140118D9D  mov     ecx, ebx
0000000140118D9F  call    sub_14011A330
0000000140118DA4  jmp     loc_140119033
0000000140118DA9  cmp     edx, 0Bh
0000000140118DAC  jnz     loc_140118E91
0000000140118DB2  cmp     ebx, 0FFFFFFFFh
0000000140118DB5  jz      loc_140119033
0000000140118DBB  movsxd  rbx, dword ptr [rdi+rsi+11620DC8h]
0000000140118DC3  cmp     ebx, 0FFFFFFFFh
0000000140118DC6  jz      loc_140119033
0000000140118DCC  movss   xmm0, cs:dword_140278688
0000000140118DD4  movss   xmm1, cs:dword_140278864
0000000140118DDC  movss   cs:dword_140404A6C+10B5C66Ch, xmm0
0000000140118DE4  movss   xmm0, cs:dword_1402788CC
0000000140118DEC  movss   cs:dword_140404A6C+10B5C670h, xmm1
0000000140118DF4  movaps  xmm1, xmm6
0000000140118DF7  call    sub_1400755F0
0000000140118DFC  imul    rbx, 0DB0Ch
0000000140118E03  lea     rdi, [rdi+11620DD0h]
0000000140118E0A  add     rdi, rsi
0000000140118E0D  mov     eax, [rbx+rsi+360C5638h]
0000000140118E14  cmp     eax, 3
0000000140118E17  jnz     short loc_140118E4D
0000000140118E19  mov     r8d, ebp
0000000140118E1C  lea     rcx, cs:140274D28h; "Sell Car"
0000000140118E23  mov     rdx, rdi
0000000140118E26  call    ui_select_value_candidate
0000000140118E2B  movss   xmm0, cs:dword_140404A6C+10B5C670h
0000000140118E33  mov     eax, [rbx+rsi+360C5638h]
0000000140118E3A  addss   xmm0, xmm6
0000000140118E3E  movss   cs:dword_140404A6C+10B5C670h, xmm0
0000000140118E46  cmp     eax, 3
0000000140118E49  jnz     short loc_140118E61
0000000140118E4B  jmp     short loc_140118E68
0000000140118E4D  movss   xmm0, cs:dword_140404A6C+10B5C670h
0000000140118E55  addss   xmm0, xmm6
0000000140118E59  movss   cs:dword_140404A6C+10B5C670h, xmm0
0000000140118E61  lea     rdi, dword_140404A6C+42E981B8h
0000000140118E68  xor     r8d, r8d
0000000140118E6B  lea     rdx, cs:140274D20h; "Back"
0000000140118E72  cmp     eax, 3
0000000140118E75  mov     ecx, 10h
0000000140118E7A  cmovz   r8d, ecx
0000000140118E7E  lea     rcx, cs:140274B0Ch; "Done"
0000000140118E85  cmovz   rcx, rdx
0000000140118E89  mov     rdx, rdi
0000000140118E8C  jmp     loc_140118FF8
0000000140118E91  lea     eax, [rdx-0Ch]
0000000140118E94  cmp     eax, ebp
0000000140118E96  ja      loc_140119033
0000000140118E9C  movsxd  rax, cs:dword_140404A6C+10C3DE28h
0000000140118EA3  movss   xmm0, cs:dword_140278688
0000000140118EAB  movss   xmm1, cs:dword_140278864
0000000140118EB3  movss   cs:dword_140404A6C+10B5C66Ch, xmm0
0000000140118EBB  movss   cs:dword_140404A6C+10B5C670h, xmm1
0000000140118EC3  cmp     eax, 10h
0000000140118EC6  jge     short loc_140118EF7
0000000140118EC8  movss   xmm0, cs:dword_140404A6C+10B5C674h
0000000140118ED0  movss   (rva dword_140404A6C+10C3DE2Ch)[rsi+rax*8], xmm0
0000000140118ED9  movsxd  rax, cs:dword_140404A6C+10C3DE28h
0000000140118EE0  movss   xmm0, cs:dword_140404A6C+10B5C678h
0000000140118EE8  movss   (rva dword_140404A6C+10C3DE30h)[rsi+rax*8], xmm0
0000000140118EF1  inc     cs:dword_140404A6C+10C3DE28h
0000000140118EF7  movss   xmm0, cs:dword_1402788CC
0000000140118EFF  lea     rbx, (rva dword_140404A6C+1121C364h)[rsi]
0000000140118F06  add     rbx, rdi
0000000140118F09  movss   cs:dword_140404A6C+10B5C674h, xmm0
0000000140118F11  mov     rdx, rbx
0000000140118F14  mov     cs:dword_140404A6C+10B5C678h, 42000000h
0000000140118F1E  mov     r8d, 7
0000000140118F24  lea     rcx, cs:140274D38h; "Deposit"
0000000140118F2B  call    ui_select_value_candidate
0000000140118F30  mov     r8d, ebp
0000000140118F33  lea     rcx, cs:140274D40h; "Withdrawl $5"
0000000140118F3A  mov     rdx, rbx
0000000140118F3D  call    ui_select_value_candidate
0000000140118F42  mov     r8d, 2
0000000140118F48  lea     rcx, cs:140274D50h; "Withdrawl $10"
0000000140118F4F  mov     rdx, rbx
0000000140118F52  call    ui_select_value_candidate
0000000140118F57  mov     r8d, 3
0000000140118F5D  lea     rcx, cs:140274D60h; "Withdrawl $20"
0000000140118F64  mov     rdx, rbx
0000000140118F67  call    ui_select_value_candidate
0000000140118F6C  mov     r8d, 4
0000000140118F72  lea     rcx, cs:140274D70h; "Withdrawl $50"
0000000140118F79  mov     rdx, rbx
0000000140118F7C  call    ui_select_value_candidate
0000000140118F81  mov     r8d, 5
0000000140118F87  lea     rcx, cs:140274D80h; "Withdrawl $100"
0000000140118F8E  mov     rdx, rbx
0000000140118F91  call    ui_select_value_candidate
0000000140118F96  mov     r8d, 6
0000000140118F9C  lea     rcx, cs:140274D90h; "Withdrawl $1000"
0000000140118FA3  mov     rdx, rbx
0000000140118FA6  call    ui_select_value_candidate
0000000140118FAB  mov     eax, [rdi+rsi+11620DC4h]
0000000140118FB2  lea     rdx, cs:140274D20h; "Back"
0000000140118FB9  cmp     eax, 0Ch
0000000140118FBC  lea     rdi, dword_140404A6C+42E981B8h
0000000140118FC3  mov     ecx, 10h
0000000140118FC8  cmovz   rdi, rbx
0000000140118FCC  xor     r8d, r8d
0000000140118FCF  cmp     eax, 0Ch
0000000140118FD2  cmovz   r8d, ecx
0000000140118FD6  lea     rcx, cs:140274B0Ch; "Done"
0000000140118FDD  cmovz   rcx, rdx
0000000140118FE1  mov     rdx, rdi
0000000140118FE4  movss   xmm0, cs:dword_140404A6C+10B5C670h
0000000140118FEC  addss   xmm0, xmm6
0000000140118FF0  movss   cs:dword_140404A6C+10B5C670h, xmm0
0000000140118FF8  call    ui_select_value_candidate
0000000140118FFD  mov     eax, cs:dword_140404A6C+10C3DE28h
0000000140119003  test    eax, eax
0000000140119005  jle     short loc_140119033
0000000140119007  dec     eax
0000000140119009  mov     cs:dword_140404A6C+10C3DE28h, eax
000000014011900F  cdqe
0000000140119011  movss   xmm0, (rva dword_140404A6C+10C3DE2Ch)[rsi+rax*8]
000000014011901A  movss   cs:dword_140404A6C+10B5C674h, xmm0
0000000140119022  movss   xmm0, (rva dword_140404A6C+10C3DE30h)[rsi+rax*8]
000000014011902B  movss   cs:dword_140404A6C+10B5C678h, xmm0
0000000140119033  movaps  xmm6, [rsp+38h+var_18]
0000000140119038  mov     rbx, [rsp+38h+arg_0]
000000014011903D  mov     rbp, [rsp+38h+arg_8]
0000000140119042  mov     rsi, [rsp+38h+arg_10]
0000000140119047  add     rsp, 30h
000000014011904B  pop     rdi
000000014011904C  retn
