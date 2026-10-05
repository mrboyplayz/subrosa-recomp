; 0x140167d10: sub_140167D10
; Decompilation failed: call analysis failed
0000000140167D10  mov     [rsp+10h], rbx
0000000140167D15  mov     [rsp+18h], rsi
0000000140167D1A  mov     [rsp+20h], rdi
0000000140167D1F  push    rbp
0000000140167D20  push    r12
0000000140167D22  push    r13
0000000140167D24  push    r14
0000000140167D26  push    r15
0000000140167D28  lea     rbp, [rsp-1390h]
0000000140167D30  mov     eax, 1490h
0000000140167D35  call    sub_1401F89D0
0000000140167D3A  sub     rsp, rax
0000000140167D3D  mov     rax, cs:__security_cookie
0000000140167D44  xor     rax, rsp
0000000140167D47  mov     [rbp+1380h], rax
0000000140167D4E  mov     r12, rcx
0000000140167D51  mov     [rsp+60h], r8d
0000000140167D56  xor     ecx, ecx
0000000140167D58  mov     [rsp+4Ch], edx
0000000140167D5C  xor     eax, eax
0000000140167D5E  mov     [rsp+50h], ecx
0000000140167D62  xor     r15b, r15b
0000000140167D65  mov     [rsp+58h], ecx
0000000140167D69  mov     rbx, [r12]
0000000140167D6D  mov     r14d, ecx
0000000140167D70  mov     r13d, ecx
0000000140167D73  mov     [rsp+5Ch], ecx
0000000140167D77  mov     [rsp+54h], ecx
0000000140167D7B  mov     edi, edx
0000000140167D7D  mov     [r12+10h], rcx
0000000140167D82  mov     [r12+8], rcx
0000000140167D87  mov     [r12+18h], rcx
0000000140167D8C  mov     [rsp+41h], r15b
0000000140167D91  mov     r15d, ecx
0000000140167D94  mov     rcx, rbx
0000000140167D97  mov     byte ptr [rsp+40h], 0
0000000140167D9C  mov     [rsp+44h], ax
0000000140167DA1  mov     [rsp+46h], al
0000000140167DA5  mov     dword ptr [rsp+48h], 1
0000000140167DAD  call    sub_14015CE80
0000000140167DB2  test    eax, eax
0000000140167DB4  jz      loc_140168C4C
0000000140167DBA  cmp     edi, 1
0000000140167DBD  jz      loc_140168BEA
0000000140167DC3  mov     rcx, rbx
0000000140167DC6  call    sub_1401604F0
0000000140167DCB  mov     rcx, rbx
0000000140167DCE  mov     esi, eax
0000000140167DD0  call    sub_1401604F0
0000000140167DD5  shl     esi, 10h
0000000140167DD8  mov     rcx, rbx
0000000140167DDB  add     esi, eax
0000000140167DDD  mov     [rsp+68h], esi
0000000140167DE1  call    sub_1401604F0
0000000140167DE6  mov     rcx, rbx
0000000140167DE9  mov     edi, eax
0000000140167DEB  call    sub_1401604F0
0000000140167DF0  shl     edi, 10h
0000000140167DF3  lea     edx, [rdi+rax]
0000000140167DF6  mov     [rsp+6Ch], edx
0000000140167DFA  mov     rcx, [rsp+68h]
0000000140167DFF  shr     rcx, 20h
0000000140167E03  cmp     ecx, 49484452h
0000000140167E09  ja      loc_14016819A
0000000140167E0F  jz      loc_140167F07
0000000140167E15  cmp     ecx, 43674249h
0000000140167E1B  jz      loc_140167EFA
0000000140167E21  cmp     ecx, 49444154h
0000000140167E27  jz      short loc_140167E5F
0000000140167E29  cmp     ecx, 49454E44h
0000000140167E2F  jnz     loc_1401681AE
0000000140167E35  cmp     dword ptr [rsp+48h], 0
0000000140167E3A  jz      loc_1401684D7
0000000140167E40  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140167E46  mov     rax, gs:58h
0000000140167E4F  mov     rax, [rax+rdx*8]
0000000140167E53  lea     rdx, cs:140272A58h; "first not IHDR"
0000000140167E5A  jmp     loc_140168C43
0000000140167E5F  cmp     dword ptr [rsp+48h], 0
0000000140167E64  jnz     short loc_140167E40
0000000140167E66  movzx   eax, byte ptr [rsp+40h]
0000000140167E6B  test    al, al
0000000140167E6D  jz      short loc_140167E78
0000000140167E6F  test    r15d, r15d
0000000140167E72  jz      loc_140168A1F
0000000140167E78  cmp     dword ptr [rsp+4Ch], 2
0000000140167E7D  jz      loc_140168A5D
0000000140167E83  mov     eax, [rsp+50h]
0000000140167E87  lea     edi, [rsi+rax]
0000000140167E8A  cmp     edi, eax
0000000140167E8C  jl      loc_140168C4C
0000000140167E92  cmp     edi, r14d
0000000140167E95  jbe     short loc_140167ED7
0000000140167E97  test    r14d, r14d
0000000140167E9A  jnz     short loc_140167EA9
0000000140167E9C  mov     r14d, 1000h
0000000140167EA2  cmp     esi, r14d
0000000140167EA5  cmova   r14d, esi
0000000140167EA9  cmp     edi, r14d
0000000140167EAC  jbe     short loc_140167EB8
0000000140167EAE  xchg    ax, ax
0000000140167EB0  add     r14d, r14d
0000000140167EB3  cmp     edi, r14d
0000000140167EB6  ja      short loc_140167EB0
0000000140167EB8  mov     rcx, [r12+8]; Block
0000000140167EBD  mov     edx, r14d; Size
0000000140167EC0  call    j__realloc_base
0000000140167EC5  test    rax, rax
0000000140167EC8  jz      loc_1401689C2
0000000140167ECE  mov     [r12+8], rax
0000000140167ED3  mov     eax, [rsp+50h]
0000000140167ED7  mov     edx, eax
0000000140167ED9  mov     r8d, esi
0000000140167EDC  add     rdx, [r12+8]
0000000140167EE1  mov     rcx, rbx
0000000140167EE4  call    sub_140160860
0000000140167EE9  test    eax, eax
0000000140167EEB  jz      loc_140168A3E
0000000140167EF1  mov     [rsp+50h], edi
0000000140167EF5  jmp     loc_1401684C2
0000000140167EFA  mov     dword ptr [rsp+54h], 1
0000000140167F02  jmp     loc_1401681C3
0000000140167F07  cmp     dword ptr [rsp+48h], 0
0000000140167F0C  jz      loc_140168B43
0000000140167F12  mov     dword ptr [rsp+48h], 0
0000000140167F1A  cmp     esi, 0Dh
0000000140167F1D  jnz     loc_140168B24
0000000140167F23  mov     rcx, rbx
0000000140167F26  call    sub_1401604F0
0000000140167F2B  mov     rcx, rbx
0000000140167F2E  mov     edi, eax
0000000140167F30  call    sub_1401604F0
0000000140167F35  shl     edi, 10h
0000000140167F38  mov     rcx, rbx
0000000140167F3B  add     eax, edi
0000000140167F3D  mov     [rbx], eax
0000000140167F3F  call    sub_1401604F0
0000000140167F44  mov     rcx, rbx
0000000140167F47  mov     edi, eax
0000000140167F49  call    sub_1401604F0
0000000140167F4E  shl     edi, 10h
0000000140167F51  lea     ecx, [rax+rdi]
0000000140167F54  mov     [rbx+4], ecx
0000000140167F57  cmp     ecx, 1000000h
0000000140167F5D  ja      loc_14016817B
0000000140167F63  cmp     dword ptr [rbx], 1000000h
0000000140167F69  ja      loc_14016817B
0000000140167F6F  mov     rax, [rbx+0C0h]
0000000140167F76  cmp     rax, [rbx+0C8h]
0000000140167F7D  jnb     short loc_140167F8E
0000000140167F7F  movzx   ecx, byte ptr [rax]
0000000140167F82  inc     rax
0000000140167F85  mov     [rbx+0C0h], rax
0000000140167F8C  jmp     short loc_140167FB4
0000000140167F8E  cmp     dword ptr [rbx+30h], 0
0000000140167F92  jz      short loc_140167FB2
0000000140167F94  mov     rcx, rbx
0000000140167F97  call    sub_14016D910
0000000140167F9C  mov     rax, [rbx+0C0h]
0000000140167FA3  movzx   ecx, byte ptr [rax]
0000000140167FA6  inc     rax
0000000140167FA9  mov     [rbx+0C0h], rax
0000000140167FB0  jmp     short loc_140167FB4
0000000140167FB2  xor     cl, cl
0000000140167FB4  movzx   eax, cl
0000000140167FB7  mov     [r12+20h], eax
0000000140167FBC  cmp     eax, 1
0000000140167FBF  jz      short loc_140167FD8
0000000140167FC1  cmp     eax, 10h
0000000140167FC4  ja      loc_140168A6A
0000000140167FCA  mov     ecx, 10114h
0000000140167FCF  bt      ecx, eax
0000000140167FD2  jnb     loc_140168A6A
0000000140167FD8  mov     rax, [rbx+0C0h]
0000000140167FDF  cmp     rax, [rbx+0C8h]
0000000140167FE6  jnb     short loc_140167FF7
0000000140167FE8  movzx   ecx, byte ptr [rax]
0000000140167FEB  inc     rax
0000000140167FEE  mov     [rbx+0C0h], rax
0000000140167FF5  jmp     short loc_14016801D
0000000140167FF7  cmp     dword ptr [rbx+30h], 0
0000000140167FFB  jz      short loc_14016801B
0000000140167FFD  mov     rcx, rbx
0000000140168000  call    sub_14016D910
0000000140168005  mov     rax, [rbx+0C0h]
000000014016800C  movzx   ecx, byte ptr [rax]
000000014016800F  inc     rax
0000000140168012  mov     [rbx+0C0h], rax
0000000140168019  jmp     short loc_14016801D
000000014016801B  xor     cl, cl
000000014016801D  movzx   edi, cl
0000000140168020  mov     [rsp+5Ch], edi
0000000140168024  cmp     edi, 6
0000000140168027  ja      loc_140168A89
000000014016802D  cmp     edi, 3
0000000140168030  jnz     short loc_140168049
0000000140168032  cmp     dword ptr [r12+20h], 10h
0000000140168038  jz      loc_140168A89
000000014016803E  movzx   esi, dil
0000000140168042  mov     [rsp+40h], dil
0000000140168047  jmp     short loc_140168058
0000000140168049  test    dil, 1
000000014016804D  jnz     loc_140168A89
0000000140168053  movzx   esi, byte ptr [rsp+40h]
0000000140168058  cmp     rax, [rbx+0C8h]
000000014016805F  jb      short loc_140168076
0000000140168061  cmp     dword ptr [rbx+30h], 0
0000000140168065  jz      short loc_14016808B
0000000140168067  mov     rcx, rbx
000000014016806A  call    sub_14016D910
000000014016806F  mov     rax, [rbx+0C0h]
0000000140168076  movzx   ecx, byte ptr [rax]
0000000140168079  inc     rax
000000014016807C  mov     [rbx+0C0h], rax
0000000140168083  test    cl, cl
0000000140168085  jnz     loc_140168AA8
000000014016808B  cmp     rax, [rbx+0C8h]
0000000140168092  jb      short loc_1401680A9
0000000140168094  cmp     dword ptr [rbx+30h], 0
0000000140168098  jz      short loc_1401680BE
000000014016809A  mov     rcx, rbx
000000014016809D  call    sub_14016D910
00000001401680A2  mov     rax, [rbx+0C0h]
00000001401680A9  movzx   ecx, byte ptr [rax]
00000001401680AC  inc     rax
00000001401680AF  mov     [rbx+0C0h], rax
00000001401680B6  test    cl, cl
00000001401680B8  jnz     loc_140168AC7
00000001401680BE  cmp     rax, [rbx+0C8h]
00000001401680C5  jnb     short loc_1401680D6
00000001401680C7  movzx   ecx, byte ptr [rax]
00000001401680CA  inc     rax
00000001401680CD  mov     [rbx+0C0h], rax
00000001401680D4  jmp     short loc_1401680FC
00000001401680D6  cmp     dword ptr [rbx+30h], 0
00000001401680DA  jz      short loc_1401680FA
00000001401680DC  mov     rcx, rbx
00000001401680DF  call    sub_14016D910
00000001401680E4  mov     rax, [rbx+0C0h]
00000001401680EB  movzx   ecx, byte ptr [rax]
00000001401680EE  inc     rax
00000001401680F1  mov     [rbx+0C0h], rax
00000001401680F8  jmp     short loc_1401680FC
00000001401680FA  xor     cl, cl
00000001401680FC  movzx   r13d, cl
0000000140168100  mov     [rsp+58h], r13d
0000000140168105  cmp     r13d, 1
0000000140168109  ja      loc_140168B05
000000014016810F  mov     ecx, [rbx]
0000000140168111  test    ecx, ecx
0000000140168113  jz      loc_140168AE6
0000000140168119  mov     r9d, [rbx+4]
000000014016811D  test    r9d, r9d
0000000140168120  jz      loc_140168AE6
0000000140168126  xor     edx, edx
0000000140168128  mov     eax, 40000000h
000000014016812D  div     ecx
000000014016812F  test    sil, sil
0000000140168132  jnz     short loc_140168168
0000000140168134  xor     edx, edx
0000000140168136  mov     r8d, edi
0000000140168139  shr     r8d, 2
000000014016813D  mov     ecx, edi
000000014016813F  and     ecx, 2
0000000140168142  and     r8d, 1
0000000140168146  or      ecx, 1
0000000140168149  add     r8d, ecx
000000014016814C  div     r8d
000000014016814F  mov     [rbx+8], r8d
0000000140168153  cmp     eax, r9d
0000000140168156  jb      short loc_14016817B
0000000140168158  cmp     dword ptr [rsp+4Ch], 2
000000014016815D  jz      loc_140168BEA
0000000140168163  jmp     loc_1401684C2
0000000140168168  shr     eax, 2
000000014016816B  mov     dword ptr [rbx+8], 1
0000000140168172  cmp     eax, r9d
0000000140168175  jnb     loc_1401684C2
000000014016817B  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168181  mov     rax, gs:58h
000000014016818A  mov     rax, [rax+rdx*8]
000000014016818E  lea     rdx, aTooLarge; "too large"
0000000140168195  jmp     loc_140168C43
000000014016819A  cmp     ecx, 504C5445h
00000001401681A0  jz      loc_140168372
00000001401681A6  cmp     ecx, 74524E53h
00000001401681AC  jz      short loc_140168224
00000001401681AE  cmp     dword ptr [rsp+48h], 0
00000001401681B3  jnz     loc_140167E40
00000001401681B9  bt      edx, 1Dh
00000001401681BD  jnb     loc_140168B62
00000001401681C3  test    esi, esi
00000001401681C5  jz      loc_1401684C2
00000001401681CB  jns     short loc_1401681E0
00000001401681CD  mov     rax, [rbx+0C8h]
00000001401681D4  mov     [rbx+0C0h], rax
00000001401681DB  jmp     loc_1401684C2
00000001401681E0  cmp     qword ptr [rbx+10h], 0
00000001401681E5  jz      short loc_140168215
00000001401681E7  mov     ecx, [rbx+0C8h]
00000001401681ED  sub     ecx, [rbx+0C0h]
00000001401681F3  cmp     ecx, esi
00000001401681F5  jge     short loc_140168215
00000001401681F7  mov     rax, [rbx+0C8h]
00000001401681FE  sub     esi, ecx
0000000140168200  mov     rcx, [rbx+28h]
0000000140168204  mov     edx, esi
0000000140168206  mov     [rbx+0C0h], rax
000000014016820D  call    qword ptr [rbx+18h]
0000000140168210  jmp     loc_1401684C2
0000000140168215  movsxd  rax, esi
0000000140168218  add     [rbx+0C0h], rax
000000014016821F  jmp     loc_1401684C2
0000000140168224  cmp     dword ptr [rsp+48h], 0
0000000140168229  jnz     loc_140167E40
000000014016822F  cmp     qword ptr [r12+8], 0
0000000140168235  jnz     loc_140168C0D
000000014016823B  cmp     byte ptr [rsp+40h], 0
0000000140168240  jz      loc_1401682DE
0000000140168246  cmp     dword ptr [rsp+4Ch], 2
000000014016824B  jz      loc_140168BE3
0000000140168251  test    r15d, r15d
0000000140168254  jz      loc_140168BC7
000000014016825A  cmp     esi, r15d
000000014016825D  ja      loc_140168BAB
0000000140168263  xor     edi, edi
0000000140168265  mov     byte ptr [rsp+40h], 4
000000014016826A  test    esi, esi
000000014016826C  jz      loc_1401684C2
0000000140168272  nop     dword ptr [rax+00h]
0000000140168276  nop     word ptr [rax+rax+00000000h]
0000000140168280  mov     rax, [rbx+0C0h]
0000000140168287  cmp     rax, [rbx+0C8h]
000000014016828E  jnb     short loc_14016829F
0000000140168290  movzx   edx, byte ptr [rax]
0000000140168293  inc     rax
0000000140168296  mov     [rbx+0C0h], rax
000000014016829D  jmp     short loc_1401682C5
000000014016829F  cmp     dword ptr [rbx+30h], 0
00000001401682A3  jz      short loc_1401682C3
00000001401682A5  mov     rcx, rbx
00000001401682A8  call    sub_14016D910
00000001401682AD  mov     rax, [rbx+0C0h]
00000001401682B4  movzx   edx, byte ptr [rax]
00000001401682B7  inc     rax
00000001401682BA  mov     [rbx+0C0h], rax
00000001401682C1  jmp     short loc_1401682C5
00000001401682C3  xor     dl, dl
00000001401682C5  lea     eax, ds:3[rdi*4]
00000001401682CC  inc     edi
00000001401682CE  mov     [rbp+rax+0F80h], dl
00000001401682D5  cmp     edi, esi
00000001401682D7  jb      short loc_140168280
00000001401682D9  jmp     loc_1401684C2
00000001401682DE  mov     ecx, [rbx+8]
00000001401682E1  test    cl, 1
00000001401682E4  jz      loc_140168BF1
00000001401682EA  lea     eax, [rcx+rcx]
00000001401682ED  cmp     esi, eax
00000001401682EF  jnz     loc_140168BAB
00000001401682F5  xor     esi, esi
00000001401682F7  mov     byte ptr [rsp+41h], 1
00000001401682FC  cmp     dword ptr [r12+20h], 10h
0000000140168302  jnz     short loc_14016832E
0000000140168304  test    ecx, ecx
0000000140168306  jle     loc_1401684C2
000000014016830C  lea     rdi, [rbp+0F70h]
0000000140168313  mov     rcx, rbx
0000000140168316  call    sub_1401604F0
000000014016831B  inc     esi
000000014016831D  mov     [rdi], ax
0000000140168320  lea     rdi, [rdi+2]
0000000140168324  cmp     esi, [rbx+8]
0000000140168327  jl      short loc_140168313
0000000140168329  jmp     loc_1401684C2
000000014016832E  test    ecx, ecx
0000000140168330  jle     loc_1401684C2
0000000140168336  lea     rdi, [rsp+44h]
000000014016833B  lea     r13, byte_14026E768
0000000140168342  mov     rcx, rbx
0000000140168345  call    sub_1401604F0
000000014016834A  movsxd  rcx, dword ptr [r12+20h]
000000014016834F  lea     rdi, [rdi+1]
0000000140168353  movzx   eax, al
0000000140168356  inc     esi
0000000140168358  movzx   edx, byte ptr [rcx+r13]
000000014016835D  imul    eax, edx
0000000140168360  mov     [rdi-1], al
0000000140168363  cmp     esi, [rbx+8]
0000000140168366  jl      short loc_140168342
0000000140168368  mov     r13d, [rsp+58h]
000000014016836D  jmp     loc_1401684C2
0000000140168372  cmp     dword ptr [rsp+48h], 0
0000000140168377  jnz     loc_140167E40
000000014016837D  cmp     esi, 300h
0000000140168383  ja      loc_140168C29
0000000140168389  mov     eax, 0AAAAAAABh
000000014016838E  mul     esi
0000000140168390  mov     r15d, edx
0000000140168393  shr     r15d, 1
0000000140168396  lea     eax, [r15+r15*2]
000000014016839A  cmp     eax, esi
000000014016839C  jnz     loc_140168C29
00000001401683A2  xor     esi, esi
00000001401683A4  test    r15d, r15d
00000001401683A7  jz      loc_1401684C2
00000001401683AD  mov     r8, [rbx+0C0h]
00000001401683B4  mov     rdx, [rbx+0C8h]
00000001401683BB  cmp     r8, rdx
00000001401683BE  jnb     short loc_1401683C9
00000001401683C0  movzx   ecx, byte ptr [r8]
00000001401683C4  inc     r8
00000001401683C7  jmp     short loc_1401683EC
00000001401683C9  cmp     dword ptr [rbx+30h], 0
00000001401683CD  jz      short loc_140168412
00000001401683CF  mov     rcx, rbx
00000001401683D2  call    sub_14016D910
00000001401683D7  mov     rax, [rbx+0C0h]
00000001401683DE  mov     rdx, [rbx+0C8h]
00000001401683E5  movzx   ecx, byte ptr [rax]
00000001401683E8  lea     r8, [rax+1]
00000001401683EC  mov     [rbx+0C0h], r8
00000001401683F3  lea     edi, ds:0[rsi*4]
00000001401683FA  mov     [rbp+rdi+0F80h], cl
0000000140168401  mov     r9d, edi
0000000140168404  cmp     r8, rdx
0000000140168407  jnb     short loc_140168424
0000000140168409  movzx   r9d, byte ptr [r8]
000000014016840D  inc     r8
0000000140168410  jmp     short loc_140168448
0000000140168412  lea     edi, ds:0[rsi*4]
0000000140168419  mov     byte ptr [rbp+rdi+0F80h], 0
0000000140168421  mov     r9d, edi
0000000140168424  cmp     dword ptr [rbx+30h], 0
0000000140168428  jz      short loc_14016846F
000000014016842A  mov     rcx, rbx
000000014016842D  call    sub_14016D910
0000000140168432  mov     rax, [rbx+0C0h]
0000000140168439  mov     rdx, [rbx+0C8h]
0000000140168440  movzx   r9d, byte ptr [rax]
0000000140168444  lea     r8, [rax+1]
0000000140168448  mov     [rbx+0C0h], r8
000000014016844F  lea     eax, [rdi+1]
0000000140168452  mov     [rbp+rax+0F80h], r9b
000000014016845A  cmp     r8, rdx
000000014016845D  jnb     short loc_14016847B
000000014016845F  movzx   edx, byte ptr [r8]
0000000140168463  inc     r8
0000000140168466  mov     [rbx+0C0h], r8
000000014016846D  jmp     short loc_1401684A2
000000014016846F  lea     eax, [r9+1]
0000000140168473  mov     byte ptr [rbp+rax+0F80h], 0
000000014016847B  cmp     dword ptr [rbx+30h], 0
000000014016847F  jz      short loc_1401684A0
0000000140168481  mov     rcx, rbx
0000000140168484  call    sub_14016D910
0000000140168489  mov     rax, [rbx+0C0h]
0000000140168490  movzx   edx, byte ptr [rax]
0000000140168493  lea     r8, [rax+1]
0000000140168497  mov     [rbx+0C0h], r8
000000014016849E  jmp     short loc_1401684A2
00000001401684A0  xor     dl, dl
00000001401684A2  lea     eax, [rdi+2]
00000001401684A5  inc     esi
00000001401684A7  mov     [rbp+rax+0F80h], dl
00000001401684AE  lea     eax, [rdi+3]
00000001401684B1  mov     byte ptr [rbp+rax+0F80h], 0FFh
00000001401684B9  cmp     esi, r15d
00000001401684BC  jb      loc_1401683B4
00000001401684C2  mov     rcx, rbx
00000001401684C5  call    sub_1401604F0
00000001401684CA  mov     rcx, rbx
00000001401684CD  call    sub_1401604F0
00000001401684D2  jmp     loc_140167DC3
00000001401684D7  cmp     dword ptr [rsp+4Ch], 0
00000001401684DC  jnz     loc_140168BEA
00000001401684E2  mov     rdi, [r12+8]
00000001401684E7  test    rdi, rdi
00000001401684EA  jnz     short loc_14016850B
00000001401684EC  mov     edx, cs:dword_140404A6C+48B9A58h
00000001401684F2  mov     rax, gs:58h
00000001401684FB  mov     rax, [rax+rdx*8]
00000001401684FF  lea     rdx, cs:140272AD8h; "no IDAT"
0000000140168506  jmp     loc_140168C43
000000014016850B  mov     eax, [rbx]
000000014016850D  imul    eax, [r12+20h]
0000000140168513  add     eax, 7
0000000140168516  shr     eax, 3
0000000140168519  imul    eax, [rbx+8]
000000014016851D  inc     eax
000000014016851F  imul    eax, [rbx+4]
0000000140168523  movsxd  rsi, eax
0000000140168526  mov     rcx, rsi
0000000140168529  call    j__malloc_base
000000014016852E  mov     rcx, rax
0000000140168531  test    rax, rax
0000000140168534  jnz     short loc_140168540
0000000140168536  mov     [r12+10h], rax
000000014016853B  jmp     loc_140168C4C
0000000140168540  movsxd  rax, dword ptr [rsp+50h]
0000000140168545  add     rax, rdi
0000000140168548  mov     [rbp-70h], rcx
000000014016854C  mov     [rsp+78h], rax
0000000140168551  lea     rax, [rsi+rcx]
0000000140168555  xor     esi, esi
0000000140168557  mov     [rbp-78h], rcx
000000014016855B  mov     edx, esi
000000014016855D  mov     [rsp+70h], rdi
0000000140168562  cmp     [rsp+54h], edx
0000000140168566  lea     rcx, [rsp+70h]
000000014016856B  mov     [rbp-68h], rax
000000014016856F  setz    dl
0000000140168572  mov     dword ptr [rbp-60h], 1
0000000140168579  call    sub_140168E00
000000014016857E  test    eax, eax
0000000140168580  jz      loc_140168A0C
0000000140168586  mov     rax, [rbp-70h]
000000014016858A  mov     edi, [rbp-78h]
000000014016858D  sub     edi, [rbp-70h]
0000000140168590  mov     [r12+10h], rax
0000000140168595  test    rax, rax
0000000140168598  jz      loc_140168C4C
000000014016859E  mov     rcx, [r12+8]; Block
00000001401685A3  call    free
00000001401685A8  mov     ecx, [rsp+60h]
00000001401685AC  movzx   r14d, byte ptr [rsp+40h]
00000001401685B2  mov     [r12+8], rsi
00000001401685B7  mov     eax, [rbx+8]
00000001401685BA  lea     r9d, [rax+1]
00000001401685BE  cmp     ecx, r9d
00000001401685C1  jnz     short loc_1401685D1
00000001401685C3  cmp     ecx, 3
00000001401685C6  jz      short loc_1401685D1
00000001401685C8  test    r14b, r14b
00000001401685CB  jz      loc_1401686B0
00000001401685D1  movzx   r15d, byte ptr [rsp+41h]
00000001401685D7  test    r15b, r15b
00000001401685DA  jnz     short loc_1401685DF
00000001401685DC  mov     r9d, eax
00000001401685DF  mov     eax, [rsp+5Ch]
00000001401685E3  mov     r8d, edi
00000001401685E6  mov     [rbx+0Ch], r9d
00000001401685EA  mov     rcx, r12
00000001401685ED  mov     rdx, [r12+10h]
00000001401685F2  mov     [rsp+30h], r13d
00000001401685F7  mov     [rsp+28h], eax
00000001401685FB  mov     eax, [r12+20h]
0000000140168600  mov     [rsp+20h], eax
0000000140168604  call    sub_14015E260
0000000140168609  test    eax, eax
000000014016860B  jz      loc_140168C4C
0000000140168611  test    r15b, r15b
0000000140168614  jz      loc_140168777
000000014016861A  mov     rcx, [r12]
000000014016861E  mov     eax, [rbx+0Ch]
0000000140168621  mov     rdi, [r12+18h]
0000000140168626  mov     esi, [rcx+4]
0000000140168629  imul    esi, [rcx]
000000014016862C  cmp     dword ptr [r12+20h], 10h
0000000140168632  jnz     loc_1401686EF
0000000140168638  cmp     eax, 2
000000014016863B  jz      short loc_1401686BB
000000014016863D  cmp     eax, 4
0000000140168640  jz      short loc_14016865B
0000000140168642  mov     r8d, 12DCh
0000000140168648  lea     rdx, aCVisualc2010Co_1; "C:\\visualc2010\\code\\csl03\\stb/stb_i"...
000000014016864F  lea     rcx, cs:140272960h; "out_n == 2 || out_n == 4"
0000000140168656  call    sub_14023E640
000000014016865B  test    esi, esi
000000014016865D  jz      loc_140168777
0000000140168663  movzx   edx, word ptr [rbp+0F74h]
000000014016866A  lea     rax, [rdi+4]
000000014016866E  movzx   r8d, word ptr [rbp+0F72h]
0000000140168676  xor     r14d, r14d
0000000140168679  movzx   r9d, word ptr [rbp+0F70h]
0000000140168681  mov     ecx, esi
0000000140168683  cmp     [rax-4], r9w
0000000140168688  jnz     short loc_14016869B
000000014016868A  cmp     [rax-2], r8w
000000014016868F  jnz     short loc_14016869B
0000000140168691  cmp     [rax], dx
0000000140168694  jnz     short loc_14016869B
0000000140168696  mov     [rax+2], r14w
000000014016869B  add     rax, 8
000000014016869F  sub     rcx, 1
00000001401686A3  jnz     short loc_140168683
00000001401686A5  movzx   r14d, byte ptr [rsp+40h]
00000001401686AB  jmp     loc_140168777
00000001401686B0  movzx   r15d, byte ptr [rsp+41h]
00000001401686B6  jmp     loc_1401685DF
00000001401686BB  test    esi, esi
00000001401686BD  jz      loc_140168777
00000001401686C3  movzx   edx, word ptr [rbp+0F70h]
00000001401686CA  mov     ecx, esi
00000001401686CC  xor     esi, esi
00000001401686CE  xchg    ax, ax
00000001401686D0  cmp     [rdi], dx
00000001401686D3  lea     rdi, [rdi+4]
00000001401686D7  mov     eax, 0FFFFh
00000001401686DC  cmovz   ax, si
00000001401686E0  mov     [rdi-2], ax
00000001401686E4  sub     rcx, 1
00000001401686E8  jnz     short loc_1401686D0
00000001401686EA  jmp     loc_140168777
00000001401686EF  cmp     eax, 2
00000001401686F2  jz      short loc_140168750
00000001401686F4  cmp     eax, 4
00000001401686F7  jz      short loc_140168712
00000001401686F9  mov     r8d, 12C3h
00000001401686FF  lea     rdx, aCVisualc2010Co_1; "C:\\visualc2010\\code\\csl03\\stb/stb_i"...
0000000140168706  lea     rcx, cs:140272960h; "out_n == 2 || out_n == 4"
000000014016870D  call    sub_14023E640
0000000140168712  test    esi, esi
0000000140168714  jz      short loc_140168777
0000000140168716  movzx   edx, byte ptr [rsp+46h]
000000014016871B  lea     rax, [rdi+2]
000000014016871F  movzx   r8d, byte ptr [rsp+45h]
0000000140168725  movzx   r9d, byte ptr [rsp+44h]
000000014016872B  mov     ecx, esi
000000014016872D  nop     dword ptr [rax]
0000000140168730  cmp     [rax-2], r9b
0000000140168734  jnz     short loc_140168744
0000000140168736  cmp     [rax-1], r8b
000000014016873A  jnz     short loc_140168744
000000014016873C  cmp     [rax], dl
000000014016873E  jnz     short loc_140168744
0000000140168740  mov     byte ptr [rax+1], 0
0000000140168744  add     rax, 4
0000000140168748  sub     rcx, 1
000000014016874C  jnz     short loc_140168730
000000014016874E  jmp     short loc_140168777
0000000140168750  test    esi, esi
0000000140168752  jz      short loc_140168777
0000000140168754  movzx   edx, byte ptr [rsp+44h]
0000000140168759  mov     ecx, esi
000000014016875B  xor     esi, esi
000000014016875D  nop     dword ptr [rax]
0000000140168760  cmp     [rdi], dl
0000000140168762  lea     rdi, [rdi+2]
0000000140168766  mov     eax, 0FFh
000000014016876B  cmovz   eax, esi
000000014016876E  mov     [rdi-1], al
0000000140168771  sub     rcx, 1
0000000140168775  jnz     short loc_140168760
0000000140168777  cmp     dword ptr [rsp+54h], 0
000000014016877C  jz      loc_140168896
0000000140168782  cmp     cs:dword_140404A6C+457C350h, 0
0000000140168789  jz      loc_140168896
000000014016878F  cmp     dword ptr [rbx+0Ch], 2
0000000140168793  jle     loc_140168896
0000000140168799  mov     rax, [r12]
000000014016879D  mov     rdi, [r12+18h]
00000001401687A2  mov     esi, [rax+4]
00000001401687A5  imul    esi, [rax]
00000001401687A8  mov     ecx, [rax+0Ch]
00000001401687AB  cmp     ecx, 3
00000001401687AE  jnz     short loc_1401687DB
00000001401687B0  test    esi, esi
00000001401687B2  jz      loc_140168896
00000001401687B8  mov     edx, esi
00000001401687BA  nop     word ptr [rax+rax+00h]
00000001401687C0  movzx   ecx, byte ptr [rdi]
00000001401687C3  movzx   eax, byte ptr [rdi+2]
00000001401687C7  mov     [rdi], al
00000001401687C9  mov     [rdi+2], cl
00000001401687CC  lea     rdi, [rdi+3]
00000001401687D0  sub     rdx, 1
00000001401687D4  jnz     short loc_1401687C0
00000001401687D6  jmp     loc_140168896
00000001401687DB  cmp     ecx, 4
00000001401687DE  jz      short loc_1401687F9
00000001401687E0  mov     r8d, 132Dh
00000001401687E6  lea     rdx, aCVisualc2010Co_1; "C:\\visualc2010\\code\\csl03\\stb/stb_i"...
00000001401687ED  lea     rcx, cs:140272998h; "s->img_out_n == 4"
00000001401687F4  call    sub_14023E640
00000001401687F9  test    esi, esi
00000001401687FB  jz      loc_140168896
0000000140168801  cmp     cs:dword_140404A6C+457C34Ch, 0
0000000140168808  jz      short loc_14016887A
000000014016880A  inc     rdi
000000014016880D  nop     dword ptr [rax]
0000000140168810  movzx   eax, byte ptr [rdi+2]
0000000140168814  movzx   ecx, byte ptr [rdi-1]
0000000140168818  movzx   r11d, byte ptr [rdi+1]
000000014016881D  test    al, al
000000014016881F  jz      short loc_14016885F
0000000140168821  mov     r8d, eax
0000000140168824  mov     r9d, eax
0000000140168827  movzx   eax, byte ptr [rdi]
000000014016882A  xor     edx, edx
000000014016882C  imul    eax, 0FFh
0000000140168832  shr     r8d, 1
0000000140168835  add     eax, r8d
0000000140168838  div     r9d
000000014016883B  xor     edx, edx
000000014016883D  mov     [rdi], al
000000014016883F  imul    eax, ecx, 0FFh
0000000140168845  add     eax, r8d
0000000140168848  div     r9d
000000014016884B  xor     edx, edx
000000014016884D  mov     r10d, eax
0000000140168850  imul    eax, r11d, 0FFh
0000000140168857  add     eax, r8d
000000014016885A  div     r9d
000000014016885D  jmp     short loc_140168867
000000014016885F  movzx   r10d, cl
0000000140168863  movzx   eax, r11b
0000000140168867  mov     [rdi-1], al
000000014016886A  mov     [rdi+1], r10b
000000014016886E  add     rdi, 4
0000000140168872  sub     rsi, 1
0000000140168876  jnz     short loc_140168810
0000000140168878  jmp     short loc_140168896
000000014016887A  mov     edx, esi
000000014016887C  nop     dword ptr [rax+00h]
0000000140168880  movzx   ecx, byte ptr [rdi]
0000000140168883  movzx   eax, byte ptr [rdi+2]
0000000140168887  mov     [rdi], al
0000000140168889  mov     [rdi+2], cl
000000014016888C  lea     rdi, [rdi+4]
0000000140168890  sub     rdx, 1
0000000140168894  jnz     short loc_140168880
0000000140168896  test    r14b, r14b
0000000140168899  jz      loc_1401689E1
000000014016889F  mov     eax, [rsp+60h]
00000001401688A3  movzx   esi, r14b
00000001401688A7  mov     [rbx+8], esi
00000001401688AA  mov     [rbx+0Ch], esi
00000001401688AD  cmp     eax, 3
00000001401688B0  jl      short loc_1401688B7
00000001401688B2  mov     [rbx+0Ch], eax
00000001401688B5  mov     esi, eax
00000001401688B7  mov     rax, [r12]
00000001401688BB  mov     rdi, [r12+18h]
00000001401688C0  mov     r14d, [rax+4]
00000001401688C4  imul    r14d, [rax]
00000001401688C8  test    r14d, r14d
00000001401688CB  js      loc_1401689C2
00000001401688D1  test    esi, esi
00000001401688D3  js      loc_1401689C2
00000001401688D9  jz      short loc_1401688EC
00000001401688DB  mov     eax, 7FFFFFFFh
00000001401688E0  cdq
00000001401688E1  idiv    esi
00000001401688E3  cmp     r14d, eax
00000001401688E6  jg      loc_1401689C2
00000001401688EC  mov     eax, esi
00000001401688EE  imul    eax, r14d
00000001401688F2  movsxd  rcx, eax
00000001401688F5  call    j__malloc_base
00000001401688FA  mov     r15, rax
00000001401688FD  test    rax, rax
0000000140168900  jz      loc_1401689C2
0000000140168906  test    r14d, r14d
0000000140168909  jz      loc_1401689B1
000000014016890F  mov     r9d, r14d
0000000140168912  lea     r8, [rax+2]
0000000140168916  cmp     esi, 3
0000000140168919  jnz     short loc_140168970
000000014016891B  nop     dword ptr [rax+rax+00h]
0000000140168920  movzx   edx, byte ptr [rdi]
0000000140168923  lea     r8, [r8+3]
0000000140168927  lea     rdi, [rdi+1]
000000014016892B  movzx   eax, byte ptr [rbp+rdx*4+0F80h]
0000000140168933  mov     [r8-5], al
0000000140168937  movzx   eax, byte ptr [rbp+rdx*4+0F81h]
000000014016893F  mov     [r8-4], al
0000000140168943  movzx   eax, byte ptr [rbp+rdx*4+0F82h]
000000014016894B  mov     [r8-3], al
000000014016894F  sub     r9, 1
0000000140168953  jnz     short loc_140168920
0000000140168955  mov     rcx, [r12+18h]; Block
000000014016895A  call    free
000000014016895F  mov     [r12+18h], r15
0000000140168964  jmp     loc_1401689E9
0000000140168970  movzx   edx, byte ptr [rdi]
0000000140168973  lea     r8, [r8+4]
0000000140168977  lea     rdi, [rdi+1]
000000014016897B  movzx   eax, byte ptr [rbp+rdx*4+0F80h]
0000000140168983  mov     [r8-6], al
0000000140168987  movzx   eax, byte ptr [rbp+rdx*4+0F81h]
000000014016898F  mov     [r8-5], al
0000000140168993  movzx   eax, byte ptr [rbp+rdx*4+0F82h]
000000014016899B  mov     [r8-4], al
000000014016899F  movzx   eax, byte ptr [rbp+rdx*4+0F83h]
00000001401689A7  mov     [r8-3], al
00000001401689AB  sub     r9, 1
00000001401689AF  jnz     short loc_140168970
00000001401689B1  mov     rcx, [r12+18h]; Block
00000001401689B6  call    free
00000001401689BB  mov     [r12+18h], r15
00000001401689C0  jmp     short loc_1401689E9
00000001401689C2  mov     edx, cs:dword_140404A6C+48B9A58h
00000001401689C8  mov     rax, gs:58h
00000001401689D1  mov     rax, [rax+rdx*8]
00000001401689D5  lea     rdx, cs:140272400h; "outofmem"
00000001401689DC  jmp     loc_140168C43
00000001401689E1  test    r15b, r15b
00000001401689E4  jz      short loc_1401689E9
00000001401689E6  inc     dword ptr [rbx+8]
00000001401689E9  mov     rcx, [r12+10h]; Block
00000001401689EE  call    free
00000001401689F3  xor     eax, eax
00000001401689F5  mov     rcx, rbx
00000001401689F8  mov     [r12+10h], rax
00000001401689FD  call    sub_140160670
0000000140168A02  mov     eax, 1
0000000140168A07  jmp     loc_140168C4E
0000000140168A0C  mov     rcx, [rbp-70h]; Block
0000000140168A10  call    free
0000000140168A15  mov     [r12+10h], rsi
0000000140168A1A  jmp     loc_140168C4C
0000000140168A1F  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168A25  mov     rax, gs:58h
0000000140168A2E  mov     rax, [rax+rdx*8]
0000000140168A32  lea     rdx, cs:140272AC0h; "no PLTE"
0000000140168A39  jmp     loc_140168C43
0000000140168A3E  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168A44  mov     rax, gs:58h
0000000140168A4D  mov     rax, [rax+rdx*8]
0000000140168A51  lea     rdx, cs:140272AC8h; "outofdata"
0000000140168A58  jmp     loc_140168C43
0000000140168A5D  mov     [rbx+8], eax
0000000140168A60  mov     eax, 1
0000000140168A65  jmp     loc_140168C4E
0000000140168A6A  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168A70  mov     rax, gs:58h
0000000140168A79  mov     rax, [rax+rdx*8]
0000000140168A7D  lea     rdx, cs:1402729E0h; "1/2/4/8/16-bit only"
0000000140168A84  jmp     loc_140168C43
0000000140168A89  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168A8F  mov     rax, gs:58h
0000000140168A98  mov     rax, [rax+rdx*8]
0000000140168A9C  lea     rdx, cs:1402729F8h; "bad ctype"
0000000140168AA3  jmp     loc_140168C43
0000000140168AA8  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168AAE  mov     rax, gs:58h
0000000140168AB7  mov     rax, [rax+rdx*8]
0000000140168ABB  lea     rdx, cs:140272A08h; "bad comp method"
0000000140168AC2  jmp     loc_140168C43
0000000140168AC7  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168ACD  mov     rax, gs:58h
0000000140168AD6  mov     rax, [rax+rdx*8]
0000000140168ADA  lea     rdx, cs:140272A18h; "bad filter method"
0000000140168AE1  jmp     loc_140168C43
0000000140168AE6  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168AEC  mov     rax, gs:58h
0000000140168AF5  mov     rax, [rax+rdx*8]
0000000140168AF9  lea     rdx, cs:140272A48h; "0-pixel image"
0000000140168B00  jmp     loc_140168C43
0000000140168B05  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168B0B  mov     rax, gs:58h
0000000140168B14  mov     rax, [rax+rdx*8]
0000000140168B18  lea     rdx, cs:140272A30h; "bad interlace method"
0000000140168B1F  jmp     loc_140168C43
0000000140168B24  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168B2A  mov     rax, gs:58h
0000000140168B33  mov     rax, [rax+rdx*8]
0000000140168B37  lea     rdx, cs:1402729D0h; "bad IHDR len"
0000000140168B3E  jmp     loc_140168C43
0000000140168B43  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168B49  mov     rax, gs:58h
0000000140168B52  mov     rax, [rax+rdx*8]
0000000140168B56  lea     rdx, cs:1402729C0h; "multiple IHDR"
0000000140168B5D  jmp     loc_140168C43
0000000140168B62  mov     eax, edx
0000000140168B64  shr     eax, 18h
0000000140168B67  mov     cs:byte_140301850, al
0000000140168B6D  mov     eax, edx
0000000140168B6F  shr     eax, 10h
0000000140168B72  mov     cs:byte_140301851, al
0000000140168B78  movzx   eax, byte ptr [rsp+6Ch]
0000000140168B7D  shr     edx, 8
0000000140168B80  mov     cs:byte_140301853, al
0000000140168B86  mov     rax, gs:58h
0000000140168B8F  mov     cs:byte_140301852, dl
0000000140168B95  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168B9B  mov     rax, [rax+rdx*8]
0000000140168B9F  lea     rdx, byte_140301850
0000000140168BA6  jmp     loc_140168C43
0000000140168BAB  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168BB1  mov     rax, gs:58h
0000000140168BBA  mov     rax, [rax+rdx*8]
0000000140168BBE  lea     rdx, cs:140272AA0h; "bad tRNS len"
0000000140168BC5  jmp     short loc_140168C43
0000000140168BC7  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168BCD  mov     rax, gs:58h
0000000140168BD6  mov     rax, [rax+rdx*8]
0000000140168BDA  lea     rdx, aTrnsBeforePlte; "tRNS before PLTE"
0000000140168BE1  jmp     short loc_140168C43
0000000140168BE3  mov     dword ptr [rbx+8], 4
0000000140168BEA  mov     eax, 1
0000000140168BEF  jmp     short loc_140168C4E
0000000140168BF1  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168BF7  mov     rax, gs:58h
0000000140168C00  mov     rax, [rax+rdx*8]
0000000140168C04  lea     rdx, aTrnsWithAlpha; "tRNS with alpha"
0000000140168C0B  jmp     short loc_140168C43
0000000140168C0D  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168C13  mov     rax, gs:58h
0000000140168C1C  mov     rax, [rax+rdx*8]
0000000140168C20  lea     rdx, aTrnsAfterIdat; "tRNS after IDAT"
0000000140168C27  jmp     short loc_140168C43
0000000140168C29  mov     edx, cs:dword_140404A6C+48B9A58h
0000000140168C2F  mov     rax, gs:58h
0000000140168C38  mov     rax, [rax+rdx*8]
0000000140168C3C  lea     rdx, cs:140272A68h; "invalid PLTE"
0000000140168C43  mov     ecx, 10h
0000000140168C48  mov     [rcx+rax], rdx
0000000140168C4C  xor     eax, eax
0000000140168C4E  mov     rcx, [rbp+1380h]
0000000140168C55  xor     rcx, rsp
0000000140168C58  call    1401F8B20h
0000000140168C5D  lea     r11, [rsp+1490h]
0000000140168C65  mov     rbx, [r11+38h]
0000000140168C69  mov     rsi, [r11+40h]
0000000140168C6D  mov     rdi, [r11+48h]
0000000140168C71  mov     rsp, r11
0000000140168C74  pop     r15
0000000140168C76  pop     r14
0000000140168C78  pop     r13
0000000140168C7A  pop     r12
0000000140168C7C  pop     rbp
0000000140168C7D  retn
