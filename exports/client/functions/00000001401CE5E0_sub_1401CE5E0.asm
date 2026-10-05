; 0x1401ce5e0: sub_1401CE5E0
; Decompilation failed: function frame is wrong
00000001401CE5E0  mov     [rsp+20h], r9
00000001401CE5E5  mov     [rsp+18h], r8
00000001401CE5EA  mov     [rsp+10h], rdx
00000001401CE5EF  mov     [rsp+8], rcx
00000001401CE5F4  mov     eax, 36F8h
00000001401CE5F9  call    sub_1401F89D0
00000001401CE5FE  sub     rsp, rax
00000001401CE601  mov     rax, cs:__security_cookie
00000001401CE608  xor     rax, rsp
00000001401CE60B  mov     [rsp+36E0h], rax
00000001401CE613  imul    eax, [rsp+3750h], 5
00000001401CE61B  add     eax, 14h
00000001401CE61E  imul    eax, [rsp+3740h]
00000001401CE626  mov     [rsp+0A8h], eax
00000001401CE62D  imul    eax, [rsp+3750h], 5
00000001401CE635  lea     eax, ds:50h[rax*4]
00000001401CE63C  mov     [rsp+11Ch], eax
00000001401CE643  imul    eax, [rsp+3750h], 5
00000001401CE64B  lea     eax, ds:0A0h[rax*8]
00000001401CE652  mov     [rsp+0ACh], eax
00000001401CE659  imul    eax, [rsp+3740h], 5
00000001401CE661  mov     [rsp+0BCh], eax
00000001401CE668  mov     dword ptr [rsp+14Ch], 14h
00000001401CE673  mov     dword ptr [rsp+5Ch], 28h ; '('
00000001401CE67B  mov     eax, [rsp+3740h]
00000001401CE682  shl     eax, 1
00000001401CE684  mov     [rsp+58h], eax
00000001401CE688  mov     dword ptr [rsp+54h], 8
00000001401CE690  mov     dword ptr [rsp+64h], 10h
00000001401CE698  imul    eax, [rsp+3740h], 12h
00000001401CE6A0  dec     eax
00000001401CE6A2  mov     [rsp+74h], eax
00000001401CE6A6  mov     dword ptr [rsp+6Ch], 48h ; 'H'
00000001401CE6AE  mov     dword ptr [rsp+8Ch], 8Fh
00000001401CE6B9  cmp     dword ptr [rsp+3740h], 10h
00000001401CE6C1  jnz     short loc_1401CE73C
00000001401CE6C3  mov     r8d, [rsp+0A8h]
00000001401CE6CB  mov     rdx, [rsp+3700h]
00000001401CE6D3  lea     rcx, [rsp+31E0h]
00000001401CE6DB  call    sub_1401D1210
00000001401CE6E0  mov     r8d, 8
00000001401CE6E6  xor     edx, edx
00000001401CE6E8  lea     rcx, [rsp+168h]
00000001401CE6F0  call    1401FCD30h
00000001401CE6F5  mov     r9d, [rsp+0A8h]
00000001401CE6FD  lea     r8, [rsp+31E0h]
00000001401CE705  lea     rdx, [rsp+2A60h]
00000001401CE70D  lea     rcx, [rsp+168h]
00000001401CE715  call    sub_1401BAD00
00000001401CE71A  mov     r8d, [rsp+0ACh]
00000001401CE722  lea     rdx, [rsp+2A60h]
00000001401CE72A  lea     rcx, [rsp+0EF0h]
00000001401CE732  call    sub_1401D12E0
00000001401CE737  jmp     loc_1401CE7D9
00000001401CE73C  cmp     dword ptr [rsp+3740h], 0Ch
00000001401CE744  jnz     short loc_1401CE7BC
00000001401CE746  mov     r8d, [rsp+0A8h]
00000001401CE74E  mov     rdx, [rsp+3700h]
00000001401CE756  lea     rcx, [rsp+2E20h]
00000001401CE75E  call    sub_1401D1210
00000001401CE763  mov     r8d, 18h
00000001401CE769  xor     edx, edx
00000001401CE76B  lea     rcx, [rsp+168h]
00000001401CE773  call    1401FCD30h
00000001401CE778  mov     r9d, [rsp+0A8h]
00000001401CE780  lea     r8, [rsp+2E20h]
00000001401CE788  lea     rdx, [rsp+2A60h]
00000001401CE790  lea     rcx, [rsp+168h]
00000001401CE798  call    sub_1401BAEE0
00000001401CE79D  mov     r8d, [rsp+0ACh]
00000001401CE7A5  lea     rdx, [rsp+2A60h]
00000001401CE7AD  lea     rcx, [rsp+0EF0h]
00000001401CE7B5  call    sub_1401D12E0
00000001401CE7BA  jmp     short loc_1401CE7D9
00000001401CE7BC  mov     r8d, [rsp+0ACh]
00000001401CE7C4  mov     rdx, [rsp+3700h]
00000001401CE7CC  lea     rcx, [rsp+2A60h]
00000001401CE7D4  call    sub_1401D1210
00000001401CE7D9  mov     r8d, 8
00000001401CE7DF  xor     edx, edx
00000001401CE7E1  lea     rcx, [rsp+168h]
00000001401CE7E9  call    1401FCD30h
00000001401CE7EE  mov     r9d, [rsp+0ACh]
00000001401CE7F6  lea     r8, [rsp+2A60h]
00000001401CE7FE  lea     rdx, [rsp+2CE0h]
00000001401CE806  lea     rcx, [rsp+168h]
00000001401CE80E  call    sub_1401BAD00
00000001401CE813  mov     r8d, [rsp+11Ch]
00000001401CE81B  lea     rdx, [rsp+2CE0h]
00000001401CE823  lea     rcx, [rsp+210h]
00000001401CE82B  call    sub_1401D12E0
00000001401CE830  mov     eax, [rsp+11Ch]
00000001401CE837  dec     eax
00000001401CE839  mov     [rsp+40h], eax
00000001401CE83D  jmp     short loc_1401CE849
00000001401CE83F  mov     eax, [rsp+40h]
00000001401CE843  dec     eax
00000001401CE845  mov     [rsp+40h], eax
00000001401CE849  cmp     dword ptr [rsp+40h], 0
00000001401CE84E  jle     loc_1401CE944
00000001401CE854  movsxd  rax, dword ptr [rsp+40h]
00000001401CE859  cvttss2si eax, dword ptr [rsp+rax*4+210h]
00000001401CE862  cvtsi2ss xmm0, eax
00000001401CE866  mov     eax, [rsp+40h]
00000001401CE86A  dec     eax
00000001401CE86C  cdqe
00000001401CE86E  movss   xmm1, dword ptr [rsp+rax*4+210h]
00000001401CE877  addss   xmm0, xmm1
00000001401CE87B  comiss  xmm0, cs:dword_140278ACC
00000001401CE882  jbe     short loc_1401CE89A
00000001401CE884  movss   xmm0, cs:dword_140278ACC
00000001401CE88C  movss   dword ptr [rsp+124h], xmm0
00000001401CE895  jmp     loc_1401CE923
00000001401CE89A  movsxd  rax, dword ptr [rsp+40h]
00000001401CE89F  cvttss2si eax, dword ptr [rsp+rax*4+210h]
00000001401CE8A8  cvtsi2ss xmm0, eax
00000001401CE8AC  mov     eax, [rsp+40h]
00000001401CE8B0  dec     eax
00000001401CE8B2  cdqe
00000001401CE8B4  movss   xmm1, dword ptr [rsp+rax*4+210h]
00000001401CE8BD  addss   xmm0, xmm1
00000001401CE8C1  movss   xmm1, cs:dword_1402833AC
00000001401CE8C9  comiss  xmm1, xmm0
00000001401CE8CC  jbe     short loc_1401CE8E1
00000001401CE8CE  movss   xmm0, cs:dword_1402833AC
00000001401CE8D6  movss   dword ptr [rsp+120h], xmm0
00000001401CE8DF  jmp     short loc_1401CE911
00000001401CE8E1  movsxd  rax, dword ptr [rsp+40h]
00000001401CE8E6  cvttss2si eax, dword ptr [rsp+rax*4+210h]
00000001401CE8EF  cvtsi2ss xmm0, eax
00000001401CE8F3  mov     eax, [rsp+40h]
00000001401CE8F7  dec     eax
00000001401CE8F9  cdqe
00000001401CE8FB  movss   xmm1, dword ptr [rsp+rax*4+210h]
00000001401CE904  addss   xmm0, xmm1
00000001401CE908  movss   dword ptr [rsp+120h], xmm0
00000001401CE911  movss   xmm0, dword ptr [rsp+120h]
00000001401CE91A  movss   dword ptr [rsp+124h], xmm0
00000001401CE923  cvttss2si eax, dword ptr [rsp+124h]
00000001401CE92C  movsxd  rcx, dword ptr [rsp+40h]
00000001401CE931  cwde
00000001401CE932  cvtsi2ss xmm0, eax
00000001401CE936  movss   dword ptr [rsp+rcx*4+210h], xmm0
00000001401CE93F  jmp     loc_1401CE83F
00000001401CE944  movsxd  rax, dword ptr [rsp+3750h]
00000001401CE94C  shl     rax, 2
00000001401CE950  imul    rax, 95h
00000001401CE957  mov     r8, rax
00000001401CE95A  xor     edx, edx
00000001401CE95C  lea     rcx, [rsp+5A0h]
00000001401CE964  call    1401FCD30h
00000001401CE969  mov     eax, [rsp+14Ch]
00000001401CE970  shl     eax, 2
00000001401CE973  cdqe
00000001401CE975  lea     rax, [rsp+rax*4+210h]
00000001401CE97D  mov     [rsp+80h], rax
00000001401CE985  mov     dword ptr [rsp+44h], 0
00000001401CE98D  jmp     short loc_1401CE999
00000001401CE98F  mov     eax, [rsp+44h]
00000001401CE993  inc     eax
00000001401CE995  mov     [rsp+44h], eax
00000001401CE999  mov     eax, [rsp+3750h]
00000001401CE9A0  sar     eax, 1
00000001401CE9A2  cmp     [rsp+44h], eax
00000001401CE9A6  jge     loc_1401CEC3C
00000001401CE9AC  movsxd  rax, dword ptr [rsp+54h]
00000001401CE9B1  shl     rax, 2
00000001401CE9B5  mov     rcx, [rsp+80h]
00000001401CE9BD  sub     rcx, rax
00000001401CE9C0  mov     rax, rcx
00000001401CE9C3  mov     [rsp+0A0h], rax
00000001401CE9CB  mov     eax, [rsp+54h]
00000001401CE9CF  mov     ecx, [rsp+6Ch]
00000001401CE9D3  sub     ecx, eax
00000001401CE9D5  mov     eax, ecx
00000001401CE9D7  inc     eax
00000001401CE9D9  movsxd  rcx, dword ptr [rsp+6Ch]
00000001401CE9DE  shl     rcx, 2
00000001401CE9E2  mov     rdx, [rsp+80h]
00000001401CE9EA  sub     rdx, rcx
00000001401CE9ED  mov     rcx, rdx
00000001401CE9F0  mov     edx, [rsp+3758h]
00000001401CE9F7  mov     [rsp+28h], edx
00000001401CE9FB  mov     [rsp+20h], eax
00000001401CE9FF  mov     r9d, [rsp+5Ch]
00000001401CEA04  lea     r8, [rsp+490h]
00000001401CEA0C  mov     rdx, rcx
00000001401CEA0F  mov     rcx, [rsp+80h]
00000001401CEA17  call    sub_1401A9C80
00000001401CEA1C  mov     eax, [rsp+54h]
00000001401CEA20  mov     ecx, [rsp+6Ch]
00000001401CEA24  sub     ecx, eax
00000001401CEA26  mov     eax, ecx
00000001401CEA28  cdqe
00000001401CEA2A  cvtss2sd xmm0, dword ptr [rsp+rax*4+490h]
00000001401CEA33  movsd   qword ptr [rsp+98h], xmm0
00000001401CEA3C  mov     edx, [rsp+5Ch]
00000001401CEA40  mov     rcx, [rsp+80h]
00000001401CEA48  call    sub_1401D1050
00000001401CEA4D  movsd   qword ptr [rsp+160h], xmm0
00000001401CEA56  mov     edx, [rsp+5Ch]
00000001401CEA5A  mov     rcx, [rsp+0A0h]
00000001401CEA62  call    sub_1401D1050
00000001401CEA67  movsd   xmm1, qword ptr [rsp+160h]
00000001401CEA70  addsd   xmm1, xmm0
00000001401CEA74  movaps  xmm0, xmm1
00000001401CEA77  cvtsi2ss xmm1, dword ptr [rsp+5Ch]
00000001401CEA7D  mulss   xmm1, cs:dword_140283354
00000001401CEA85  cvtss2sd xmm1, xmm1
00000001401CEA89  addsd   xmm0, xmm1
00000001401CEA8D  movsd   qword ptr [rsp+138h], xmm0
00000001401CEA96  mov     eax, 254h
00000001401CEA9B  imul    rax, 0
00000001401CEA9F  lea     rax, [rsp+rax+5A0h]
00000001401CEAA7  movsxd  rcx, dword ptr [rsp+54h]
00000001401CEAAC  movsd   xmm0, cs:X
00000001401CEAB4  mulsd   xmm0, qword ptr [rsp+98h]
00000001401CEABD  divsd   xmm0, qword ptr [rsp+138h]
00000001401CEAC6  cvtsd2ss xmm0, xmm0
00000001401CEACA  movss   xmm1, dword ptr [rax+rcx*4]
00000001401CEACF  addss   xmm1, xmm0
00000001401CEAD3  movaps  xmm0, xmm1
00000001401CEAD6  movsxd  rax, dword ptr [rsp+54h]
00000001401CEADB  mov     ecx, 254h
00000001401CEAE0  imul    rcx, 0
00000001401CEAE4  lea     rcx, [rsp+rcx+5A0h]
00000001401CEAEC  movss   dword ptr [rcx+rax*4], xmm0
00000001401CEAF1  mov     eax, [rsp+54h]
00000001401CEAF5  inc     eax
00000001401CEAF7  mov     [rsp+4Ch], eax
00000001401CEAFB  jmp     short loc_1401CEB07
00000001401CEAFD  mov     eax, [rsp+4Ch]
00000001401CEB01  inc     eax
00000001401CEB03  mov     [rsp+4Ch], eax
00000001401CEB07  mov     eax, [rsp+6Ch]
00000001401CEB0B  cmp     [rsp+4Ch], eax
00000001401CEB0F  jg      loc_1401CEC1E
00000001401CEB15  mov     rax, [rsp+0A0h]
00000001401CEB1D  sub     rax, 4
00000001401CEB21  mov     [rsp+0A0h], rax
00000001401CEB29  mov     eax, [rsp+4Ch]
00000001401CEB2D  mov     ecx, [rsp+6Ch]
00000001401CEB31  sub     ecx, eax
00000001401CEB33  mov     eax, ecx
00000001401CEB35  cdqe
00000001401CEB37  cvtss2sd xmm0, dword ptr [rsp+rax*4+490h]
00000001401CEB40  movsd   qword ptr [rsp+98h], xmm0
00000001401CEB49  mov     eax, 4
00000001401CEB4E  imul    rax, 0
00000001401CEB52  mov     rcx, [rsp+0A0h]
00000001401CEB5A  cvtss2sd xmm0, dword ptr [rcx+rax]
00000001401CEB5F  mov     eax, 4
00000001401CEB64  imul    rax, 0
00000001401CEB68  mov     rcx, [rsp+0A0h]
00000001401CEB70  cvtss2sd xmm1, dword ptr [rcx+rax]
00000001401CEB75  mulsd   xmm0, xmm1
00000001401CEB79  movsxd  rax, dword ptr [rsp+5Ch]
00000001401CEB7E  mov     rcx, [rsp+0A0h]
00000001401CEB86  cvtss2sd xmm1, dword ptr [rcx+rax*4]
00000001401CEB8B  movsxd  rax, dword ptr [rsp+5Ch]
00000001401CEB90  mov     rcx, [rsp+0A0h]
00000001401CEB98  cvtss2sd xmm2, dword ptr [rcx+rax*4]
00000001401CEB9D  mulsd   xmm1, xmm2
00000001401CEBA1  subsd   xmm0, xmm1
00000001401CEBA5  movsd   xmm1, qword ptr [rsp+138h]
00000001401CEBAE  addsd   xmm1, xmm0
00000001401CEBB2  movaps  xmm0, xmm1
00000001401CEBB5  movsd   qword ptr [rsp+138h], xmm0
00000001401CEBBE  mov     eax, 254h
00000001401CEBC3  imul    rax, 0
00000001401CEBC7  lea     rax, [rsp+rax+5A0h]
00000001401CEBCF  movsxd  rcx, dword ptr [rsp+4Ch]
00000001401CEBD4  movsd   xmm0, cs:X
00000001401CEBDC  mulsd   xmm0, qword ptr [rsp+98h]
00000001401CEBE5  divsd   xmm0, qword ptr [rsp+138h]
00000001401CEBEE  cvtsd2ss xmm0, xmm0
00000001401CEBF2  movss   xmm1, dword ptr [rax+rcx*4]
00000001401CEBF7  addss   xmm1, xmm0
00000001401CEBFB  movaps  xmm0, xmm1
00000001401CEBFE  movsxd  rax, dword ptr [rsp+4Ch]
00000001401CEC03  mov     ecx, 254h
00000001401CEC08  imul    rcx, 0
00000001401CEC0C  lea     rcx, [rsp+rcx+5A0h]
00000001401CEC14  movss   dword ptr [rcx+rax*4], xmm0
00000001401CEC19  jmp     loc_1401CEAFD
00000001401CEC1E  movsxd  rax, dword ptr [rsp+5Ch]
00000001401CEC23  mov     rcx, [rsp+80h]
00000001401CEC2B  lea     rax, [rcx+rax*4]
00000001401CEC2F  mov     [rsp+80h], rax
00000001401CEC37  jmp     loc_1401CE98F
00000001401CEC3C  mov     eax, [rsp+6Ch]
00000001401CEC40  mov     [rsp+40h], eax
00000001401CEC44  jmp     short loc_1401CEC50
00000001401CEC46  mov     eax, [rsp+40h]
00000001401CEC4A  dec     eax
00000001401CEC4C  mov     [rsp+40h], eax
00000001401CEC50  mov     eax, [rsp+54h]
00000001401CEC54  cmp     [rsp+40h], eax
00000001401CEC58  jl      short loc_1401CECCD
00000001401CEC5A  mov     eax, 254h
00000001401CEC5F  imul    rax, 0
00000001401CEC63  lea     rax, [rsp+rax+5A0h]
00000001401CEC6B  movsxd  rcx, dword ptr [rsp+40h]
00000001401CEC70  mov     edx, 254h
00000001401CEC75  imul    rdx, 0
00000001401CEC79  lea     rdx, [rsp+rdx+5A0h]
00000001401CEC81  movsxd  r8, dword ptr [rsp+40h]
00000001401CEC86  cvtsi2ss xmm0, dword ptr [rsp+40h]
00000001401CEC8C  movss   xmm1, dword ptr [rdx+r8*4]
00000001401CEC92  mulss   xmm1, xmm0
00000001401CEC96  movaps  xmm0, xmm1
00000001401CEC99  divss   xmm0, cs:dword_140278AAC
00000001401CECA1  movss   xmm1, dword ptr [rax+rcx*4]
00000001401CECA6  subss   xmm1, xmm0
00000001401CECAA  movaps  xmm0, xmm1
00000001401CECAD  movsxd  rax, dword ptr [rsp+40h]
00000001401CECB2  mov     ecx, 254h
00000001401CECB7  imul    rcx, 0
00000001401CECBB  lea     rcx, [rsp+rcx+5A0h]
00000001401CECC3  movss   dword ptr [rcx+rax*4], xmm0
00000001401CECC8  jmp     loc_1401CEC46
00000001401CECCD  mov     eax, [rsp+3748h]
00000001401CECD4  lea     eax, [rax+rax+4]
00000001401CECD8  mov     [rsp+68h], eax
00000001401CECDC  mov     eax, [rsp+54h]
00000001401CECE0  mov     ecx, [rsp+6Ch]
00000001401CECE4  sub     ecx, eax
00000001401CECE6  mov     eax, ecx
00000001401CECE8  inc     eax
00000001401CECEA  mov     ecx, 254h
00000001401CECEF  imul    rcx, 0
00000001401CECF3  lea     rcx, [rsp+rcx+5A0h]
00000001401CECFB  movsxd  rdx, dword ptr [rsp+54h]
00000001401CED00  lea     rcx, [rcx+rdx*4]
00000001401CED04  mov     r9d, [rsp+68h]
00000001401CED09  mov     r8d, eax
00000001401CED0C  lea     rdx, [rsp+1B0h]
00000001401CED14  call    sub_1401CFF30
00000001401CED19  mov     eax, 254h
00000001401CED1E  imul    rax, 0
00000001401CED22  lea     rax, [rsp+rax+5A0h]
00000001401CED2A  movsxd  rcx, dword ptr [rsp+54h]
00000001401CED2F  movss   xmm0, dword ptr [rax+rcx*4]
00000001401CED34  movss   dword ptr [rsp+128h], xmm0
00000001401CED3D  movss   xmm0, cs:dword_140278254
00000001401CED45  comiss  xmm0, dword ptr [rsp+128h]
00000001401CED4D  jbe     short loc_1401CED9E
00000001401CED4F  movsxd  rax, dword ptr [rsp+3750h]
00000001401CED57  shl     rax, 2
00000001401CED5B  mov     r8, rax
00000001401CED5E  xor     edx, edx
00000001401CED60  mov     rcx, [rsp+3708h]
00000001401CED68  call    1401FCD30h
00000001401CED6D  mov     rax, [rsp+3720h]
00000001401CED75  xorps   xmm0, xmm0
00000001401CED78  movss   dword ptr [rax], xmm0
00000001401CED7C  xor     eax, eax
00000001401CED7E  mov     rcx, [rsp+3710h]
00000001401CED86  mov     [rcx], ax
00000001401CED89  mov     rax, [rsp+3718h]
00000001401CED91  mov     byte ptr [rax], 0
00000001401CED94  mov     eax, 1
00000001401CED99  jmp     loc_1401CFF05
00000001401CED9E  movss   xmm0, dword ptr [rsp+3730h]
00000001401CEDA7  mulss   xmm0, dword ptr [rsp+128h]
00000001401CEDB0  movss   dword ptr [rsp+140h], xmm0
00000001401CEDB9  mov     dword ptr [rsp+40h], 0
00000001401CEDC1  jmp     short loc_1401CEDCD
00000001401CEDC3  mov     eax, [rsp+40h]
00000001401CEDC7  inc     eax
00000001401CEDC9  mov     [rsp+40h], eax
00000001401CEDCD  mov     eax, [rsp+68h]
00000001401CEDD1  cmp     [rsp+40h], eax
00000001401CEDD5  jge     short loc_1401CEE32
00000001401CEDD7  mov     eax, 254h
00000001401CEDDC  imul    rax, 0
00000001401CEDE0  lea     rax, [rsp+rax+5A0h]
00000001401CEDE8  mov     ecx, [rsp+40h]
00000001401CEDEC  mov     edx, [rsp+54h]
00000001401CEDF0  add     edx, ecx
00000001401CEDF2  mov     ecx, edx
00000001401CEDF4  movsxd  rcx, ecx
00000001401CEDF7  movss   xmm0, dword ptr [rax+rcx*4]
00000001401CEDFC  comiss  xmm0, dword ptr [rsp+140h]
00000001401CEE04  jbe     short loc_1401CEE26
00000001401CEE06  movsxd  rax, dword ptr [rsp+40h]
00000001401CEE0B  mov     eax, [rsp+rax*4+1B0h]
00000001401CEE12  add     eax, [rsp+54h]
00000001401CEE16  shl     eax, 1
00000001401CEE18  movsxd  rcx, dword ptr [rsp+40h]
00000001401CEE1D  mov     [rsp+rcx*4+1B0h], eax
00000001401CEE24  jmp     short loc_1401CEE30
00000001401CEE26  mov     eax, [rsp+40h]
00000001401CEE2A  mov     [rsp+68h], eax
00000001401CEE2E  jmp     short loc_1401CEE32
00000001401CEE30  jmp     short loc_1401CEDC3
00000001401CEE32  mov     eax, [rsp+64h]
00000001401CEE36  sub     eax, 5
00000001401CEE39  mov     [rsp+40h], eax
00000001401CEE3D  jmp     short loc_1401CEE49
00000001401CEE3F  mov     eax, [rsp+40h]
00000001401CEE43  inc     eax
00000001401CEE45  mov     [rsp+40h], eax
00000001401CEE49  mov     eax, [rsp+8Ch]
00000001401CEE50  add     eax, 5
00000001401CEE53  cmp     [rsp+40h], eax
00000001401CEE57  jge     short loc_1401CEE92
00000001401CEE59  movsxd  rax, dword ptr [rsp+40h]
00000001401CEE5E  shl     rax, 1
00000001401CEE61  mov     [rsp+158h], rax
00000001401CEE69  cmp     qword ptr [rsp+158h], 12Ah
00000001401CEE75  jnb     short loc_1401CEE79
00000001401CEE77  jmp     short loc_1401CEE7E
00000001401CEE79  call    sub_1401F8694
00000001401CEE7E  xor     eax, eax
00000001401CEE80  mov     rcx, [rsp+158h]
00000001401CEE88  mov     [rsp+rcx+2930h], ax
00000001401CEE90  jmp     short loc_1401CEE3F
00000001401CEE92  mov     dword ptr [rsp+40h], 0
00000001401CEE9A  jmp     short loc_1401CEEA6
00000001401CEE9C  mov     eax, [rsp+40h]
00000001401CEEA0  inc     eax
00000001401CEEA2  mov     [rsp+40h], eax
00000001401CEEA6  mov     eax, [rsp+68h]
00000001401CEEAA  cmp     [rsp+40h], eax
00000001401CEEAE  jge     short loc_1401CEECC
00000001401CEEB0  movsxd  rax, dword ptr [rsp+40h]
00000001401CEEB5  movsxd  rax, dword ptr [rsp+rax*4+1B0h]
00000001401CEEBD  mov     ecx, 1
00000001401CEEC2  mov     [rsp+rax*2+2930h], cx
00000001401CEECA  jmp     short loc_1401CEE9C
00000001401CEECC  mov     eax, [rsp+8Ch]
00000001401CEED3  add     eax, 3
00000001401CEED6  mov     [rsp+40h], eax
00000001401CEEDA  jmp     short loc_1401CEEE6
00000001401CEEDC  mov     eax, [rsp+40h]
00000001401CEEE0  dec     eax
00000001401CEEE2  mov     [rsp+40h], eax
00000001401CEEE6  mov     eax, [rsp+64h]
00000001401CEEEA  cmp     [rsp+40h], eax
00000001401CEEEE  jl      short loc_1401CEF33
00000001401CEEF0  movsxd  rax, dword ptr [rsp+40h]
00000001401CEEF5  mov     ecx, [rsp+40h]
00000001401CEEF9  dec     ecx
00000001401CEEFB  movsxd  rcx, ecx
00000001401CEEFE  movsx   ecx, word ptr [rsp+rcx*2+2930h]
00000001401CEF06  mov     edx, [rsp+40h]
00000001401CEF0A  sub     edx, 2
00000001401CEF0D  movsxd  rdx, edx
00000001401CEF10  movsx   edx, word ptr [rsp+rdx*2+2930h]
00000001401CEF18  add     ecx, edx
00000001401CEF1A  movsx   eax, word ptr [rsp+rax*2+2930h]
00000001401CEF22  add     eax, ecx
00000001401CEF24  movsxd  rcx, dword ptr [rsp+40h]
00000001401CEF29  mov     [rsp+rcx*2+2930h], ax
00000001401CEF31  jmp     short loc_1401CEEDC
00000001401CEF33  mov     dword ptr [rsp+68h], 0
00000001401CEF3B  mov     eax, [rsp+64h]
00000001401CEF3F  mov     [rsp+40h], eax
00000001401CEF43  jmp     short loc_1401CEF4F
00000001401CEF45  mov     eax, [rsp+40h]
00000001401CEF49  inc     eax
00000001401CEF4B  mov     [rsp+40h], eax
00000001401CEF4F  mov     eax, [rsp+8Ch]
00000001401CEF56  inc     eax
00000001401CEF58  cmp     [rsp+40h], eax
00000001401CEF5C  jge     short loc_1401CEF8E
00000001401CEF5E  mov     eax, [rsp+40h]
00000001401CEF62  inc     eax
00000001401CEF64  cdqe
00000001401CEF66  movsx   eax, word ptr [rsp+rax*2+2930h]
00000001401CEF6E  test    eax, eax
00000001401CEF70  jle     short loc_1401CEF8C
00000001401CEF72  movsxd  rax, dword ptr [rsp+68h]
00000001401CEF77  mov     ecx, [rsp+40h]
00000001401CEF7B  mov     [rsp+rax*4+1B0h], ecx
00000001401CEF82  mov     eax, [rsp+68h]
00000001401CEF86  inc     eax
00000001401CEF88  mov     [rsp+68h], eax
00000001401CEF8C  jmp     short loc_1401CEF45
00000001401CEF8E  mov     eax, [rsp+8Ch]
00000001401CEF95  add     eax, 3
00000001401CEF98  mov     [rsp+40h], eax
00000001401CEF9C  jmp     short loc_1401CEFA8
00000001401CEF9E  mov     eax, [rsp+40h]
00000001401CEFA2  dec     eax
00000001401CEFA4  mov     [rsp+40h], eax
00000001401CEFA8  mov     eax, [rsp+64h]
00000001401CEFAC  cmp     [rsp+40h], eax
00000001401CEFB0  jl      short loc_1401CF009
00000001401CEFB2  movsxd  rax, dword ptr [rsp+40h]
00000001401CEFB7  mov     ecx, [rsp+40h]
00000001401CEFBB  dec     ecx
00000001401CEFBD  movsxd  rcx, ecx
00000001401CEFC0  movsx   ecx, word ptr [rsp+rcx*2+2930h]
00000001401CEFC8  mov     edx, [rsp+40h]
00000001401CEFCC  sub     edx, 2
00000001401CEFCF  movsxd  rdx, edx
00000001401CEFD2  movsx   edx, word ptr [rsp+rdx*2+2930h]
00000001401CEFDA  add     ecx, edx
00000001401CEFDC  mov     edx, [rsp+40h]
00000001401CEFE0  sub     edx, 3
00000001401CEFE3  movsxd  rdx, edx
00000001401CEFE6  movsx   edx, word ptr [rsp+rdx*2+2930h]
00000001401CEFEE  add     ecx, edx
00000001401CEFF0  movsx   eax, word ptr [rsp+rax*2+2930h]
00000001401CEFF8  add     eax, ecx
00000001401CEFFA  movsxd  rcx, dword ptr [rsp+40h]
00000001401CEFFF  mov     [rsp+rcx*2+2930h], ax
00000001401CF007  jmp     short loc_1401CEF9E
00000001401CF009  mov     dword ptr [rsp+0B0h], 0
00000001401CF014  mov     eax, [rsp+64h]
00000001401CF018  mov     [rsp+40h], eax
00000001401CF01C  jmp     short loc_1401CF028
00000001401CF01E  mov     eax, [rsp+40h]
00000001401CF022  inc     eax
00000001401CF024  mov     [rsp+40h], eax
00000001401CF028  mov     eax, [rsp+8Ch]
00000001401CF02F  add     eax, 4
00000001401CF032  cmp     [rsp+40h], eax
00000001401CF036  jge     short loc_1401CF072
00000001401CF038  movsxd  rax, dword ptr [rsp+40h]
00000001401CF03D  movsx   eax, word ptr [rsp+rax*2+2930h]
00000001401CF045  test    eax, eax
00000001401CF047  jle     short loc_1401CF070
00000001401CF049  mov     eax, [rsp+40h]
00000001401CF04D  sub     eax, 2
00000001401CF050  movsxd  rcx, dword ptr [rsp+0B0h]
00000001401CF058  mov     [rsp+rcx*2+2930h], ax
00000001401CF060  mov     eax, [rsp+0B0h]
00000001401CF067  inc     eax
00000001401CF069  mov     [rsp+0B0h], eax
00000001401CF070  jmp     short loc_1401CF01E
00000001401CF072  mov     r8d, 950h
00000001401CF078  xor     edx, edx
00000001401CF07A  lea     rcx, [rsp+5A0h]
00000001401CF082  call    1401FCD30h
00000001401CF087  cmp     dword ptr [rsp+3740h], 8
00000001401CF08F  jnz     short loc_1401CF0B5
00000001401CF091  mov     eax, 4
00000001401CF096  imul    rax, 0A0h
00000001401CF09D  mov     rcx, [rsp+3700h]
00000001401CF0A5  add     rcx, rax
00000001401CF0A8  mov     rax, rcx
00000001401CF0AB  mov     [rsp+80h], rax
00000001401CF0B3  jmp     short loc_1401CF0D1
00000001401CF0B5  mov     eax, 4
00000001401CF0BA  imul    rax, 0A0h
00000001401CF0C1  lea     rax, [rsp+rax+0EF0h]
00000001401CF0C9  mov     [rsp+80h], rax
00000001401CF0D1  mov     dword ptr [rsp+44h], 0
00000001401CF0D9  jmp     short loc_1401CF0E5
00000001401CF0DB  mov     eax, [rsp+44h]
00000001401CF0DF  inc     eax
00000001401CF0E1  mov     [rsp+44h], eax
00000001401CF0E5  mov     eax, [rsp+3750h]
00000001401CF0EC  cmp     [rsp+44h], eax
00000001401CF0F0  jge     loc_1401CF24C
00000001401CF0F6  mov     edx, [rsp+5Ch]
00000001401CF0FA  mov     rcx, [rsp+80h]
00000001401CF102  call    sub_1401D1050
00000001401CF107  addsd   xmm0, cs:Y
00000001401CF10F  movsd   qword ptr [rsp+150h], xmm0
00000001401CF118  mov     dword ptr [rsp+48h], 0
00000001401CF120  jmp     short loc_1401CF12C
00000001401CF122  mov     eax, [rsp+48h]
00000001401CF126  inc     eax
00000001401CF128  mov     [rsp+48h], eax
00000001401CF12C  mov     eax, [rsp+0B0h]
00000001401CF133  cmp     [rsp+48h], eax
00000001401CF137  jge     loc_1401CF22E
00000001401CF13D  movsxd  rax, dword ptr [rsp+48h]
00000001401CF142  movsx   eax, word ptr [rsp+rax*2+2930h]
00000001401CF14A  mov     [rsp+4Ch], eax
00000001401CF14E  movsxd  rax, dword ptr [rsp+4Ch]
00000001401CF153  shl     rax, 2
00000001401CF157  mov     rcx, [rsp+80h]
00000001401CF15F  sub     rcx, rax
00000001401CF162  mov     rax, rcx
00000001401CF165  mov     [rsp+0A0h], rax
00000001401CF16D  mov     r8d, [rsp+5Ch]
00000001401CF172  mov     rdx, [rsp+80h]
00000001401CF17A  mov     rcx, [rsp+0A0h]
00000001401CF182  call    sub_1401D0EF0
00000001401CF187  movsd   qword ptr [rsp+98h], xmm0
00000001401CF190  movsd   xmm0, qword ptr [rsp+98h]
00000001401CF199  comisd  xmm0, cs:qword_1402831A8
00000001401CF1A1  jbe     short loc_1401CF208
00000001401CF1A3  mov     edx, [rsp+5Ch]
00000001401CF1A7  mov     rcx, [rsp+0A0h]
00000001401CF1AF  call    sub_1401D1050
00000001401CF1B4  movsd   qword ptr [rsp+130h], xmm0
00000001401CF1BD  movsd   xmm0, cs:X
00000001401CF1C5  mulsd   xmm0, qword ptr [rsp+98h]
00000001401CF1CE  movsd   xmm1, qword ptr [rsp+130h]
00000001401CF1D7  addsd   xmm1, qword ptr [rsp+150h]
00000001401CF1E0  divsd   xmm0, xmm1
00000001401CF1E4  cvtsd2ss xmm0, xmm0
00000001401CF1E8  movsxd  rax, dword ptr [rsp+44h]
00000001401CF1ED  imul    rax, 254h
00000001401CF1F4  lea     rax, [rsp+rax+5A0h]
00000001401CF1FC  movsxd  rcx, dword ptr [rsp+4Ch]
00000001401CF201  movss   dword ptr [rax+rcx*4], xmm0
00000001401CF206  jmp     short loc_1401CF229
00000001401CF208  movsxd  rax, dword ptr [rsp+44h]
00000001401CF20D  imul    rax, 254h
00000001401CF214  lea     rax, [rsp+rax+5A0h]
00000001401CF21C  movsxd  rcx, dword ptr [rsp+4Ch]
00000001401CF221  xorps   xmm0, xmm0
00000001401CF224  movss   dword ptr [rax+rcx*4], xmm0
00000001401CF229  jmp     loc_1401CF122
00000001401CF22E  movsxd  rax, dword ptr [rsp+5Ch]
00000001401CF233  mov     rcx, [rsp+80h]
00000001401CF23B  lea     rax, [rcx+rax*4]
00000001401CF23F  mov     [rsp+80h], rax
00000001401CF247  jmp     loc_1401CF0DB
00000001401CF24C  xorps   xmm0, xmm0
00000001401CF24F  movss   dword ptr [rsp+94h], xmm0
00000001401CF258  movss   xmm0, cs:dword_1402833A8
00000001401CF260  movss   dword ptr [rsp+0D8h], xmm0
00000001401CF269  mov     dword ptr [rsp+78h], 0
00000001401CF271  mov     dword ptr [rsp+50h], 0FFFFFFFFh
00000001401CF279  cmp     dword ptr [rsp+3728h], 0
00000001401CF281  jle     short loc_1401CF2DE
00000001401CF283  cmp     dword ptr [rsp+3740h], 0Ch
00000001401CF28B  jnz     short loc_1401CF2A7
00000001401CF28D  mov     eax, [rsp+3728h]
00000001401CF294  shl     eax, 1
00000001401CF296  cdq
00000001401CF297  mov     ecx, 3
00000001401CF29C  idiv    ecx
00000001401CF29E  mov     [rsp+3728h], eax
00000001401CF2A5  jmp     short loc_1401CF2C1
00000001401CF2A7  cmp     dword ptr [rsp+3740h], 10h
00000001401CF2AF  jnz     short loc_1401CF2C1
00000001401CF2B1  mov     eax, [rsp+3728h]
00000001401CF2B8  sar     eax, 1
00000001401CF2BA  mov     [rsp+3728h], eax
00000001401CF2C1  cvtsi2ss xmm0, dword ptr [rsp+3728h]
00000001401CF2CA  cvtss2sd xmm0, xmm0
00000001401CF2CE  call    sub_1401D1340
00000001401CF2D3  movss   dword ptr [rsp+0D4h], xmm0
00000001401CF2DC  jmp     short loc_1401CF2EA
00000001401CF2DE  xorps   xmm0, xmm0
00000001401CF2E1  movss   dword ptr [rsp+0D4h], xmm0
00000001401CF2EA  cmp     dword ptr [rsp+3750h], 4
00000001401CF2F2  jnz     short loc_1401CF351
00000001401CF2F4  mov     dword ptr [rsp+88h], 0Bh
00000001401CF2FF  mov     eax, 0Bh
00000001401CF304  imul    rax, 0
00000001401CF308  lea     rcx, unk_14027E290
00000001401CF30F  add     rcx, rax
00000001401CF312  mov     rax, rcx
00000001401CF315  mov     ecx, 1
00000001401CF31A  imul    rcx, 0
00000001401CF31E  add     rax, rcx
00000001401CF321  mov     [rsp+0C8h], rax
00000001401CF329  cmp     dword ptr [rsp+3740h], 8
00000001401CF331  jnz     short loc_1401CF347
00000001401CF333  cmp     dword ptr [rsp+3748h], 0
00000001401CF33B  jle     short loc_1401CF347
00000001401CF33D  mov     dword ptr [rsp+70h], 0Bh
00000001401CF345  jmp     short loc_1401CF34F
00000001401CF347  mov     dword ptr [rsp+70h], 3
00000001401CF34F  jmp     short loc_1401CF38E
00000001401CF351  mov     dword ptr [rsp+88h], 3
00000001401CF35C  mov     eax, 3
00000001401CF361  imul    rax, 0
00000001401CF365  lea     rcx, unk_14027BC14
00000001401CF36C  add     rcx, rax
00000001401CF36F  mov     rax, rcx
00000001401CF372  mov     ecx, 1
00000001401CF377  imul    rcx, 0
00000001401CF37B  add     rax, rcx
00000001401CF37E  mov     [rsp+0C8h], rax
00000001401CF386  mov     dword ptr [rsp+70h], 3
00000001401CF38E  mov     dword ptr [rsp+44h], 0
00000001401CF396  jmp     short loc_1401CF3A2
00000001401CF398  mov     eax, [rsp+44h]
00000001401CF39C  inc     eax
00000001401CF39E  mov     [rsp+44h], eax
00000001401CF3A2  mov     eax, [rsp+68h]
00000001401CF3A6  cmp     [rsp+44h], eax
00000001401CF3AA  jge     loc_1401CF642
00000001401CF3B0  movsxd  rax, dword ptr [rsp+44h]
00000001401CF3B5  mov     eax, [rsp+rax*4+1B0h]
00000001401CF3BC  mov     [rsp+4Ch], eax
00000001401CF3C0  mov     dword ptr [rsp+48h], 0
00000001401CF3C8  jmp     short loc_1401CF3D4
00000001401CF3CA  mov     eax, [rsp+48h]
00000001401CF3CE  inc     eax
00000001401CF3D0  mov     [rsp+48h], eax
00000001401CF3D4  mov     eax, [rsp+70h]
00000001401CF3D8  cmp     [rsp+48h], eax
00000001401CF3DC  jge     loc_1401CF47E
00000001401CF3E2  movsxd  rax, dword ptr [rsp+48h]
00000001401CF3E7  xorps   xmm0, xmm0
00000001401CF3EA  movss   dword ptr [rsp+rax*4+180h], xmm0
00000001401CF3F3  mov     dword ptr [rsp+40h], 0
00000001401CF3FB  jmp     short loc_1401CF407
00000001401CF3FD  mov     eax, [rsp+40h]
00000001401CF401  inc     eax
00000001401CF403  mov     [rsp+40h], eax
00000001401CF407  mov     eax, [rsp+3750h]
00000001401CF40E  cmp     [rsp+40h], eax
00000001401CF412  jge     short loc_1401CF479
00000001401CF414  movsxd  rax, dword ptr [rsp+48h]
00000001401CF419  movsxd  rcx, dword ptr [rsp+40h]
00000001401CF41E  imul    rcx, 254h
00000001401CF425  lea     rcx, [rsp+rcx+5A0h]
00000001401CF42D  mov     edx, [rsp+40h]
00000001401CF431  imul    edx, [rsp+88h]
00000001401CF439  add     edx, [rsp+48h]
00000001401CF43D  movsxd  rdx, edx
00000001401CF440  mov     r8, [rsp+0C8h]
00000001401CF448  movsx   edx, byte ptr [r8+rdx]
00000001401CF44D  mov     r8d, [rsp+4Ch]
00000001401CF452  add     r8d, edx
00000001401CF455  mov     edx, r8d
00000001401CF458  movsxd  rdx, edx
00000001401CF45B  movss   xmm0, dword ptr [rsp+rax*4+180h]
00000001401CF464  addss   xmm0, dword ptr [rcx+rdx*4]
00000001401CF469  movsxd  rax, dword ptr [rsp+48h]
00000001401CF46E  movss   dword ptr [rsp+rax*4+180h], xmm0
00000001401CF477  jmp     short loc_1401CF3FD
00000001401CF479  jmp     loc_1401CF3CA
00000001401CF47E  movss   xmm0, cs:dword_1402833A8
00000001401CF486  movss   dword ptr [rsp+60h], xmm0
00000001401CF48C  mov     dword ptr [rsp+0DCh], 0
00000001401CF497  mov     dword ptr [rsp+40h], 0
00000001401CF49F  jmp     short loc_1401CF4AB
00000001401CF4A1  mov     eax, [rsp+40h]
00000001401CF4A5  inc     eax
00000001401CF4A7  mov     [rsp+40h], eax
00000001401CF4AB  mov     eax, [rsp+70h]
00000001401CF4AF  cmp     [rsp+40h], eax
00000001401CF4B3  jge     short loc_1401CF4EB
00000001401CF4B5  movsxd  rax, dword ptr [rsp+40h]
00000001401CF4BA  movss   xmm0, dword ptr [rsp+rax*4+180h]
00000001401CF4C3  comiss  xmm0, dword ptr [rsp+60h]
00000001401CF4C8  jbe     short loc_1401CF4E9
00000001401CF4CA  movsxd  rax, dword ptr [rsp+40h]
00000001401CF4CF  movss   xmm0, dword ptr [rsp+rax*4+180h]
00000001401CF4D8  movss   dword ptr [rsp+60h], xmm0
00000001401CF4DE  mov     eax, [rsp+40h]
00000001401CF4E2  mov     [rsp+0DCh], eax
00000001401CF4E9  jmp     short loc_1401CF4A1
00000001401CF4EB  cvtsi2ss xmm0, dword ptr [rsp+4Ch]
00000001401CF4F1  cvtss2sd xmm0, xmm0
00000001401CF4F5  call    sub_1401D1340
00000001401CF4FA  movss   dword ptr [rsp+0D0h], xmm0
00000001401CF503  cvtsi2ss xmm0, dword ptr [rsp+3750h]
00000001401CF50C  movss   xmm1, cs:dword_140278254
00000001401CF514  mulss   xmm1, xmm0
00000001401CF518  movaps  xmm0, xmm1
00000001401CF51B  mulss   xmm0, dword ptr [rsp+0D0h]
00000001401CF524  movss   xmm1, dword ptr [rsp+60h]
00000001401CF52A  subss   xmm1, xmm0
00000001401CF52E  movaps  xmm0, xmm1
00000001401CF531  movss   dword ptr [rsp+0B4h], xmm0
00000001401CF53A  cmp     dword ptr [rsp+3728h], 0
00000001401CF542  jle     loc_1401CF5D9
00000001401CF548  movss   xmm0, dword ptr [rsp+0D0h]
00000001401CF551  subss   xmm0, dword ptr [rsp+0D4h]
00000001401CF55A  movss   dword ptr [rsp+90h], xmm0
00000001401CF563  movss   xmm0, dword ptr [rsp+90h]
00000001401CF56C  mulss   xmm0, dword ptr [rsp+90h]
00000001401CF575  movss   dword ptr [rsp+90h], xmm0
00000001401CF57E  cvtsi2ss xmm0, dword ptr [rsp+3750h]
00000001401CF587  movss   xmm1, cs:dword_140278254
00000001401CF58F  mulss   xmm1, xmm0
00000001401CF593  movaps  xmm0, xmm1
00000001401CF596  mov     rax, [rsp+3720h]
00000001401CF59E  mulss   xmm0, dword ptr [rax]
00000001401CF5A2  mulss   xmm0, dword ptr [rsp+90h]
00000001401CF5AB  movss   xmm1, dword ptr [rsp+90h]
00000001401CF5B4  addss   xmm1, cs:dword_140278338
00000001401CF5BC  divss   xmm0, xmm1
00000001401CF5C0  movss   xmm1, dword ptr [rsp+0B4h]
00000001401CF5C9  subss   xmm1, xmm0
00000001401CF5CD  movaps  xmm0, xmm1
00000001401CF5D0  movss   dword ptr [rsp+0B4h], xmm0
00000001401CF5D9  movss   xmm0, dword ptr [rsp+0B4h]
00000001401CF5E2  comiss  xmm0, dword ptr [rsp+0D8h]
00000001401CF5EA  jbe     short loc_1401CF63D
00000001401CF5EC  cvtsi2ss xmm0, dword ptr [rsp+3750h]
00000001401CF5F5  mulss   xmm0, dword ptr [rsp+3738h]
00000001401CF5FE  movss   xmm1, dword ptr [rsp+60h]
00000001401CF604  comiss  xmm1, xmm0
00000001401CF607  jbe     short loc_1401CF63D
00000001401CF609  movss   xmm0, dword ptr [rsp+0B4h]
00000001401CF612  movss   dword ptr [rsp+0D8h], xmm0
00000001401CF61B  movss   xmm0, dword ptr [rsp+60h]
00000001401CF621  movss   dword ptr [rsp+94h], xmm0
00000001401CF62A  mov     eax, [rsp+4Ch]
00000001401CF62E  mov     [rsp+50h], eax
00000001401CF632  mov     eax, [rsp+0DCh]
00000001401CF639  mov     [rsp+78h], eax
00000001401CF63D  jmp     loc_1401CF398
00000001401CF642  cmp     dword ptr [rsp+50h], 0FFFFFFFFh
00000001401CF647  jnz     short loc_1401CF68F
00000001401CF649  mov     r8d, 10h
00000001401CF64F  xor     edx, edx
00000001401CF651  mov     rcx, [rsp+3708h]
00000001401CF659  call    1401FCD30h
00000001401CF65E  mov     rax, [rsp+3720h]
00000001401CF666  xorps   xmm0, xmm0
00000001401CF669  movss   dword ptr [rax], xmm0
00000001401CF66D  xor     eax, eax
00000001401CF66F  mov     rcx, [rsp+3710h]
00000001401CF677  mov     [rcx], ax
00000001401CF67A  mov     rax, [rsp+3718h]
00000001401CF682  mov     byte ptr [rax], 0
00000001401CF685  mov     eax, 1
00000001401CF68A  jmp     loc_1401CFF05
00000001401CF68F  cvtsi2ss xmm0, dword ptr [rsp+3750h]
00000001401CF698  movss   xmm1, dword ptr [rsp+94h]
00000001401CF6A1  divss   xmm1, xmm0
00000001401CF6A5  movaps  xmm0, xmm1
00000001401CF6A8  mov     rax, [rsp+3720h]
00000001401CF6B0  movss   dword ptr [rax], xmm0
00000001401CF6B4  cmp     dword ptr [rsp+3740h], 8
00000001401CF6BC  jle     loc_1401CFD68
00000001401CF6C2  cmp     dword ptr [rsp+3740h], 0Ch
00000001401CF6CA  jnz     short loc_1401CF6E9
00000001401CF6CC  movsx   eax, word ptr [rsp+50h]
00000001401CF6D1  imul    eax, 3
00000001401CF6D4  sar     eax, 1
00000001401CF6D6  movsx   ecx, word ptr [rsp+50h]
00000001401CF6DB  imul    ecx, 3
00000001401CF6DE  and     ecx, 1
00000001401CF6E1  add     eax, ecx
00000001401CF6E3  mov     [rsp+50h], eax
00000001401CF6E7  jmp     short loc_1401CF6F3
00000001401CF6E9  mov     eax, [rsp+50h]
00000001401CF6ED  shl     eax, 1
00000001401CF6EF  mov     [rsp+50h], eax
00000001401CF6F3  mov     eax, [rsp+74h]
00000001401CF6F7  cmp     [rsp+58h], eax
00000001401CF6FB  jle     short loc_1401CF754
00000001401CF6FD  mov     eax, [rsp+58h]
00000001401CF701  cmp     [rsp+50h], eax
00000001401CF705  jle     short loc_1401CF714
00000001401CF707  mov     eax, [rsp+58h]
00000001401CF70B  mov     [rsp+0E4h], eax
00000001401CF712  jmp     short loc_1401CF744
00000001401CF714  mov     eax, [rsp+74h]
00000001401CF718  cmp     [rsp+50h], eax
00000001401CF71C  jge     short loc_1401CF72B
00000001401CF71E  mov     eax, [rsp+74h]
00000001401CF722  mov     [rsp+0E0h], eax
00000001401CF729  jmp     short loc_1401CF736
00000001401CF72B  mov     eax, [rsp+50h]
00000001401CF72F  mov     [rsp+0E0h], eax
00000001401CF736  mov     eax, [rsp+0E0h]
00000001401CF73D  mov     [rsp+0E4h], eax
00000001401CF744  mov     eax, [rsp+0E4h]
00000001401CF74B  mov     [rsp+0F0h], eax
00000001401CF752  jmp     short loc_1401CF7A9
00000001401CF754  mov     eax, [rsp+74h]
00000001401CF758  cmp     [rsp+50h], eax
00000001401CF75C  jle     short loc_1401CF76B
00000001401CF75E  mov     eax, [rsp+74h]
00000001401CF762  mov     [rsp+0ECh], eax
00000001401CF769  jmp     short loc_1401CF79B
00000001401CF76B  mov     eax, [rsp+58h]
00000001401CF76F  cmp     [rsp+50h], eax
00000001401CF773  jge     short loc_1401CF782
00000001401CF775  mov     eax, [rsp+58h]
00000001401CF779  mov     [rsp+0E8h], eax
00000001401CF780  jmp     short loc_1401CF78D
00000001401CF782  mov     eax, [rsp+50h]
00000001401CF786  mov     [rsp+0E8h], eax
00000001401CF78D  mov     eax, [rsp+0E8h]
00000001401CF794  mov     [rsp+0ECh], eax
00000001401CF79B  mov     eax, [rsp+0ECh]
00000001401CF7A2  mov     [rsp+0F0h], eax
00000001401CF7A9  mov     eax, [rsp+0F0h]
00000001401CF7B0  mov     [rsp+50h], eax
00000001401CF7B4  mov     eax, [rsp+50h]
00000001401CF7B8  sub     eax, 2
00000001401CF7BB  mov     edx, [rsp+58h]
00000001401CF7BF  mov     ecx, eax
00000001401CF7C1  call    sub_1401BE3A0
00000001401CF7C6  mov     [rsp+0C0h], eax
00000001401CF7CD  mov     eax, [rsp+50h]
00000001401CF7D1  add     eax, 2
00000001401CF7D4  mov     edx, [rsp+74h]
00000001401CF7D8  mov     ecx, eax
00000001401CF7DA  call    sub_1401BE320
00000001401CF7DF  mov     [rsp+144h], eax
00000001401CF7E6  mov     eax, [rsp+50h]
00000001401CF7EA  mov     [rsp+0C4h], eax
00000001401CF7F1  mov     dword ptr [rsp+78h], 0
00000001401CF7F9  movss   xmm0, cs:dword_1402833A8
00000001401CF801  movss   dword ptr [rsp+94h], xmm0
00000001401CF80A  mov     eax, [rsp+3758h]
00000001401CF811  mov     [rsp+30h], eax
00000001401CF815  mov     eax, [rsp+3748h]
00000001401CF81C  mov     [rsp+28h], eax
00000001401CF820  mov     eax, [rsp+3750h]
00000001401CF827  mov     [rsp+20h], eax
00000001401CF82B  mov     r9d, [rsp+0BCh]
00000001401CF833  mov     r8d, [rsp+0C0h]
00000001401CF83B  mov     rdx, [rsp+3700h]
00000001401CF843  lea     rcx, [rsp+1E90h]
00000001401CF84B  call    sub_1401E0010
00000001401CF850  mov     eax, [rsp+3748h]
00000001401CF857  mov     [rsp+28h], eax
00000001401CF85B  mov     eax, [rsp+3750h]
00000001401CF862  mov     [rsp+20h], eax
00000001401CF866  mov     r9d, [rsp+0BCh]
00000001401CF86E  mov     r8d, [rsp+0C0h]
00000001401CF876  mov     rdx, [rsp+3700h]
00000001401CF87E  lea     rcx, [rsp+13F0h]
00000001401CF886  call    sub_1401E0340
00000001401CF88B  mov     dword ptr [rsp+0B8h], 0
00000001401CF896  cvtsi2ss xmm0, dword ptr [rsp+50h]
00000001401CF89C  movss   xmm1, cs:dword_1402781AC
00000001401CF8A4  divss   xmm1, xmm0
00000001401CF8A8  movaps  xmm0, xmm1
00000001401CF8AB  movss   dword ptr [rsp+148h], xmm0
00000001401CF8B4  cmp     dword ptr [rsp+3750h], 4
00000001401CF8BC  jnz     short loc_1401CF90C
00000001401CF8BE  movsxd  rax, dword ptr [rsp+3748h]
00000001401CF8C6  lea     rcx, unk_14027BB84
00000001401CF8CD  movsx   eax, byte ptr [rcx+rax]
00000001401CF8D1  mov     [rsp+70h], eax
00000001401CF8D5  mov     dword ptr [rsp+88h], 22h ; '"'
00000001401CF8E0  mov     eax, 22h ; '"'
00000001401CF8E5  imul    rax, 0
00000001401CF8E9  lea     rcx, unk_14027E2C0
00000001401CF8F0  add     rcx, rax
00000001401CF8F3  mov     rax, rcx
00000001401CF8F6  mov     ecx, 1
00000001401CF8FB  imul    rcx, 0
00000001401CF8FF  add     rax, rcx
00000001401CF902  mov     [rsp+0C8h], rax
00000001401CF90A  jmp     short loc_1401CF949
00000001401CF90C  mov     dword ptr [rsp+70h], 0Ch
00000001401CF914  mov     dword ptr [rsp+88h], 0Ch
00000001401CF91F  mov     eax, 0Ch
00000001401CF924  imul    rax, 0
00000001401CF928  lea     rcx, unk_14027CC28
00000001401CF92F  add     rcx, rax
00000001401CF932  mov     rax, rcx
00000001401CF935  mov     ecx, 1
00000001401CF93A  imul    rcx, 0
00000001401CF93E  add     rax, rcx
00000001401CF941  mov     [rsp+0C8h], rax
00000001401CF949  imul    eax, [rsp+3740h], 14h
00000001401CF951  cdqe
00000001401CF953  mov     rcx, [rsp+3700h]
00000001401CF95B  lea     rax, [rcx+rax*4]
00000001401CF95F  mov     [rsp+80h], rax
00000001401CF967  mov     eax, [rsp+3750h]
00000001401CF96E  imul    eax, [rsp+0BCh]
00000001401CF976  mov     edx, eax
00000001401CF978  mov     rcx, [rsp+80h]
00000001401CF980  call    sub_1401D1050
00000001401CF985  addsd   xmm0, cs:Y
00000001401CF98D  movsd   qword ptr [rsp+150h], xmm0
00000001401CF996  mov     eax, [rsp+0C0h]
00000001401CF99D  mov     [rsp+4Ch], eax
00000001401CF9A1  jmp     short loc_1401CF9AD
00000001401CF9A3  mov     eax, [rsp+4Ch]
00000001401CF9A7  inc     eax
00000001401CF9A9  mov     [rsp+4Ch], eax
00000001401CF9AD  mov     eax, [rsp+144h]
00000001401CF9B4  cmp     [rsp+4Ch], eax
00000001401CF9B8  jg      loc_1401CFBA7
00000001401CF9BE  mov     dword ptr [rsp+48h], 0
00000001401CF9C6  jmp     short loc_1401CF9D2
00000001401CF9C8  mov     eax, [rsp+48h]
00000001401CF9CC  inc     eax
00000001401CF9CE  mov     [rsp+48h], eax
00000001401CF9D2  mov     eax, [rsp+70h]
00000001401CF9D6  cmp     [rsp+48h], eax
00000001401CF9DA  jge     loc_1401CFB92
00000001401CF9E0  xorps   xmm0, xmm0
00000001401CF9E3  movsd   qword ptr [rsp+98h], xmm0
00000001401CF9EC  movsd   xmm0, qword ptr [rsp+150h]
00000001401CF9F5  movsd   qword ptr [rsp+130h], xmm0
00000001401CF9FE  mov     dword ptr [rsp+44h], 0
00000001401CFA06  jmp     short loc_1401CFA12
00000001401CFA08  mov     eax, [rsp+44h]
00000001401CFA0C  inc     eax
00000001401CFA0E  mov     [rsp+44h], eax
00000001401CFA12  mov     eax, [rsp+3750h]
00000001401CFA19  cmp     [rsp+44h], eax
00000001401CFA1D  jge     loc_1401CFAB4
00000001401CFA23  movsxd  rax, dword ptr [rsp+44h]
00000001401CFA28  imul    rax, 2A8h
00000001401CFA2F  lea     rax, [rsp+rax+1E90h]
00000001401CFA37  movsxd  rcx, dword ptr [rsp+48h]
00000001401CFA3C  imul    rcx, 14h
00000001401CFA40  add     rax, rcx
00000001401CFA43  movsxd  rcx, dword ptr [rsp+0B8h]
00000001401CFA4B  cvtss2sd xmm0, dword ptr [rax+rcx*4]
00000001401CFA50  movsd   xmm1, qword ptr [rsp+98h]
00000001401CFA59  addsd   xmm1, xmm0
00000001401CFA5D  movaps  xmm0, xmm1
00000001401CFA60  movsd   qword ptr [rsp+98h], xmm0
00000001401CFA69  movsxd  rax, dword ptr [rsp+44h]
00000001401CFA6E  imul    rax, 2A8h
00000001401CFA75  lea     rax, [rsp+rax+13F0h]
00000001401CFA7D  movsxd  rcx, dword ptr [rsp+48h]
00000001401CFA82  imul    rcx, 14h
00000001401CFA86  add     rax, rcx
00000001401CFA89  movsxd  rcx, dword ptr [rsp+0B8h]
00000001401CFA91  cvtss2sd xmm0, dword ptr [rax+rcx*4]
00000001401CFA96  movsd   xmm1, qword ptr [rsp+130h]
00000001401CFA9F  addsd   xmm1, xmm0
00000001401CFAA3  movaps  xmm0, xmm1
00000001401CFAA6  movsd   qword ptr [rsp+130h], xmm0
00000001401CFAAF  jmp     loc_1401CFA08
00000001401CFAB4  movsd   xmm0, qword ptr [rsp+98h]
00000001401CFABD  comisd  xmm0, cs:qword_1402831A8
00000001401CFAC5  jbe     short loc_1401CFB25
00000001401CFAC7  movsd   xmm0, cs:X
00000001401CFACF  mulsd   xmm0, qword ptr [rsp+98h]
00000001401CFAD8  divsd   xmm0, qword ptr [rsp+130h]
00000001401CFAE1  cvtsd2ss xmm0, xmm0
00000001401CFAE5  movss   dword ptr [rsp+60h], xmm0
00000001401CFAEB  cvtsi2ss xmm0, dword ptr [rsp+48h]
00000001401CFAF1  movss   xmm1, dword ptr [rsp+148h]
00000001401CFAFA  mulss   xmm1, xmm0
00000001401CFAFE  movaps  xmm0, xmm1
00000001401CFB01  movss   xmm1, cs:dword_1402783F4
00000001401CFB09  subss   xmm1, xmm0
00000001401CFB0D  movaps  xmm0, xmm1
00000001401CFB10  movss   xmm1, dword ptr [rsp+60h]
00000001401CFB16  mulss   xmm1, xmm0
00000001401CFB1A  movaps  xmm0, xmm1
00000001401CFB1D  movss   dword ptr [rsp+60h], xmm0
00000001401CFB23  jmp     short loc_1401CFB2E
00000001401CFB25  xorps   xmm0, xmm0
00000001401CFB28  movss   dword ptr [rsp+60h], xmm0
00000001401CFB2E  movss   xmm0, dword ptr [rsp+60h]
00000001401CFB34  comiss  xmm0, dword ptr [rsp+94h]
00000001401CFB3C  jbe     short loc_1401CFB8D
00000001401CFB3E  mov     eax, 22h ; '"'
00000001401CFB43  imul    rax, 0
00000001401CFB47  lea     rcx, unk_14027E2C0
00000001401CFB4E  add     rcx, rax
00000001401CFB51  mov     rax, rcx
00000001401CFB54  movsxd  rcx, dword ptr [rsp+48h]
00000001401CFB59  movsx   eax, byte ptr [rax+rcx]
00000001401CFB5D  mov     ecx, [rsp+4Ch]
00000001401CFB61  add     ecx, eax
00000001401CFB63  mov     eax, ecx
00000001401CFB65  cmp     eax, [rsp+74h]
00000001401CFB69  jg      short loc_1401CFB8D
00000001401CFB6B  movss   xmm0, dword ptr [rsp+60h]
00000001401CFB71  movss   dword ptr [rsp+94h], xmm0
00000001401CFB7A  mov     eax, [rsp+4Ch]
00000001401CFB7E  mov     [rsp+0C4h], eax
00000001401CFB85  mov     eax, [rsp+48h]
00000001401CFB89  mov     [rsp+78h], eax
00000001401CFB8D  jmp     loc_1401CF9C8
00000001401CFB92  mov     eax, [rsp+0B8h]
00000001401CFB99  inc     eax
00000001401CFB9B  mov     [rsp+0B8h], eax
00000001401CFBA2  jmp     loc_1401CF9A3
00000001401CFBA7  mov     dword ptr [rsp+44h], 0
00000001401CFBAF  jmp     short loc_1401CFBBB
00000001401CFBB1  mov     eax, [rsp+44h]
00000001401CFBB5  inc     eax
00000001401CFBB7  mov     [rsp+44h], eax
00000001401CFBBB  mov     eax, [rsp+3750h]
00000001401CFBC2  cmp     [rsp+44h], eax
00000001401CFBC6  jge     loc_1401CFD3A
00000001401CFBCC  mov     eax, [rsp+44h]
00000001401CFBD0  imul    eax, [rsp+88h]
00000001401CFBD8  add     eax, [rsp+78h]
00000001401CFBDC  cdqe
00000001401CFBDE  mov     rcx, [rsp+0C8h]
00000001401CFBE6  movsx   eax, byte ptr [rcx+rax]
00000001401CFBEA  mov     ecx, [rsp+0C4h]
00000001401CFBF1  add     ecx, eax
00000001401CFBF3  mov     eax, ecx
00000001401CFBF5  movsxd  rcx, dword ptr [rsp+44h]
00000001401CFBFA  mov     rdx, [rsp+3708h]
00000001401CFC02  mov     [rdx+rcx*4], eax
00000001401CFC05  imul    eax, [rsp+3740h], 12h
00000001401CFC0D  cmp     [rsp+58h], eax
00000001401CFC11  jle     loc_1401CFC9D
00000001401CFC17  movsxd  rax, dword ptr [rsp+44h]
00000001401CFC1C  mov     rcx, [rsp+3708h]
00000001401CFC24  mov     edx, [rsp+58h]
00000001401CFC28  cmp     [rcx+rax*4], edx
00000001401CFC2B  jle     short loc_1401CFC3A
00000001401CFC2D  mov     eax, [rsp+58h]
00000001401CFC31  mov     [rsp+0F8h], eax
00000001401CFC38  jmp     short loc_1401CFC8A
00000001401CFC3A  movsxd  rax, dword ptr [rsp+44h]
00000001401CFC3F  imul    ecx, [rsp+3740h], 12h
00000001401CFC47  mov     rdx, [rsp+3708h]
00000001401CFC4F  cmp     [rdx+rax*4], ecx
00000001401CFC52  jge     short loc_1401CFC65
00000001401CFC54  imul    eax, [rsp+3740h], 12h
00000001401CFC5C  mov     [rsp+0F4h], eax
00000001401CFC63  jmp     short loc_1401CFC7C
00000001401CFC65  movsxd  rax, dword ptr [rsp+44h]
00000001401CFC6A  mov     rcx, [rsp+3708h]
00000001401CFC72  mov     eax, [rcx+rax*4]
00000001401CFC75  mov     [rsp+0F4h], eax
00000001401CFC7C  mov     eax, [rsp+0F4h]
00000001401CFC83  mov     [rsp+0F8h], eax
00000001401CFC8A  mov     eax, [rsp+0F8h]
00000001401CFC91  mov     [rsp+104h], eax
00000001401CFC98  jmp     loc_1401CFD1E
00000001401CFC9D  movsxd  rax, dword ptr [rsp+44h]
00000001401CFCA2  imul    ecx, [rsp+3740h], 12h
00000001401CFCAA  mov     rdx, [rsp+3708h]
00000001401CFCB2  cmp     [rdx+rax*4], ecx
00000001401CFCB5  jle     short loc_1401CFCC8
00000001401CFCB7  imul    eax, [rsp+3740h], 12h
00000001401CFCBF  mov     [rsp+100h], eax
00000001401CFCC6  jmp     short loc_1401CFD10
00000001401CFCC8  movsxd  rax, dword ptr [rsp+44h]
00000001401CFCCD  mov     rcx, [rsp+3708h]
00000001401CFCD5  mov     edx, [rsp+58h]
00000001401CFCD9  cmp     [rcx+rax*4], edx
00000001401CFCDC  jge     short loc_1401CFCEB
00000001401CFCDE  mov     eax, [rsp+58h]
00000001401CFCE2  mov     [rsp+0FCh], eax
00000001401CFCE9  jmp     short loc_1401CFD02
00000001401CFCEB  movsxd  rax, dword ptr [rsp+44h]
00000001401CFCF0  mov     rcx, [rsp+3708h]
00000001401CFCF8  mov     eax, [rcx+rax*4]
00000001401CFCFB  mov     [rsp+0FCh], eax
00000001401CFD02  mov     eax, [rsp+0FCh]
00000001401CFD09  mov     [rsp+100h], eax
00000001401CFD10  mov     eax, [rsp+100h]
00000001401CFD17  mov     [rsp+104h], eax
00000001401CFD1E  movsxd  rax, dword ptr [rsp+44h]
00000001401CFD23  mov     rcx, [rsp+3708h]
00000001401CFD2B  mov     edx, [rsp+104h]
00000001401CFD32  mov     [rcx+rax*4], edx
00000001401CFD35  jmp     loc_1401CFBB1
00000001401CFD3A  mov     eax, [rsp+58h]
00000001401CFD3E  mov     ecx, [rsp+0C4h]
00000001401CFD45  sub     ecx, eax
00000001401CFD47  mov     eax, ecx
00000001401CFD49  mov     rcx, [rsp+3710h]
00000001401CFD51  mov     [rcx], ax
00000001401CFD54  mov     rax, [rsp+3718h]
00000001401CFD5C  movzx   ecx, byte ptr [rsp+78h]
00000001401CFD61  mov     [rax], cl
00000001401CFD63  jmp     loc_1401CFF03
00000001401CFD68  mov     dword ptr [rsp+44h], 0
00000001401CFD70  jmp     short loc_1401CFD7C
00000001401CFD72  mov     eax, [rsp+44h]
00000001401CFD76  inc     eax
00000001401CFD78  mov     [rsp+44h], eax
00000001401CFD7C  mov     eax, [rsp+3750h]
00000001401CFD83  cmp     [rsp+44h], eax
00000001401CFD87  jge     loc_1401CFEDD
00000001401CFD8D  mov     eax, [rsp+44h]
00000001401CFD91  imul    eax, [rsp+88h]
00000001401CFD99  add     eax, [rsp+78h]
00000001401CFD9D  cdqe
00000001401CFD9F  mov     rcx, [rsp+0C8h]
00000001401CFDA7  movsx   eax, byte ptr [rcx+rax]
00000001401CFDAB  mov     ecx, [rsp+50h]
00000001401CFDAF  add     ecx, eax
00000001401CFDB1  mov     eax, ecx
00000001401CFDB3  movsxd  rcx, dword ptr [rsp+44h]
00000001401CFDB8  mov     rdx, [rsp+3708h]
00000001401CFDC0  mov     [rdx+rcx*4], eax
00000001401CFDC3  cmp     dword ptr [rsp+64h], 90h
00000001401CFDCB  jle     short loc_1401CFE48
00000001401CFDCD  movsxd  rax, dword ptr [rsp+44h]
00000001401CFDD2  mov     rcx, [rsp+3708h]
00000001401CFDDA  mov     edx, [rsp+64h]
00000001401CFDDE  cmp     [rcx+rax*4], edx
00000001401CFDE1  jle     short loc_1401CFDF0
00000001401CFDE3  mov     eax, [rsp+64h]
00000001401CFDE7  mov     [rsp+10Ch], eax
00000001401CFDEE  jmp     short loc_1401CFE38
00000001401CFDF0  movsxd  rax, dword ptr [rsp+44h]
00000001401CFDF5  mov     rcx, [rsp+3708h]
00000001401CFDFD  cmp     dword ptr [rcx+rax*4], 90h
00000001401CFE04  jge     short loc_1401CFE13
00000001401CFE06  mov     dword ptr [rsp+108h], 90h
00000001401CFE11  jmp     short loc_1401CFE2A
00000001401CFE13  movsxd  rax, dword ptr [rsp+44h]
00000001401CFE18  mov     rcx, [rsp+3708h]
00000001401CFE20  mov     eax, [rcx+rax*4]
00000001401CFE23  mov     [rsp+108h], eax
00000001401CFE2A  mov     eax, [rsp+108h]
00000001401CFE31  mov     [rsp+10Ch], eax
00000001401CFE38  mov     eax, [rsp+10Ch]
00000001401CFE3F  mov     [rsp+118h], eax
00000001401CFE46  jmp     short loc_1401CFEC1
00000001401CFE48  movsxd  rax, dword ptr [rsp+44h]
00000001401CFE4D  mov     rcx, [rsp+3708h]
00000001401CFE55  cmp     dword ptr [rcx+rax*4], 90h
00000001401CFE5C  jle     short loc_1401CFE6B
00000001401CFE5E  mov     dword ptr [rsp+114h], 90h
00000001401CFE69  jmp     short loc_1401CFEB3
00000001401CFE6B  movsxd  rax, dword ptr [rsp+44h]
00000001401CFE70  mov     rcx, [rsp+3708h]
00000001401CFE78  mov     edx, [rsp+64h]
00000001401CFE7C  cmp     [rcx+rax*4], edx
00000001401CFE7F  jge     short loc_1401CFE8E
00000001401CFE81  mov     eax, [rsp+64h]
00000001401CFE85  mov     [rsp+110h], eax
00000001401CFE8C  jmp     short loc_1401CFEA5
00000001401CFE8E  movsxd  rax, dword ptr [rsp+44h]
00000001401CFE93  mov     rcx, [rsp+3708h]
00000001401CFE9B  mov     eax, [rcx+rax*4]
00000001401CFE9E  mov     [rsp+110h], eax
00000001401CFEA5  mov     eax, [rsp+110h]
00000001401CFEAC  mov     [rsp+114h], eax
00000001401CFEB3  mov     eax, [rsp+114h]
00000001401CFEBA  mov     [rsp+118h], eax
00000001401CFEC1  movsxd  rax, dword ptr [rsp+44h]
00000001401CFEC6  mov     rcx, [rsp+3708h]
00000001401CFECE  mov     edx, [rsp+118h]
00000001401CFED5  mov     [rcx+rax*4], edx
00000001401CFED8  jmp     loc_1401CFD72
00000001401CFEDD  mov     eax, [rsp+64h]
00000001401CFEE1  mov     ecx, [rsp+50h]
00000001401CFEE5  sub     ecx, eax
00000001401CFEE7  mov     eax, ecx
00000001401CFEE9  mov     rcx, [rsp+3710h]
00000001401CFEF1  mov     [rcx], ax
00000001401CFEF4  mov     rax, [rsp+3718h]
00000001401CFEFC  movzx   ecx, byte ptr [rsp+78h]
00000001401CFF01  mov     [rax], cl
00000001401CFF03  xor     eax, eax
00000001401CFF05  mov     rcx, [rsp+36E0h]
00000001401CFF0D  xor     rcx, rsp
00000001401CFF10  call    1401F8B20h
00000001401CFF15  add     rsp, 36F8h
00000001401CFF1C  retn
