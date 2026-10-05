; 0x1401ea7f0: sub_1401EA7F0
; Decompilation failed: function frame is wrong
00000001401EA7F0  mov     [rsp+20h], r9d
00000001401EA7F5  mov     [rsp+18h], r8
00000001401EA7FA  mov     [rsp+10h], rdx
00000001401EA7FF  mov     [rsp+8], rcx
00000001401EA804  push    rbp
00000001401EA805  mov     eax, 2600h
00000001401EA80A  call    sub_1401F89D0
00000001401EA80F  sub     rsp, rax
00000001401EA812  lea     rbp, [rsp+70h]
00000001401EA817  mov     rax, cs:__security_cookie
00000001401EA81E  xor     rax, rbp
00000001401EA821  mov     [rbp+2580h], rax
00000001401EA828  mov     qword ptr [rbp+0E8h], 0
00000001401EA833  mov     qword ptr [rbp+0E0h], 0
00000001401EA83E  mov     rax, [rbp+25A0h]
00000001401EA845  cmp     dword ptr [rax+11Ch], 1
00000001401EA84C  jnz     short loc_1401EA874
00000001401EA84E  mov     rcx, [rbp+25A0h]
00000001401EA855  call    sub_1401F6230
00000001401EA85A  mov     [rbp+0E0h], rax
00000001401EA861  mov     rcx, [rbp+25A0h]
00000001401EA868  call    sub_1401F6300
00000001401EA86D  mov     [rbp+0E8h], rax
00000001401EA874  mov     ecx, 124h
00000001401EA879  call    sub_1401E99B0
00000001401EA87E  cdqe
00000001401EA880  mov     rcx, [rbp+25A0h]
00000001401EA887  add     rcx, rax
00000001401EA88A  mov     rax, rcx
00000001401EA88D  mov     [rbp+18h], rax
00000001401EA891  lea     rax, [rbp+8]
00000001401EA895  lea     rcx, [rbp+8]
00000001401EA899  sub     rax, rcx
00000001401EA89C  sar     rax, 2
00000001401EA8A0  lea     rax, [rbp+rax*4+8]
00000001401EA8A5  mov     r8, rax
00000001401EA8A8  mov     edx, 0FBDh
00000001401EA8AD  mov     rcx, [rbp+18h]
00000001401EA8B1  call    sub_1401E0F40
00000001401EA8B6  lea     rax, [rbp+2Ch]
00000001401EA8BA  lea     rcx, [rbp+2Ch]
00000001401EA8BE  sub     rax, rcx
00000001401EA8C1  sar     rax, 2
00000001401EA8C5  lea     rax, [rbp+rax*4+2Ch]
00000001401EA8CA  mov     r8, rax
00000001401EA8CD  mov     edx, 0FA7h
00000001401EA8D2  mov     rcx, [rbp+18h]
00000001401EA8D6  call    sub_1401E0F40
00000001401EA8DB  lea     rax, [rbp+0D0h]
00000001401EA8E2  lea     rcx, [rbp+0D0h]
00000001401EA8E9  sub     rax, rcx
00000001401EA8EC  sar     rax, 3
00000001401EA8F0  lea     rax, [rbp+rax*8+0D0h]
00000001401EA8F8  mov     r8, rax
00000001401EA8FB  mov     edx, 271Fh
00000001401EA900  mov     rcx, [rbp+18h]
00000001401EA904  call    sub_1401E0F40
00000001401EA909  mov     r8d, [rbp+8]
00000001401EA90D  mov     rax, [rbp+25A0h]
00000001401EA914  mov     edx, [rax+118h]
00000001401EA91A  mov     ecx, [rbp+25B8h]
00000001401EA920  call    sub_1401E52C0
00000001401EA925  mov     [rbp+4], eax
00000001401EA928  cmp     dword ptr [rbp+4], 0
00000001401EA92C  jg      short loc_1401EA938
00000001401EA92E  mov     eax, 0FFFFFFFFh
00000001401EA933  jmp     loc_1401EB3B7
00000001401EA938  mov     rax, [rbp+25A0h]
00000001401EA93F  mov     eax, [rax+4]
00000001401EA942  lea     eax, [rax+rax-1]
00000001401EA946  mov     [rbp+10h], eax
00000001401EA949  mov     eax, [rbp+8]
00000001401EA94C  cdq
00000001401EA94D  idiv    dword ptr [rbp+4]
00000001401EA950  cmp     eax, 0Ah
00000001401EA953  jnz     short loc_1401EA969
00000001401EA955  mov     rax, [rbp+25A0h]
00000001401EA95C  mov     eax, [rax+4]
00000001401EA95F  mov     ecx, [rbp+10h]
00000001401EA962  add     ecx, eax
00000001401EA964  mov     eax, ecx
00000001401EA966  mov     [rbp+10h], eax
00000001401EA969  mov     eax, [rbp+10h]
00000001401EA96C  cmp     [rbp+25C8h], eax
00000001401EA972  jge     short loc_1401EA97E
00000001401EA974  mov     eax, 0FFFFFFFEh
00000001401EA979  jmp     loc_1401EB3B7
00000001401EA97E  mov     eax, [rbp+4]
00000001401EA981  shl     eax, 1
00000001401EA983  cdqe
00000001401EA985  shl     rax, 2
00000001401EA989  mov     rcx, rax
00000001401EA98C  add     rcx, 0Fh
00000001401EA990  cmp     rcx, rax
00000001401EA993  ja      short loc_1401EA99F
00000001401EA995  mov     rcx, 0FFFFFFFFFFFFFF0h
00000001401EA99F  and     rcx, 0FFFFFFFFFFFFFFF0h
00000001401EA9A3  mov     rax, rcx
00000001401EA9A6  call    sub_1401F89D0
00000001401EA9AB  sub     rsp, rax
00000001401EA9AE  lea     rax, [rsp+70h]
00000001401EA9B3  mov     [rbp+90h], rax
00000001401EA9BA  mov     ecx, 2
00000001401EA9BF  call    sub_1401E06F0
00000001401EA9C4  mov     [rbp+58h], eax
00000001401EA9C7  mov     ecx, 1
00000001401EA9CC  call    sub_1401E06F0
00000001401EA9D1  mov     [rbp+5Ch], eax
00000001401EA9D4  mov     rax, [rbp+25A0h]
00000001401EA9DB  imul    eax, [rax], 15h
00000001401EA9DE  cdqe
00000001401EA9E0  shl     rax, 2
00000001401EA9E4  mov     rcx, rax
00000001401EA9E7  add     rcx, 0Fh
00000001401EA9EB  cmp     rcx, rax
00000001401EA9EE  ja      short loc_1401EA9FA
00000001401EA9F0  mov     rcx, 0FFFFFFFFFFFFFF0h
00000001401EA9FA  and     rcx, 0FFFFFFFFFFFFFFF0h
00000001401EA9FE  mov     rax, rcx
00000001401EAA01  call    sub_1401F89D0
00000001401EAA06  sub     rsp, rax
00000001401EAA09  lea     rax, [rsp+70h]
00000001401EAA0E  mov     [rbp+88h], rax
00000001401EAA15  mov     rax, [rbp+25A0h]
00000001401EAA1C  cmp     dword ptr [rax+11Ch], 1
00000001401EAA23  jnz     short loc_1401EAA92
00000001401EAA25  mov     rax, [rbp+25A0h]
00000001401EAA2C  mov     eax, [rax+10Ch]
00000001401EAA32  mov     [rsp+50h], eax
00000001401EAA36  mov     rax, [rbp+25A8h]
00000001401EAA3D  mov     [rsp+48h], rax
00000001401EAA42  mov     eax, [rbp+8]
00000001401EAA45  mov     [rsp+40h], eax
00000001401EAA49  mov     rax, [rbp+25A0h]
00000001401EAA50  mov     eax, [rax]
00000001401EAA52  mov     [rsp+38h], eax
00000001401EAA56  mov     dword ptr [rsp+30h], 78h ; 'x'
00000001401EAA5E  mov     eax, [rbp+4]
00000001401EAA61  mov     [rsp+28h], eax
00000001401EAA65  mov     rax, [rbp+0E0h]
00000001401EAA6C  mov     [rsp+20h], rax
00000001401EAA71  mov     r9, [rbp+0E8h]
00000001401EAA78  mov     r8, [rbp+88h]
00000001401EAA7F  mov     rdx, [rbp+25B0h]
00000001401EAA86  mov     rcx, [rbp+0D0h]
00000001401EAA8D  call    sub_1401F68D0
00000001401EAA92  mov     r8d, [rbp+4]
00000001401EAA96  lea     rdx, [rbp+390h]
00000001401EAA9D  mov     rcx, [rbp+25A0h]
00000001401EAAA4  call    sub_1401F7C80
00000001401EAAA9  mov     [rbp+7Ch], eax
00000001401EAAAC  cmp     dword ptr [rbp+2Ch], 0
00000001401EAAB0  jnz     loc_1401EAC80
00000001401EAAB6  mov     rax, [rbp+25A0h]
00000001401EAABD  cmp     dword ptr [rax+120h], 0FFFFFC18h
00000001401EAAC7  jnz     loc_1401EAB50
00000001401EAACD  imul    eax, [rbp+7Ch], 3
00000001401EAAD1  mov     [rbp+0C8h], eax
00000001401EAAD7  imul    ecx, [rbp+8], 18h
00000001401EAADB  mov     eax, ecx
00000001401EAADD  cdq
00000001401EAADE  idiv    dword ptr [rbp+4]
00000001401EAAE1  mov     [rbp+0CCh], eax
00000001401EAAE7  mov     ecx, [rbp+0C8h]
00000001401EAAED  mov     eax, ecx
00000001401EAAEF  cdq
00000001401EAAF0  mov     ecx, [rbp+0CCh]
00000001401EAAF6  idiv    ecx
00000001401EAAF8  cmp     [rbp+25C8h], eax
00000001401EAAFE  jge     short loc_1401EAB0E
00000001401EAB00  mov     eax, [rbp+25C8h]
00000001401EAB06  mov     [rbp+80h], eax
00000001401EAB0C  jmp     short loc_1401EAB3F
00000001401EAB0E  imul    eax, [rbp+7Ch], 3
00000001401EAB12  mov     [rbp+98h], eax
00000001401EAB18  imul    ecx, [rbp+8], 18h
00000001401EAB1C  mov     eax, ecx
00000001401EAB1E  cdq
00000001401EAB1F  idiv    dword ptr [rbp+4]
00000001401EAB22  mov     [rbp+9Ch], eax
00000001401EAB28  mov     ecx, [rbp+98h]
00000001401EAB2E  mov     eax, ecx
00000001401EAB30  cdq
00000001401EAB31  mov     ecx, [rbp+9Ch]
00000001401EAB37  idiv    ecx
00000001401EAB39  mov     [rbp+80h], eax
00000001401EAB3F  mov     eax, [rbp+80h]
00000001401EAB45  mov     [rbp+25C8h], eax
00000001401EAB4B  jmp     loc_1401EAC80
00000001401EAB50  mov     rax, [rbp+25A0h]
00000001401EAB57  cmp     dword ptr [rax+120h], 0FFFFFFFFh
00000001401EAB5E  jz      loc_1401EAC80
00000001401EAB64  mov     rax, [rbp+25A0h]
00000001401EAB6B  imul    eax, [rax+120h], 3
00000001401EAB72  mov     [rbp+0A0h], eax
00000001401EAB78  imul    ecx, [rbp+8], 18h
00000001401EAB7C  mov     eax, ecx
00000001401EAB7E  cdq
00000001401EAB7F  idiv    dword ptr [rbp+4]
00000001401EAB82  mov     [rbp+0A4h], eax
00000001401EAB88  mov     ecx, [rbp+0A0h]
00000001401EAB8E  mov     eax, ecx
00000001401EAB90  cdq
00000001401EAB91  mov     ecx, [rbp+0A4h]
00000001401EAB97  idiv    ecx
00000001401EAB99  cmp     [rbp+10h], eax
00000001401EAB9C  jle     short loc_1401EABA6
00000001401EAB9E  mov     eax, [rbp+10h]
00000001401EABA1  mov     [rbp+4Ch], eax
00000001401EABA4  jmp     short loc_1401EABDE
00000001401EABA6  mov     rax, [rbp+25A0h]
00000001401EABAD  imul    eax, [rax+120h], 3
00000001401EABB4  mov     [rbp+0A8h], eax
00000001401EABBA  imul    ecx, [rbp+8], 18h
00000001401EABBE  mov     eax, ecx
00000001401EABC0  cdq
00000001401EABC1  idiv    dword ptr [rbp+4]
00000001401EABC4  mov     [rbp+0ACh], eax
00000001401EABCA  mov     ecx, [rbp+0A8h]
00000001401EABD0  mov     eax, ecx
00000001401EABD2  cdq
00000001401EABD3  mov     ecx, [rbp+0ACh]
00000001401EABD9  idiv    ecx
00000001401EABDB  mov     [rbp+4Ch], eax
00000001401EABDE  mov     eax, [rbp+4Ch]
00000001401EABE1  cmp     [rbp+25C8h], eax
00000001401EABE7  jge     short loc_1401EABF7
00000001401EABE9  mov     eax, [rbp+25C8h]
00000001401EABEF  mov     [rbp+54h], eax
00000001401EABF2  jmp     loc_1401EAC77
00000001401EABF7  mov     rax, [rbp+25A0h]
00000001401EABFE  imul    eax, [rax+120h], 3
00000001401EAC05  mov     [rbp+0B0h], eax
00000001401EAC0B  imul    ecx, [rbp+8], 18h
00000001401EAC0F  mov     eax, ecx
00000001401EAC11  cdq
00000001401EAC12  idiv    dword ptr [rbp+4]
00000001401EAC15  mov     [rbp+0B4h], eax
00000001401EAC1B  mov     ecx, [rbp+0B0h]
00000001401EAC21  mov     eax, ecx
00000001401EAC23  cdq
00000001401EAC24  mov     ecx, [rbp+0B4h]
00000001401EAC2A  idiv    ecx
00000001401EAC2C  cmp     [rbp+10h], eax
00000001401EAC2F  jle     short loc_1401EAC39
00000001401EAC31  mov     eax, [rbp+10h]
00000001401EAC34  mov     [rbp+50h], eax
00000001401EAC37  jmp     short loc_1401EAC71
00000001401EAC39  mov     rax, [rbp+25A0h]
00000001401EAC40  imul    eax, [rax+120h], 3
00000001401EAC47  mov     [rbp+0B8h], eax
00000001401EAC4D  imul    ecx, [rbp+8], 18h
00000001401EAC51  mov     eax, ecx
00000001401EAC53  cdq
00000001401EAC54  idiv    dword ptr [rbp+4]
00000001401EAC57  mov     [rbp+0BCh], eax
00000001401EAC5D  mov     ecx, [rbp+0B8h]
00000001401EAC63  mov     eax, ecx
00000001401EAC65  cdq
00000001401EAC66  mov     ecx, [rbp+0BCh]
00000001401EAC6C  idiv    ecx
00000001401EAC6E  mov     [rbp+50h], eax
00000001401EAC71  mov     eax, [rbp+50h]
00000001401EAC74  mov     [rbp+54h], eax
00000001401EAC77  mov     eax, [rbp+54h]
00000001401EAC7A  mov     [rbp+25C8h], eax
00000001401EAC80  mov     ecx, 124h
00000001401EAC85  call    sub_1401E99B0
00000001401EAC8A  cdqe
00000001401EAC8C  mov     rcx, [rbp+25A0h]
00000001401EAC93  add     rcx, rax
00000001401EAC96  mov     rax, rcx
00000001401EAC99  mov     [rbp+18h], rax
00000001401EAC9D  mov     dword ptr [rbp+0], 0
00000001401EACA4  jmp     short loc_1401EACAE
00000001401EACA6  mov     eax, [rbp+0]
00000001401EACA9  inc     eax
00000001401EACAB  mov     [rbp+0], eax
00000001401EACAE  mov     rax, [rbp+25A0h]
00000001401EACB5  mov     eax, [rax+4]
00000001401EACB8  cmp     [rbp+0], eax
00000001401EACBB  jge     loc_1401EAE60
00000001401EACC1  mov     rax, [rbp+18h]
00000001401EACC5  mov     [rbp+38h], rax
00000001401EACC9  mov     rax, [rbp+25A0h]
00000001401EACD0  mov     eax, [rax+8]
00000001401EACD3  cmp     [rbp+0], eax
00000001401EACD6  jge     short loc_1401EACF2
00000001401EACD8  mov     ecx, [rbp+58h]
00000001401EACDB  call    sub_1401E99B0
00000001401EACE0  cdqe
00000001401EACE2  mov     rcx, [rbp+18h]
00000001401EACE6  add     rcx, rax
00000001401EACE9  mov     rax, rcx
00000001401EACEC  mov     [rbp+18h], rax
00000001401EACF0  jmp     short loc_1401EAD0A
00000001401EACF2  mov     ecx, [rbp+5Ch]
00000001401EACF5  call    sub_1401E99B0
00000001401EACFA  cdqe
00000001401EACFC  mov     rcx, [rbp+18h]
00000001401EAD00  add     rcx, rax
00000001401EAD03  mov     rax, rcx
00000001401EAD06  mov     [rbp+18h], rax
00000001401EAD0A  movsxd  rax, dword ptr [rbp+0]
00000001401EAD0E  mov     r8d, [rbp+rax*4+390h]
00000001401EAD16  mov     edx, 0FA2h
00000001401EAD1B  mov     rcx, [rbp+38h]
00000001401EAD1F  call    sub_1401E0F40
00000001401EAD24  mov     rax, [rbp+25A0h]
00000001401EAD2B  cmp     dword ptr [rax+11Ch], 1
00000001401EAD32  jnz     loc_1401EAE37
00000001401EAD38  mov     rax, [rbp+25A0h]
00000001401EAD3F  mov     eax, [rax+120h]
00000001401EAD45  mov     [rbp+24h], eax
00000001401EAD48  imul    eax, [rbp+4], 32h ; '2'
00000001401EAD4C  cmp     eax, [rbp+8]
00000001401EAD4F  jge     short loc_1401EAD72
00000001401EAD51  mov     eax, [rbp+8]
00000001401EAD54  cdq
00000001401EAD55  idiv    dword ptr [rbp+4]
00000001401EAD58  sub     eax, 32h ; '2'
00000001401EAD5B  imul    eax, 3Ch ; '<'
00000001401EAD5E  mov     rcx, [rbp+25A0h]
00000001401EAD65  imul    eax, [rcx]
00000001401EAD68  mov     ecx, [rbp+24h]
00000001401EAD6B  sub     ecx, eax
00000001401EAD6D  mov     eax, ecx
00000001401EAD6F  mov     [rbp+24h], eax
00000001401EAD72  mov     rax, [rbp+25A0h]
00000001401EAD79  imul    eax, [rax], 2710h
00000001401EAD7F  cmp     [rbp+24h], eax
00000001401EAD82  jle     short loc_1401EAD9A
00000001401EAD84  mov     r8d, 451h
00000001401EAD8A  mov     edx, 0FA8h
00000001401EAD8F  mov     rcx, [rbp+38h]
00000001401EAD93  call    sub_1401E0F40
00000001401EAD98  jmp     short loc_1401EADFE
00000001401EAD9A  mov     rax, [rbp+25A0h]
00000001401EADA1  imul    eax, [rax], 1B58h
00000001401EADA7  cmp     [rbp+24h], eax
00000001401EADAA  jle     short loc_1401EADC2
00000001401EADAC  mov     r8d, 450h
00000001401EADB2  mov     edx, 0FA8h
00000001401EADB7  mov     rcx, [rbp+38h]
00000001401EADBB  call    sub_1401E0F40
00000001401EADC0  jmp     short loc_1401EADFE
00000001401EADC2  mov     rax, [rbp+25A0h]
00000001401EADC9  imul    eax, [rax], 1388h
00000001401EADCF  cmp     [rbp+24h], eax
00000001401EADD2  jle     short loc_1401EADEA
00000001401EADD4  mov     r8d, 44Fh
00000001401EADDA  mov     edx, 0FA8h
00000001401EADDF  mov     rcx, [rbp+38h]
00000001401EADE3  call    sub_1401E0F40
00000001401EADE8  jmp     short loc_1401EADFE
00000001401EADEA  mov     r8d, 44Dh
00000001401EADF0  mov     edx, 0FA8h
00000001401EADF5  mov     rcx, [rbp+38h]
00000001401EADF9  call    sub_1401E0F40
00000001401EADFE  mov     rax, [rbp+25A0h]
00000001401EAE05  mov     eax, [rax+8]
00000001401EAE08  cmp     [rbp+0], eax
00000001401EAE0B  jge     short loc_1401EAE35
00000001401EAE0D  mov     r8d, 3EAh
00000001401EAE13  mov     edx, 2AFAh
00000001401EAE18  mov     rcx, [rbp+38h]
00000001401EAE1C  call    sub_1401E0F40
00000001401EAE21  mov     r8d, 2
00000001401EAE27  mov     edx, 0FB6h
00000001401EAE2C  mov     rcx, [rbp+38h]
00000001401EAE30  call    sub_1401E0F40
00000001401EAE35  jmp     short loc_1401EAE5B
00000001401EAE37  mov     rax, [rbp+25A0h]
00000001401EAE3E  cmp     dword ptr [rax+11Ch], 2
00000001401EAE45  jnz     short loc_1401EAE5B
00000001401EAE47  mov     r8d, 3EAh
00000001401EAE4D  mov     edx, 2AFAh
00000001401EAE52  mov     rcx, [rbp+38h]
00000001401EAE56  call    sub_1401E0F40
00000001401EAE5B  jmp     loc_1401EACA6
00000001401EAE60  mov     ecx, 124h
00000001401EAE65  call    sub_1401E99B0
00000001401EAE6A  cdqe
00000001401EAE6C  mov     rcx, [rbp+25A0h]
00000001401EAE73  add     rcx, rax
00000001401EAE76  mov     rax, rcx
00000001401EAE79  mov     [rbp+18h], rax
00000001401EAE7D  mov     dword ptr [rbp+30h], 0
00000001401EAE84  mov     dword ptr [rbp+0], 0
00000001401EAE8B  jmp     short loc_1401EAE95
00000001401EAE8D  mov     eax, [rbp+0]
00000001401EAE90  inc     eax
00000001401EAE92  mov     [rbp+0], eax
00000001401EAE95  mov     rax, [rbp+25A0h]
00000001401EAE9C  mov     eax, [rax+4]
00000001401EAE9F  cmp     [rbp+0], eax
00000001401EAEA2  jge     loc_1401EB3B4
00000001401EAEA8  lea     rcx, [rbp+0F0h]
00000001401EAEAF  call    sub_1401E37F0
00000001401EAEB4  mov     rax, [rbp+18h]
00000001401EAEB8  mov     [rbp+0D8h], rax
00000001401EAEBF  mov     rax, [rbp+25A0h]
00000001401EAEC6  mov     eax, [rax+8]
00000001401EAEC9  cmp     [rbp+0], eax
00000001401EAECC  jge     loc_1401EB024
00000001401EAED2  mov     rax, [rbp+25A0h]
00000001401EAED9  mov     r8d, 0FFFFFFFFh
00000001401EAEDF  mov     edx, [rbp+0]
00000001401EAEE2  mov     rcx, rax
00000001401EAEE5  call    sub_1401E4CF0
00000001401EAEEA  mov     [rbp+40h], eax
00000001401EAEED  mov     rax, [rbp+25A0h]
00000001401EAEF4  mov     r8d, 0FFFFFFFFh
00000001401EAEFA  mov     edx, [rbp+0]
00000001401EAEFD  mov     rcx, rax
00000001401EAF00  call    sub_1401E4D70
00000001401EAF05  mov     [rbp+44h], eax
00000001401EAF08  mov     rax, [rbp+25E8h]
00000001401EAF0F  mov     [rsp+30h], rax
00000001401EAF14  mov     eax, [rbp+4]
00000001401EAF17  mov     [rsp+28h], eax
00000001401EAF1B  mov     eax, [rbp+40h]
00000001401EAF1E  mov     [rsp+20h], eax
00000001401EAF22  mov     rax, [rbp+25A0h]
00000001401EAF29  mov     r9d, [rax]
00000001401EAF2C  mov     r8, [rbp+25B0h]
00000001401EAF33  mov     edx, 2
00000001401EAF38  mov     rcx, [rbp+90h]
00000001401EAF3F  call    qword ptr [rbp+25A8h]
00000001401EAF45  mov     rax, [rbp+90h]
00000001401EAF4C  add     rax, 4
00000001401EAF50  mov     rcx, [rbp+25E8h]
00000001401EAF57  mov     [rsp+30h], rcx
00000001401EAF5C  mov     ecx, [rbp+4]
00000001401EAF5F  mov     [rsp+28h], ecx
00000001401EAF63  mov     ecx, [rbp+44h]
00000001401EAF66  mov     [rsp+20h], ecx
00000001401EAF6A  mov     rcx, [rbp+25A0h]
00000001401EAF71  mov     r9d, [rcx]
00000001401EAF74  mov     r8, [rbp+25B0h]
00000001401EAF7B  mov     edx, 2
00000001401EAF80  mov     rcx, rax
00000001401EAF83  call    qword ptr [rbp+25A8h]
00000001401EAF89  mov     ecx, [rbp+58h]
00000001401EAF8C  call    sub_1401E99B0
00000001401EAF91  cdqe
00000001401EAF93  mov     rcx, [rbp+18h]
00000001401EAF97  add     rcx, rax
00000001401EAF9A  mov     rax, rcx
00000001401EAF9D  mov     [rbp+18h], rax
00000001401EAFA1  mov     rax, [rbp+25A0h]
00000001401EAFA8  cmp     dword ptr [rax+11Ch], 1
00000001401EAFAF  jnz     short loc_1401EB013
00000001401EAFB1  mov     dword ptr [rbp+14h], 0
00000001401EAFB8  jmp     short loc_1401EAFC2
00000001401EAFBA  mov     eax, [rbp+14h]
00000001401EAFBD  inc     eax
00000001401EAFBF  mov     [rbp+14h], eax
00000001401EAFC2  cmp     dword ptr [rbp+14h], 15h
00000001401EAFC6  jge     short loc_1401EB013
00000001401EAFC8  imul    eax, [rbp+40h], 15h
00000001401EAFCC  add     eax, [rbp+14h]
00000001401EAFCF  cdqe
00000001401EAFD1  movsxd  rcx, dword ptr [rbp+14h]
00000001401EAFD5  mov     rdx, [rbp+88h]
00000001401EAFDC  movss   xmm0, dword ptr [rdx+rax*4]
00000001401EAFE1  movss   dword ptr [rbp+rcx*4+2E0h], xmm0
00000001401EAFEA  imul    eax, [rbp+44h], 15h
00000001401EAFEE  add     eax, [rbp+14h]
00000001401EAFF1  cdqe
00000001401EAFF3  mov     ecx, [rbp+14h]
00000001401EAFF6  add     ecx, 15h
00000001401EAFF9  movsxd  rcx, ecx
00000001401EAFFC  mov     rdx, [rbp+88h]
00000001401EB003  movss   xmm0, dword ptr [rdx+rax*4]
00000001401EB008  movss   dword ptr [rbp+rcx*4+2E0h], xmm0
00000001401EB011  jmp     short loc_1401EAFBA
00000001401EB013  mov     eax, [rbp+40h]
00000001401EB016  mov     [rbp+70h], eax
00000001401EB019  mov     eax, [rbp+44h]
00000001401EB01C  mov     [rbp+6Ch], eax
00000001401EB01F  jmp     loc_1401EB0EC
00000001401EB024  mov     rax, [rbp+25A0h]
00000001401EB02B  mov     r8d, 0FFFFFFFFh
00000001401EB031  mov     edx, [rbp+0]
00000001401EB034  mov     rcx, rax
00000001401EB037  call    sub_1401E4DF0
00000001401EB03C  mov     [rbp+48h], eax
00000001401EB03F  mov     rax, [rbp+25E8h]
00000001401EB046  mov     [rsp+30h], rax
00000001401EB04B  mov     eax, [rbp+4]
00000001401EB04E  mov     [rsp+28h], eax
00000001401EB052  mov     eax, [rbp+48h]
00000001401EB055  mov     [rsp+20h], eax
00000001401EB059  mov     rax, [rbp+25A0h]
00000001401EB060  mov     r9d, [rax]
00000001401EB063  mov     r8, [rbp+25B0h]
00000001401EB06A  mov     edx, 1
00000001401EB06F  mov     rcx, [rbp+90h]
00000001401EB076  call    qword ptr [rbp+25A8h]
00000001401EB07C  mov     ecx, [rbp+5Ch]
00000001401EB07F  call    sub_1401E99B0
00000001401EB084  cdqe
00000001401EB086  mov     rcx, [rbp+18h]
00000001401EB08A  add     rcx, rax
00000001401EB08D  mov     rax, rcx
00000001401EB090  mov     [rbp+18h], rax
00000001401EB094  mov     rax, [rbp+25A0h]
00000001401EB09B  cmp     dword ptr [rax+11Ch], 1
00000001401EB0A2  jnz     short loc_1401EB0DF
00000001401EB0A4  mov     dword ptr [rbp+28h], 0
00000001401EB0AB  jmp     short loc_1401EB0B5
00000001401EB0AD  mov     eax, [rbp+28h]
00000001401EB0B0  inc     eax
00000001401EB0B2  mov     [rbp+28h], eax
00000001401EB0B5  cmp     dword ptr [rbp+28h], 15h
00000001401EB0B9  jge     short loc_1401EB0DF
00000001401EB0BB  imul    eax, [rbp+48h], 15h
00000001401EB0BF  add     eax, [rbp+28h]
00000001401EB0C2  cdqe
00000001401EB0C4  movsxd  rcx, dword ptr [rbp+28h]
00000001401EB0C8  mov     rdx, [rbp+88h]
00000001401EB0CF  movss   xmm0, dword ptr [rdx+rax*4]
00000001401EB0D4  movss   dword ptr [rbp+rcx*4+2E0h], xmm0
00000001401EB0DD  jmp     short loc_1401EB0AD
00000001401EB0DF  mov     eax, [rbp+48h]
00000001401EB0E2  mov     [rbp+70h], eax
00000001401EB0E5  mov     dword ptr [rbp+6Ch], 0FFFFFFFFh
00000001401EB0EC  mov     rax, [rbp+25A0h]
00000001401EB0F3  cmp     dword ptr [rax+11Ch], 1
00000001401EB0FA  jnz     short loc_1401EB12D
00000001401EB0FC  lea     rax, [rbp+2E0h]
00000001401EB103  lea     rcx, [rbp+2E0h]
00000001401EB10A  sub     rax, rcx
00000001401EB10D  sar     rax, 2
00000001401EB111  lea     rax, [rbp+rax*4+2E0h]
00000001401EB119  mov     r8, rax
00000001401EB11C  mov     edx, 272Ah
00000001401EB121  mov     rcx, [rbp+0D8h]
00000001401EB128  call    sub_1401E0F40
00000001401EB12D  mov     eax, [rbp+30h]
00000001401EB130  mov     ecx, [rbp+25C8h]
00000001401EB136  sub     ecx, eax
00000001401EB138  mov     eax, ecx
00000001401EB13A  mov     [rbp+0Ch], eax
00000001401EB13D  mov     rax, [rbp+25A0h]
00000001401EB144  mov     ecx, [rbp+0]
00000001401EB147  mov     eax, [rax+4]
00000001401EB14A  sub     eax, ecx
00000001401EB14C  lea     eax, [rax+rax-3]
00000001401EB150  test    eax, eax
00000001401EB152  jge     short loc_1401EB15D
00000001401EB154  mov     dword ptr [rbp+60h], 0
00000001401EB15B  jmp     short loc_1401EB173
00000001401EB15D  mov     rax, [rbp+25A0h]
00000001401EB164  mov     ecx, [rbp+0]
00000001401EB167  mov     eax, [rax+4]
00000001401EB16A  sub     eax, ecx
00000001401EB16C  lea     eax, [rax+rax-3]
00000001401EB170  mov     [rbp+60h], eax
00000001401EB173  mov     eax, [rbp+60h]
00000001401EB176  mov     ecx, [rbp+0Ch]
00000001401EB179  sub     ecx, eax
00000001401EB17B  mov     eax, ecx
00000001401EB17D  mov     [rbp+0Ch], eax
00000001401EB180  mov     eax, [rbp+8]
00000001401EB183  cdq
00000001401EB184  idiv    dword ptr [rbp+4]
00000001401EB187  cmp     eax, 0Ah
00000001401EB18A  jnz     short loc_1401EB1A7
00000001401EB18C  mov     rax, [rbp+25A0h]
00000001401EB193  mov     ecx, [rbp+0]
00000001401EB196  mov     eax, [rax+4]
00000001401EB199  sub     eax, ecx
00000001401EB19B  dec     eax
00000001401EB19D  mov     ecx, [rbp+0Ch]
00000001401EB1A0  sub     ecx, eax
00000001401EB1A2  mov     eax, ecx
00000001401EB1A4  mov     [rbp+0Ch], eax
00000001401EB1A7  cmp     dword ptr [rbp+0Ch], 1DEEh
00000001401EB1AE  jge     short loc_1401EB1B8
00000001401EB1B0  mov     eax, [rbp+0Ch]
00000001401EB1B3  mov     [rbp+64h], eax
00000001401EB1B6  jmp     short loc_1401EB1BF
00000001401EB1B8  mov     dword ptr [rbp+64h], 1DEEh
00000001401EB1BF  mov     eax, [rbp+64h]
00000001401EB1C2  mov     [rbp+0Ch], eax
00000001401EB1C5  mov     rax, [rbp+25A0h]
00000001401EB1CC  mov     eax, [rax+4]
00000001401EB1CF  dec     eax
00000001401EB1D1  cmp     [rbp+0], eax
00000001401EB1D4  jz      short loc_1401EB1FC
00000001401EB1D6  cmp     dword ptr [rbp+0Ch], 0FDh
00000001401EB1DD  jle     short loc_1401EB1E8
00000001401EB1DF  mov     dword ptr [rbp+68h], 2
00000001401EB1E6  jmp     short loc_1401EB1EF
00000001401EB1E8  mov     dword ptr [rbp+68h], 1
00000001401EB1EF  mov     eax, [rbp+68h]
00000001401EB1F2  mov     ecx, [rbp+0Ch]
00000001401EB1F5  sub     ecx, eax
00000001401EB1F7  mov     eax, ecx
00000001401EB1F9  mov     [rbp+0Ch], eax
00000001401EB1FC  cmp     dword ptr [rbp+2Ch], 0
00000001401EB200  jnz     short loc_1401EB239
00000001401EB202  mov     rax, [rbp+25A0h]
00000001401EB209  mov     eax, [rax+4]
00000001401EB20C  dec     eax
00000001401EB20E  cmp     [rbp+0], eax
00000001401EB211  jnz     short loc_1401EB239
00000001401EB213  mov     eax, [rbp+8]
00000001401EB216  shl     eax, 3
00000001401EB219  cdq
00000001401EB21A  idiv    dword ptr [rbp+4]
00000001401EB21D  mov     ecx, [rbp+0Ch]
00000001401EB220  imul    ecx, eax
00000001401EB223  mov     eax, ecx
00000001401EB225  mov     r8d, eax
00000001401EB228  mov     edx, 0FA2h
00000001401EB22D  mov     rcx, [rbp+0D8h]
00000001401EB234  call    sub_1401E0F40
00000001401EB239  mov     eax, [rbp+25E0h]
00000001401EB23F  mov     [rsp+60h], eax
00000001401EB243  mov     rax, [rbp+25D8h]
00000001401EB24A  mov     [rsp+58h], rax
00000001401EB24F  mov     rax, [rbp+25A0h]
00000001401EB256  mov     eax, [rax]
00000001401EB258  mov     [rsp+50h], eax
00000001401EB25C  mov     eax, [rbp+6Ch]
00000001401EB25F  mov     [rsp+48h], eax
00000001401EB263  mov     eax, [rbp+70h]
00000001401EB266  mov     [rsp+40h], eax
00000001401EB26A  mov     eax, [rbp+25B8h]
00000001401EB270  mov     [rsp+38h], eax
00000001401EB274  mov     rax, [rbp+25B0h]
00000001401EB27B  mov     [rsp+30h], rax
00000001401EB280  mov     eax, [rbp+25D0h]
00000001401EB286  mov     [rsp+28h], eax
00000001401EB28A  mov     eax, [rbp+0Ch]
00000001401EB28D  mov     [rsp+20h], eax
00000001401EB291  lea     r9, [rbp+790h]
00000001401EB298  mov     r8d, [rbp+4]
00000001401EB29C  mov     rdx, [rbp+90h]
00000001401EB2A3  mov     rcx, [rbp+0D8h]
00000001401EB2AA  call    sub_1401E5400
00000001401EB2AF  mov     [rbp+20h], eax
00000001401EB2B2  cmp     dword ptr [rbp+20h], 0
00000001401EB2B6  jge     short loc_1401EB2C0
00000001401EB2B8  mov     eax, [rbp+20h]
00000001401EB2BB  jmp     loc_1401EB3B7
00000001401EB2C0  mov     r8d, [rbp+20h]
00000001401EB2C4  lea     rdx, [rbp+790h]
00000001401EB2CB  lea     rcx, [rbp+0F0h]
00000001401EB2D2  call    sub_1401E3870
00000001401EB2D7  mov     [rbp+0C0h], eax
00000001401EB2DD  cmp     dword ptr [rbp+0C0h], 0
00000001401EB2E4  jz      short loc_1401EB2F0
00000001401EB2E6  mov     eax, 0FFFFFFFDh
00000001401EB2EB  jmp     loc_1401EB3B7
00000001401EB2F0  cmp     dword ptr [rbp+2Ch], 0
00000001401EB2F4  jnz     short loc_1401EB310
00000001401EB2F6  mov     rax, [rbp+25A0h]
00000001401EB2FD  mov     eax, [rax+4]
00000001401EB300  dec     eax
00000001401EB302  cmp     [rbp+0], eax
00000001401EB305  jnz     short loc_1401EB310
00000001401EB307  mov     dword ptr [rbp+74h], 1
00000001401EB30E  jmp     short loc_1401EB317
00000001401EB310  mov     dword ptr [rbp+74h], 0
00000001401EB317  mov     rax, [rbp+25A0h]
00000001401EB31E  mov     eax, [rax+4]
00000001401EB321  dec     eax
00000001401EB323  cmp     [rbp+0], eax
00000001401EB326  jz      short loc_1401EB331
00000001401EB328  mov     dword ptr [rbp+78h], 1
00000001401EB32F  jmp     short loc_1401EB338
00000001401EB331  mov     dword ptr [rbp+78h], 0
00000001401EB338  mov     eax, [rbp+30h]
00000001401EB33B  mov     ecx, [rbp+25C8h]
00000001401EB341  sub     ecx, eax
00000001401EB343  mov     eax, ecx
00000001401EB345  mov     [rbp+0C4h], eax
00000001401EB34B  lea     rcx, [rbp+0F0h]
00000001401EB352  call    unknown_libname_998
00000001401EB357  mov     ecx, [rbp+74h]
00000001401EB35A  mov     [rsp+30h], ecx
00000001401EB35E  mov     ecx, [rbp+78h]
00000001401EB361  mov     [rsp+28h], ecx
00000001401EB365  mov     ecx, [rbp+0C4h]
00000001401EB36B  mov     [rsp+20h], ecx
00000001401EB36F  mov     r9, [rbp+25C0h]
00000001401EB376  mov     r8d, eax
00000001401EB379  xor     edx, edx
00000001401EB37B  lea     rcx, [rbp+0F0h]
00000001401EB382  call    sub_1401EA090
00000001401EB387  mov     [rbp+20h], eax
00000001401EB38A  movsxd  rax, dword ptr [rbp+20h]
00000001401EB38E  mov     rcx, [rbp+25C0h]
00000001401EB395  add     rcx, rax
00000001401EB398  mov     rax, rcx
00000001401EB39B  mov     [rbp+25C0h], rax
00000001401EB3A2  mov     eax, [rbp+20h]
00000001401EB3A5  mov     ecx, [rbp+30h]
00000001401EB3A8  add     ecx, eax
00000001401EB3AA  mov     eax, ecx
00000001401EB3AC  mov     [rbp+30h], eax
00000001401EB3AF  jmp     loc_1401EAE8D
00000001401EB3B4  mov     eax, [rbp+30h]
00000001401EB3B7  mov     rcx, [rbp+2580h]
00000001401EB3BE  xor     rcx, rbp
00000001401EB3C1  call    1401F8B20h
00000001401EB3C6  lea     rsp, [rbp+2590h]
00000001401EB3CD  pop     rbp
00000001401EB3CE  retn
