; 0x1401e5400: sub_1401E5400
; Decompilation failed: function frame is wrong
00000001401E5400  mov     [rsp+20h], r9
00000001401E5405  mov     [rsp+18h], r8d
00000001401E540A  mov     [rsp+10h], rdx
00000001401E540F  mov     [rsp+8], rcx
00000001401E5414  push    rbp
00000001401E5415  sub     rsp, 3F0h
00000001401E541C  lea     rbp, [rsp+60h]
00000001401E5421  mov     rax, cs:__security_cookie
00000001401E5428  xor     rax, rbp
00000001401E542B  mov     [rbp+380h], rax
00000001401E5432  mov     dword ptr [rbp+0], 0
00000001401E5439  mov     dword ptr [rbp+9Ch], 0
00000001401E5443  mov     dword ptr [rbp+19Ch], 0
00000001401E544D  mov     dword ptr [rbp+18h], 0
00000001401E5454  mov     dword ptr [rbp+0Ch], 0
00000001401E545B  mov     dword ptr [rbp+48h], 0
00000001401E5462  mov     dword ptr [rbp+0E0h], 0
00000001401E546C  mov     dword ptr [rbp+5Ch], 0
00000001401E5473  mov     dword ptr [rbp+0CCh], 0FFFFFFFFh
00000001401E547D  mov     dword ptr [rbp+140h], 0FFFFFFFFh
00000001401E5487  mov     dword ptr [rbp+68h], 0
00000001401E548E  cmp     dword ptr [rbp+3C0h], 4FCh
00000001401E5498  jle     short loc_1401E54A6
00000001401E549A  mov     dword ptr [rbp+1A4h], 4FCh
00000001401E54A4  jmp     short loc_1401E54B2
00000001401E54A6  mov     eax, [rbp+3C0h]
00000001401E54AC  mov     [rbp+1A4h], eax
00000001401E54B2  mov     eax, [rbp+1A4h]
00000001401E54B8  mov     [rbp+4], eax
00000001401E54BB  mov     rax, [rbp+3A0h]
00000001401E54C2  mov     dword ptr [rax+46DCh], 0
00000001401E54CC  cmp     dword ptr [rbp+3B0h], 0
00000001401E54D3  jle     short loc_1401E54DB
00000001401E54D5  cmp     dword ptr [rbp+4], 0
00000001401E54D9  jg      short loc_1401E54E5
00000001401E54DB  mov     eax, 0FFFFFFFFh
00000001401E54E0  jmp     loc_1401E933B
00000001401E54E5  cmp     dword ptr [rbp+4], 1
00000001401E54E9  jnz     short loc_1401E550B
00000001401E54EB  imul    eax, [rbp+3B0h], 0Ah
00000001401E54F2  mov     rcx, [rbp+3A0h]
00000001401E54F9  cmp     [rcx+90h], eax
00000001401E54FF  jnz     short loc_1401E550B
00000001401E5501  mov     eax, 0FFFFFFFEh
00000001401E5506  jmp     loc_1401E933B
00000001401E550B  mov     rax, [rbp+3A0h]
00000001401E5512  movsxd  rax, dword ptr [rax+4]
00000001401E5516  mov     rcx, [rbp+3A0h]
00000001401E551D  add     rcx, rax
00000001401E5520  mov     rax, rcx
00000001401E5523  mov     [rbp+1A8h], rax
00000001401E552A  mov     rax, [rbp+3A0h]
00000001401E5531  movsxd  rax, dword ptr [rax]
00000001401E5534  mov     rcx, [rbp+3A0h]
00000001401E553B  add     rcx, rax
00000001401E553E  mov     rax, rcx
00000001401E5541  mov     [rbp+20h], rax
00000001401E5545  mov     rax, [rbp+3A0h]
00000001401E554C  cmp     dword ptr [rax+6Ch], 803h
00000001401E5553  jnz     short loc_1401E5561
00000001401E5555  mov     dword ptr [rbp+0F0h], 0
00000001401E555F  jmp     short loc_1401E5571
00000001401E5561  mov     rax, [rbp+3A0h]
00000001401E5568  mov     eax, [rax+74h]
00000001401E556B  mov     [rbp+0F0h], eax
00000001401E5571  mov     rax, [rbp+3A0h]
00000001401E5578  mov     eax, [rax+0A8h]
00000001401E557E  cmp     [rbp+3C8h], eax
00000001401E5584  jge     short loc_1401E5594
00000001401E5586  mov     eax, [rbp+3C8h]
00000001401E558C  mov     [rbp+0E8h], eax
00000001401E5592  jmp     short loc_1401E55A7
00000001401E5594  mov     rax, [rbp+3A0h]
00000001401E559B  mov     eax, [rax+0A8h]
00000001401E55A1  mov     [rbp+0E8h], eax
00000001401E55A7  mov     eax, [rbp+0E8h]
00000001401E55AD  mov     [rbp+3C8h], eax
00000001401E55B3  lea     rax, [rbp+0A8h]
00000001401E55BA  lea     rcx, [rbp+0A8h]
00000001401E55C1  sub     rax, rcx
00000001401E55C4  sar     rax, 3
00000001401E55C8  lea     rax, [rbp+rax*8+0A8h]
00000001401E55D0  mov     r8, rax
00000001401E55D3  mov     edx, 271Fh
00000001401E55D8  mov     rcx, [rbp+20h]
00000001401E55DC  call    sub_140199190
00000001401E55E1  mov     dword ptr [rbp+2B0h], 0
00000001401E55EB  mov     rax, [rbp+3A0h]
00000001401E55F2  cmp     dword ptr [rax+2Ch], 7
00000001401E55F6  jl      loc_1401E57D6
00000001401E55FC  mov     rax, [rbp+3A0h]
00000001401E5603  cmp     dword ptr [rax+90h], 3E80h
00000001401E560D  jl      loc_1401E57D6
00000001401E5613  mov     r9d, [rbp+3C8h]
00000001401E561A  mov     rax, [rbp+3A0h]
00000001401E5621  mov     r8d, [rax+70h]
00000001401E5625  mov     edx, [rbp+3B0h]
00000001401E562B  mov     rcx, [rbp+3A8h]
00000001401E5632  call    sub_1401E5190
00000001401E5637  mov     [rbp+68h], eax
00000001401E563A  mov     rax, [rbp+3A0h]
00000001401E5641  mov     eax, [rax+1DD4h]
00000001401E5647  mov     [rbp+0CCh], eax
00000001401E564D  mov     rax, [rbp+3A0h]
00000001401E5654  mov     eax, [rax+1DD8h]
00000001401E565A  mov     [rbp+140h], eax
00000001401E5660  mov     rax, [rbp+3A0h]
00000001401E5667  add     rax, 0BCh
00000001401E566D  lea     rcx, [rbp+2B0h]
00000001401E5674  mov     [rsp+58h], rcx
00000001401E5679  mov     rcx, [rbp+3F8h]
00000001401E5680  mov     [rsp+50h], rcx
00000001401E5685  mov     ecx, [rbp+3C8h]
00000001401E568B  mov     [rsp+48h], ecx
00000001401E568F  mov     rcx, [rbp+3A0h]
00000001401E5696  mov     ecx, [rcx+90h]
00000001401E569C  mov     [rsp+40h], ecx
00000001401E56A0  mov     ecx, [rbp+3F0h]
00000001401E56A6  mov     [rsp+38h], ecx
00000001401E56AA  mov     ecx, [rbp+3E8h]
00000001401E56B0  mov     [rsp+30h], ecx
00000001401E56B4  mov     ecx, [rbp+3E0h]
00000001401E56BA  mov     [rsp+28h], ecx
00000001401E56BE  mov     ecx, [rbp+3B0h]
00000001401E56C4  mov     [rsp+20h], ecx
00000001401E56C8  mov     r9d, [rbp+3D8h]
00000001401E56CF  mov     r8, [rbp+3D0h]
00000001401E56D6  mov     rdx, [rbp+0A8h]
00000001401E56DD  mov     rcx, rax
00000001401E56E0  call    sub_1401ECBA0
00000001401E56E5  cmp     dword ptr [rbp+68h], 0
00000001401E56E9  jnz     loc_1401E57D4
00000001401E56EF  movss   xmm0, dword ptr [rbp+2D4h]
00000001401E56F7  comiss  xmm0, cs:dword_1402781F0
00000001401E56FE  jbe     loc_1401E57D4
00000001401E5704  mov     rax, [rbp+3A0h]
00000001401E570B  movss   xmm0, dword ptr [rax+46D4h]
00000001401E5713  movss   xmm1, cs:dword_1402832B8
00000001401E571B  mulss   xmm1, xmm0
00000001401E571F  movaps  xmm0, xmm1
00000001401E5722  movss   dword ptr [rbp+200h], xmm0
00000001401E572A  mov     rax, [rbp+3A0h]
00000001401E5731  mov     r9d, [rax+0B4h]
00000001401E5738  mov     rax, [rbp+3A0h]
00000001401E573F  mov     r8d, [rax+70h]
00000001401E5743  mov     edx, [rbp+3B0h]
00000001401E5749  mov     rcx, [rbp+3A8h]
00000001401E5750  call    sub_1401F5870
00000001401E5755  movss   xmm1, dword ptr [rbp+200h]
00000001401E575D  comiss  xmm1, xmm0
00000001401E5760  jbe     short loc_1401E578A
00000001401E5762  mov     rax, [rbp+3A0h]
00000001401E5769  movss   xmm0, dword ptr [rax+46D4h]
00000001401E5771  movss   xmm1, cs:dword_1402832B8
00000001401E5779  mulss   xmm1, xmm0
00000001401E577D  movaps  xmm0, xmm1
00000001401E5780  movss   dword ptr [rbp+0ECh], xmm0
00000001401E5788  jmp     short loc_1401E57BD
00000001401E578A  mov     rax, [rbp+3A0h]
00000001401E5791  mov     r9d, [rax+0B4h]
00000001401E5798  mov     rax, [rbp+3A0h]
00000001401E579F  mov     r8d, [rax+70h]
00000001401E57A3  mov     edx, [rbp+3B0h]
00000001401E57A9  mov     rcx, [rbp+3A8h]
00000001401E57B0  call    sub_1401F5870
00000001401E57B5  movss   dword ptr [rbp+0ECh], xmm0
00000001401E57BD  mov     rax, [rbp+3A0h]
00000001401E57C4  movss   xmm0, dword ptr [rbp+0ECh]
00000001401E57CC  movss   dword ptr [rax+46D4h], xmm0
00000001401E57D4  jmp     short loc_1401E57FB
00000001401E57D6  mov     rax, [rbp+3A0h]
00000001401E57DD  cmp     dword ptr [rax+1DE0h], 0
00000001401E57E4  jz      short loc_1401E57FB
00000001401E57E6  mov     rax, [rbp+3A0h]
00000001401E57ED  add     rax, 0BCh
00000001401E57F3  mov     rcx, rax
00000001401E57F6  call    sub_1401EBF00
00000001401E57FB  cmp     dword ptr [rbp+68h], 0
00000001401E57FF  jnz     short loc_1401E5812
00000001401E5801  mov     rax, [rbp+3A0h]
00000001401E5808  mov     dword ptr [rax+8Ch], 0FFFFFFFFh
00000001401E5812  mov     rax, [rbp+3A0h]
00000001401E5819  mov     dword ptr [rax+46CCh], 0
00000001401E5823  cmp     dword ptr [rbp+2B0h], 0
00000001401E582A  jz      loc_1401E5970
00000001401E5830  mov     rax, [rbp+3A0h]
00000001401E5837  cmp     dword ptr [rax+7Ch], 0FFFFFC18h
00000001401E583E  jnz     loc_1401E58E3
00000001401E5844  mov     rax, [rbp+3A0h]
00000001401E584B  cmp     dword ptr [rax+3794h], 0
00000001401E5852  jnz     short loc_1401E5866
00000001401E5854  movss   xmm0, dword ptr [rbp+2C4h]
00000001401E585C  movss   dword ptr [rbp+0B0h], xmm0
00000001401E5864  jmp     short loc_1401E589B
00000001401E5866  mov     rax, [rbp+3A0h]
00000001401E586D  cmp     dword ptr [rax+3794h], 3EAh
00000001401E5877  jnz     short loc_1401E588B
00000001401E5879  movss   xmm0, dword ptr [rbp+2CCh]
00000001401E5881  movss   dword ptr [rbp+0B0h], xmm0
00000001401E5889  jmp     short loc_1401E589B
00000001401E588B  movss   xmm0, dword ptr [rbp+2C8h]
00000001401E5893  movss   dword ptr [rbp+0B0h], xmm0
00000001401E589B  movss   xmm0, cs:dword_1402783F4
00000001401E58A3  subss   xmm0, dword ptr [rbp+0B0h]
00000001401E58AB  movss   xmm1, cs:dword_14027883C
00000001401E58B3  mulss   xmm1, xmm0
00000001401E58B7  movaps  xmm0, xmm1
00000001401E58BA  cvtss2sd xmm0, xmm0
00000001401E58BE  movsd   xmm1, cs:qword_140278508
00000001401E58C6  addsd   xmm1, xmm0
00000001401E58CA  movaps  xmm0, xmm1; X
00000001401E58CD  call    floor
00000001401E58D2  cvttsd2si eax, xmm0
00000001401E58D6  mov     rcx, [rbp+3A0h]
00000001401E58DD  mov     [rcx+8Ch], eax
00000001401E58E3  mov     eax, [rbp+2D0h]
00000001401E58E9  mov     [rbp+8Ch], eax
00000001401E58EF  cmp     dword ptr [rbp+8Ch], 0Ch
00000001401E58F6  jg      short loc_1401E590B
00000001401E58F8  mov     rax, [rbp+3A0h]
00000001401E58FF  mov     dword ptr [rax+46CCh], 44Dh
00000001401E5909  jmp     short loc_1401E5970
00000001401E590B  cmp     dword ptr [rbp+8Ch], 0Eh
00000001401E5912  jg      short loc_1401E5927
00000001401E5914  mov     rax, [rbp+3A0h]
00000001401E591B  mov     dword ptr [rax+46CCh], 44Eh
00000001401E5925  jmp     short loc_1401E5970
00000001401E5927  cmp     dword ptr [rbp+8Ch], 10h
00000001401E592E  jg      short loc_1401E5943
00000001401E5930  mov     rax, [rbp+3A0h]
00000001401E5937  mov     dword ptr [rax+46CCh], 44Fh
00000001401E5941  jmp     short loc_1401E5970
00000001401E5943  cmp     dword ptr [rbp+8Ch], 12h
00000001401E594A  jg      short loc_1401E595F
00000001401E594C  mov     rax, [rbp+3A0h]
00000001401E5953  mov     dword ptr [rax+46CCh], 450h
00000001401E595D  jmp     short loc_1401E5970
00000001401E595F  mov     rax, [rbp+3A0h]
00000001401E5966  mov     dword ptr [rax+46CCh], 451h
00000001401E5970  mov     rax, [rbp+3A0h]
00000001401E5977  cmp     dword ptr [rax+70h], 2
00000001401E597B  jnz     short loc_1401E59C1
00000001401E597D  mov     rax, [rbp+3A0h]
00000001401E5984  cmp     dword ptr [rax+78h], 1
00000001401E5988  jz      short loc_1401E59C1
00000001401E598A  mov     rax, [rbp+3A0h]
00000001401E5991  add     rax, 37B8h
00000001401E5997  mov     r9, rax
00000001401E599A  mov     rax, [rbp+3A0h]
00000001401E59A1  mov     r8d, [rax+90h]
00000001401E59A8  mov     edx, [rbp+3B0h]
00000001401E59AE  mov     rcx, [rbp+3A8h]
00000001401E59B5  call    sub_1401F4BB0
00000001401E59BA  movss   dword ptr [rbp+74h], xmm0
00000001401E59BF  jmp     short loc_1401E59C9
00000001401E59C1  xorps   xmm0, xmm0
00000001401E59C4  movss   dword ptr [rbp+74h], xmm0
00000001401E59C9  mov     eax, [rbp+0F0h]
00000001401E59CF  mov     [rbp+14h], eax
00000001401E59D2  mov     r8d, [rbp+4]
00000001401E59D6  mov     edx, [rbp+3B0h]
00000001401E59DC  mov     rcx, [rbp+3A0h]
00000001401E59E3  call    sub_1401F4B00
00000001401E59E8  mov     rcx, [rbp+3A0h]
00000001401E59EF  mov     [rcx+0A0h], eax
00000001401E59F5  mov     rax, [rbp+3A0h]
00000001401E59FC  mov     eax, [rax+90h]
00000001401E5A02  cdq
00000001401E5A03  idiv    dword ptr [rbp+3B0h]
00000001401E5A09  mov     [rbp+10h], eax
00000001401E5A0C  mov     rax, [rbp+3A0h]
00000001401E5A13  cmp     dword ptr [rax+94h], 0
00000001401E5A1A  jnz     loc_1401E5B0C
00000001401E5A20  mov     rax, [rbp+3A0h]
00000001401E5A27  imul    eax, [rax+90h], 0Ch
00000001401E5A2E  cdq
00000001401E5A2F  idiv    dword ptr [rbp+3B0h]
00000001401E5A35  mov     [rbp+6Ch], eax
00000001401E5A38  mov     rax, [rbp+3A0h]
00000001401E5A3F  imul    eax, [rax+0A0h], 0Ch
00000001401E5A46  cdq
00000001401E5A47  and     edx, 7
00000001401E5A4A  add     eax, edx
00000001401E5A4C  sar     eax, 3
00000001401E5A4F  mov     [rbp+204h], eax
00000001401E5A55  mov     eax, [rbp+6Ch]
00000001401E5A58  cdq
00000001401E5A59  sub     eax, edx
00000001401E5A5B  sar     eax, 1
00000001401E5A5D  mov     ecx, [rbp+204h]
00000001401E5A63  add     ecx, eax
00000001401E5A65  mov     eax, ecx
00000001401E5A67  cdq
00000001401E5A68  idiv    dword ptr [rbp+6Ch]
00000001401E5A6B  cmp     eax, [rbp+4]
00000001401E5A6E  jge     short loc_1401E5AAB
00000001401E5A70  mov     rax, [rbp+3A0h]
00000001401E5A77  imul    eax, [rax+0A0h], 0Ch
00000001401E5A7E  cdq
00000001401E5A7F  and     edx, 7
00000001401E5A82  add     eax, edx
00000001401E5A84  sar     eax, 3
00000001401E5A87  mov     [rbp+20Ch], eax
00000001401E5A8D  mov     eax, [rbp+6Ch]
00000001401E5A90  cdq
00000001401E5A91  sub     eax, edx
00000001401E5A93  sar     eax, 1
00000001401E5A95  mov     ecx, [rbp+20Ch]
00000001401E5A9B  add     ecx, eax
00000001401E5A9D  mov     eax, ecx
00000001401E5A9F  cdq
00000001401E5AA0  idiv    dword ptr [rbp+6Ch]
00000001401E5AA3  mov     [rbp+0F4h], eax
00000001401E5AA9  jmp     short loc_1401E5AB4
00000001401E5AAB  mov     eax, [rbp+4]
00000001401E5AAE  mov     [rbp+0F4h], eax
00000001401E5AB4  mov     eax, [rbp+0F4h]
00000001401E5ABA  mov     [rbp+0B4h], eax
00000001401E5AC0  mov     eax, [rbp+0B4h]
00000001401E5AC6  imul    eax, [rbp+6Ch]
00000001401E5ACA  shl     eax, 3
00000001401E5ACD  cdq
00000001401E5ACE  mov     ecx, 0Ch
00000001401E5AD3  idiv    ecx
00000001401E5AD5  mov     rcx, [rbp+3A0h]
00000001401E5ADC  mov     [rcx+0A0h], eax
00000001401E5AE2  cmp     dword ptr [rbp+0B4h], 1
00000001401E5AE9  jge     short loc_1401E5AF7
00000001401E5AEB  mov     dword ptr [rbp+0F8h], 1
00000001401E5AF5  jmp     short loc_1401E5B03
00000001401E5AF7  mov     eax, [rbp+0B4h]
00000001401E5AFD  mov     [rbp+0F8h], eax
00000001401E5B03  mov     eax, [rbp+0F8h]
00000001401E5B09  mov     [rbp+4], eax
00000001401E5B0C  cmp     dword ptr [rbp+4], 3
00000001401E5B10  jl      short loc_1401E5B57
00000001401E5B12  imul    eax, [rbp+10h], 3
00000001401E5B16  shl     eax, 3
00000001401E5B19  mov     rcx, [rbp+3A0h]
00000001401E5B20  cmp     [rcx+0A0h], eax
00000001401E5B26  jl      short loc_1401E5B57
00000001401E5B28  cmp     dword ptr [rbp+10h], 32h ; '2'
00000001401E5B2C  jge     loc_1401E5DCF
00000001401E5B32  mov     eax, [rbp+4]
00000001401E5B35  imul    eax, [rbp+10h]
00000001401E5B39  cmp     eax, 12Ch
00000001401E5B3E  jl      short loc_1401E5B57
00000001401E5B40  mov     rax, [rbp+3A0h]
00000001401E5B47  cmp     dword ptr [rax+0A0h], 960h
00000001401E5B51  jge     loc_1401E5DCF
00000001401E5B57  mov     rax, [rbp+3A0h]
00000001401E5B5E  mov     eax, [rax+3790h]
00000001401E5B64  mov     [rbp+38h], eax
00000001401E5B67  mov     rax, [rbp+3A0h]
00000001401E5B6E  cmp     dword ptr [rax+37A0h], 0
00000001401E5B75  jnz     short loc_1401E5B83
00000001401E5B77  mov     dword ptr [rbp+0FCh], 44Dh
00000001401E5B81  jmp     short loc_1401E5B96
00000001401E5B83  mov     rax, [rbp+3A0h]
00000001401E5B8A  mov     eax, [rax+37A0h]
00000001401E5B90  mov     [rbp+0FCh], eax
00000001401E5B96  mov     eax, [rbp+0FCh]
00000001401E5B9C  mov     [rbp+50h], eax
00000001401E5B9F  mov     dword ptr [rbp+60h], 0
00000001401E5BA6  mov     dword ptr [rbp+110h], 0
00000001401E5BB0  cmp     dword ptr [rbp+38h], 0
00000001401E5BB4  jnz     short loc_1401E5BBD
00000001401E5BB6  mov     dword ptr [rbp+38h], 3E8h
00000001401E5BBD  cmp     dword ptr [rbp+10h], 64h ; 'd'
00000001401E5BC1  jle     short loc_1401E5BCA
00000001401E5BC3  mov     dword ptr [rbp+38h], 3EAh
00000001401E5BCA  cmp     dword ptr [rbp+10h], 19h
00000001401E5BCE  jnz     short loc_1401E5BE7
00000001401E5BD0  cmp     dword ptr [rbp+38h], 3E8h
00000001401E5BD7  jz      short loc_1401E5BE7
00000001401E5BD9  mov     dword ptr [rbp+10h], 32h ; '2'
00000001401E5BE0  mov     dword ptr [rbp+60h], 1
00000001401E5BE7  cmp     dword ptr [rbp+10h], 10h
00000001401E5BEB  jg      loc_1401E5C79
00000001401E5BF1  cmp     dword ptr [rbp+3C0h], 1
00000001401E5BF8  jz      short loc_1401E5C09
00000001401E5BFA  cmp     dword ptr [rbp+38h], 3E8h
00000001401E5C01  jnz     short loc_1401E5C5C
00000001401E5C03  cmp     dword ptr [rbp+10h], 0Ah
00000001401E5C07  jz      short loc_1401E5C5C
00000001401E5C09  mov     dword ptr [rbp+38h], 3E8h
00000001401E5C10  cmp     dword ptr [rbp+10h], 0Ch
00000001401E5C14  jg      short loc_1401E5C22
00000001401E5C16  mov     dword ptr [rbp+100h], 1
00000001401E5C20  jmp     short loc_1401E5C2C
00000001401E5C22  mov     dword ptr [rbp+100h], 0
00000001401E5C2C  mov     eax, [rbp+100h]
00000001401E5C32  mov     [rbp+60h], eax
00000001401E5C35  cmp     dword ptr [rbp+10h], 0Ch
00000001401E5C39  jnz     short loc_1401E5C47
00000001401E5C3B  mov     dword ptr [rbp+104h], 19h
00000001401E5C45  jmp     short loc_1401E5C51
00000001401E5C47  mov     dword ptr [rbp+104h], 10h
00000001401E5C51  mov     eax, [rbp+104h]
00000001401E5C57  mov     [rbp+10h], eax
00000001401E5C5A  jmp     short loc_1401E5C79
00000001401E5C5C  mov     eax, 32h ; '2'
00000001401E5C61  cdq
00000001401E5C62  idiv    dword ptr [rbp+10h]
00000001401E5C65  mov     [rbp+110h], eax
00000001401E5C6B  mov     dword ptr [rbp+10h], 32h ; '2'
00000001401E5C72  mov     dword ptr [rbp+60h], 3
00000001401E5C79  cmp     dword ptr [rbp+38h], 3E8h
00000001401E5C80  jnz     short loc_1401E5C94
00000001401E5C82  cmp     dword ptr [rbp+50h], 44Fh
00000001401E5C89  jle     short loc_1401E5C94
00000001401E5C8B  mov     dword ptr [rbp+50h], 44Fh
00000001401E5C92  jmp     short loc_1401E5CC8
00000001401E5C94  cmp     dword ptr [rbp+38h], 3EAh
00000001401E5C9B  jnz     short loc_1401E5CAF
00000001401E5C9D  cmp     dword ptr [rbp+50h], 44Eh
00000001401E5CA4  jnz     short loc_1401E5CAF
00000001401E5CA6  mov     dword ptr [rbp+50h], 44Dh
00000001401E5CAD  jmp     short loc_1401E5CC8
00000001401E5CAF  cmp     dword ptr [rbp+38h], 3E9h
00000001401E5CB6  jnz     short loc_1401E5CC8
00000001401E5CB8  cmp     dword ptr [rbp+50h], 450h
00000001401E5CBF  jg      short loc_1401E5CC8
00000001401E5CC1  mov     dword ptr [rbp+50h], 450h
00000001401E5CC8  mov     rax, [rbp+3A0h]
00000001401E5CCF  mov     r9d, [rax+3770h]
00000001401E5CD6  mov     r8d, [rbp+50h]
00000001401E5CDA  mov     edx, [rbp+10h]
00000001401E5CDD  mov     ecx, [rbp+38h]
00000001401E5CE0  call    sub_1401F3E60
00000001401E5CE5  mov     ecx, 1
00000001401E5CEA  imul    rcx, 0
00000001401E5CEE  mov     rdx, [rbp+3B8h]
00000001401E5CF5  mov     [rdx+rcx], al
00000001401E5CF8  mov     eax, 1
00000001401E5CFD  imul    rax, 0
00000001401E5D01  mov     rcx, [rbp+3B8h]
00000001401E5D08  movzx   eax, byte ptr [rcx+rax]
00000001401E5D0C  or      eax, [rbp+60h]
00000001401E5D0F  mov     ecx, 1
00000001401E5D14  imul    rcx, 0
00000001401E5D18  mov     rdx, [rbp+3B8h]
00000001401E5D1F  mov     [rdx+rcx], al
00000001401E5D22  cmp     dword ptr [rbp+60h], 1
00000001401E5D26  jg      short loc_1401E5D34
00000001401E5D28  mov     dword ptr [rbp+108h], 1
00000001401E5D32  jmp     short loc_1401E5D3E
00000001401E5D34  mov     dword ptr [rbp+108h], 2
00000001401E5D3E  mov     eax, [rbp+108h]
00000001401E5D44  mov     [rbp+0], eax
00000001401E5D47  mov     eax, [rbp+0]
00000001401E5D4A  cmp     [rbp+4], eax
00000001401E5D4D  jle     short loc_1401E5D5A
00000001401E5D4F  mov     eax, [rbp+4]
00000001401E5D52  mov     [rbp+10Ch], eax
00000001401E5D58  jmp     short loc_1401E5D63
00000001401E5D5A  mov     eax, [rbp+0]
00000001401E5D5D  mov     [rbp+10Ch], eax
00000001401E5D63  mov     eax, [rbp+10Ch]
00000001401E5D69  mov     [rbp+4], eax
00000001401E5D6C  cmp     dword ptr [rbp+60h], 3
00000001401E5D70  jnz     short loc_1401E5D8C
00000001401E5D72  mov     eax, 1
00000001401E5D77  imul    rax, 1
00000001401E5D7B  mov     rcx, [rbp+3B8h]
00000001401E5D82  movzx   edx, byte ptr [rbp+110h]
00000001401E5D89  mov     [rcx+rax], dl
00000001401E5D8C  mov     rax, [rbp+3A0h]
00000001401E5D93  cmp     dword ptr [rax+94h], 0
00000001401E5D9A  jnz     short loc_1401E5DC7
00000001401E5D9C  mov     r8d, [rbp+4]
00000001401E5DA0  mov     edx, [rbp+0]
00000001401E5DA3  mov     rcx, [rbp+3B8h]
00000001401E5DAA  call    sub_1401E3980
00000001401E5DAF  mov     [rbp+0], eax
00000001401E5DB2  cmp     dword ptr [rbp+0], 0
00000001401E5DB6  jnz     short loc_1401E5DC0
00000001401E5DB8  mov     eax, [rbp+4]
00000001401E5DBB  mov     [rbp+0], eax
00000001401E5DBE  jmp     short loc_1401E5DC7
00000001401E5DC0  mov     dword ptr [rbp+0], 0FFFFFFFDh
00000001401E5DC7  mov     eax, [rbp+0]
00000001401E5DCA  jmp     loc_1401E933B
00000001401E5DCF  mov     eax, [rbp+10h]
00000001401E5DD2  imul    eax, [rbp+4]
00000001401E5DD6  shl     eax, 3
00000001401E5DD9  mov     [rbp+164h], eax
00000001401E5DDF  mov     rax, [rbp+3A0h]
00000001401E5DE6  mov     eax, [rax+90h]
00000001401E5DEC  cdq
00000001401E5DED  idiv    dword ptr [rbp+3B0h]
00000001401E5DF3  mov     rcx, [rbp+3A0h]
00000001401E5DFA  mov     ecx, [rcx+28h]
00000001401E5DFD  mov     [rsp+30h], ecx
00000001401E5E01  mov     rcx, [rbp+3A0h]
00000001401E5E08  mov     ecx, [rcx+2Ch]
00000001401E5E0B  mov     [rsp+28h], ecx
00000001401E5E0F  mov     dword ptr [rsp+20h], 0
00000001401E5E17  mov     rcx, [rbp+3A0h]
00000001401E5E1E  mov     r9d, [rcx+94h]
00000001401E5E25  mov     r8d, eax
00000001401E5E28  mov     rax, [rbp+3A0h]
00000001401E5E2F  mov     edx, [rax+70h]
00000001401E5E32  mov     rax, [rbp+3A0h]
00000001401E5E39  mov     ecx, [rax+0A0h]
00000001401E5E3F  call    sub_1401F5760
00000001401E5E44  mov     [rbp+2Ch], eax
00000001401E5E47  mov     rax, [rbp+3A0h]
00000001401E5E4E  cmp     dword ptr [rax+7Ch], 0BB9h
00000001401E5E55  jnz     short loc_1401E5E63
00000001401E5E57  mov     dword ptr [rbp+28h], 7Fh
00000001401E5E5E  jmp     loc_1401E5EF9
00000001401E5E63  mov     rax, [rbp+3A0h]
00000001401E5E6A  cmp     dword ptr [rax+7Ch], 0BBAh
00000001401E5E71  jnz     short loc_1401E5E7C
00000001401E5E73  mov     dword ptr [rbp+28h], 0
00000001401E5E7A  jmp     short loc_1401E5EF9
00000001401E5E7C  mov     rax, [rbp+3A0h]
00000001401E5E83  cmp     dword ptr [rax+8Ch], 0
00000001401E5E8A  jl      short loc_1401E5ED9
00000001401E5E8C  mov     rax, [rbp+3A0h]
00000001401E5E93  imul    eax, [rax+8Ch], 147h
00000001401E5E9D  sar     eax, 8
00000001401E5EA0  mov     [rbp+28h], eax
00000001401E5EA3  mov     rax, [rbp+3A0h]
00000001401E5EAA  cmp     dword ptr [rax+6Ch], 801h
00000001401E5EB1  jnz     short loc_1401E5ED7
00000001401E5EB3  cmp     dword ptr [rbp+28h], 73h ; 's'
00000001401E5EB7  jge     short loc_1401E5EC4
00000001401E5EB9  mov     eax, [rbp+28h]
00000001401E5EBC  mov     [rbp+114h], eax
00000001401E5EC2  jmp     short loc_1401E5ECE
00000001401E5EC4  mov     dword ptr [rbp+114h], 73h ; 's'
00000001401E5ECE  mov     eax, [rbp+114h]
00000001401E5ED4  mov     [rbp+28h], eax
00000001401E5ED7  jmp     short loc_1401E5EF9
00000001401E5ED9  mov     rax, [rbp+3A0h]
00000001401E5EE0  cmp     dword ptr [rax+6Ch], 800h
00000001401E5EE7  jnz     short loc_1401E5EF2
00000001401E5EE9  mov     dword ptr [rbp+28h], 73h ; 's'
00000001401E5EF0  jmp     short loc_1401E5EF9
00000001401E5EF2  mov     dword ptr [rbp+28h], 30h ; '0'
00000001401E5EF9  mov     rax, [rbp+3A0h]
00000001401E5F00  cmp     dword ptr [rax+78h], 0FFFFFC18h
00000001401E5F07  jz      short loc_1401E5F32
00000001401E5F09  mov     rax, [rbp+3A0h]
00000001401E5F10  cmp     dword ptr [rax+70h], 2
00000001401E5F14  jnz     short loc_1401E5F32
00000001401E5F16  mov     rax, [rbp+3A0h]
00000001401E5F1D  mov     rcx, [rbp+3A0h]
00000001401E5F24  mov     ecx, [rcx+78h]
00000001401E5F27  mov     [rax+3770h], ecx
00000001401E5F2D  jmp     loc_1401E5FDF
00000001401E5F32  mov     rax, [rbp+3A0h]
00000001401E5F39  cmp     dword ptr [rax+70h], 2
00000001401E5F3D  jnz     loc_1401E5FC8
00000001401E5F43  mov     eax, [rbp+28h]
00000001401E5F46  imul    eax, [rbp+28h]
00000001401E5F4A  mov     ecx, cs:dword_140279DF4
00000001401E5F50  mov     edx, cs:dword_140279DE4
00000001401E5F56  sub     edx, ecx
00000001401E5F58  mov     ecx, edx
00000001401E5F5A  imul    eax, ecx
00000001401E5F5D  sar     eax, 0Eh
00000001401E5F60  mov     ecx, cs:dword_140279DF4
00000001401E5F66  add     ecx, eax
00000001401E5F68  mov     eax, ecx
00000001401E5F6A  mov     [rbp+70h], eax
00000001401E5F6D  mov     rax, [rbp+3A0h]
00000001401E5F74  cmp     dword ptr [rax+3770h], 2
00000001401E5F7B  jnz     short loc_1401E5F8A
00000001401E5F7D  mov     eax, [rbp+70h]
00000001401E5F80  sub     eax, 3E8h
00000001401E5F85  mov     [rbp+70h], eax
00000001401E5F88  jmp     short loc_1401E5F95
00000001401E5F8A  mov     eax, [rbp+70h]
00000001401E5F8D  add     eax, 3E8h
00000001401E5F92  mov     [rbp+70h], eax
00000001401E5F95  mov     eax, [rbp+70h]
00000001401E5F98  cmp     [rbp+2Ch], eax
00000001401E5F9B  jle     short loc_1401E5FA9
00000001401E5F9D  mov     dword ptr [rbp+118h], 2
00000001401E5FA7  jmp     short loc_1401E5FB3
00000001401E5FA9  mov     dword ptr [rbp+118h], 1
00000001401E5FB3  mov     rax, [rbp+3A0h]
00000001401E5FBA  mov     ecx, [rbp+118h]
00000001401E5FC0  mov     [rax+3770h], ecx
00000001401E5FC6  jmp     short loc_1401E5FDF
00000001401E5FC8  mov     rax, [rbp+3A0h]
00000001401E5FCF  mov     rcx, [rbp+3A0h]
00000001401E5FD6  mov     ecx, [rcx+70h]
00000001401E5FD9  mov     [rax+3770h], ecx
00000001401E5FDF  mov     rax, [rbp+3A0h]
00000001401E5FE6  mov     eax, [rax+90h]
00000001401E5FEC  cdq
00000001401E5FED  idiv    dword ptr [rbp+3B0h]
00000001401E5FF3  mov     rcx, [rbp+3A0h]
00000001401E5FFA  mov     ecx, [rcx+28h]
00000001401E5FFD  mov     [rsp+30h], ecx
00000001401E6001  mov     rcx, [rbp+3A0h]
00000001401E6008  mov     ecx, [rcx+2Ch]
00000001401E600B  mov     [rsp+28h], ecx
00000001401E600F  mov     dword ptr [rsp+20h], 0
00000001401E6017  mov     rcx, [rbp+3A0h]
00000001401E601E  mov     r9d, [rcx+94h]
00000001401E6025  mov     r8d, eax
00000001401E6028  mov     rax, [rbp+3A0h]
00000001401E602F  mov     edx, [rax+3770h]
00000001401E6035  mov     rax, [rbp+3A0h]
00000001401E603C  mov     ecx, [rax+0A0h]
00000001401E6042  call    sub_1401F5760
00000001401E6047  mov     [rbp+2Ch], eax
00000001401E604A  mov     rax, [rbp+3A0h]
00000001401E6051  cmp     dword ptr [rax+0B8h], 0
00000001401E6058  jz      short loc_1401E6075
00000001401E605A  cmp     dword ptr [rbp+2B0h], 0
00000001401E6061  jnz     short loc_1401E6075
00000001401E6063  cmp     dword ptr [rbp+68h], 0
00000001401E6067  jnz     short loc_1401E6075
00000001401E6069  mov     dword ptr [rbp+11Ch], 1
00000001401E6073  jmp     short loc_1401E607F
00000001401E6075  mov     dword ptr [rbp+11Ch], 0
00000001401E607F  mov     rax, [rbp+3A0h]
00000001401E6086  mov     ecx, [rbp+11Ch]
00000001401E608C  mov     [rax+38h], ecx
00000001401E608F  mov     rax, [rbp+3A0h]
00000001401E6096  cmp     dword ptr [rax+6Ch], 803h
00000001401E609D  jnz     short loc_1401E60B5
00000001401E609F  mov     rax, [rbp+3A0h]
00000001401E60A6  mov     dword ptr [rax+3790h], 3EAh
00000001401E60B0  jmp     loc_1401E632A
00000001401E60B5  mov     rax, [rbp+3A0h]
00000001401E60BC  cmp     dword ptr [rax+88h], 0FFFFFC18h
00000001401E60C6  jnz     loc_1401E6310
00000001401E60CC  movss   xmm0, cs:dword_1402783F4
00000001401E60D4  subss   xmm0, dword ptr [rbp+74h]
00000001401E60D9  mov     eax, 8
00000001401E60DE  imul    rax, 0
00000001401E60E2  lea     rcx, unk_14027BCF8
00000001401E60E9  add     rcx, rax
00000001401E60EC  mov     rax, rcx
00000001401E60EF  mov     ecx, 4
00000001401E60F4  imul    rcx, 0
00000001401E60F8  cvtsi2ss xmm1, dword ptr [rax+rcx]
00000001401E60FD  mulss   xmm0, xmm1
00000001401E6101  mov     eax, 8
00000001401E6106  imul    rax, 1
00000001401E610A  lea     rcx, unk_14027BCF8
00000001401E6111  add     rcx, rax
00000001401E6114  mov     rax, rcx
00000001401E6117  mov     ecx, 4
00000001401E611C  imul    rcx, 0
00000001401E6120  cvtsi2ss xmm1, dword ptr [rax+rcx]
00000001401E6125  movss   xmm2, dword ptr [rbp+74h]
00000001401E612A  mulss   xmm2, xmm1
00000001401E612E  movaps  xmm1, xmm2
00000001401E6131  addss   xmm0, xmm1
00000001401E6135  cvttss2si eax, xmm0
00000001401E6139  mov     [rbp+1C0h], eax
00000001401E613F  movss   xmm0, cs:dword_1402783F4
00000001401E6147  subss   xmm0, dword ptr [rbp+74h]
00000001401E614C  mov     eax, 8
00000001401E6151  imul    rax, 1
00000001401E6155  lea     rcx, unk_14027BCF8
00000001401E615C  add     rcx, rax
00000001401E615F  mov     rax, rcx
00000001401E6162  mov     ecx, 4
00000001401E6167  imul    rcx, 1
00000001401E616B  cvtsi2ss xmm1, dword ptr [rax+rcx]
00000001401E6170  mulss   xmm0, xmm1
00000001401E6174  mov     eax, 8
00000001401E6179  imul    rax, 1
00000001401E617D  lea     rcx, unk_14027BCF8
00000001401E6184  add     rcx, rax
00000001401E6187  mov     rax, rcx
00000001401E618A  mov     ecx, 4
00000001401E618F  imul    rcx, 1
00000001401E6193  cvtsi2ss xmm1, dword ptr [rax+rcx]
00000001401E6198  movss   xmm2, dword ptr [rbp+74h]
00000001401E619D  mulss   xmm2, xmm1
00000001401E61A1  movaps  xmm1, xmm2
00000001401E61A4  addss   xmm0, xmm1
00000001401E61A8  cvttss2si eax, xmm0
00000001401E61AC  mov     [rbp+120h], eax
00000001401E61B2  mov     eax, [rbp+28h]
00000001401E61B5  imul    eax, [rbp+28h]
00000001401E61B9  mov     ecx, [rbp+120h]
00000001401E61BF  mov     edx, [rbp+1C0h]
00000001401E61C5  sub     edx, ecx
00000001401E61C7  mov     ecx, edx
00000001401E61C9  imul    eax, ecx
00000001401E61CC  sar     eax, 0Eh
00000001401E61CF  mov     ecx, [rbp+120h]
00000001401E61D5  add     ecx, eax
00000001401E61D7  mov     eax, ecx
00000001401E61D9  mov     [rbp+54h], eax
00000001401E61DC  mov     rax, [rbp+3A0h]
00000001401E61E3  cmp     dword ptr [rax+6Ch], 800h
00000001401E61EA  jnz     short loc_1401E61F7
00000001401E61EC  mov     eax, [rbp+54h]
00000001401E61EF  add     eax, 1F40h
00000001401E61F4  mov     [rbp+54h], eax
00000001401E61F7  mov     rax, [rbp+3A0h]
00000001401E61FE  cmp     dword ptr [rax+3794h], 3EAh
00000001401E6208  jnz     short loc_1401E6217
00000001401E620A  mov     eax, [rbp+54h]
00000001401E620D  sub     eax, 0FA0h
00000001401E6212  mov     [rbp+54h], eax
00000001401E6215  jmp     short loc_1401E6232
00000001401E6217  mov     rax, [rbp+3A0h]
00000001401E621E  cmp     dword ptr [rax+3794h], 0
00000001401E6225  jle     short loc_1401E6232
00000001401E6227  mov     eax, [rbp+54h]
00000001401E622A  add     eax, 0FA0h
00000001401E622F  mov     [rbp+54h], eax
00000001401E6232  mov     eax, [rbp+54h]
00000001401E6235  cmp     [rbp+2Ch], eax
00000001401E6238  jl      short loc_1401E6246
00000001401E623A  mov     dword ptr [rbp+124h], 3EAh
00000001401E6244  jmp     short loc_1401E6250
00000001401E6246  mov     dword ptr [rbp+124h], 3E8h
00000001401E6250  mov     rax, [rbp+3A0h]
00000001401E6257  mov     ecx, [rbp+124h]
00000001401E625D  mov     [rax+3790h], ecx
00000001401E6263  mov     rax, [rbp+3A0h]
00000001401E626A  cmp     dword ptr [rax+30h], 0
00000001401E626E  jz      short loc_1401E6298
00000001401E6270  mov     eax, 80h
00000001401E6275  sub     eax, [rbp+28h]
00000001401E6278  sar     eax, 4
00000001401E627B  mov     rcx, [rbp+3A0h]
00000001401E6282  cmp     [rcx+28h], eax
00000001401E6285  jle     short loc_1401E6298
00000001401E6287  mov     rax, [rbp+3A0h]
00000001401E628E  mov     dword ptr [rax+3790h], 3E8h
00000001401E6298  mov     rax, [rbp+3A0h]
00000001401E629F  cmp     dword ptr [rax+38h], 0
00000001401E62A3  jz      short loc_1401E62BC
00000001401E62A5  cmp     dword ptr [rbp+28h], 64h ; 'd'
00000001401E62A9  jle     short loc_1401E62BC
00000001401E62AB  mov     rax, [rbp+3A0h]
00000001401E62B2  mov     dword ptr [rax+3790h], 3E8h
00000001401E62BC  cmp     dword ptr [rbp+10h], 32h ; '2'
00000001401E62C0  jle     short loc_1401E62CE
00000001401E62C2  mov     dword ptr [rbp+128h], 2328h
00000001401E62CC  jmp     short loc_1401E62D8
00000001401E62CE  mov     dword ptr [rbp+128h], 1770h
00000001401E62D8  mov     eax, [rbp+128h]
00000001401E62DE  imul    eax, [rbp+3B0h]
00000001401E62E5  mov     rcx, [rbp+3A0h]
00000001401E62EC  mov     ecx, [rcx+90h]
00000001401E62F2  shl     ecx, 3
00000001401E62F5  cdq
00000001401E62F6  idiv    ecx
00000001401E62F8  cmp     [rbp+4], eax
00000001401E62FB  jge     short loc_1401E630E
00000001401E62FD  mov     rax, [rbp+3A0h]
00000001401E6304  mov     dword ptr [rax+3790h], 3EAh
00000001401E630E  jmp     short loc_1401E632A
00000001401E6310  mov     rax, [rbp+3A0h]
00000001401E6317  mov     rcx, [rbp+3A0h]
00000001401E631E  mov     ecx, [rcx+88h]
00000001401E6324  mov     [rax+3790h], ecx
00000001401E632A  mov     rax, [rbp+3A0h]
00000001401E6331  cmp     dword ptr [rax+3790h], 3EAh
00000001401E633B  jz      short loc_1401E636B
00000001401E633D  mov     rax, [rbp+3A0h]
00000001401E6344  mov     eax, [rax+90h]
00000001401E634A  cdq
00000001401E634B  mov     ecx, 64h ; 'd'
00000001401E6350  idiv    ecx
00000001401E6352  cmp     [rbp+3B0h], eax
00000001401E6358  jge     short loc_1401E636B
00000001401E635A  mov     rax, [rbp+3A0h]
00000001401E6361  mov     dword ptr [rax+3790h], 3EAh
00000001401E636B  mov     rax, [rbp+3A0h]
00000001401E6372  cmp     dword ptr [rax+0B0h], 0
00000001401E6379  jz      short loc_1401E638C
00000001401E637B  mov     rax, [rbp+3A0h]
00000001401E6382  mov     dword ptr [rax+3790h], 3EAh
00000001401E638C  mov     rax, [rbp+3A0h]
00000001401E6393  cmp     dword ptr [rax+3794h], 0
00000001401E639A  jle     loc_1401E647D
00000001401E63A0  mov     rax, [rbp+3A0h]
00000001401E63A7  cmp     dword ptr [rax+3790h], 3EAh
00000001401E63B1  jz      short loc_1401E63C6
00000001401E63B3  mov     rax, [rbp+3A0h]
00000001401E63BA  cmp     dword ptr [rax+3794h], 3EAh
00000001401E63C4  jz      short loc_1401E63F4
00000001401E63C6  mov     rax, [rbp+3A0h]
00000001401E63CD  cmp     dword ptr [rax+3790h], 3EAh
00000001401E63D7  jnz     loc_1401E647D
00000001401E63DD  mov     rax, [rbp+3A0h]
00000001401E63E4  cmp     dword ptr [rax+3794h], 3EAh
00000001401E63EE  jz      loc_1401E647D
00000001401E63F4  mov     dword ptr [rbp+18h], 1
00000001401E63FB  mov     rax, [rbp+3A0h]
00000001401E6402  cmp     dword ptr [rax+3790h], 3EAh
00000001401E640C  jz      short loc_1401E641A
00000001401E640E  mov     dword ptr [rbp+12Ch], 1
00000001401E6418  jmp     short loc_1401E6424
00000001401E641A  mov     dword ptr [rbp+12Ch], 0
00000001401E6424  mov     eax, [rbp+12Ch]
00000001401E642A  mov     [rbp+48h], eax
00000001401E642D  cmp     dword ptr [rbp+48h], 0
00000001401E6431  jnz     short loc_1401E647D
00000001401E6433  mov     rax, [rbp+3A0h]
00000001401E643A  mov     eax, [rax+90h]
00000001401E6440  cdq
00000001401E6441  mov     ecx, 64h ; 'd'
00000001401E6446  idiv    ecx
00000001401E6448  cmp     [rbp+3B0h], eax
00000001401E644E  jl      short loc_1401E6476
00000001401E6450  mov     rax, [rbp+3A0h]
00000001401E6457  mov     rcx, [rbp+3A0h]
00000001401E645E  mov     ecx, [rcx+3794h]
00000001401E6464  mov     [rax+3790h], ecx
00000001401E646A  mov     dword ptr [rbp+0E0h], 1
00000001401E6474  jmp     short loc_1401E647D
00000001401E6476  mov     dword ptr [rbp+18h], 0
00000001401E647D  mov     rax, [rbp+3A0h]
00000001401E6484  cmp     dword ptr [rax+3770h], 1
00000001401E648B  jnz     short loc_1401E64F1
00000001401E648D  mov     rax, [rbp+3A0h]
00000001401E6494  cmp     dword ptr [rax+3798h], 2
00000001401E649B  jnz     short loc_1401E64F1
00000001401E649D  mov     rax, [rbp+3A0h]
00000001401E64A4  cmp     dword ptr [rax+44h], 0
00000001401E64A8  jnz     short loc_1401E64F1
00000001401E64AA  mov     rax, [rbp+3A0h]
00000001401E64B1  cmp     dword ptr [rax+3790h], 3EAh
00000001401E64BB  jz      short loc_1401E64F1
00000001401E64BD  mov     rax, [rbp+3A0h]
00000001401E64C4  cmp     dword ptr [rax+3794h], 3EAh
00000001401E64CE  jz      short loc_1401E64F1
00000001401E64D0  mov     rax, [rbp+3A0h]
00000001401E64D7  mov     dword ptr [rax+44h], 1
00000001401E64DE  mov     rax, [rbp+3A0h]
00000001401E64E5  mov     dword ptr [rax+3770h], 2
00000001401E64EF  jmp     short loc_1401E64FF
00000001401E64F1  mov     rax, [rbp+3A0h]
00000001401E64F8  mov     dword ptr [rax+44h], 0
00000001401E64FF  mov     rax, [rbp+3A0h]
00000001401E6506  mov     eax, [rax+90h]
00000001401E650C  cdq
00000001401E650D  idiv    dword ptr [rbp+3B0h]
00000001401E6513  mov     rcx, [rbp+3A0h]
00000001401E651A  mov     ecx, [rcx+28h]
00000001401E651D  mov     [rsp+30h], ecx
00000001401E6521  mov     rcx, [rbp+3A0h]
00000001401E6528  mov     ecx, [rcx+2Ch]
00000001401E652B  mov     [rsp+28h], ecx
00000001401E652F  mov     rcx, [rbp+3A0h]
00000001401E6536  mov     ecx, [rcx+3790h]
00000001401E653C  mov     [rsp+20h], ecx
00000001401E6540  mov     rcx, [rbp+3A0h]
00000001401E6547  mov     r9d, [rcx+94h]
00000001401E654E  mov     r8d, eax
00000001401E6551  mov     rax, [rbp+3A0h]
00000001401E6558  mov     edx, [rax+3770h]
00000001401E655E  mov     rax, [rbp+3A0h]
00000001401E6565  mov     ecx, [rax+0A0h]
00000001401E656B  call    sub_1401F5760
00000001401E6570  mov     [rbp+2Ch], eax
00000001401E6573  mov     rax, [rbp+3A0h]
00000001401E657A  cmp     dword ptr [rax+3790h], 3EAh
00000001401E6584  jz      short loc_1401E65C3
00000001401E6586  mov     rax, [rbp+3A0h]
00000001401E658D  cmp     dword ptr [rax+3794h], 3EAh
00000001401E6597  jnz     short loc_1401E65C3
00000001401E6599  lea     r8, [rbp+2F0h]
00000001401E65A0  mov     rax, [rbp+3A0h]
00000001401E65A7  mov     edx, [rax+0B4h]
00000001401E65AD  mov     rcx, [rbp+1A8h]
00000001401E65B4  call    sub_1401CAAD0
00000001401E65B9  mov     dword ptr [rbp+9Ch], 1
00000001401E65C3  mov     rax, [rbp+3A0h]
00000001401E65CA  cmp     dword ptr [rax+3790h], 3EAh
00000001401E65D4  jz      short loc_1401E65F7
00000001401E65D6  mov     rax, [rbp+3A0h]
00000001401E65DD  cmp     dword ptr [rax+37ACh], 0
00000001401E65E4  jnz     short loc_1401E65F7
00000001401E65E6  mov     rax, [rbp+3A0h]
00000001401E65ED  cmp     dword ptr [rax+54h], 0
00000001401E65F1  jz      loc_1401E67CA
00000001401E65F7  mov     dword ptr [rbp+3Ch], 451h
00000001401E65FE  mov     rax, [rbp+3A0h]
00000001401E6605  cmp     dword ptr [rax+70h], 2
00000001401E6609  jnz     short loc_1401E6636
00000001401E660B  mov     rax, [rbp+3A0h]
00000001401E6612  cmp     dword ptr [rax+78h], 1
00000001401E6616  jz      short loc_1401E6636
00000001401E6618  lea     rax, unk_14027BCB8
00000001401E661F  mov     [rbp+220h], rax
00000001401E6626  lea     rax, unk_14027BCD8
00000001401E662D  mov     [rbp+210h], rax
00000001401E6634  jmp     short loc_1401E6652
00000001401E6636  lea     rax, unk_14027BC78
00000001401E663D  mov     [rbp+220h], rax
00000001401E6644  lea     rax, unk_14027BC98
00000001401E664B  mov     [rbp+210h], rax
00000001401E6652  mov     dword ptr [rbp+8], 0
00000001401E6659  jmp     short loc_1401E6663
00000001401E665B  mov     eax, [rbp+8]
00000001401E665E  inc     eax
00000001401E6660  mov     [rbp+8], eax
00000001401E6663  cmp     dword ptr [rbp+8], 8
00000001401E6667  jge     short loc_1401E66B4
00000001401E6669  movsxd  rax, dword ptr [rbp+8]
00000001401E666D  mov     ecx, [rbp+28h]
00000001401E6670  imul    ecx, [rbp+28h]
00000001401E6674  movsxd  rdx, dword ptr [rbp+8]
00000001401E6678  movsxd  r8, dword ptr [rbp+8]
00000001401E667C  mov     r9, [rbp+220h]
00000001401E6683  mov     r10, [rbp+210h]
00000001401E668A  mov     r8d, [r10+r8*4]
00000001401E668E  mov     edx, [r9+rdx*4]
00000001401E6692  sub     edx, r8d
00000001401E6695  imul    ecx, edx
00000001401E6698  sar     ecx, 0Eh
00000001401E669B  mov     rdx, [rbp+210h]
00000001401E66A2  add     ecx, [rdx+rax*4]
00000001401E66A5  mov     eax, ecx
00000001401E66A7  movsxd  rcx, dword ptr [rbp+8]
00000001401E66AB  mov     [rbp+rcx*4+360h], eax
00000001401E66B2  jmp     short loc_1401E665B
00000001401E66B4  mov     eax, [rbp+3Ch]
00000001401E66B7  lea     eax, [rax+rax-89Ch]
00000001401E66BE  cdqe
00000001401E66C0  mov     eax, [rbp+rax*4+360h]
00000001401E66C7  mov     [rbp+78h], eax
00000001401E66CA  mov     eax, [rbp+3Ch]
00000001401E66CD  lea     eax, [rax+rax-89Bh]
00000001401E66D4  cdqe
00000001401E66D6  mov     eax, [rbp+rax*4+360h]
00000001401E66DD  mov     [rbp+130h], eax
00000001401E66E3  mov     rax, [rbp+3A0h]
00000001401E66EA  cmp     dword ptr [rax+37ACh], 0
00000001401E66F1  jnz     short loc_1401E6727
00000001401E66F3  mov     rax, [rbp+3A0h]
00000001401E66FA  mov     ecx, [rbp+3Ch]
00000001401E66FD  cmp     [rax+37A4h], ecx
00000001401E6703  jl      short loc_1401E6717
00000001401E6705  mov     eax, [rbp+130h]
00000001401E670B  mov     ecx, [rbp+78h]
00000001401E670E  sub     ecx, eax
00000001401E6710  mov     eax, ecx
00000001401E6712  mov     [rbp+78h], eax
00000001401E6715  jmp     short loc_1401E6727
00000001401E6717  mov     eax, [rbp+130h]
00000001401E671D  mov     ecx, [rbp+78h]
00000001401E6720  add     ecx, eax
00000001401E6722  mov     eax, ecx
00000001401E6724  mov     [rbp+78h], eax
00000001401E6727  mov     eax, [rbp+78h]
00000001401E672A  cmp     [rbp+2Ch], eax
00000001401E672D  jl      short loc_1401E6731
00000001401E672F  jmp     short loc_1401E6746
00000001401E6731  mov     eax, [rbp+3Ch]
00000001401E6734  dec     eax
00000001401E6736  mov     [rbp+3Ch], eax
00000001401E6739  cmp     dword ptr [rbp+3Ch], 44Dh
00000001401E6740  jg      loc_1401E66B4
00000001401E6746  cmp     dword ptr [rbp+3Ch], 44Eh
00000001401E674D  jnz     short loc_1401E6756
00000001401E674F  mov     dword ptr [rbp+3Ch], 44Fh
00000001401E6756  mov     rax, [rbp+3A0h]
00000001401E675D  mov     ecx, [rbp+3Ch]
00000001401E6760  mov     [rax+37A4h], ecx
00000001401E6766  mov     rax, [rbp+3A0h]
00000001401E676D  mov     ecx, [rbp+3Ch]
00000001401E6770  mov     [rax+37A0h], ecx
00000001401E6776  mov     rax, [rbp+3A0h]
00000001401E677D  cmp     dword ptr [rax+37ACh], 0
00000001401E6784  jnz     short loc_1401E67CA
00000001401E6786  mov     rax, [rbp+3A0h]
00000001401E678D  cmp     dword ptr [rax+3790h], 3EAh
00000001401E6797  jz      short loc_1401E67CA
00000001401E6799  mov     rax, [rbp+3A0h]
00000001401E67A0  cmp     dword ptr [rax+58h], 0
00000001401E67A4  jnz     short loc_1401E67CA
00000001401E67A6  mov     rax, [rbp+3A0h]
00000001401E67AD  cmp     dword ptr [rax+37A0h], 44Fh
00000001401E67B7  jle     short loc_1401E67CA
00000001401E67B9  mov     rax, [rbp+3A0h]
00000001401E67C0  mov     dword ptr [rax+37A0h], 44Fh
00000001401E67CA  mov     rax, [rbp+3A0h]
00000001401E67D1  mov     rcx, [rbp+3A0h]
00000001401E67D8  mov     ecx, [rcx+84h]
00000001401E67DE  cmp     [rax+37A0h], ecx
00000001401E67E4  jle     short loc_1401E6800
00000001401E67E6  mov     rax, [rbp+3A0h]
00000001401E67ED  mov     rcx, [rbp+3A0h]
00000001401E67F4  mov     ecx, [rcx+84h]
00000001401E67FA  mov     [rax+37A0h], ecx
00000001401E6800  mov     rax, [rbp+3A0h]
00000001401E6807  cmp     dword ptr [rax+80h], 0FFFFFC18h
00000001401E6811  jz      short loc_1401E682D
00000001401E6813  mov     rax, [rbp+3A0h]
00000001401E681A  mov     rcx, [rbp+3A0h]
00000001401E6821  mov     ecx, [rcx+80h]
00000001401E6827  mov     [rax+37A0h], ecx
00000001401E682D  mov     rax, [rbp+3A0h]
00000001401E6834  cmp     dword ptr [rax+3790h], 3EAh
00000001401E683E  jz      short loc_1401E6891
00000001401E6840  cmp     dword ptr [rbp+164h], 3A98h
00000001401E684A  jge     short loc_1401E6891
00000001401E684C  mov     rax, [rbp+3A0h]
00000001401E6853  cmp     dword ptr [rax+37A0h], 44Fh
00000001401E685D  jge     short loc_1401E6874
00000001401E685F  mov     rax, [rbp+3A0h]
00000001401E6866  mov     eax, [rax+37A0h]
00000001401E686C  mov     [rbp+134h], eax
00000001401E6872  jmp     short loc_1401E687E
00000001401E6874  mov     dword ptr [rbp+134h], 44Fh
00000001401E687E  mov     rax, [rbp+3A0h]
00000001401E6885  mov     ecx, [rbp+134h]
00000001401E688B  mov     [rax+37A0h], ecx
00000001401E6891  mov     rax, [rbp+3A0h]
00000001401E6898  cmp     dword ptr [rax+90h], 5DC0h
00000001401E68A2  jg      short loc_1401E68C8
00000001401E68A4  mov     rax, [rbp+3A0h]
00000001401E68AB  cmp     dword ptr [rax+37A0h], 450h
00000001401E68B5  jle     short loc_1401E68C8
00000001401E68B7  mov     rax, [rbp+3A0h]
00000001401E68BE  mov     dword ptr [rax+37A0h], 450h
00000001401E68C8  mov     rax, [rbp+3A0h]
00000001401E68CF  cmp     dword ptr [rax+90h], 3E80h
00000001401E68D9  jg      short loc_1401E68FF
00000001401E68DB  mov     rax, [rbp+3A0h]
00000001401E68E2  cmp     dword ptr [rax+37A0h], 44Fh
00000001401E68EC  jle     short loc_1401E68FF
00000001401E68EE  mov     rax, [rbp+3A0h]
00000001401E68F5  mov     dword ptr [rax+37A0h], 44Fh
00000001401E68FF  mov     rax, [rbp+3A0h]
00000001401E6906  cmp     dword ptr [rax+90h], 2EE0h
00000001401E6910  jg      short loc_1401E6936
00000001401E6912  mov     rax, [rbp+3A0h]
00000001401E6919  cmp     dword ptr [rax+37A0h], 44Eh
00000001401E6923  jle     short loc_1401E6936
00000001401E6925  mov     rax, [rbp+3A0h]
00000001401E692C  mov     dword ptr [rax+37A0h], 44Eh
00000001401E6936  mov     rax, [rbp+3A0h]
00000001401E693D  cmp     dword ptr [rax+90h], 1F40h
00000001401E6947  jg      short loc_1401E696D
00000001401E6949  mov     rax, [rbp+3A0h]
00000001401E6950  cmp     dword ptr [rax+37A0h], 44Dh
00000001401E695A  jle     short loc_1401E696D
00000001401E695C  mov     rax, [rbp+3A0h]
00000001401E6963  mov     dword ptr [rax+37A0h], 44Dh
00000001401E696D  mov     rax, [rbp+3A0h]
00000001401E6974  cmp     dword ptr [rax+46CCh], 0
00000001401E697B  jz      loc_1401E6ADB
00000001401E6981  mov     rax, [rbp+3A0h]
00000001401E6988  cmp     dword ptr [rax+80h], 0FFFFFC18h
00000001401E6992  jnz     loc_1401E6ADB
00000001401E6998  mov     rax, [rbp+3A0h]
00000001401E699F  imul    eax, [rax+3770h], 4650h
00000001401E69A9  cmp     [rbp+2Ch], eax
00000001401E69AC  jg      short loc_1401E69CA
00000001401E69AE  mov     rax, [rbp+3A0h]
00000001401E69B5  cmp     dword ptr [rax+3790h], 3EAh
00000001401E69BF  jnz     short loc_1401E69CA
00000001401E69C1  mov     dword ptr [rbp+64h], 44Dh
00000001401E69C8  jmp     short loc_1401E6A41
00000001401E69CA  mov     rax, [rbp+3A0h]
00000001401E69D1  imul    eax, [rax+3770h], 5DC0h
00000001401E69DB  cmp     [rbp+2Ch], eax
00000001401E69DE  jg      short loc_1401E69FC
00000001401E69E0  mov     rax, [rbp+3A0h]
00000001401E69E7  cmp     dword ptr [rax+3790h], 3EAh
00000001401E69F1  jnz     short loc_1401E69FC
00000001401E69F3  mov     dword ptr [rbp+64h], 44Eh
00000001401E69FA  jmp     short loc_1401E6A41
00000001401E69FC  mov     rax, [rbp+3A0h]
00000001401E6A03  imul    eax, [rax+3770h], 7530h
00000001401E6A0D  cmp     [rbp+2Ch], eax
00000001401E6A10  jg      short loc_1401E6A1B
00000001401E6A12  mov     dword ptr [rbp+64h], 44Fh
00000001401E6A19  jmp     short loc_1401E6A41
00000001401E6A1B  mov     rax, [rbp+3A0h]
00000001401E6A22  imul    eax, [rax+3770h], 0ABE0h
00000001401E6A2C  cmp     [rbp+2Ch], eax
00000001401E6A2F  jg      short loc_1401E6A3A
00000001401E6A31  mov     dword ptr [rbp+64h], 450h
00000001401E6A38  jmp     short loc_1401E6A41
00000001401E6A3A  mov     dword ptr [rbp+64h], 451h
00000001401E6A41  mov     rax, [rbp+3A0h]
00000001401E6A48  mov     ecx, [rbp+64h]
00000001401E6A4B  cmp     [rax+46CCh], ecx
00000001401E6A51  jle     short loc_1401E6A68
00000001401E6A53  mov     rax, [rbp+3A0h]
00000001401E6A5A  mov     eax, [rax+46CCh]
00000001401E6A60  mov     [rbp+138h], eax
00000001401E6A66  jmp     short loc_1401E6A71
00000001401E6A68  mov     eax, [rbp+64h]
00000001401E6A6B  mov     [rbp+138h], eax
00000001401E6A71  mov     rax, [rbp+3A0h]
00000001401E6A78  mov     ecx, [rbp+138h]
00000001401E6A7E  mov     [rax+46CCh], ecx
00000001401E6A84  mov     rax, [rbp+3A0h]
00000001401E6A8B  mov     rcx, [rbp+3A0h]
00000001401E6A92  mov     ecx, [rcx+46CCh]
00000001401E6A98  cmp     [rax+37A0h], ecx
00000001401E6A9E  jge     short loc_1401E6AB5
00000001401E6AA0  mov     rax, [rbp+3A0h]
00000001401E6AA7  mov     eax, [rax+37A0h]
00000001401E6AAD  mov     [rbp+13Ch], eax
00000001401E6AB3  jmp     short loc_1401E6AC8
00000001401E6AB5  mov     rax, [rbp+3A0h]
00000001401E6ABC  mov     eax, [rax+46CCh]
00000001401E6AC2  mov     [rbp+13Ch], eax
00000001401E6AC8  mov     rax, [rbp+3A0h]
00000001401E6ACF  mov     ecx, [rbp+13Ch]
00000001401E6AD5  mov     [rax+37A0h], ecx
00000001401E6ADB  mov     rax, [rbp+3A0h]
00000001401E6AE2  add     rax, 37A0h
00000001401E6AE8  mov     ecx, [rbp+2Ch]
00000001401E6AEB  mov     [rsp+28h], ecx
00000001401E6AEF  mov     [rsp+20h], rax
00000001401E6AF4  mov     rax, [rbp+3A0h]
00000001401E6AFB  mov     r9d, [rax+3790h]
00000001401E6B02  mov     rax, [rbp+3A0h]
00000001401E6B09  mov     r8d, [rax+34h]
00000001401E6B0D  mov     rax, [rbp+3A0h]
00000001401E6B14  mov     edx, [rax+28h]
00000001401E6B17  mov     rax, [rbp+3A0h]
00000001401E6B1E  mov     ecx, [rax+30h]
00000001401E6B21  call    sub_1401F53F0
00000001401E6B26  mov     rcx, [rbp+3A0h]
00000001401E6B2D  mov     [rcx+34h], eax
00000001401E6B30  mov     r8d, [rbp+3C8h]
00000001401E6B37  mov     edx, 0FC4h
00000001401E6B3C  mov     rcx, [rbp+20h]
00000001401E6B40  call    sub_140199190
00000001401E6B45  mov     rax, [rbp+3A0h]
00000001401E6B4C  cmp     dword ptr [rax+3790h], 3EAh
00000001401E6B56  jnz     short loc_1401E6B7C
00000001401E6B58  mov     rax, [rbp+3A0h]
00000001401E6B5F  cmp     dword ptr [rax+37A0h], 44Eh
00000001401E6B69  jnz     short loc_1401E6B7C
00000001401E6B6B  mov     rax, [rbp+3A0h]
00000001401E6B72  mov     dword ptr [rax+37A0h], 44Fh
00000001401E6B7C  mov     rax, [rbp+3A0h]
00000001401E6B83  cmp     dword ptr [rax+0B0h], 0
00000001401E6B8A  jz      short loc_1401E6B9D
00000001401E6B8C  mov     rax, [rbp+3A0h]
00000001401E6B93  mov     dword ptr [rax+37A0h], 44Dh
00000001401E6B9D  mov     rax, [rbp+3A0h]
00000001401E6BA4  mov     eax, [rax+37A0h]
00000001401E6BAA  mov     [rbp+30h], eax
00000001401E6BAD  mov     rax, [rbp+3A0h]
00000001401E6BB4  cmp     dword ptr [rax+3790h], 3E8h
00000001401E6BBE  jnz     short loc_1401E6BDA
00000001401E6BC0  cmp     dword ptr [rbp+30h], 44Fh
00000001401E6BC7  jle     short loc_1401E6BDA
00000001401E6BC9  mov     rax, [rbp+3A0h]
00000001401E6BD0  mov     dword ptr [rax+3790h], 3E9h
00000001401E6BDA  mov     rax, [rbp+3A0h]
00000001401E6BE1  cmp     dword ptr [rax+3790h], 3E9h
00000001401E6BEB  jnz     short loc_1401E6C07
00000001401E6BED  cmp     dword ptr [rbp+30h], 44Fh
00000001401E6BF4  jg      short loc_1401E6C07
00000001401E6BF6  mov     rax, [rbp+3A0h]
00000001401E6BFD  mov     dword ptr [rax+3790h], 3E8h
00000001401E6C07  mov     rax, [rbp+3A0h]
00000001401E6C0E  mov     eax, [rax+90h]
00000001401E6C14  cdq
00000001401E6C15  mov     ecx, 32h ; '2'
00000001401E6C1A  idiv    ecx
00000001401E6C1C  cmp     [rbp+3B0h], eax
00000001401E6C22  jle     short loc_1401E6C37
00000001401E6C24  mov     rax, [rbp+3A0h]
00000001401E6C2B  cmp     dword ptr [rax+3790h], 3E8h
00000001401E6C35  jnz     short loc_1401E6C59
00000001401E6C37  mov     rax, [rbp+3A0h]
00000001401E6C3E  imul    eax, [rax+90h], 3
00000001401E6C45  cdq
00000001401E6C46  mov     ecx, 32h ; '2'
00000001401E6C4B  idiv    ecx
00000001401E6C4D  cmp     [rbp+3B0h], eax
00000001401E6C53  jle     loc_1401E6DB0
00000001401E6C59  mov     rax, [rbp+3A0h]
00000001401E6C60  cmp     dword ptr [rax+3790h], 3E8h
00000001401E6C6A  jnz     loc_1401E6CFC
00000001401E6C70  mov     rax, [rbp+3A0h]
00000001401E6C77  mov     eax, [rax+90h]
00000001401E6C7D  shl     eax, 1
00000001401E6C7F  cdq
00000001401E6C80  mov     ecx, 19h
00000001401E6C85  idiv    ecx
00000001401E6C87  cmp     [rbp+3B0h], eax
00000001401E6C8D  jnz     short loc_1401E6CA9
00000001401E6C8F  mov     rax, [rbp+3A0h]
00000001401E6C96  mov     eax, [rax+90h]
00000001401E6C9C  cdq
00000001401E6C9D  mov     ecx, 19h
00000001401E6CA2  idiv    ecx
00000001401E6CA4  mov     [rbp+7Ch], eax
00000001401E6CA7  jmp     short loc_1401E6CFA
00000001401E6CA9  mov     rax, [rbp+3A0h]
00000001401E6CB0  imul    eax, [rax+90h], 3
00000001401E6CB7  cdq
00000001401E6CB8  mov     ecx, 19h
00000001401E6CBD  idiv    ecx
00000001401E6CBF  cmp     [rbp+3B0h], eax
00000001401E6CC5  jnz     short loc_1401E6CE2
00000001401E6CC7  mov     rax, [rbp+3A0h]
00000001401E6CCE  imul    eax, [rax+90h], 3
00000001401E6CD5  cdq
00000001401E6CD6  mov     ecx, 32h ; '2'
00000001401E6CDB  idiv    ecx
00000001401E6CDD  mov     [rbp+7Ch], eax
00000001401E6CE0  jmp     short loc_1401E6CFA
00000001401E6CE2  mov     rax, [rbp+3A0h]
00000001401E6CE9  mov     eax, [rax+90h]
00000001401E6CEF  cdq
00000001401E6CF0  mov     ecx, 32h ; '2'
00000001401E6CF5  idiv    ecx
00000001401E6CF7  mov     [rbp+7Ch], eax
00000001401E6CFA  jmp     short loc_1401E6D14
00000001401E6CFC  mov     rax, [rbp+3A0h]
00000001401E6D03  mov     eax, [rax+90h]
00000001401E6D09  cdq
00000001401E6D0A  mov     ecx, 32h ; '2'
00000001401E6D0F  idiv    ecx
00000001401E6D11  mov     [rbp+7Ch], eax
00000001401E6D14  mov     eax, [rbp+3B0h]
00000001401E6D1A  cdq
00000001401E6D1B  idiv    dword ptr [rbp+7Ch]
00000001401E6D1E  mov     [rbp+1C4h], eax
00000001401E6D24  cmp     dword ptr [rbp+0CCh], 0FFFFFFFFh
00000001401E6D2B  jz      short loc_1401E6D53
00000001401E6D2D  mov     rax, [rbp+3A0h]
00000001401E6D34  mov     ecx, [rbp+0CCh]
00000001401E6D3A  mov     [rax+1DD4h], ecx
00000001401E6D40  mov     rax, [rbp+3A0h]
00000001401E6D47  mov     ecx, [rbp+140h]
00000001401E6D4D  mov     [rax+1DD8h], ecx
00000001401E6D53  mov     eax, [rbp+400h]
00000001401E6D59  mov     [rsp+40h], eax; int
00000001401E6D5D  mov     eax, [rbp+3C8h]
00000001401E6D63  mov     [rsp+38h], eax; int
00000001401E6D67  mov     eax, [rbp+0E0h]
00000001401E6D6D  mov     [rsp+30h], eax; int
00000001401E6D71  mov     eax, [rbp+3C0h]
00000001401E6D77  mov     [rsp+28h], eax; int
00000001401E6D7B  mov     rax, [rbp+3B8h]
00000001401E6D82  mov     [rsp+20h], rax; __int64
00000001401E6D87  mov     r9d, [rbp+7Ch]; int
00000001401E6D8B  mov     r8d, [rbp+1C4h]; int
00000001401E6D92  mov     rdx, [rbp+3A8h]; int
00000001401E6D99  mov     rcx, [rbp+3A0h]; int
00000001401E6DA0  call    sub_1401F59A0
00000001401E6DA5  mov     [rbp+0], eax
00000001401E6DA8  mov     eax, [rbp+0]
00000001401E6DAB  jmp     loc_1401E933B
00000001401E6DB0  mov     rax, [rbp+3A0h]
00000001401E6DB7  cmp     dword ptr [rax+37A8h], 0
00000001401E6DBE  jz      short loc_1401E6DE9
00000001401E6DC0  mov     dword ptr [rbp+18h], 1
00000001401E6DC7  mov     dword ptr [rbp+48h], 1
00000001401E6DCE  mov     rax, [rbp+3A0h]
00000001401E6DD5  mov     dword ptr [rax+37A8h], 0
00000001401E6DDF  mov     dword ptr [rbp+9Ch], 2
00000001401E6DE9  mov     rax, [rbp+3A0h]
00000001401E6DF0  cmp     dword ptr [rax+3790h], 3EAh
00000001401E6DFA  jnz     short loc_1401E6E03
00000001401E6DFC  mov     dword ptr [rbp+18h], 0
00000001401E6E03  cmp     dword ptr [rbp+18h], 0
00000001401E6E07  jz      short loc_1401E6E40
00000001401E6E09  mov     rax, [rbp+3A0h]
00000001401E6E10  mov     r9d, [rax+3770h]
00000001401E6E17  mov     r8d, [rbp+10h]
00000001401E6E1B  mov     rax, [rbp+3A0h]
00000001401E6E22  mov     edx, [rax+0A0h]
00000001401E6E28  mov     ecx, [rbp+4]
00000001401E6E2B  call    sub_1401F5E00
00000001401E6E30  mov     [rbp+0Ch], eax
00000001401E6E33  cmp     dword ptr [rbp+0Ch], 0
00000001401E6E37  jnz     short loc_1401E6E40
00000001401E6E39  mov     dword ptr [rbp+18h], 0
00000001401E6E40  mov     eax, [rbp+0Ch]
00000001401E6E43  mov     ecx, [rbp+4]
00000001401E6E46  sub     ecx, eax
00000001401E6E48  mov     eax, ecx
00000001401E6E4A  mov     [rbp+1C8h], eax
00000001401E6E50  mov     rcx, [rbp+3A0h]
00000001401E6E57  mov     ecx, [rcx+0A0h]
00000001401E6E5D  imul    ecx, [rbp+3B0h]
00000001401E6E64  mov     rdx, [rbp+3A0h]
00000001401E6E6B  mov     edx, [rdx+90h]
00000001401E6E71  shl     edx, 3
00000001401E6E74  mov     [rbp+208h], edx
00000001401E6E7A  mov     eax, ecx
00000001401E6E7C  cdq
00000001401E6E7D  mov     ecx, [rbp+208h]
00000001401E6E83  idiv    ecx
00000001401E6E85  mov     ecx, [rbp+1C8h]
00000001401E6E8B  cmp     ecx, eax
00000001401E6E8D  jge     short loc_1401E6EA1
00000001401E6E8F  mov     eax, [rbp+0Ch]
00000001401E6E92  mov     ecx, [rbp+4]
00000001401E6E95  sub     ecx, eax
00000001401E6E97  mov     eax, ecx
00000001401E6E99  mov     [rbp+144h], eax
00000001401E6E9F  jmp     short loc_1401E6ECE
00000001401E6EA1  mov     rax, [rbp+3A0h]
00000001401E6EA8  mov     eax, [rax+0A0h]
00000001401E6EAE  imul    eax, [rbp+3B0h]
00000001401E6EB5  mov     rcx, [rbp+3A0h]
00000001401E6EBC  mov     ecx, [rcx+90h]
00000001401E6EC2  shl     ecx, 3
00000001401E6EC5  cdq
00000001401E6EC6  idiv    ecx
00000001401E6EC8  mov     [rbp+144h], eax
00000001401E6ECE  mov     eax, [rbp+144h]
00000001401E6ED4  dec     eax
00000001401E6ED6  mov     [rbp+1D0h], eax
00000001401E6EDC  mov     rax, [rbp+3B8h]
00000001401E6EE3  inc     rax
00000001401E6EE6  mov     [rbp+3B8h], rax
00000001401E6EED  mov     eax, [rbp+4]
00000001401E6EF0  dec     eax
00000001401E6EF2  mov     r8d, eax
00000001401E6EF5  mov     rdx, [rbp+3B8h]
00000001401E6EFC  lea     rcx, [rbp+228h]
00000001401E6F03  call    sub_14019A1E0
00000001401E6F08  mov     eax, [rbp+3B0h]
00000001401E6F0E  mov     ecx, [rbp+14h]
00000001401E6F11  add     ecx, eax
00000001401E6F13  mov     eax, ecx
00000001401E6F15  mov     rcx, [rbp+3A0h]
00000001401E6F1C  imul    eax, [rcx+70h]
00000001401E6F20  cdqe
00000001401E6F22  shl     rax, 2
00000001401E6F26  mov     rcx, rax
00000001401E6F29  add     rcx, 0Fh
00000001401E6F2D  cmp     rcx, rax
00000001401E6F30  ja      short loc_1401E6F3C
00000001401E6F32  mov     rcx, 0FFFFFFFFFFFFFF0h
00000001401E6F3C  and     rcx, 0FFFFFFFFFFFFFFF0h
00000001401E6F40  mov     rax, rcx
00000001401E6F43  call    sub_1401F89D0
00000001401E6F48  sub     rsp, rax
00000001401E6F4B  lea     rax, [rsp+60h]
00000001401E6F50  mov     [rbp+40h], rax
00000001401E6F54  mov     rax, [rbp+3A0h]
00000001401E6F5B  mov     ecx, [rbp+14h]
00000001401E6F5E  imul    ecx, [rax+70h]
00000001401E6F62  mov     eax, ecx
00000001401E6F64  cdqe
00000001401E6F66  mov     rcx, [rbp+3A0h]
00000001401E6F6D  mov     edx, [rbp+14h]
00000001401E6F70  mov     ecx, [rcx+0ACh]
00000001401E6F76  sub     ecx, edx
00000001401E6F78  mov     rdx, [rbp+3A0h]
00000001401E6F7F  imul    ecx, [rdx+70h]
00000001401E6F83  movsxd  rcx, ecx
00000001401E6F86  mov     rdx, [rbp+3A0h]
00000001401E6F8D  lea     rcx, [rdx+rcx*4+37CCh]
00000001401E6F95  mov     rdx, [rbp+40h]
00000001401E6F99  sub     rdx, rcx
00000001401E6F9C  mov     rcx, rdx
00000001401E6F9F  sar     rcx, 2
00000001401E6FA3  imul    rcx, 0
00000001401E6FA7  lea     rax, [rcx+rax*4]
00000001401E6FAB  mov     rcx, [rbp+3A0h]
00000001401E6FB2  mov     edx, [rbp+14h]
00000001401E6FB5  mov     ecx, [rcx+0ACh]
00000001401E6FBB  sub     ecx, edx
00000001401E6FBD  mov     rdx, [rbp+3A0h]
00000001401E6FC4  imul    ecx, [rdx+70h]
00000001401E6FC8  movsxd  rcx, ecx
00000001401E6FCB  mov     rdx, [rbp+3A0h]
00000001401E6FD2  lea     rcx, [rdx+rcx*4+37CCh]
00000001401E6FDA  mov     r8, rax
00000001401E6FDD  mov     rdx, rcx
00000001401E6FE0  mov     rcx, [rbp+40h]
00000001401E6FE4  call    1401FC920h
00000001401E6FE9  mov     rax, [rbp+3A0h]
00000001401E6FF0  cmp     dword ptr [rax+3790h], 3EAh
00000001401E6FFA  jnz     short loc_1401E7011
00000001401E6FFC  mov     ecx, 3Ch ; '<'
00000001401E7001  call    sub_1401BC2A0
00000001401E7006  shl     eax, 8
00000001401E7009  mov     [rbp+148h], eax
00000001401E700F  jmp     short loc_1401E702B
00000001401E7011  mov     eax, 2768h
00000001401E7016  imul    rax, 0
00000001401E701A  mov     rcx, [rbp+1A8h]
00000001401E7021  mov     eax, [rcx+rax+8]
00000001401E7025  mov     [rbp+148h], eax
00000001401E702B  mov     rax, [rbp+3A0h]
00000001401E7032  movsxd  rax, dword ptr [rax+3778h]
00000001401E7039  mov     rcx, [rbp+3A0h]
00000001401E7040  mov     ecx, [rcx+3778h]
00000001401E7046  mov     edx, [rbp+148h]
00000001401E704C  sub     edx, ecx
00000001401E704E  mov     ecx, edx
00000001401E7050  movsxd  rcx, ecx
00000001401E7053  imul    rcx, 3D7h
00000001401E705A  sar     rcx, 10h
00000001401E705E  add     rax, rcx
00000001401E7061  mov     rcx, [rbp+3A0h]
00000001401E7068  mov     [rcx+3778h], eax
00000001401E706E  mov     rax, [rbp+3A0h]
00000001401E7075  mov     eax, [rax+3778h]
00000001401E707B  sar     eax, 8
00000001401E707E  mov     ecx, eax
00000001401E7080  call    sub_1401BC3D0
00000001401E7085  mov     [rbp+1CCh], eax
00000001401E708B  mov     rax, [rbp+3A0h]
00000001401E7092  cmp     dword ptr [rax+6Ch], 800h
00000001401E7099  jnz     short loc_1401E7117
00000001401E709B  mov     rax, [rbp+3A0h]
00000001401E70A2  add     rax, 3780h
00000001401E70A8  mov     rcx, [rbp+3A0h]
00000001401E70AF  mov     edx, [rbp+14h]
00000001401E70B2  imul    edx, [rcx+70h]
00000001401E70B6  mov     ecx, edx
00000001401E70B8  movsxd  rcx, ecx
00000001401E70BB  mov     rdx, [rbp+40h]
00000001401E70BF  lea     rcx, [rdx+rcx*4]
00000001401E70C3  mov     rdx, [rbp+3A0h]
00000001401E70CA  mov     edx, [rdx+0B4h]
00000001401E70D0  mov     [rsp+38h], edx
00000001401E70D4  mov     rdx, [rbp+3A0h]
00000001401E70DB  mov     edx, [rdx+90h]
00000001401E70E1  mov     [rsp+30h], edx
00000001401E70E5  mov     rdx, [rbp+3A0h]
00000001401E70EC  mov     edx, [rdx+70h]
00000001401E70EF  mov     [rsp+28h], edx
00000001401E70F3  mov     edx, [rbp+3B0h]
00000001401E70F9  mov     [rsp+20h], edx
00000001401E70FD  mov     r9, rax
00000001401E7100  mov     r8, rcx
00000001401E7103  mov     edx, [rbp+1CCh]
00000001401E7109  mov     rcx, [rbp+3A8h]
00000001401E7110  call    sub_1401F41E0
00000001401E7115  jmp     short loc_1401E717F
00000001401E7117  mov     rax, [rbp+3A0h]
00000001401E711E  add     rax, 3780h
00000001401E7124  mov     rcx, [rbp+3A0h]
00000001401E712B  mov     edx, [rbp+14h]
00000001401E712E  imul    edx, [rcx+70h]
00000001401E7132  mov     ecx, edx
00000001401E7134  movsxd  rcx, ecx
00000001401E7137  mov     rdx, [rbp+40h]
00000001401E713B  lea     rcx, [rdx+rcx*4]
00000001401E713F  mov     rdx, [rbp+3A0h]
00000001401E7146  mov     edx, [rdx+90h]
00000001401E714C  mov     [rsp+30h], edx
00000001401E7150  mov     rdx, [rbp+3A0h]
00000001401E7157  mov     edx, [rdx+70h]
00000001401E715A  mov     [rsp+28h], edx
00000001401E715E  mov     edx, [rbp+3B0h]
00000001401E7164  mov     [rsp+20h], edx
00000001401E7168  mov     r9, rax
00000001401E716B  mov     r8, rcx
00000001401E716E  mov     edx, 3
00000001401E7173  mov     rcx, [rbp+3A8h]
00000001401E717A  call    sub_1401F43C0
00000001401E717F  cmp     dword ptr [rbp+400h], 0
00000001401E7186  jz      loc_1401E72D2
00000001401E718C  mov     rax, [rbp+3A0h]
00000001401E7193  mov     ecx, [rbp+3B0h]
00000001401E7199  imul    ecx, [rax+70h]
00000001401E719D  mov     eax, ecx
00000001401E719F  mov     rcx, [rbp+3A0h]
00000001401E71A6  mov     edx, [rbp+14h]
00000001401E71A9  imul    edx, [rcx+70h]
00000001401E71AD  mov     ecx, edx
00000001401E71AF  movsxd  rcx, ecx
00000001401E71B2  mov     rdx, [rbp+40h]
00000001401E71B6  lea     rcx, [rdx+rcx*4]
00000001401E71BA  mov     rdx, [rbp+3A0h]
00000001401E71C1  mov     r8d, [rbp+14h]
00000001401E71C5  imul    r8d, [rdx+70h]
00000001401E71CA  mov     edx, r8d
00000001401E71CD  movsxd  rdx, edx
00000001401E71D0  mov     r8, [rbp+40h]
00000001401E71D4  lea     rdx, [r8+rdx*4]
00000001401E71D8  mov     [rbp+260h], rdx
00000001401E71DF  mov     r8d, eax
00000001401E71E2  mov     rdx, rcx
00000001401E71E5  mov     rax, [rbp+260h]
00000001401E71EC  mov     rcx, rax
00000001401E71EF  call    sub_1401A9C00
00000001401E71F4  movss   dword ptr [rbp+0B8h], xmm0
00000001401E71FC  movss   xmm0, cs:dword_140283364
00000001401E7204  comiss  xmm0, dword ptr [rbp+0B8h]
00000001401E720B  jbe     short loc_1401E7224
00000001401E720D  movss   xmm0, dword ptr [rbp+0B8h]
00000001401E7215  ucomiss xmm0, dword ptr [rbp+0B8h]
00000001401E721C  jp      short loc_1401E7224
00000001401E721E  jz      loc_1401E72D2
00000001401E7224  mov     rax, [rbp+3A0h]
00000001401E722B  mov     ecx, [rbp+3B0h]
00000001401E7231  imul    ecx, [rax+70h]
00000001401E7235  mov     eax, ecx
00000001401E7237  cdqe
00000001401E7239  shl     rax, 2
00000001401E723D  mov     rcx, [rbp+3A0h]
00000001401E7244  mov     edx, [rbp+14h]
00000001401E7247  imul    edx, [rcx+70h]
00000001401E724B  mov     ecx, edx
00000001401E724D  movsxd  rcx, ecx
00000001401E7250  mov     rdx, [rbp+40h]
00000001401E7254  lea     rcx, [rdx+rcx*4]
00000001401E7258  mov     r8, rax
00000001401E725B  xor     edx, edx
00000001401E725D  call    1401FCD30h
00000001401E7262  mov     eax, 4
00000001401E7267  imul    rax, 3
00000001401E726B  mov     rcx, [rbp+3A0h]
00000001401E7272  xorps   xmm0, xmm0
00000001401E7275  movss   dword ptr [rcx+rax+3780h], xmm0
00000001401E727E  mov     eax, 4
00000001401E7283  imul    rax, 2
00000001401E7287  mov     rcx, [rbp+3A0h]
00000001401E728E  xorps   xmm0, xmm0
00000001401E7291  movss   dword ptr [rcx+rax+3780h], xmm0
00000001401E729A  mov     eax, 4
00000001401E729F  imul    rax, 1
00000001401E72A3  mov     rcx, [rbp+3A0h]
00000001401E72AA  xorps   xmm0, xmm0
00000001401E72AD  movss   dword ptr [rcx+rax+3780h], xmm0
00000001401E72B6  mov     eax, 4
00000001401E72BB  imul    rax, 0
00000001401E72BF  mov     rcx, [rbp+3A0h]
00000001401E72C6  xorps   xmm0, xmm0
00000001401E72C9  movss   dword ptr [rcx+rax+3780h], xmm0
00000001401E72D2  movss   xmm0, cs:dword_1402783F4
00000001401E72DA  movss   dword ptr [rbp+0A0h], xmm0
00000001401E72E2  mov     rax, [rbp+3A0h]
00000001401E72E9  cmp     dword ptr [rax+3790h], 3EAh
00000001401E72F3  jz      loc_1401E7FF3
00000001401E72F9  mov     rax, [rbp+3A0h]
00000001401E7300  mov     eax, [rax+70h]
00000001401E7303  imul    eax, [rbp+3B0h]
00000001401E730A  cdqe
00000001401E730C  shl     rax, 1
00000001401E730F  mov     rcx, rax
00000001401E7312  add     rcx, 0Fh
00000001401E7316  cmp     rcx, rax
00000001401E7319  ja      short loc_1401E7325
00000001401E731B  mov     rcx, 0FFFFFFFFFFFFFF0h
00000001401E7325  and     rcx, 0FFFFFFFFFFFFFFF0h
00000001401E7329  mov     rax, rcx
00000001401E732C  call    sub_1401F89D0
00000001401E7331  sub     rsp, rax
00000001401E7334  lea     rax, [rsp+60h]
00000001401E7339  mov     [rbp+1B0h], rax
00000001401E7340  mov     dword ptr [rbp+0E4h], 0FFFFFFFFh
00000001401E734A  cmp     dword ptr [rbp+2B0h], 0
00000001401E7351  jz      short loc_1401E7386
00000001401E7353  movss   xmm0, dword ptr [rbp+2D4h]
00000001401E735B  comiss  xmm0, cs:dword_1402781F0
00000001401E7362  jb      short loc_1401E7370
00000001401E7364  mov     dword ptr [rbp+14Ch], 1
00000001401E736E  jmp     short loc_1401E737A
00000001401E7370  mov     dword ptr [rbp+14Ch], 0
00000001401E737A  mov     eax, [rbp+14Ch]
00000001401E7380  mov     [rbp+0E4h], eax
00000001401E7386  mov     eax, [rbp+1D0h]
00000001401E738C  shl     eax, 3
00000001401E738F  imul    eax, [rbp+10h]
00000001401E7393  mov     [rbp+0BCh], eax
00000001401E7399  mov     rax, [rbp+3A0h]
00000001401E73A0  cmp     dword ptr [rax+3790h], 3E9h
00000001401E73AA  jnz     loc_1401E749C
00000001401E73B0  imul    eax, [rbp+3B0h], 32h ; '2'
00000001401E73B7  mov     rcx, [rbp+3A0h]
00000001401E73BE  cmp     [rcx+90h], eax
00000001401E73C4  jnz     short loc_1401E73D2
00000001401E73C6  mov     dword ptr [rbp+150h], 1
00000001401E73D0  jmp     short loc_1401E73DC
00000001401E73D2  mov     dword ptr [rbp+150h], 0
00000001401E73DC  mov     rax, [rbp+3A0h]
00000001401E73E3  mov     eax, [rax+3770h]
00000001401E73E9  mov     [rsp+28h], eax
00000001401E73ED  mov     rax, [rbp+3A0h]
00000001401E73F4  mov     eax, [rax+34h]
00000001401E73F7  mov     [rsp+20h], eax
00000001401E73FB  mov     rax, [rbp+3A0h]
00000001401E7402  mov     r9d, [rax+94h]
00000001401E7409  mov     r8d, [rbp+150h]
00000001401E7410  mov     edx, [rbp+30h]
00000001401E7413  mov     ecx, [rbp+0BCh]
00000001401E7419  call    sub_1401F5530
00000001401E741E  mov     rcx, [rbp+3A0h]
00000001401E7425  mov     [rcx+24h], eax
00000001401E7428  mov     rax, [rbp+3A0h]
00000001401E742F  cmp     qword ptr [rax+37B0h], 0
00000001401E7437  jnz     short loc_1401E749A
00000001401E7439  mov     rax, [rbp+3A0h]
00000001401E7440  mov     eax, [rax+24h]
00000001401E7443  mov     ecx, [rbp+0BCh]
00000001401E7449  sub     ecx, eax
00000001401E744B  mov     eax, ecx
00000001401E744D  mov     [rbp+1D4h], eax
00000001401E7453  mov     eax, [rbp+1D4h]
00000001401E7459  neg     eax
00000001401E745B  cvtsi2ss xmm0, eax
00000001401E745F  mulss   xmm0, cs:dword_140278094
00000001401E7467  cvtss2sd xmm0, xmm0
00000001401E746B  movsd   xmm1, cs:qword_1402832F0
00000001401E7473  mulsd   xmm1, xmm0
00000001401E7477  movaps  xmm0, xmm1; X
00000001401E747A  call    exp
00000001401E747F  cvtsd2ss xmm0, xmm0
00000001401E7483  movss   xmm1, cs:dword_1402783F4
00000001401E748B  subss   xmm1, xmm0
00000001401E748F  movaps  xmm0, xmm1
00000001401E7492  movss   dword ptr [rbp+0A0h], xmm0
00000001401E749A  jmp     short loc_1401E74AC
00000001401E749C  mov     rax, [rbp+3A0h]
00000001401E74A3  mov     ecx, [rbp+0BCh]
00000001401E74A9  mov     [rax+24h], ecx
00000001401E74AC  mov     rax, [rbp+3A0h]
00000001401E74B3  cmp     qword ptr [rax+37B0h], 0
00000001401E74BB  jz      loc_1401E77F9
00000001401E74C1  mov     rax, [rbp+3A0h]
00000001401E74C8  cmp     dword ptr [rax+94h], 0
00000001401E74CF  jz      loc_1401E77F9
00000001401E74D5  mov     rax, [rbp+3A0h]
00000001401E74DC  cmp     dword ptr [rax+0B0h], 0
00000001401E74E3  jnz     loc_1401E77F9
00000001401E74E9  xorps   xmm0, xmm0
00000001401E74EC  movss   dword ptr [rbp+0C0h], xmm0
00000001401E74F4  mov     dword ptr [rbp+94h], 11h
00000001401E74FE  mov     eax, 3E80h
00000001401E7503  mov     [rbp+4Ch], ax
00000001401E7507  mov     rax, [rbp+3A0h]
00000001401E750E  cmp     dword ptr [rax+37A0h], 44Dh
00000001401E7518  jnz     short loc_1401E752F
00000001401E751A  mov     dword ptr [rbp+94h], 0Dh
00000001401E7524  mov     eax, 1F40h
00000001401E7529  mov     [rbp+4Ch], ax
00000001401E752D  jmp     short loc_1401E7555
00000001401E752F  mov     rax, [rbp+3A0h]
00000001401E7536  cmp     dword ptr [rax+37A0h], 44Eh
00000001401E7540  jnz     short loc_1401E7555
00000001401E7542  mov     dword ptr [rbp+94h], 0Fh
00000001401E754C  mov     eax, 2EE0h
00000001401E7551  mov     [rbp+4Ch], ax
00000001401E7555  mov     dword ptr [rbp+58h], 0
00000001401E755C  jmp     short loc_1401E7566
00000001401E755E  mov     eax, [rbp+58h]
00000001401E7561  inc     eax
00000001401E7563  mov     [rbp+58h], eax
00000001401E7566  mov     rax, [rbp+3A0h]
00000001401E756D  mov     eax, [rax+70h]
00000001401E7570  cmp     [rbp+58h], eax
00000001401E7573  jge     loc_1401E76E5
00000001401E7579  mov     dword ptr [rbp+8], 0
00000001401E7580  jmp     short loc_1401E758A
00000001401E7582  mov     eax, [rbp+8]
00000001401E7585  inc     eax
00000001401E7587  mov     [rbp+8], eax
00000001401E758A  mov     eax, [rbp+94h]
00000001401E7590  cmp     [rbp+8], eax
00000001401E7593  jge     loc_1401E76E0
00000001401E7599  imul    eax, [rbp+58h], 15h
00000001401E759D  add     eax, [rbp+8]
00000001401E75A0  cdqe
00000001401E75A2  mov     rcx, [rbp+3A0h]
00000001401E75A9  mov     rcx, [rcx+37B0h]
00000001401E75B0  movss   xmm0, dword ptr [rcx+rax*4]
00000001401E75B5  movss   xmm1, cs:dword_140278338
00000001401E75BD  comiss  xmm1, xmm0
00000001401E75C0  jbe     short loc_1401E75E8
00000001401E75C2  imul    eax, [rbp+58h], 15h
00000001401E75C6  add     eax, [rbp+8]
00000001401E75C9  cdqe
00000001401E75CB  mov     rcx, [rbp+3A0h]
00000001401E75D2  mov     rcx, [rcx+37B0h]
00000001401E75D9  movss   xmm0, dword ptr [rcx+rax*4]
00000001401E75DE  movss   dword ptr [rbp+154h], xmm0
00000001401E75E6  jmp     short loc_1401E75F8
00000001401E75E8  movss   xmm0, cs:dword_140278338
00000001401E75F0  movss   dword ptr [rbp+154h], xmm0
00000001401E75F8  movss   xmm0, dword ptr [rbp+154h]
00000001401E7600  comiss  xmm0, cs:dword_140278CB8
00000001401E7607  jbe     short loc_1401E767A
00000001401E7609  imul    eax, [rbp+58h], 15h
00000001401E760D  add     eax, [rbp+8]
00000001401E7610  cdqe
00000001401E7612  mov     rcx, [rbp+3A0h]
00000001401E7619  mov     rcx, [rcx+37B0h]
00000001401E7620  movss   xmm0, dword ptr [rcx+rax*4]
00000001401E7625  movss   xmm1, cs:dword_140278338
00000001401E762D  comiss  xmm1, xmm0
00000001401E7630  jbe     short loc_1401E7658
00000001401E7632  imul    eax, [rbp+58h], 15h
00000001401E7636  add     eax, [rbp+8]
00000001401E7639  cdqe
00000001401E763B  mov     rcx, [rbp+3A0h]
00000001401E7642  mov     rcx, [rcx+37B0h]
00000001401E7649  movss   xmm0, dword ptr [rcx+rax*4]
00000001401E764E  movss   dword ptr [rbp+158h], xmm0
00000001401E7656  jmp     short loc_1401E7668
00000001401E7658  movss   xmm0, cs:dword_140278338
00000001401E7660  movss   dword ptr [rbp+158h], xmm0
00000001401E7668  movss   xmm0, dword ptr [rbp+158h]
00000001401E7670  movss   dword ptr [rbp+15Ch], xmm0
00000001401E7678  jmp     short loc_1401E768A
00000001401E767A  movss   xmm0, cs:dword_140278CB8
00000001401E7682  movss   dword ptr [rbp+15Ch], xmm0
00000001401E768A  movss   xmm0, dword ptr [rbp+15Ch]
00000001401E7692  movss   dword ptr [rbp+90h], xmm0
00000001401E769A  movss   xmm0, dword ptr [rbp+90h]
00000001401E76A2  comiss  xmm0, cs:dword_140278040
00000001401E76A9  jbe     short loc_1401E76C3
00000001401E76AB  movss   xmm0, cs:dword_140278338
00000001401E76B3  mulss   xmm0, dword ptr [rbp+90h]
00000001401E76BB  movss   dword ptr [rbp+90h], xmm0
00000001401E76C3  movss   xmm0, dword ptr [rbp+0C0h]
00000001401E76CB  addss   xmm0, dword ptr [rbp+90h]
00000001401E76D3  movss   dword ptr [rbp+0C0h], xmm0
00000001401E76DB  jmp     loc_1401E7582
00000001401E76E0  jmp     loc_1401E755E
00000001401E76E5  cvtsi2ss xmm0, dword ptr [rbp+94h]
00000001401E76ED  movss   xmm1, dword ptr [rbp+0C0h]
00000001401E76F5  divss   xmm1, xmm0
00000001401E76F9  movaps  xmm0, xmm1
00000001401E76FC  mov     rax, [rbp+3A0h]
00000001401E7703  cvtsi2ss xmm1, dword ptr [rax+70h]
00000001401E7708  mulss   xmm0, xmm1
00000001401E770C  movss   dword ptr [rbp+0C4h], xmm0
00000001401E7714  movss   xmm0, dword ptr [rbp+0C4h]
00000001401E771C  addss   xmm0, cs:dword_140278254
00000001401E7724  movss   dword ptr [rbp+0C4h], xmm0
00000001401E772C  movsx   eax, word ptr [rbp+4Ch]
00000001401E7730  cvtsi2ss xmm0, eax
00000001401E7734  mulss   xmm0, dword ptr [rbp+0C4h]
00000001401E773C  cvttss2si eax, xmm0
00000001401E7740  mov     [rbp+80h], eax
00000001401E7746  mov     rax, [rbp+3A0h]
00000001401E774D  imul    eax, [rax+24h], -2
00000001401E7751  cdq
00000001401E7752  mov     ecx, 3
00000001401E7757  idiv    ecx
00000001401E7759  cmp     [rbp+80h], eax
00000001401E775F  jle     short loc_1401E776F
00000001401E7761  mov     eax, [rbp+80h]
00000001401E7767  mov     [rbp+160h], eax
00000001401E776D  jmp     short loc_1401E7788
00000001401E776F  mov     rax, [rbp+3A0h]
00000001401E7776  imul    eax, [rax+24h], -2
00000001401E777A  cdq
00000001401E777B  mov     ecx, 3
00000001401E7780  idiv    ecx
00000001401E7782  mov     [rbp+160h], eax
00000001401E7788  mov     eax, [rbp+160h]
00000001401E778E  mov     [rbp+80h], eax
00000001401E7794  mov     rax, [rbp+3A0h]
00000001401E779B  cmp     dword ptr [rax+37A0h], 450h
00000001401E77A5  jz      short loc_1401E77BA
00000001401E77A7  mov     rax, [rbp+3A0h]
00000001401E77AE  cmp     dword ptr [rax+37A0h], 451h
00000001401E77B8  jnz     short loc_1401E77DF
00000001401E77BA  imul    eax, [rbp+80h], 3
00000001401E77C1  cdq
00000001401E77C2  mov     ecx, 5
00000001401E77C7  idiv    ecx
00000001401E77C9  mov     rcx, [rbp+3A0h]
00000001401E77D0  add     eax, [rcx+24h]
00000001401E77D3  mov     rcx, [rbp+3A0h]
00000001401E77DA  mov     [rcx+24h], eax
00000001401E77DD  jmp     short loc_1401E77F9
00000001401E77DF  mov     rax, [rbp+3A0h]
00000001401E77E6  mov     eax, [rax+24h]
00000001401E77E9  add     eax, [rbp+80h]
00000001401E77EF  mov     rcx, [rbp+3A0h]
00000001401E77F6  mov     [rcx+24h], eax
00000001401E77F9  imul    eax, [rbp+3B0h], 3E8h
00000001401E7803  cdq
00000001401E7804  mov     rcx, [rbp+3A0h]
00000001401E780B  idiv    dword ptr [rcx+90h]
00000001401E7811  mov     rcx, [rbp+3A0h]
00000001401E7818  mov     [rcx+20h], eax
00000001401E781B  mov     rax, [rbp+3A0h]
00000001401E7822  mov     rcx, [rbp+3A0h]
00000001401E7829  mov     ecx, [rcx+70h]
00000001401E782C  mov     [rax+8], ecx
00000001401E782F  mov     rax, [rbp+3A0h]
00000001401E7836  mov     rcx, [rbp+3A0h]
00000001401E783D  mov     ecx, [rcx+3770h]
00000001401E7843  mov     [rax+0Ch], ecx
00000001401E7846  cmp     dword ptr [rbp+30h], 44Dh
00000001401E784D  jnz     short loc_1401E785F
00000001401E784F  mov     rax, [rbp+3A0h]
00000001401E7856  mov     dword ptr [rax+1Ch], 1F40h
00000001401E785D  jmp     short loc_1401E7886
00000001401E785F  cmp     dword ptr [rbp+30h], 44Eh
00000001401E7866  jnz     short loc_1401E7878
00000001401E7868  mov     rax, [rbp+3A0h]
00000001401E786F  mov     dword ptr [rax+1Ch], 2EE0h
00000001401E7876  jmp     short loc_1401E7886
00000001401E7878  mov     rax, [rbp+3A0h]
00000001401E787F  mov     dword ptr [rax+1Ch], 3E80h
00000001401E7886  mov     rax, [rbp+3A0h]
00000001401E788D  cmp     dword ptr [rax+3790h], 3E9h
00000001401E7897  jnz     short loc_1401E78A9
00000001401E7899  mov     rax, [rbp+3A0h]
00000001401E78A0  mov     dword ptr [rax+18h], 3E80h
00000001401E78A7  jmp     short loc_1401E78B7
00000001401E78A9  mov     rax, [rbp+3A0h]
00000001401E78B0  mov     dword ptr [rax+18h], 1F40h
00000001401E78B7  mov     rax, [rbp+3A0h]
00000001401E78BE  mov     dword ptr [rax+14h], 3E80h
00000001401E78C5  mov     rax, [rbp+3A0h]
00000001401E78CC  cmp     dword ptr [rax+3790h], 3E8h
00000001401E78D6  jnz     loc_1401E79B0
00000001401E78DC  mov     eax, [rbp+164h]
00000001401E78E2  mov     [rbp+98h], eax
00000001401E78E8  cmp     dword ptr [rbp+10h], 32h ; '2'
00000001401E78EC  jle     short loc_1401E7904
00000001401E78EE  mov     eax, [rbp+98h]
00000001401E78F4  shl     eax, 1
00000001401E78F6  cdq
00000001401E78F7  mov     ecx, 3
00000001401E78FC  idiv    ecx
00000001401E78FE  mov     [rbp+98h], eax
00000001401E7904  cmp     dword ptr [rbp+98h], 1F40h
00000001401E790E  jge     short loc_1401E795A
00000001401E7910  mov     rax, [rbp+3A0h]
00000001401E7917  mov     dword ptr [rax+14h], 2EE0h
00000001401E791E  mov     rax, [rbp+3A0h]
00000001401E7925  cmp     dword ptr [rax+1Ch], 2EE0h
00000001401E792C  jle     short loc_1401E793A
00000001401E792E  mov     dword ptr [rbp+168h], 2EE0h
00000001401E7938  jmp     short loc_1401E794A
00000001401E793A  mov     rax, [rbp+3A0h]
00000001401E7941  mov     eax, [rax+1Ch]
00000001401E7944  mov     [rbp+168h], eax
00000001401E794A  mov     rax, [rbp+3A0h]
00000001401E7951  mov     ecx, [rbp+168h]
00000001401E7957  mov     [rax+1Ch], ecx
00000001401E795A  cmp     dword ptr [rbp+98h], 1B58h
00000001401E7964  jge     short loc_1401E79B0
00000001401E7966  mov     rax, [rbp+3A0h]
00000001401E796D  mov     dword ptr [rax+14h], 1F40h
00000001401E7974  mov     rax, [rbp+3A0h]
00000001401E797B  cmp     dword ptr [rax+1Ch], 1F40h
00000001401E7982  jle     short loc_1401E7990
00000001401E7984  mov     dword ptr [rbp+16Ch], 1F40h
00000001401E798E  jmp     short loc_1401E79A0
00000001401E7990  mov     rax, [rbp+3A0h]
00000001401E7997  mov     eax, [rax+1Ch]
00000001401E799A  mov     [rbp+16Ch], eax
00000001401E79A0  mov     rax, [rbp+3A0h]
00000001401E79A7  mov     ecx, [rbp+16Ch]
00000001401E79AD  mov     [rax+1Ch], ecx
00000001401E79B0  mov     rax, [rbp+3A0h]
00000001401E79B7  cmp     dword ptr [rax+94h], 0
00000001401E79BE  jnz     short loc_1401E79CC
00000001401E79C0  mov     dword ptr [rbp+170h], 1
00000001401E79CA  jmp     short loc_1401E79D6
00000001401E79CC  mov     dword ptr [rbp+170h], 0
00000001401E79D6  mov     rax, [rbp+3A0h]
00000001401E79DD  mov     ecx, [rbp+170h]
00000001401E79E3  mov     [rax+3Ch], ecx
00000001401E79E6  mov     eax, [rbp+4]
00000001401E79E9  lea     eax, ds:0FFFFFFFFFFFFFFF8h[rax*8]
00000001401E79F0  mov     rcx, [rbp+3A0h]
00000001401E79F7  mov     [rcx+40h], eax
00000001401E79FA  cmp     dword ptr [rbp+18h], 0
00000001401E79FE  jz      short loc_1401E7A52
00000001401E7A00  cmp     dword ptr [rbp+0Ch], 2
00000001401E7A04  jl      short loc_1401E7A52
00000001401E7A06  mov     eax, [rbp+0Ch]
00000001401E7A09  lea     eax, ds:1[rax*8]
00000001401E7A10  mov     rcx, [rbp+3A0h]
00000001401E7A17  mov     ecx, [rcx+40h]
00000001401E7A1A  sub     ecx, eax
00000001401E7A1C  mov     eax, ecx
00000001401E7A1E  mov     rcx, [rbp+3A0h]
00000001401E7A25  mov     [rcx+40h], eax
00000001401E7A28  mov     rax, [rbp+3A0h]
00000001401E7A2F  cmp     dword ptr [rax+3790h], 3E9h
00000001401E7A39  jnz     short loc_1401E7A52
00000001401E7A3B  mov     rax, [rbp+3A0h]
00000001401E7A42  mov     eax, [rax+40h]
00000001401E7A45  sub     eax, 14h
00000001401E7A48  mov     rcx, [rbp+3A0h]
00000001401E7A4F  mov     [rcx+40h], eax
00000001401E7A52  mov     rax, [rbp+3A0h]
00000001401E7A59  cmp     dword ptr [rax+3Ch], 0
00000001401E7A5D  jz      loc_1401E7AED
00000001401E7A63  mov     rax, [rbp+3A0h]
00000001401E7A6A  cmp     dword ptr [rax+3790h], 3E9h
00000001401E7A74  jnz     short loc_1401E7AE8
00000001401E7A76  mov     rax, [rbp+3A0h]
00000001401E7A7D  mov     eax, [rax+24h]
00000001401E7A80  imul    eax, [rbp+3B0h]
00000001401E7A87  cdq
00000001401E7A88  mov     rcx, [rbp+3A0h]
00000001401E7A8F  idiv    dword ptr [rcx+90h]
00000001401E7A95  mov     rcx, [rbp+3A0h]
00000001401E7A9C  cmp     [rcx+40h], eax
00000001401E7A9F  jge     short loc_1401E7AB3
00000001401E7AA1  mov     rax, [rbp+3A0h]
00000001401E7AA8  mov     eax, [rax+40h]
00000001401E7AAB  mov     [rbp+174h], eax
00000001401E7AB1  jmp     short loc_1401E7AD8
00000001401E7AB3  mov     rax, [rbp+3A0h]
00000001401E7ABA  mov     eax, [rax+24h]
00000001401E7ABD  imul    eax, [rbp+3B0h]
00000001401E7AC4  cdq
00000001401E7AC5  mov     rcx, [rbp+3A0h]
00000001401E7ACC  idiv    dword ptr [rcx+90h]
00000001401E7AD2  mov     [rbp+174h], eax
00000001401E7AD8  mov     rax, [rbp+3A0h]
00000001401E7ADF  mov     ecx, [rbp+174h]
00000001401E7AE5  mov     [rax+40h], ecx
00000001401E7AE8  jmp     loc_1401E7BB8
00000001401E7AED  mov     rax, [rbp+3A0h]
00000001401E7AF4  cmp     dword ptr [rax+3790h], 3E9h
00000001401E7AFE  jnz     loc_1401E7BB8
00000001401E7B04  imul    eax, [rbp+3B0h], 32h ; '2'
00000001401E7B0B  mov     rcx, [rbp+3A0h]
00000001401E7B12  cmp     [rcx+90h], eax
00000001401E7B18  jnz     short loc_1401E7B26
00000001401E7B1A  mov     dword ptr [rbp+178h], 1
00000001401E7B24  jmp     short loc_1401E7B30
00000001401E7B26  mov     dword ptr [rbp+178h], 0
00000001401E7B30  mov     rax, [rbp+3A0h]
00000001401E7B37  mov     rcx, [rbp+3A0h]
00000001401E7B3E  mov     eax, [rax+40h]
00000001401E7B41  imul    eax, [rcx+90h]
00000001401E7B48  cdq
00000001401E7B49  idiv    dword ptr [rbp+3B0h]
00000001401E7B4F  mov     rcx, [rbp+3A0h]
00000001401E7B56  mov     ecx, [rcx+3770h]
00000001401E7B5C  mov     [rsp+28h], ecx
00000001401E7B60  mov     rcx, [rbp+3A0h]
00000001401E7B67  mov     ecx, [rcx+34h]
00000001401E7B6A  mov     [rsp+20h], ecx
00000001401E7B6E  mov     rcx, [rbp+3A0h]
00000001401E7B75  mov     r9d, [rcx+94h]
00000001401E7B7C  mov     r8d, [rbp+178h]
00000001401E7B83  mov     edx, [rbp+30h]
00000001401E7B86  mov     ecx, eax
00000001401E7B88  call    sub_1401F5530
00000001401E7B8D  mov     [rbp+1D8h], eax
00000001401E7B93  mov     eax, [rbp+1D8h]
00000001401E7B99  imul    eax, [rbp+3B0h]
00000001401E7BA0  cdq
00000001401E7BA1  mov     rcx, [rbp+3A0h]
00000001401E7BA8  idiv    dword ptr [rcx+90h]
00000001401E7BAE  mov     rcx, [rbp+3A0h]
00000001401E7BB5  mov     [rcx+40h], eax
00000001401E7BB8  cmp     dword ptr [rbp+9Ch], 0
00000001401E7BBF  jz      loc_1401E7DAD
00000001401E7BC5  mov     dword ptr [rbp+1E0h], 0
00000001401E7BCF  mov     rax, [rbp+3A0h]
00000001401E7BD6  mov     rcx, [rbp+3A0h]
00000001401E7BDD  mov     ecx, [rcx+74h]
00000001401E7BE0  mov     eax, [rax+0ACh]
00000001401E7BE6  sub     eax, ecx
00000001401E7BE8  mov     [rbp+1DCh], eax
00000001401E7BEE  mov     rcx, [rbp+3A0h]
00000001401E7BF5  mov     eax, [rcx+90h]
00000001401E7BFB  cdq
00000001401E7BFC  mov     ecx, 190h
00000001401E7C01  idiv    ecx
00000001401E7C03  mov     ecx, [rbp+1DCh]
00000001401E7C09  sub     ecx, eax
00000001401E7C0B  mov     eax, ecx
00000001401E7C0D  mov     rcx, [rbp+3A0h]
00000001401E7C14  mov     ecx, [rcx+70h]
00000001401E7C17  imul    ecx, eax
00000001401E7C1A  mov     eax, ecx
00000001401E7C1C  mov     [rbp+0C8h], eax
00000001401E7C22  mov     rax, [rbp+3A0h]
00000001401E7C29  mov     eax, [rax+90h]
00000001401E7C2F  cdq
00000001401E7C30  mov     ecx, 190h
00000001401E7C35  idiv    ecx
00000001401E7C37  movsxd  rcx, dword ptr [rbp+0C8h]
00000001401E7C3E  mov     rdx, [rbp+3A0h]
00000001401E7C45  lea     rcx, [rdx+rcx*4+37CCh]
00000001401E7C4D  movsxd  rdx, dword ptr [rbp+0C8h]
00000001401E7C54  mov     r8, [rbp+3A0h]
00000001401E7C5B  lea     rdx, [r8+rdx*4+37CCh]
00000001401E7C63  mov     [rbp+268h], rdx
00000001401E7C6A  mov     r8, [rbp+3A0h]
00000001401E7C71  mov     r8d, [r8+90h]
00000001401E7C78  mov     [rsp+40h], r8d
00000001401E7C7D  mov     r8, [rbp+0A8h]
00000001401E7C84  mov     r8, [r8+48h]
00000001401E7C88  mov     [rsp+38h], r8
00000001401E7C8D  mov     r8, [rbp+3A0h]
00000001401E7C94  mov     r8d, [r8+70h]
00000001401E7C98  mov     [rsp+30h], r8d
00000001401E7C9D  mov     [rsp+28h], eax
00000001401E7CA1  mov     rax, [rbp+0A8h]
00000001401E7CA8  mov     eax, [rax+4]
00000001401E7CAB  mov     [rsp+20h], eax
00000001401E7CAF  movss   xmm3, cs:dword_1402783F4
00000001401E7CB7  xorps   xmm2, xmm2
00000001401E7CBA  mov     rdx, rcx
00000001401E7CBD  mov     rax, [rbp+268h]
00000001401E7CC4  mov     rcx, rax
00000001401E7CC7  call    sub_1401F48B0
00000001401E7CCC  movsxd  rax, dword ptr [rbp+0C8h]
00000001401E7CD3  shl     rax, 2
00000001401E7CD7  mov     rcx, [rbp+3A0h]
00000001401E7CDE  add     rcx, 37CCh
00000001401E7CE5  mov     r8, rax
00000001401E7CE8  xor     edx, edx
00000001401E7CEA  call    1401FCD30h
00000001401E7CEF  mov     dword ptr [rbp+8], 0
00000001401E7CF6  jmp     short loc_1401E7D00
00000001401E7CF8  mov     eax, [rbp+8]
00000001401E7CFB  inc     eax
00000001401E7CFD  mov     [rbp+8], eax
00000001401E7D00  mov     rax, [rbp+3A0h]
00000001401E7D07  mov     rcx, [rbp+3A0h]
00000001401E7D0E  mov     eax, [rax+0ACh]
00000001401E7D14  imul    eax, [rcx+70h]
00000001401E7D18  cmp     [rbp+8], eax
00000001401E7D1B  jge     short loc_1401E7D47
00000001401E7D1D  movsxd  rax, dword ptr [rbp+8]
00000001401E7D21  mov     rcx, [rbp+3A0h]
00000001401E7D28  movss   xmm0, dword ptr [rcx+rax*4+37CCh]
00000001401E7D31  call    sub_1401AD3E0
00000001401E7D36  movsxd  rcx, dword ptr [rbp+8]
00000001401E7D3A  mov     rdx, [rbp+1B0h]
00000001401E7D41  mov     [rdx+rcx*2], ax
00000001401E7D45  jmp     short loc_1401E7CF8
00000001401E7D47  mov     rax, [rbp+3A0h]
00000001401E7D4E  add     rax, 8
00000001401E7D52  mov     ecx, [rbp+0E4h]
00000001401E7D58  mov     [rsp+38h], ecx
00000001401E7D5C  mov     ecx, [rbp+9Ch]
00000001401E7D62  mov     [rsp+30h], ecx
00000001401E7D66  lea     rcx, [rbp+1E0h]
00000001401E7D6D  mov     [rsp+28h], rcx
00000001401E7D72  mov     qword ptr [rsp+20h], 0
00000001401E7D7B  mov     rcx, [rbp+3A0h]
00000001401E7D82  mov     r9d, [rcx+0ACh]
00000001401E7D89  mov     r8, [rbp+1B0h]
00000001401E7D90  mov     rdx, rax
00000001401E7D93  mov     rcx, [rbp+1A8h]
00000001401E7D9A  call    sub_1401CABA0
00000001401E7D9F  mov     rax, [rbp+3A0h]
00000001401E7DA6  mov     dword ptr [rax+48h], 0
00000001401E7DAD  mov     dword ptr [rbp+8], 0
00000001401E7DB4  jmp     short loc_1401E7DBE
00000001401E7DB6  mov     eax, [rbp+8]
00000001401E7DB9  inc     eax
00000001401E7DBB  mov     [rbp+8], eax
00000001401E7DBE  mov     rax, [rbp+3A0h]
00000001401E7DC5  mov     ecx, [rbp+3B0h]
00000001401E7DCB  imul    ecx, [rax+70h]
00000001401E7DCF  mov     eax, ecx
00000001401E7DD1  cmp     [rbp+8], eax
00000001401E7DD4  jge     short loc_1401E7E0A
00000001401E7DD6  mov     rax, [rbp+3A0h]
00000001401E7DDD  mov     ecx, [rbp+14h]
00000001401E7DE0  imul    ecx, [rax+70h]
00000001401E7DE4  mov     eax, ecx
00000001401E7DE6  add     eax, [rbp+8]
00000001401E7DE9  cdqe
00000001401E7DEB  mov     rcx, [rbp+40h]
00000001401E7DEF  movss   xmm0, dword ptr [rcx+rax*4]
00000001401E7DF4  call    sub_1401AD3E0
00000001401E7DF9  movsxd  rcx, dword ptr [rbp+8]
00000001401E7DFD  mov     rdx, [rbp+1B0h]
00000001401E7E04  mov     [rdx+rcx*2], ax
00000001401E7E08  jmp     short loc_1401E7DB6
00000001401E7E0A  mov     rax, [rbp+3A0h]
00000001401E7E11  add     rax, 8
00000001401E7E15  mov     ecx, [rbp+0E4h]
00000001401E7E1B  mov     [rsp+38h], ecx
00000001401E7E1F  mov     dword ptr [rsp+30h], 0
00000001401E7E27  lea     rcx, [rbp+1E4h]
00000001401E7E2E  mov     [rsp+28h], rcx
00000001401E7E33  lea     rcx, [rbp+228h]
00000001401E7E3A  mov     [rsp+20h], rcx
00000001401E7E3F  mov     r9d, [rbp+3B0h]
00000001401E7E46  mov     r8, [rbp+1B0h]
00000001401E7E4D  mov     rdx, rax
00000001401E7E50  mov     rcx, [rbp+1A8h]
00000001401E7E57  call    sub_1401CABA0
00000001401E7E5C  mov     [rbp+0], eax
00000001401E7E5F  cmp     dword ptr [rbp+0], 0
00000001401E7E63  jz      short loc_1401E7E6F
00000001401E7E65  mov     eax, 0FFFFFFFDh
00000001401E7E6A  jmp     loc_1401E933B
00000001401E7E6F  mov     rax, [rbp+3A0h]
00000001401E7E76  cmp     dword ptr [rax+3790h], 3E8h
00000001401E7E80  jnz     short loc_1401E7ECB
00000001401E7E82  mov     rax, [rbp+3A0h]
00000001401E7E89  cmp     dword ptr [rax+50h], 1F40h
00000001401E7E90  jnz     short loc_1401E7E9B
00000001401E7E92  mov     dword ptr [rbp+30h], 44Dh
00000001401E7E99  jmp     short loc_1401E7ECB
00000001401E7E9B  mov     rax, [rbp+3A0h]
00000001401E7EA2  cmp     dword ptr [rax+50h], 2EE0h
00000001401E7EA9  jnz     short loc_1401E7EB4
00000001401E7EAB  mov     dword ptr [rbp+30h], 44Eh
00000001401E7EB2  jmp     short loc_1401E7ECB
00000001401E7EB4  mov     rax, [rbp+3A0h]
00000001401E7EBB  cmp     dword ptr [rax+50h], 3E80h
00000001401E7EC2  jnz     short loc_1401E7ECB
00000001401E7EC4  mov     dword ptr [rbp+30h], 44Fh
00000001401E7ECB  mov     rax, [rbp+3A0h]
00000001401E7ED2  cmp     dword ptr [rax+60h], 0
00000001401E7ED6  jz      short loc_1401E7EF4
00000001401E7ED8  mov     rax, [rbp+3A0h]
00000001401E7EDF  cmp     dword ptr [rax+46D8h], 0
00000001401E7EE6  jnz     short loc_1401E7EF4
00000001401E7EE8  mov     dword ptr [rbp+17Ch], 1
00000001401E7EF2  jmp     short loc_1401E7EFE
00000001401E7EF4  mov     dword ptr [rbp+17Ch], 0
00000001401E7EFE  mov     rax, [rbp+3A0h]
00000001401E7F05  mov     ecx, [rbp+17Ch]
00000001401E7F0B  mov     [rax+48h], ecx
00000001401E7F0E  cmp     dword ptr [rbp+1E4h], 0
00000001401E7F15  jnz     short loc_1401E7F7F
00000001401E7F17  mov     rax, [rbp+3A0h]
00000001401E7F1E  mov     dword ptr [rax+46DCh], 0
00000001401E7F28  mov     rax, [rbp+3A0h]
00000001401E7F2F  mov     eax, [rax+90h]
00000001401E7F35  cdq
00000001401E7F36  idiv    dword ptr [rbp+3B0h]
00000001401E7F3C  mov     rcx, [rbp+3A0h]
00000001401E7F43  mov     r9d, [rcx+3770h]
00000001401E7F4A  mov     r8d, [rbp+30h]
00000001401E7F4E  mov     edx, eax
00000001401E7F50  mov     rax, [rbp+3A0h]
00000001401E7F57  mov     ecx, [rax+3790h]
00000001401E7F5D  call    sub_1401F3E60
00000001401E7F62  mov     ecx, 1
00000001401E7F67  imul    rcx, -1
00000001401E7F6B  mov     rdx, [rbp+3B8h]
00000001401E7F72  mov     [rdx+rcx], al
00000001401E7F75  mov     eax, 1
00000001401E7F7A  jmp     loc_1401E933B
00000001401E7F7F  mov     rax, [rbp+3A0h]
00000001401E7F86  cmp     dword ptr [rax+48h], 0
00000001401E7F8A  jz      short loc_1401E7FF3
00000001401E7F8C  mov     rax, [rbp+3A0h]
00000001401E7F93  mov     r9d, [rax+3770h]
00000001401E7F9A  mov     r8d, [rbp+10h]
00000001401E7F9E  mov     rax, [rbp+3A0h]
00000001401E7FA5  mov     edx, [rax+0A0h]
00000001401E7FAB  mov     ecx, [rbp+4]
00000001401E7FAE  call    sub_1401F5E00
00000001401E7FB3  mov     [rbp+0Ch], eax
00000001401E7FB6  cmp     dword ptr [rbp+0Ch], 0
00000001401E7FBA  jz      short loc_1401E7FC8
00000001401E7FBC  mov     dword ptr [rbp+180h], 1
00000001401E7FC6  jmp     short loc_1401E7FD2
00000001401E7FC8  mov     dword ptr [rbp+180h], 0
00000001401E7FD2  mov     eax, [rbp+180h]
00000001401E7FD8  mov     [rbp+18h], eax
00000001401E7FDB  mov     dword ptr [rbp+48h], 0
00000001401E7FE2  mov     rax, [rbp+3A0h]
00000001401E7FE9  mov     dword ptr [rax+37A8h], 1
00000001401E7FF3  mov     dword ptr [rbp+88h], 15h
00000001401E7FFD  mov     eax, [rbp+30h]
00000001401E8000  mov     [rbp+84h], eax
00000001401E8006  cmp     dword ptr [rbp+84h], 44Dh
00000001401E8010  jz      short loc_1401E8044
00000001401E8012  cmp     dword ptr [rbp+84h], 44Dh
00000001401E801C  jle     short loc_1401E8072
00000001401E801E  cmp     dword ptr [rbp+84h], 44Fh
00000001401E8028  jle     short loc_1401E8050
00000001401E802A  cmp     dword ptr [rbp+84h], 450h
00000001401E8034  jz      short loc_1401E805C
00000001401E8036  cmp     dword ptr [rbp+84h], 451h
00000001401E8040  jz      short loc_1401E8068
00000001401E8042  jmp     short loc_1401E8072
00000001401E8044  mov     dword ptr [rbp+88h], 0Dh
00000001401E804E  jmp     short loc_1401E8072
00000001401E8050  mov     dword ptr [rbp+88h], 11h
00000001401E805A  jmp     short loc_1401E8072
00000001401E805C  mov     dword ptr [rbp+88h], 13h
00000001401E8066  jmp     short loc_1401E8072
00000001401E8068  mov     dword ptr [rbp+88h], 15h
00000001401E8072  mov     r8d, [rbp+88h]
00000001401E8079  mov     edx, 271Ch
00000001401E807E  mov     rcx, [rbp+20h]
00000001401E8082  call    sub_140199190
00000001401E8087  mov     rax, [rbp+3A0h]
00000001401E808E  mov     r8d, [rax+3770h]
00000001401E8095  mov     edx, 2718h
00000001401E809A  mov     rcx, [rbp+20h]
00000001401E809E  call    sub_140199190
00000001401E80A3  mov     r8d, 0FFFFFFFFh
00000001401E80A9  mov     edx, 0FA2h
00000001401E80AE  mov     rcx, [rbp+20h]
00000001401E80B2  call    sub_140199190
00000001401E80B7  mov     rax, [rbp+3A0h]
00000001401E80BE  cmp     dword ptr [rax+3790h], 3E8h
00000001401E80C8  jz      loc_1401E81DC
00000001401E80CE  movss   xmm0, cs:dword_1402785B8
00000001401E80D6  movss   dword ptr [rbp+184h], xmm0
00000001401E80DE  xor     r8d, r8d
00000001401E80E1  mov     edx, 0FA6h
00000001401E80E6  mov     rcx, [rbp+20h]
00000001401E80EA  call    sub_140199190
00000001401E80EF  mov     rax, [rbp+3A0h]
00000001401E80F6  cmp     dword ptr [rax+4Ch], 0
00000001401E80FA  jz      short loc_1401E8107
00000001401E80FC  xorps   xmm0, xmm0
00000001401E80FF  movss   dword ptr [rbp+184h], xmm0
00000001401E8107  cvttss2si eax, dword ptr [rbp+184h]
00000001401E810F  mov     r8d, eax
00000001401E8112  mov     edx, 2712h
00000001401E8117  mov     rcx, [rbp+20h]
00000001401E811B  call    sub_140199190
00000001401E8120  mov     rax, [rbp+3A0h]
00000001401E8127  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8131  jnz     short loc_1401E8180
00000001401E8133  mov     rax, [rbp+3A0h]
00000001401E813A  cmp     dword ptr [rax+94h], 0
00000001401E8141  jz      short loc_1401E817E
00000001401E8143  mov     rax, [rbp+3A0h]
00000001401E814A  mov     rcx, [rbp+3A0h]
00000001401E8151  mov     ecx, [rcx+24h]
00000001401E8154  mov     eax, [rax+0A0h]
00000001401E815A  sub     eax, ecx
00000001401E815C  mov     r8d, eax
00000001401E815F  mov     edx, 0FA2h
00000001401E8164  mov     rcx, [rbp+20h]
00000001401E8168  call    sub_140199190
00000001401E816D  xor     r8d, r8d
00000001401E8170  mov     edx, 0FB4h
00000001401E8175  mov     rcx, [rbp+20h]
00000001401E8179  call    sub_140199190
00000001401E817E  jmp     short loc_1401E81DC
00000001401E8180  mov     rax, [rbp+3A0h]
00000001401E8187  cmp     dword ptr [rax+94h], 0
00000001401E818E  jz      short loc_1401E81DC
00000001401E8190  mov     r8d, 1
00000001401E8196  mov     edx, 0FA6h
00000001401E819B  mov     rcx, [rbp+20h]
00000001401E819F  call    sub_140199190
00000001401E81A4  mov     rax, [rbp+3A0h]
00000001401E81AB  mov     r8d, [rax+98h]
00000001401E81B2  mov     edx, 0FB4h
00000001401E81B7  mov     rcx, [rbp+20h]
00000001401E81BB  call    sub_140199190
00000001401E81C0  mov     rax, [rbp+3A0h]
00000001401E81C7  mov     r8d, [rax+0A0h]
00000001401E81CE  mov     edx, 0FA2h
00000001401E81D3  mov     rcx, [rbp+20h]
00000001401E81D7  call    sub_140199190
00000001401E81DC  mov     rax, [rbp+3A0h]
00000001401E81E3  mov     rcx, [rbp+3A0h]
00000001401E81EA  mov     eax, [rax+70h]
00000001401E81ED  imul    eax, [rcx+90h]
00000001401E81F4  cdq
00000001401E81F5  mov     ecx, 190h
00000001401E81FA  idiv    ecx
00000001401E81FC  cdqe
00000001401E81FE  shl     rax, 2
00000001401E8202  mov     rcx, rax
00000001401E8205  add     rcx, 0Fh
00000001401E8209  cmp     rcx, rax
00000001401E820C  ja      short loc_1401E8218
00000001401E820E  mov     rcx, 0FFFFFFFFFFFFFF0h
00000001401E8218  and     rcx, 0FFFFFFFFFFFFFFF0h
00000001401E821C  mov     rax, rcx
00000001401E821F  call    sub_1401F89D0
00000001401E8224  sub     rsp, rax
00000001401E8227  lea     rax, [rsp+60h]
00000001401E822C  mov     [rbp+218h], rax
00000001401E8233  mov     rax, [rbp+3A0h]
00000001401E823A  cmp     dword ptr [rax+3790h], 3E8h
00000001401E8244  jz      loc_1401E8379
00000001401E824A  mov     rax, [rbp+3A0h]
00000001401E8251  mov     rcx, [rbp+3A0h]
00000001401E8258  mov     ecx, [rcx+3794h]
00000001401E825E  cmp     [rax+3790h], ecx
00000001401E8264  jz      loc_1401E8379
00000001401E826A  mov     rax, [rbp+3A0h]
00000001401E8271  cmp     dword ptr [rax+3794h], 0
00000001401E8278  jle     loc_1401E8379
00000001401E827E  mov     rax, [rbp+3A0h]
00000001401E8285  mov     rcx, [rbp+3A0h]
00000001401E828C  mov     eax, [rax+70h]
00000001401E828F  imul    eax, [rcx+90h]
00000001401E8296  cdq
00000001401E8297  mov     ecx, 190h
00000001401E829C  idiv    ecx
00000001401E829E  cdqe
00000001401E82A0  mov     [rbp+270h], rax
00000001401E82A7  mov     rcx, [rbp+3A0h]
00000001401E82AE  mov     edx, [rbp+14h]
00000001401E82B1  mov     ecx, [rcx+0ACh]
00000001401E82B7  sub     ecx, edx
00000001401E82B9  mov     rdx, [rbp+3A0h]
00000001401E82C0  mov     eax, [rdx+90h]
00000001401E82C6  cdq
00000001401E82C7  mov     r8d, 190h
00000001401E82CD  idiv    r8d
00000001401E82D0  sub     ecx, eax
00000001401E82D2  mov     eax, ecx
00000001401E82D4  mov     rcx, [rbp+3A0h]
00000001401E82DB  imul    eax, [rcx+70h]
00000001401E82DF  cdqe
00000001401E82E1  mov     rcx, [rbp+3A0h]
00000001401E82E8  lea     rax, [rcx+rax*4+37CCh]
00000001401E82F0  mov     rcx, [rbp+218h]
00000001401E82F7  sub     rcx, rax
00000001401E82FA  mov     rax, rcx
00000001401E82FD  sar     rax, 2
00000001401E8301  imul    rax, 0
00000001401E8305  mov     rcx, [rbp+270h]
00000001401E830C  lea     rax, [rax+rcx*4]
00000001401E8310  mov     [rbp+278h], rax
00000001401E8317  mov     rcx, [rbp+3A0h]
00000001401E831E  mov     edx, [rbp+14h]
00000001401E8321  mov     ecx, [rcx+0ACh]
00000001401E8327  sub     ecx, edx
00000001401E8329  mov     rdx, [rbp+3A0h]
00000001401E8330  mov     eax, [rdx+90h]
00000001401E8336  cdq
00000001401E8337  mov     r8d, 190h
00000001401E833D  idiv    r8d
00000001401E8340  sub     ecx, eax
00000001401E8342  mov     eax, ecx
00000001401E8344  mov     rcx, [rbp+3A0h]
00000001401E834B  imul    eax, [rcx+70h]
00000001401E834F  cdqe
00000001401E8351  mov     rcx, [rbp+3A0h]
00000001401E8358  lea     rax, [rcx+rax*4+37CCh]
00000001401E8360  mov     rcx, [rbp+278h]
00000001401E8367  mov     r8, rcx
00000001401E836A  mov     rdx, rax
00000001401E836D  mov     rcx, [rbp+218h]
00000001401E8374  call    1401FC920h
00000001401E8379  mov     eax, [rbp+14h]
00000001401E837C  mov     ecx, [rbp+3B0h]
00000001401E8382  add     ecx, eax
00000001401E8384  mov     eax, ecx
00000001401E8386  mov     rcx, [rbp+3A0h]
00000001401E838D  mov     ecx, [rcx+0ACh]
00000001401E8393  sub     ecx, eax
00000001401E8395  mov     eax, ecx
00000001401E8397  mov     rcx, [rbp+3A0h]
00000001401E839E  mov     ecx, [rcx+70h]
00000001401E83A1  imul    ecx, eax
00000001401E83A4  mov     eax, ecx
00000001401E83A6  test    eax, eax
00000001401E83A8  jle     loc_1401E854B
00000001401E83AE  mov     rax, [rbp+3A0h]
00000001401E83B5  mov     ecx, [rbp+3B0h]
00000001401E83BB  mov     eax, [rax+0ACh]
00000001401E83C1  sub     eax, ecx
00000001401E83C3  sub     eax, [rbp+14h]
00000001401E83C6  mov     rcx, [rbp+3A0h]
00000001401E83CD  mov     ecx, [rcx+70h]
00000001401E83D0  imul    ecx, eax
00000001401E83D3  mov     eax, ecx
00000001401E83D5  cdqe
00000001401E83D7  mov     rcx, [rbp+3A0h]
00000001401E83DE  add     rcx, 37CCh
00000001401E83E5  mov     rdx, [rbp+3A0h]
00000001401E83EC  mov     edx, [rdx+70h]
00000001401E83EF  imul    edx, [rbp+3B0h]
00000001401E83F6  movsxd  rdx, edx
00000001401E83F9  mov     r8, [rbp+3A0h]
00000001401E8400  lea     rdx, [r8+rdx*4+37CCh]
00000001401E8408  sub     rcx, rdx
00000001401E840B  sar     rcx, 2
00000001401E840F  imul    rcx, 0
00000001401E8413  lea     rax, [rcx+rax*4]
00000001401E8417  mov     rcx, [rbp+3A0h]
00000001401E841E  mov     ecx, [rcx+70h]
00000001401E8421  imul    ecx, [rbp+3B0h]
00000001401E8428  movsxd  rcx, ecx
00000001401E842B  mov     rdx, [rbp+3A0h]
00000001401E8432  lea     rcx, [rdx+rcx*4+37CCh]
00000001401E843A  mov     rdx, [rbp+3A0h]
00000001401E8441  add     rdx, 37CCh
00000001401E8448  mov     [rbp+280h], rdx
00000001401E844F  mov     r8, rax
00000001401E8452  mov     rdx, rcx
00000001401E8455  mov     rax, [rbp+280h]
00000001401E845C  mov     rcx, rax
00000001401E845F  call    1401FC920h
00000001401E8464  mov     eax, [rbp+14h]
00000001401E8467  mov     ecx, [rbp+3B0h]
00000001401E846D  add     ecx, eax
00000001401E846F  mov     eax, ecx
00000001401E8471  mov     rcx, [rbp+3A0h]
00000001401E8478  imul    eax, [rcx+70h]
00000001401E847C  cdqe
00000001401E847E  mov     rcx, [rbp+3A0h]
00000001401E8485  mov     edx, [rbp+3B0h]
00000001401E848B  mov     ecx, [rcx+0ACh]
00000001401E8491  sub     ecx, edx
00000001401E8493  sub     ecx, [rbp+14h]
00000001401E8496  mov     rdx, [rbp+3A0h]
00000001401E849D  mov     edx, [rdx+70h]
00000001401E84A0  imul    edx, ecx
00000001401E84A3  mov     ecx, edx
00000001401E84A5  movsxd  rcx, ecx
00000001401E84A8  mov     rdx, [rbp+3A0h]
00000001401E84AF  lea     rcx, [rdx+rcx*4+37CCh]
00000001401E84B7  mov     edx, 4
00000001401E84BC  imul    rdx, 0
00000001401E84C0  mov     r8, [rbp+40h]
00000001401E84C4  add     r8, rdx
00000001401E84C7  mov     rdx, r8
00000001401E84CA  sub     rcx, rdx
00000001401E84CD  sar     rcx, 2
00000001401E84D1  imul    rcx, 0
00000001401E84D5  lea     rax, [rcx+rax*4]
00000001401E84D9  mov     ecx, 4
00000001401E84DE  imul    rcx, 0
00000001401E84E2  mov     rdx, [rbp+40h]
00000001401E84E6  add     rdx, rcx
00000001401E84E9  mov     rcx, rdx
00000001401E84EC  mov     rdx, [rbp+3A0h]
00000001401E84F3  mov     r8d, [rbp+3B0h]
00000001401E84FA  mov     edx, [rdx+0ACh]
00000001401E8500  sub     edx, r8d
00000001401E8503  sub     edx, [rbp+14h]
00000001401E8506  mov     r8, [rbp+3A0h]
00000001401E850D  mov     r8d, [r8+70h]
00000001401E8511  imul    r8d, edx
00000001401E8515  mov     edx, r8d
00000001401E8518  movsxd  rdx, edx
00000001401E851B  mov     r8, [rbp+3A0h]
00000001401E8522  lea     rdx, [r8+rdx*4+37CCh]
00000001401E852A  mov     [rbp+288h], rdx
00000001401E8531  mov     r8, rax
00000001401E8534  mov     rdx, rcx
00000001401E8537  mov     rax, [rbp+288h]
00000001401E853E  mov     rcx, rax
00000001401E8541  call    1401FC920h
00000001401E8546  jmp     loc_1401E8611
00000001401E854B  mov     rax, [rbp+3A0h]
00000001401E8552  mov     rcx, [rbp+3A0h]
00000001401E8559  mov     eax, [rax+0ACh]
00000001401E855F  imul    eax, [rcx+70h]
00000001401E8563  cdqe
00000001401E8565  mov     rcx, [rbp+3A0h]
00000001401E856C  add     rcx, 37CCh
00000001401E8573  mov     edx, [rbp+14h]
00000001401E8576  mov     r8d, [rbp+3B0h]
00000001401E857D  add     r8d, edx
00000001401E8580  mov     edx, r8d
00000001401E8583  mov     r8, [rbp+3A0h]
00000001401E858A  sub     edx, [r8+0ACh]
00000001401E8591  mov     r8, [rbp+3A0h]
00000001401E8598  imul    edx, [r8+70h]
00000001401E859D  movsxd  rdx, edx
00000001401E85A0  mov     r8, [rbp+40h]
00000001401E85A4  lea     rdx, [r8+rdx*4]
00000001401E85A8  sub     rcx, rdx
00000001401E85AB  sar     rcx, 2
00000001401E85AF  imul    rcx, 0
00000001401E85B3  lea     rax, [rcx+rax*4]
00000001401E85B7  mov     ecx, [rbp+14h]
00000001401E85BA  mov     edx, [rbp+3B0h]
00000001401E85C0  add     edx, ecx
00000001401E85C2  mov     ecx, edx
00000001401E85C4  mov     rdx, [rbp+3A0h]
00000001401E85CB  sub     ecx, [rdx+0ACh]
00000001401E85D1  mov     rdx, [rbp+3A0h]
00000001401E85D8  imul    ecx, [rdx+70h]
00000001401E85DC  movsxd  rcx, ecx
00000001401E85DF  mov     rdx, [rbp+40h]
00000001401E85E3  lea     rcx, [rdx+rcx*4]
00000001401E85E7  mov     rdx, [rbp+3A0h]
00000001401E85EE  add     rdx, 37CCh
00000001401E85F5  mov     [rbp+290h], rdx
00000001401E85FC  mov     r8, rax
00000001401E85FF  mov     rdx, rcx
00000001401E8602  mov     rax, [rbp+290h]
00000001401E8609  mov     rcx, rax
00000001401E860C  call    1401FC920h
00000001401E8611  mov     rax, [rbp+3A0h]
00000001401E8618  movss   xmm0, cs:dword_1402783F4
00000001401E8620  comiss  xmm0, dword ptr [rax+377Ch]
00000001401E8627  ja      short loc_1401E863A
00000001401E8629  movss   xmm0, cs:dword_1402783F4
00000001401E8631  comiss  xmm0, dword ptr [rbp+0A0h]
00000001401E8638  jbe     short loc_1401E86A5
00000001401E863A  mov     rax, [rbp+3A0h]
00000001401E8641  mov     eax, [rax+90h]
00000001401E8647  mov     [rsp+40h], eax
00000001401E864B  mov     rax, [rbp+0A8h]
00000001401E8652  mov     rax, [rax+48h]
00000001401E8656  mov     [rsp+38h], rax
00000001401E865B  mov     rax, [rbp+3A0h]
00000001401E8662  mov     eax, [rax+70h]
00000001401E8665  mov     [rsp+30h], eax
00000001401E8669  mov     eax, [rbp+3B0h]
00000001401E866F  mov     [rsp+28h], eax
00000001401E8673  mov     rax, [rbp+0A8h]
00000001401E867A  mov     eax, [rax+4]
00000001401E867D  mov     [rsp+20h], eax
00000001401E8681  movss   xmm3, dword ptr [rbp+0A0h]
00000001401E8689  mov     rax, [rbp+3A0h]
00000001401E8690  movss   xmm2, dword ptr [rax+377Ch]
00000001401E8698  mov     rdx, [rbp+40h]
00000001401E869C  mov     rcx, [rbp+40h]
00000001401E86A0  call    sub_1401F48B0
00000001401E86A5  mov     rax, [rbp+3A0h]
00000001401E86AC  movss   xmm0, dword ptr [rbp+0A0h]
00000001401E86B4  movss   dword ptr [rax+377Ch], xmm0
00000001401E86BC  mov     rax, [rbp+3A0h]
00000001401E86C3  cmp     dword ptr [rax+3790h], 3E9h
00000001401E86CD  jnz     short loc_1401E86DF
00000001401E86CF  mov     rax, [rbp+3A0h]
00000001401E86D6  cmp     dword ptr [rax+3770h], 1
00000001401E86DD  jnz     short loc_1401E873E
00000001401E86DF  cmp     dword ptr [rbp+2Ch], 7D00h
00000001401E86E6  jle     short loc_1401E86F8
00000001401E86E8  mov     rax, [rbp+3A0h]
00000001401E86EF  mov     dword ptr [rax+5Ch], 4000h
00000001401E86F6  jmp     short loc_1401E873E
00000001401E86F8  cmp     dword ptr [rbp+2Ch], 3E80h
00000001401E86FF  jge     short loc_1401E8711
00000001401E8701  mov     rax, [rbp+3A0h]
00000001401E8708  mov     dword ptr [rax+5Ch], 0
00000001401E870F  jmp     short loc_1401E873E
00000001401E8711  mov     eax, 7D00h
00000001401E8716  sub     eax, [rbp+2Ch]
00000001401E8719  imul    eax, 800h
00000001401E871F  mov     ecx, [rbp+2Ch]
00000001401E8722  sub     ecx, 36B0h
00000001401E8728  cdq
00000001401E8729  idiv    ecx
00000001401E872B  mov     ecx, 4000h
00000001401E8730  sub     ecx, eax
00000001401E8732  mov     eax, ecx
00000001401E8734  mov     rcx, [rbp+3A0h]
00000001401E873B  mov     [rcx+5Ch], eax
00000001401E873E  mov     rax, [rbp+3A0h]
00000001401E8745  cmp     qword ptr [rax+37B0h], 0
00000001401E874D  jnz     loc_1401E8868
00000001401E8753  mov     rax, [rbp+3A0h]
00000001401E875A  cmp     dword ptr [rax+70h], 2
00000001401E875E  jnz     loc_1401E8868
00000001401E8764  mov     rax, [rbp+3A0h]
00000001401E876B  movsx   eax, word ptr [rax+3774h]
00000001401E8772  cmp     eax, 4000h
00000001401E8777  jl      short loc_1401E878D
00000001401E8779  mov     rax, [rbp+3A0h]
00000001401E8780  cmp     dword ptr [rax+5Ch], 4000h
00000001401E8787  jge     loc_1401E8868
00000001401E878D  mov     rax, [rbp+3A0h]
00000001401E8794  movsx   eax, word ptr [rax+3774h]
00000001401E879B  cvtsi2ss xmm0, eax
00000001401E879F  movss   dword ptr [rbp+0D4h], xmm0
00000001401E87A7  mov     rax, [rbp+3A0h]
00000001401E87AE  cvtsi2ss xmm0, dword ptr [rax+5Ch]
00000001401E87B3  movss   dword ptr [rbp+0D0h], xmm0
00000001401E87BB  movss   xmm0, dword ptr [rbp+0D4h]
00000001401E87C3  mulss   xmm0, cs:dword_14027806C
00000001401E87CB  movss   dword ptr [rbp+0D4h], xmm0
00000001401E87D3  movss   xmm0, dword ptr [rbp+0D0h]
00000001401E87DB  mulss   xmm0, cs:dword_14027806C
00000001401E87E3  movss   dword ptr [rbp+0D0h], xmm0
00000001401E87EB  mov     rax, [rbp+3A0h]
00000001401E87F2  mov     eax, [rax+90h]
00000001401E87F8  mov     [rsp+40h], eax
00000001401E87FC  mov     rax, [rbp+0A8h]
00000001401E8803  mov     rax, [rax+48h]
00000001401E8807  mov     [rsp+38h], rax
00000001401E880C  mov     rax, [rbp+3A0h]
00000001401E8813  mov     eax, [rax+70h]
00000001401E8816  mov     [rsp+30h], eax
00000001401E881A  mov     eax, [rbp+3B0h]
00000001401E8820  mov     [rsp+28h], eax
00000001401E8824  mov     rax, [rbp+0A8h]
00000001401E882B  mov     eax, [rax+4]
00000001401E882E  mov     [rsp+20h], eax
00000001401E8832  movss   xmm3, dword ptr [rbp+0D0h]
00000001401E883A  movss   xmm2, dword ptr [rbp+0D4h]
00000001401E8842  mov     rdx, [rbp+40h]
00000001401E8846  mov     rcx, [rbp+40h]
00000001401E884A  call    sub_1401F4640
00000001401E884F  mov     rax, [rbp+3A0h]
00000001401E8856  mov     rcx, [rbp+3A0h]
00000001401E885D  movzx   ecx, word ptr [rcx+5Ch]
00000001401E8861  mov     [rax+3774h], cx
00000001401E8868  mov     rax, [rbp+3A0h]
00000001401E886F  cmp     dword ptr [rax+3790h], 3EAh
00000001401E8879  jz      loc_1401E8A44
00000001401E887F  mov     rax, [rbp+3A0h]
00000001401E8886  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8890  jnz     short loc_1401E889E
00000001401E8892  mov     dword ptr [rbp+188h], 1
00000001401E889C  jmp     short loc_1401E88A8
00000001401E889E  mov     dword ptr [rbp+188h], 0
00000001401E88A8  lea     rcx, [rbp+228h]
00000001401E88AF  call    sub_14019A0A0
00000001401E88B4  imul    ecx, [rbp+188h], 14h
00000001401E88BB  lea     eax, [rax+rcx+11h]
00000001401E88BF  mov     ecx, [rbp+4]
00000001401E88C2  lea     ecx, ds:0FFFFFFFFFFFFFFF8h[rcx*8]
00000001401E88C9  cmp     eax, ecx
00000001401E88CB  jg      loc_1401E8A44
00000001401E88D1  mov     rax, [rbp+3A0h]
00000001401E88D8  cmp     dword ptr [rax+3790h], 3E9h
00000001401E88E2  jnz     short loc_1401E88F9
00000001401E88E4  mov     r8d, 0Ch
00000001401E88EA  mov     edx, [rbp+18h]
00000001401E88ED  lea     rcx, [rbp+228h]
00000001401E88F4  call    sub_14019A450
00000001401E88F9  cmp     dword ptr [rbp+18h], 0
00000001401E88FD  jz      loc_1401E8A42
00000001401E8903  mov     r8d, 1
00000001401E8909  mov     edx, [rbp+48h]
00000001401E890C  lea     rcx, [rbp+228h]
00000001401E8913  call    sub_14019A450
00000001401E8918  mov     rax, [rbp+3A0h]
00000001401E891F  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8929  jnz     short loc_1401E895A
00000001401E892B  mov     eax, [rbp+4]
00000001401E892E  dec     eax
00000001401E8930  mov     [rbp+1E8h], eax
00000001401E8936  lea     rcx, [rbp+228h]
00000001401E893D  call    sub_14019A0A0
00000001401E8942  add     eax, 12h
00000001401E8945  sar     eax, 3
00000001401E8948  mov     ecx, [rbp+1E8h]
00000001401E894E  sub     ecx, eax
00000001401E8950  mov     eax, ecx
00000001401E8952  mov     [rbp+0D8h], eax
00000001401E8958  jmp     short loc_1401E8987
00000001401E895A  mov     eax, [rbp+4]
00000001401E895D  dec     eax
00000001401E895F  mov     [rbp+1ECh], eax
00000001401E8965  lea     rcx, [rbp+228h]
00000001401E896C  call    sub_14019A0A0
00000001401E8971  add     eax, 7
00000001401E8974  sar     eax, 3
00000001401E8977  mov     ecx, [rbp+1ECh]
00000001401E897D  sub     ecx, eax
00000001401E897F  mov     eax, ecx
00000001401E8981  mov     [rbp+0D8h], eax
00000001401E8987  mov     eax, [rbp+0Ch]
00000001401E898A  cmp     [rbp+0D8h], eax
00000001401E8990  jge     short loc_1401E89A0
00000001401E8992  mov     eax, [rbp+0D8h]
00000001401E8998  mov     [rbp+18Ch], eax
00000001401E899E  jmp     short loc_1401E89A9
00000001401E89A0  mov     eax, [rbp+0Ch]
00000001401E89A3  mov     [rbp+18Ch], eax
00000001401E89A9  mov     eax, [rbp+18Ch]
00000001401E89AF  mov     [rbp+0Ch], eax
00000001401E89B2  cmp     dword ptr [rbp+0Ch], 2
00000001401E89B6  jge     short loc_1401E89C4
00000001401E89B8  mov     dword ptr [rbp+190h], 2
00000001401E89C2  jmp     short loc_1401E89CD
00000001401E89C4  mov     eax, [rbp+0Ch]
00000001401E89C7  mov     [rbp+190h], eax
00000001401E89CD  cmp     dword ptr [rbp+190h], 101h
00000001401E89D7  jle     short loc_1401E89E5
00000001401E89D9  mov     dword ptr [rbp+198h], 101h
00000001401E89E3  jmp     short loc_1401E8A0C
00000001401E89E5  cmp     dword ptr [rbp+0Ch], 2
00000001401E89E9  jge     short loc_1401E89F7
00000001401E89EB  mov     dword ptr [rbp+194h], 2
00000001401E89F5  jmp     short loc_1401E8A00
00000001401E89F7  mov     eax, [rbp+0Ch]
00000001401E89FA  mov     [rbp+194h], eax
00000001401E8A00  mov     eax, [rbp+194h]
00000001401E8A06  mov     [rbp+198h], eax
00000001401E8A0C  mov     eax, [rbp+198h]
00000001401E8A12  mov     [rbp+0Ch], eax
00000001401E8A15  mov     rax, [rbp+3A0h]
00000001401E8A1C  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8A26  jnz     short loc_1401E8A42
00000001401E8A28  mov     eax, [rbp+0Ch]
00000001401E8A2B  sub     eax, 2
00000001401E8A2E  mov     r8d, 100h
00000001401E8A34  mov     edx, eax
00000001401E8A36  lea     rcx, [rbp+228h]
00000001401E8A3D  call    sub_14019A5E0
00000001401E8A42  jmp     short loc_1401E8A4B
00000001401E8A44  mov     dword ptr [rbp+18h], 0
00000001401E8A4B  cmp     dword ptr [rbp+18h], 0
00000001401E8A4F  jnz     short loc_1401E8A69
00000001401E8A51  mov     rax, [rbp+3A0h]
00000001401E8A58  mov     dword ptr [rax+37A8h], 0
00000001401E8A62  mov     dword ptr [rbp+0Ch], 0
00000001401E8A69  mov     rax, [rbp+3A0h]
00000001401E8A70  cmp     dword ptr [rax+3790h], 3EAh
00000001401E8A7A  jz      short loc_1401E8A86
00000001401E8A7C  mov     dword ptr [rbp+19Ch], 11h
00000001401E8A86  mov     rax, [rbp+3A0h]
00000001401E8A8D  cmp     dword ptr [rax+3790h], 3E8h
00000001401E8A97  jnz     short loc_1401E8AC2
00000001401E8A99  lea     rcx, [rbp+228h]
00000001401E8AA0  call    sub_14019A0A0
00000001401E8AA5  add     eax, 7
00000001401E8AA8  sar     eax, 3
00000001401E8AAB  mov     [rbp+0], eax
00000001401E8AAE  lea     rcx, [rbp+228h]
00000001401E8AB5  call    sub_14019A9C0
00000001401E8ABA  mov     eax, [rbp+0]
00000001401E8ABD  mov     [rbp+34h], eax
00000001401E8AC0  jmp     short loc_1401E8ADC
00000001401E8AC2  mov     eax, [rbp+4]
00000001401E8AC5  dec     eax
00000001401E8AC7  sub     eax, [rbp+0Ch]
00000001401E8ACA  mov     [rbp+34h], eax
00000001401E8ACD  mov     edx, [rbp+34h]
00000001401E8AD0  lea     rcx, [rbp+228h]
00000001401E8AD7  call    sub_14019A8F0
00000001401E8ADC  cmp     dword ptr [rbp+18h], 0
00000001401E8AE0  jnz     short loc_1401E8AF5
00000001401E8AE2  mov     rax, [rbp+3A0h]
00000001401E8AE9  cmp     dword ptr [rax+3790h], 3E8h
00000001401E8AF3  jz      short loc_1401E8B27
00000001401E8AF5  lea     rax, [rbp+2B0h]
00000001401E8AFC  lea     rcx, [rbp+2B0h]
00000001401E8B03  sub     rax, rcx
00000001401E8B06  sar     rax, 6
00000001401E8B0A  imul    rax, 40h ; '@'
00000001401E8B0E  lea     rax, [rbp+rax+2B0h]
00000001401E8B16  mov     r8, rax
00000001401E8B19  mov     edx, 2726h
00000001401E8B1E  mov     rcx, [rbp+20h]
00000001401E8B22  call    sub_140199190
00000001401E8B27  mov     rax, [rbp+3A0h]
00000001401E8B2E  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8B38  jnz     short loc_1401E8B88
00000001401E8B3A  mov     rax, [rbp+3A0h]
00000001401E8B41  mov     eax, [rax+64h]
00000001401E8B44  mov     [rbp+1B8h], eax
00000001401E8B4A  mov     rax, [rbp+3A0h]
00000001401E8B51  mov     eax, [rax+68h]
00000001401E8B54  mov     [rbp+1BCh], eax
00000001401E8B5A  lea     rax, [rbp+1B8h]
00000001401E8B61  lea     rcx, [rbp+1B8h]
00000001401E8B68  sub     rax, rcx
00000001401E8B6B  sar     rax, 3
00000001401E8B6F  lea     rax, [rbp+rax*8+1B8h]
00000001401E8B77  mov     r8, rax
00000001401E8B7A  mov     edx, 272Ch
00000001401E8B7F  mov     rcx, [rbp+20h]
00000001401E8B83  call    sub_140199190
00000001401E8B88  cmp     dword ptr [rbp+18h], 0
00000001401E8B8C  jz      loc_1401E8C75
00000001401E8B92  cmp     dword ptr [rbp+48h], 0
00000001401E8B96  jz      loc_1401E8C75
00000001401E8B9C  xor     r8d, r8d
00000001401E8B9F  mov     edx, 271Ah
00000001401E8BA4  mov     rcx, [rbp+20h]
00000001401E8BA8  call    sub_140199190
00000001401E8BAD  xor     r8d, r8d
00000001401E8BB0  mov     edx, 0FA6h
00000001401E8BB5  mov     rcx, [rbp+20h]
00000001401E8BB9  call    sub_140199190
00000001401E8BBE  mov     r8d, 0FFFFFFFFh
00000001401E8BC4  mov     edx, 0FA2h
00000001401E8BC9  mov     rcx, [rbp+20h]
00000001401E8BCD  call    sub_140199190
00000001401E8BD2  movsxd  rax, dword ptr [rbp+34h]
00000001401E8BD6  mov     rcx, [rbp+3B8h]
00000001401E8BDD  add     rcx, rax
00000001401E8BE0  mov     rax, rcx
00000001401E8BE3  mov     [rbp+298h], rax
00000001401E8BEA  mov     rcx, [rbp+3A0h]
00000001401E8BF1  mov     eax, [rcx+90h]
00000001401E8BF7  cdq
00000001401E8BF8  mov     ecx, 0C8h
00000001401E8BFD  idiv    ecx
00000001401E8BFF  mov     qword ptr [rsp+28h], 0
00000001401E8C08  mov     ecx, [rbp+0Ch]
00000001401E8C0B  mov     [rsp+20h], ecx
00000001401E8C0F  mov     rcx, [rbp+298h]
00000001401E8C16  mov     r9, rcx
00000001401E8C19  mov     r8d, eax
00000001401E8C1C  mov     rdx, [rbp+40h]
00000001401E8C20  mov     rcx, [rbp+20h]
00000001401E8C24  call    sub_14019B2E0
00000001401E8C29  mov     [rbp+1F0h], eax
00000001401E8C2F  cmp     dword ptr [rbp+1F0h], 0
00000001401E8C36  jge     short loc_1401E8C42
00000001401E8C38  mov     eax, 0FFFFFFFDh
00000001401E8C3D  jmp     loc_1401E933B
00000001401E8C42  lea     rax, [rbp+5Ch]
00000001401E8C46  lea     rcx, [rbp+5Ch]
00000001401E8C4A  sub     rax, rcx
00000001401E8C4D  sar     rax, 2
00000001401E8C51  lea     rax, [rbp+rax*4+5Ch]
00000001401E8C56  mov     r8, rax
00000001401E8C59  mov     edx, 0FBFh
00000001401E8C5E  mov     rcx, [rbp+20h]
00000001401E8C62  call    sub_140199190
00000001401E8C67  mov     edx, 0FBCh
00000001401E8C6C  mov     rcx, [rbp+20h]
00000001401E8C70  call    sub_140199190
00000001401E8C75  mov     r8d, [rbp+19Ch]
00000001401E8C7C  mov     edx, 271Ah
00000001401E8C81  mov     rcx, [rbp+20h]
00000001401E8C85  call    sub_140199190
00000001401E8C8A  mov     rax, [rbp+3A0h]
00000001401E8C91  cmp     dword ptr [rax+3790h], 3E8h
00000001401E8C9B  jz      loc_1401E8EAE
00000001401E8CA1  mov     rax, [rbp+3A0h]
00000001401E8CA8  mov     rcx, [rbp+3A0h]
00000001401E8CAF  mov     ecx, [rcx+3794h]
00000001401E8CB5  cmp     [rax+3790h], ecx
00000001401E8CBB  jz      short loc_1401E8D2C
00000001401E8CBD  mov     rax, [rbp+3A0h]
00000001401E8CC4  cmp     dword ptr [rax+3794h], 0
00000001401E8CCB  jle     short loc_1401E8D2C
00000001401E8CCD  mov     edx, 0FBCh
00000001401E8CD2  mov     rcx, [rbp+20h]
00000001401E8CD6  call    sub_140199190
00000001401E8CDB  mov     rax, [rbp+3A0h]
00000001401E8CE2  mov     eax, [rax+90h]
00000001401E8CE8  cdq
00000001401E8CE9  mov     ecx, 190h
00000001401E8CEE  idiv    ecx
00000001401E8CF0  mov     qword ptr [rsp+28h], 0
00000001401E8CF9  mov     dword ptr [rsp+20h], 2
00000001401E8D01  lea     r9, [rbp+1FCh]
00000001401E8D08  mov     r8d, eax
00000001401E8D0B  mov     rdx, [rbp+218h]
00000001401E8D12  mov     rcx, [rbp+20h]
00000001401E8D16  call    sub_14019B2E0
00000001401E8D1B  xor     r8d, r8d
00000001401E8D1E  mov     edx, 2712h
00000001401E8D23  mov     rcx, [rbp+20h]
00000001401E8D27  call    sub_140199190
00000001401E8D2C  lea     rcx, [rbp+228h]
00000001401E8D33  call    sub_14019A0A0
00000001401E8D38  mov     ecx, [rbp+34h]
00000001401E8D3B  shl     ecx, 3
00000001401E8D3E  cmp     eax, ecx
00000001401E8D40  jg      loc_1401E8EAE
00000001401E8D46  cmp     dword ptr [rbp+18h], 0
00000001401E8D4A  jz      short loc_1401E8D9F
00000001401E8D4C  cmp     dword ptr [rbp+48h], 0
00000001401E8D50  jz      short loc_1401E8D9F
00000001401E8D52  mov     rax, [rbp+3A0h]
00000001401E8D59  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8D63  jnz     short loc_1401E8D9F
00000001401E8D65  mov     rax, [rbp+3A0h]
00000001401E8D6C  cmp     dword ptr [rax+94h], 0
00000001401E8D73  jz      short loc_1401E8D9F
00000001401E8D75  mov     rax, [rbp+3A0h]
00000001401E8D7C  mov     rcx, [rbp+3A0h]
00000001401E8D83  mov     ecx, [rcx+24h]
00000001401E8D86  mov     eax, [rax+0A0h]
00000001401E8D8C  sub     eax, ecx
00000001401E8D8E  mov     r8d, eax
00000001401E8D91  mov     edx, 0FA2h
00000001401E8D96  mov     rcx, [rbp+20h]
00000001401E8D9A  call    sub_140199190
00000001401E8D9F  mov     rax, [rbp+3A0h]
00000001401E8DA6  mov     r8d, [rax+94h]
00000001401E8DAD  mov     edx, 0FA6h
00000001401E8DB2  mov     rcx, [rbp+20h]
00000001401E8DB6  call    sub_140199190
00000001401E8DBB  lea     rax, [rbp+228h]
00000001401E8DC2  mov     [rsp+28h], rax
00000001401E8DC7  mov     eax, [rbp+34h]
00000001401E8DCA  mov     [rsp+20h], eax
00000001401E8DCE  xor     r9d, r9d
00000001401E8DD1  mov     r8d, [rbp+3B0h]
00000001401E8DD8  mov     rdx, [rbp+40h]
00000001401E8DDC  mov     rcx, [rbp+20h]
00000001401E8DE0  call    sub_14019B2E0
00000001401E8DE5  mov     [rbp+0], eax
00000001401E8DE8  cmp     dword ptr [rbp+0], 0
00000001401E8DEC  jge     short loc_1401E8DF8
00000001401E8DEE  mov     eax, 0FFFFFFFDh
00000001401E8DF3  jmp     loc_1401E933B
00000001401E8DF8  cmp     dword ptr [rbp+18h], 0
00000001401E8DFC  jz      loc_1401E8EAE
00000001401E8E02  cmp     dword ptr [rbp+48h], 0
00000001401E8E06  jz      loc_1401E8EAE
00000001401E8E0C  mov     rax, [rbp+3A0h]
00000001401E8E13  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8E1D  jnz     loc_1401E8EAE
00000001401E8E23  mov     rax, [rbp+3A0h]
00000001401E8E2A  cmp     dword ptr [rax+94h], 0
00000001401E8E31  jz      short loc_1401E8EAE
00000001401E8E33  movsxd  rax, dword ptr [rbp+0Ch]
00000001401E8E37  movsxd  rcx, dword ptr [rbp+0]
00000001401E8E3B  mov     rdx, [rbp+3B8h]
00000001401E8E42  add     rdx, rcx
00000001401E8E45  mov     rcx, rdx
00000001401E8E48  movsxd  rdx, dword ptr [rbp+34h]
00000001401E8E4C  mov     r8, [rbp+3B8h]
00000001401E8E53  add     r8, rdx
00000001401E8E56  mov     rdx, r8
00000001401E8E59  sub     rcx, rdx
00000001401E8E5C  imul    rcx, 0
00000001401E8E60  add     rax, rcx
00000001401E8E63  movsxd  rcx, dword ptr [rbp+34h]
00000001401E8E67  mov     rdx, [rbp+3B8h]
00000001401E8E6E  add     rdx, rcx
00000001401E8E71  mov     rcx, rdx
00000001401E8E74  movsxd  rdx, dword ptr [rbp+0]
00000001401E8E78  mov     r8, [rbp+3B8h]
00000001401E8E7F  add     r8, rdx
00000001401E8E82  mov     rdx, r8
00000001401E8E85  mov     [rbp+2A0h], rdx
00000001401E8E8C  mov     r8, rax
00000001401E8E8F  mov     rdx, rcx
00000001401E8E92  mov     rax, [rbp+2A0h]
00000001401E8E99  mov     rcx, rax
00000001401E8E9C  call    1401FC920h
00000001401E8EA1  mov     eax, [rbp+0Ch]
00000001401E8EA4  mov     ecx, [rbp+34h]
00000001401E8EA7  add     ecx, eax
00000001401E8EA9  mov     eax, ecx
00000001401E8EAB  mov     [rbp+34h], eax
00000001401E8EAE  cmp     dword ptr [rbp+18h], 0
00000001401E8EB2  jz      loc_1401E906E
00000001401E8EB8  cmp     dword ptr [rbp+48h], 0
00000001401E8EBC  jnz     loc_1401E906E
00000001401E8EC2  mov     rax, [rbp+3A0h]
00000001401E8EC9  mov     eax, [rax+90h]
00000001401E8ECF  cdq
00000001401E8ED0  mov     ecx, 0C8h
00000001401E8ED5  idiv    ecx
00000001401E8ED7  mov     [rbp+0DCh], eax
00000001401E8EDD  mov     rax, [rbp+3A0h]
00000001401E8EE4  mov     eax, [rax+90h]
00000001401E8EEA  cdq
00000001401E8EEB  mov     ecx, 190h
00000001401E8EF0  idiv    ecx
00000001401E8EF2  mov     [rbp+1A0h], eax
00000001401E8EF8  mov     edx, 0FBCh
00000001401E8EFD  mov     rcx, [rbp+20h]
00000001401E8F01  call    sub_140199190
00000001401E8F06  xor     r8d, r8d
00000001401E8F09  mov     edx, 271Ah
00000001401E8F0E  mov     rcx, [rbp+20h]
00000001401E8F12  call    sub_140199190
00000001401E8F17  xor     r8d, r8d
00000001401E8F1A  mov     edx, 2712h
00000001401E8F1F  mov     rcx, [rbp+20h]
00000001401E8F23  call    sub_140199190
00000001401E8F28  xor     r8d, r8d
00000001401E8F2B  mov     edx, 0FA6h
00000001401E8F30  mov     rcx, [rbp+20h]
00000001401E8F34  call    sub_140199190
00000001401E8F39  mov     r8d, 0FFFFFFFFh
00000001401E8F3F  mov     edx, 0FA2h
00000001401E8F44  mov     rcx, [rbp+20h]
00000001401E8F48  call    sub_140199190
00000001401E8F4D  mov     rax, [rbp+3A0h]
00000001401E8F54  cmp     dword ptr [rax+3790h], 3E9h
00000001401E8F5E  jnz     short loc_1401E8F75
00000001401E8F60  mov     eax, [rbp+0]
00000001401E8F63  mov     [rbp+34h], eax
00000001401E8F66  mov     edx, [rbp+34h]
00000001401E8F69  lea     rcx, [rbp+228h]
00000001401E8F70  call    sub_14019A8F0
00000001401E8F75  mov     eax, [rbp+0DCh]
00000001401E8F7B  mov     ecx, [rbp+3B0h]
00000001401E8F81  sub     ecx, eax
00000001401E8F83  mov     eax, ecx
00000001401E8F85  sub     eax, [rbp+1A0h]
00000001401E8F8B  mov     rcx, [rbp+3A0h]
00000001401E8F92  mov     ecx, [rcx+70h]
00000001401E8F95  imul    ecx, eax
00000001401E8F98  mov     eax, ecx
00000001401E8F9A  cdqe
00000001401E8F9C  mov     rcx, [rbp+40h]
00000001401E8FA0  lea     rax, [rcx+rax*4]
00000001401E8FA4  mov     qword ptr [rsp+28h], 0
00000001401E8FAD  mov     dword ptr [rsp+20h], 2
00000001401E8FB5  lea     r9, [rbp+1F8h]
00000001401E8FBC  mov     r8d, [rbp+1A0h]
00000001401E8FC3  mov     rdx, rax
00000001401E8FC6  mov     rcx, [rbp+20h]
00000001401E8FCA  call    sub_14019B2E0
00000001401E8FCF  movsxd  rax, dword ptr [rbp+34h]
00000001401E8FD3  mov     rcx, [rbp+3B8h]
00000001401E8FDA  add     rcx, rax
00000001401E8FDD  mov     rax, rcx
00000001401E8FE0  mov     ecx, [rbp+0DCh]
00000001401E8FE6  mov     edx, [rbp+3B0h]
00000001401E8FEC  sub     edx, ecx
00000001401E8FEE  mov     ecx, edx
00000001401E8FF0  mov     rdx, [rbp+3A0h]
00000001401E8FF7  mov     edx, [rdx+70h]
00000001401E8FFA  imul    edx, ecx
00000001401E8FFD  mov     ecx, edx
00000001401E8FFF  movsxd  rcx, ecx
00000001401E9002  mov     rdx, [rbp+40h]
00000001401E9006  lea     rcx, [rdx+rcx*4]
00000001401E900A  mov     qword ptr [rsp+28h], 0
00000001401E9013  mov     edx, [rbp+0Ch]
00000001401E9016  mov     [rsp+20h], edx
00000001401E901A  mov     r9, rax
00000001401E901D  mov     r8d, [rbp+0DCh]
00000001401E9024  mov     rdx, rcx
00000001401E9027  mov     rcx, [rbp+20h]
00000001401E902B  call    sub_14019B2E0
00000001401E9030  mov     [rbp+1F4h], eax
00000001401E9036  cmp     dword ptr [rbp+1F4h], 0
00000001401E903D  jge     short loc_1401E9049
00000001401E903F  mov     eax, 0FFFFFFFDh
00000001401E9044  jmp     loc_1401E933B
00000001401E9049  lea     rax, [rbp+5Ch]
00000001401E904D  lea     rcx, [rbp+5Ch]
00000001401E9051  sub     rax, rcx
00000001401E9054  sar     rax, 2
00000001401E9058  lea     rax, [rbp+rax*4+5Ch]
00000001401E905D  mov     r8, rax
00000001401E9060  mov     edx, 0FBFh
00000001401E9065  mov     rcx, [rbp+20h]
00000001401E9069  call    sub_140199190
00000001401E906E  mov     rax, [rbp+3B8h]
00000001401E9075  dec     rax
00000001401E9078  mov     [rbp+3B8h], rax
00000001401E907F  mov     rax, [rbp+3A0h]
00000001401E9086  mov     eax, [rax+90h]
00000001401E908C  cdq
00000001401E908D  idiv    dword ptr [rbp+3B0h]
00000001401E9093  mov     rcx, [rbp+3A0h]
00000001401E909A  mov     r9d, [rcx+3770h]
00000001401E90A1  mov     r8d, [rbp+30h]
00000001401E90A5  mov     edx, eax
00000001401E90A7  mov     rax, [rbp+3A0h]
00000001401E90AE  mov     ecx, [rax+3790h]
00000001401E90B4  call    sub_1401F3E60
00000001401E90B9  mov     ecx, 1
00000001401E90BE  imul    rcx, 0
00000001401E90C2  mov     rdx, [rbp+3B8h]
00000001401E90C9  mov     [rdx+rcx], al
00000001401E90CC  mov     eax, [rbp+5Ch]
00000001401E90CF  mov     ecx, [rbp+248h]
00000001401E90D5  xor     ecx, eax
00000001401E90D7  mov     eax, ecx
00000001401E90D9  mov     rcx, [rbp+3A0h]
00000001401E90E0  mov     [rcx+46DCh], eax
00000001401E90E6  cmp     dword ptr [rbp+0E0h], 0
00000001401E90ED  jz      short loc_1401E9102
00000001401E90EF  mov     rax, [rbp+3A0h]
00000001401E90F6  mov     dword ptr [rax+3794h], 3EAh
00000001401E9100  jmp     short loc_1401E911C
00000001401E9102  mov     rax, [rbp+3A0h]
00000001401E9109  mov     rcx, [rbp+3A0h]
00000001401E9110  mov     ecx, [rcx+3790h]
00000001401E9116  mov     [rax+3794h], ecx
00000001401E911C  mov     rax, [rbp+3A0h]
00000001401E9123  mov     rcx, [rbp+3A0h]
00000001401E912A  mov     ecx, [rcx+3770h]
00000001401E9130  mov     [rax+3798h], ecx
00000001401E9136  mov     rax, [rbp+3A0h]
00000001401E913D  mov     ecx, [rbp+3B0h]
00000001401E9143  mov     [rax+379Ch], ecx
00000001401E9149  mov     rax, [rbp+3A0h]
00000001401E9150  mov     dword ptr [rax+37ACh], 0
00000001401E915A  mov     rax, [rbp+3A0h]
00000001401E9161  cmp     dword ptr [rax+0B8h], 0
00000001401E9168  jz      loc_1401E9252
00000001401E916E  cmp     dword ptr [rbp+2B0h], 0
00000001401E9175  jnz     short loc_1401E9181
00000001401E9177  cmp     dword ptr [rbp+68h], 0
00000001401E917B  jz      loc_1401E9252
00000001401E9181  mov     rax, [rbp+3A0h]
00000001401E9188  add     rax, 46D0h
00000001401E918E  mov     rcx, [rbp+3A0h]
00000001401E9195  mov     ecx, [rcx+0B4h]
00000001401E919B  mov     [rsp+38h], ecx
00000001401E919F  mov     ecx, [rbp+68h]
00000001401E91A2  mov     [rsp+30h], ecx
00000001401E91A6  mov     rcx, [rbp+3A0h]
00000001401E91AD  mov     ecx, [rcx+70h]
00000001401E91B0  mov     [rsp+28h], ecx
00000001401E91B4  mov     ecx, [rbp+3B0h]
00000001401E91BA  mov     [rsp+20h], ecx
00000001401E91BE  mov     r9, [rbp+3A8h]
00000001401E91C5  mov     rcx, [rbp+3A0h]
00000001401E91CC  movss   xmm2, dword ptr [rcx+46D4h]
00000001401E91D4  mov     rdx, rax
00000001401E91D7  movss   xmm0, dword ptr [rbp+2D4h]
00000001401E91DF  call    sub_1401F58C0
00000001401E91E4  test    eax, eax
00000001401E91E6  jz      short loc_1401E9250
00000001401E91E8  mov     rax, [rbp+3A0h]
00000001401E91EF  mov     dword ptr [rax+46DCh], 0
00000001401E91F9  mov     rax, [rbp+3A0h]
00000001401E9200  mov     eax, [rax+90h]
00000001401E9206  cdq
00000001401E9207  idiv    dword ptr [rbp+3B0h]
00000001401E920D  mov     rcx, [rbp+3A0h]
00000001401E9214  mov     r9d, [rcx+3770h]
00000001401E921B  mov     r8d, [rbp+30h]
00000001401E921F  mov     edx, eax
00000001401E9221  mov     rax, [rbp+3A0h]
00000001401E9228  mov     ecx, [rax+3790h]
00000001401E922E  call    sub_1401F3E60
00000001401E9233  mov     ecx, 1
00000001401E9238  imul    rcx, 0
00000001401E923C  mov     rdx, [rbp+3B8h]
00000001401E9243  mov     [rdx+rcx], al
00000001401E9246  mov     eax, 1
00000001401E924B  jmp     loc_1401E933B
00000001401E9250  jmp     short loc_1401E9263
00000001401E9252  mov     rax, [rbp+3A0h]
00000001401E9259  mov     dword ptr [rax+46D0h], 0
00000001401E9263  lea     rcx, [rbp+228h]
00000001401E926A  call    sub_14019A0A0
00000001401E926F  mov     ecx, [rbp+4]
00000001401E9272  lea     ecx, ds:0FFFFFFFFFFFFFFF8h[rcx*8]
00000001401E9279  cmp     eax, ecx
00000001401E927B  jle     short loc_1401E92BB
00000001401E927D  cmp     dword ptr [rbp+4], 2
00000001401E9281  jge     short loc_1401E928D
00000001401E9283  mov     eax, 0FFFFFFFEh
00000001401E9288  jmp     loc_1401E933B
00000001401E928D  mov     eax, 1
00000001401E9292  imul    rax, 1
00000001401E9296  mov     rcx, [rbp+3B8h]
00000001401E929D  mov     byte ptr [rcx+rax], 0
00000001401E92A1  mov     dword ptr [rbp+0], 1
00000001401E92A8  mov     rax, [rbp+3A0h]
00000001401E92AF  mov     dword ptr [rax+46DCh], 0
00000001401E92B9  jmp     short loc_1401E92F7
00000001401E92BB  mov     rax, [rbp+3A0h]
00000001401E92C2  cmp     dword ptr [rax+3790h], 3E8h
00000001401E92CC  jnz     short loc_1401E92F7
00000001401E92CE  cmp     dword ptr [rbp+18h], 0
00000001401E92D2  jnz     short loc_1401E92F7
00000001401E92D4  cmp     dword ptr [rbp+0], 2
00000001401E92D8  jle     short loc_1401E92F7
00000001401E92DA  movsxd  rax, dword ptr [rbp+0]
00000001401E92DE  mov     rcx, [rbp+3B8h]
00000001401E92E5  movzx   eax, byte ptr [rcx+rax]
00000001401E92E9  test    eax, eax
00000001401E92EB  jnz     short loc_1401E92F7
00000001401E92ED  mov     eax, [rbp+0]
00000001401E92F0  dec     eax
00000001401E92F2  mov     [rbp+0], eax
00000001401E92F5  jmp     short loc_1401E92D4
00000001401E92F7  mov     eax, [rbp+0]
00000001401E92FA  mov     ecx, [rbp+0Ch]
00000001401E92FD  lea     eax, [rax+rcx+1]
00000001401E9301  mov     [rbp+0], eax
00000001401E9304  mov     rax, [rbp+3A0h]
00000001401E930B  cmp     dword ptr [rax+94h], 0
00000001401E9312  jnz     short loc_1401E9338
00000001401E9314  mov     r8d, [rbp+4]
00000001401E9318  mov     edx, [rbp+0]
00000001401E931B  mov     rcx, [rbp+3B8h]
00000001401E9322  call    sub_1401E3980
00000001401E9327  test    eax, eax
00000001401E9329  jz      short loc_1401E9332
00000001401E932B  mov     eax, 0FFFFFFFDh
00000001401E9330  jmp     short loc_1401E933B
00000001401E9332  mov     eax, [rbp+4]
00000001401E9335  mov     [rbp+0], eax
00000001401E9338  mov     eax, [rbp+0]
00000001401E933B  mov     rcx, [rbp+380h]
00000001401E9342  xor     rcx, rbp
00000001401E9345  call    1401F8B20h
00000001401E934A  lea     rsp, [rbp+390h]
00000001401E9351  pop     rbp
00000001401E9352  retn
