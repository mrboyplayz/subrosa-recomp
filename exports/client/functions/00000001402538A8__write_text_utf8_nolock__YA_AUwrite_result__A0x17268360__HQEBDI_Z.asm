; 0x1402538a8: ?write_text_utf8_nolock@@YA?AUwrite_result@?A0x17268360@@HQEBDI@Z
; Decompilation failed: call analysis failed
00000001402538A8  mov     [rsp+8], rbx
00000001402538AD  mov     qword ptr [rsp+arg_10_3], rbp
00000001402538B2  push    rsi
00000001402538B3  push    rdi
00000001402538B4  push    r12
00000001402538B6  push    r14
00000001402538B8  push    r15
00000001402538BA  mov     eax, 1470h
00000001402538BF  call    sub_1401F89D0
00000001402538C4  sub     rsp, rax
00000001402538C7  mov     rax, cs:__security_cookie
00000001402538CE  xor     rax, rsp
00000001402538D1  mov     qword ptr [rsp+28h+arg_6D0_3+0D60h], rax
00000001402538D9  movsxd  r10, edx
00000001402538DC  mov     rbx, rcx
00000001402538DF  mov     rax, r10
00000001402538E2  mov     r14d, r9d
00000001402538E5  sar     rax, 6
00000001402538E9  lea     rcx, dword_140404A6C+48BA8E4h
00000001402538F0  and     r10d, 3Fh
00000001402538F4  add     r14, r8
00000001402538F7  mov     r15, r8
00000001402538FA  mov     rdi, r8
00000001402538FD  mov     rax, [rcx+rax*8]
0000000140253901  lea     rdx, [r10+r10*8]
0000000140253905  mov     r12, [rax+rdx*8+28h]
000000014025390A  xor     eax, eax
000000014025390C  mov     [rbx], rax
000000014025390F  cmp     r8, r14
0000000140253912  mov     [rbx+8], eax
0000000140253915  jnb     loc_1402539E9
000000014025391B  lea     rax, [rsp+28h+arg_10_3+10h]
0000000140253920  cmp     rdi, r14
0000000140253923  jnb     short loc_140253952
0000000140253925  movzx   ecx, word ptr [rdi]
0000000140253928  add     rdi, 2
000000014025392C  cmp     cx, 0Ah
0000000140253930  jnz     short loc_14025393E
0000000140253932  mov     edx, 0Dh
0000000140253937  mov     [rax], dx
000000014025393A  add     rax, 2
000000014025393E  mov     [rax], cx
0000000140253941  add     rax, 2
0000000140253945  lea     rcx, [rsp+6F8h]
000000014025394D  cmp     rax, rcx
0000000140253950  jb      short loc_140253920
0000000140253952  and     qword ptr [rsp+38h], 0
0000000140253958  lea     rcx, [rsp+28h+arg_10_3+10h]
000000014025395D  and     qword ptr [rsp+30h], 0
0000000140253963  lea     r8, [rsp+28h+arg_10_3+10h]
0000000140253968  sub     rax, rcx
000000014025396B  mov     dword ptr [rsp+28h], 0D55h
0000000140253973  lea     rcx, [rsp+28h+arg_6D0_3]
000000014025397B  sar     rax, 1
000000014025397E  mov     [rsp+20h], rcx; lpOverlapped
0000000140253983  mov     r9d, eax
0000000140253986  mov     ecx, 0FDE9h
000000014025398B  xor     edx, edx
000000014025398D  call    sub_140258A84
0000000140253992  mov     ebp, eax
0000000140253994  test    eax, eax
0000000140253996  jz      short loc_1402539E1
0000000140253998  xor     esi, esi
000000014025399A  test    eax, eax
000000014025399C  jz      short loc_1402539D1
000000014025399E  and     qword ptr [rsp+20h], 0
00000001402539A4  lea     rdx, [rsp+28h+arg_6D0_3]
00000001402539AC  mov     ecx, esi
00000001402539AE  lea     r9, [rsp+28h+arg_10_3]; lpNumberOfBytesWritten
00000001402539B3  mov     r8d, ebp
00000001402539B6  add     rdx, rcx; lpBuffer
00000001402539B9  mov     rcx, r12; hFile
00000001402539BC  sub     r8d, esi; nNumberOfBytesToWrite
00000001402539BF  call    cs:__imp_WriteFile
00000001402539C5  test    eax, eax
00000001402539C7  jz      short loc_1402539E1
00000001402539C9  add     esi, dword ptr [rsp+28h+arg_10_3]
00000001402539CD  cmp     esi, ebp
00000001402539CF  jb      short loc_14025399E
00000001402539D1  mov     eax, edi
00000001402539D3  sub     eax, r15d
00000001402539D6  mov     [rbx+4], eax
00000001402539D9  cmp     rdi, r14
00000001402539DC  jmp     loc_140253915
00000001402539E1  call    cs:__imp_GetLastError
00000001402539E7  mov     [rbx], eax
00000001402539E9  mov     rax, rbx
00000001402539EC  mov     rcx, qword ptr [rsp+28h+arg_6D0_3+0D60h]
00000001402539F4  xor     rcx, rsp
00000001402539F7  call    1401F8B20h
00000001402539FC  lea     r11, [rsp+28h+arg_6D0_3+0D70h]
0000000140253A04  mov     rbx, [r11+30h]
0000000140253A08  mov     rbp, [r11+40h]
0000000140253A0C  mov     rsp, r11
0000000140253A0F  pop     r15
0000000140253A11  pop     r14
0000000140253A13  pop     r12
0000000140253A15  pop     rdi
0000000140253A16  pop     rsi
0000000140253A17  retn
