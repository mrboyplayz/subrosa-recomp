; 0x14004a7a0: sub_14004A7A0
; Decompilation failed: call analysis failed
000000014004A7A0  push    rbp
000000014004A7A2  push    rbx
000000014004A7A3  push    r13
000000014004A7A5  push    r14
000000014004A7A7  push    r15
000000014004A7A9  lea     rbp, [rsp-39B0h]
000000014004A7B1  mov     eax, 3AB0h
000000014004A7B6  call    sub_1401F89D0
000000014004A7BB  sub     rsp, rax
000000014004A7BE  movaps  [rsp+20h+arg_3A60], xmm6
000000014004A7C6  movaps  [rsp+20h+arg_3A50], xmm7
000000014004A7CE  movaps  [rsp+20h+arg_3A40], xmm8
000000014004A7D7  movaps  [rsp+20h+arg_3A30], xmm9
000000014004A7E0  movaps  [rsp+20h+arg_3A20], xmm10
000000014004A7E9  movaps  [rsp+20h+arg_3A10], xmm11
000000014004A7F2  movaps  [rsp+20h+arg_3A00], xmm12
000000014004A7FB  movaps  [rsp+20h+arg_39F0], xmm13
000000014004A804  movaps  [rsp+20h+arg_39E0], xmm14
000000014004A80D  movaps  [rsp+20h+arg_39D0], xmm15
000000014004A816  mov     rax, cs:__security_cookie
000000014004A81D  xor     rax, rsp
000000014004A820  mov     [rbp+39D0h+var_E0], rax
000000014004A827  mov     r10, [rbp+39D0h+arg_38]
000000014004A82E  xor     r13d, r13d
000000014004A831  mov     r15, [rbp+39D0h+arg_20]
000000014004A838  mov     r11, r9
000000014004A83B  mov     [rsp+20h+arg_4C], edx
000000014004A83F  movsxd  rdx, dword ptr [r8]
000000014004A842  mov     [rbp+39D0h+var_3A00], r9
000000014004A846  mov     r9, [rbp+39D0h+arg_28]
000000014004A84D  mov     [rbp+39D0h+var_3A18], r8
000000014004A851  mov     [rbp+39D0h+var_3A50], ecx
000000014004A854  mov     [rbp+39D0h+var_3A08], r10
000000014004A858  mov     [rbp+39D0h+var_3A20], r9
000000014004A85C  mov     [rsp+20h+arg_44], r13d
000000014004A861  test    rdx, rdx
000000014004A864  jle     loc_14004A987
000000014004A86A  mov     r8, [r8+8]
000000014004A86E  lea     rbx, [rbp+39D0h+var_38D8]
000000014004A875  movss   xmm10, dword ptr [r9+0Ch]
000000014004A87B  lea     rax, [rbp+39D0h+var_38D8]
000000014004A882  movss   xmm11, dword ptr [r9]
000000014004A887  movss   xmm12, dword ptr [r9+18h]
000000014004A88D  movss   xmm13, dword ptr [r9+10h]
000000014004A893  lea     rcx, [r8+8]
000000014004A897  movss   xmm14, dword ptr [r9+4]
000000014004A89D  sub     r8, rbx
000000014004A8A0  movss   xmm15, dword ptr [r9+1Ch]
000000014004A8A6  nop     word ptr [rax+rax+00000000h]
000000014004A8B0  movss   xmm8, dword ptr [r8+rax]
000000014004A8B6  movss   xmm9, dword ptr [rcx-4]
000000014004A8BC  movaps  xmm5, xmm8
000000014004A8C0  movss   xmm7, dword ptr [rcx]
000000014004A8C4  movaps  xmm6, xmm9
000000014004A8C8  movaps  xmm2, xmm8
000000014004A8CC  mulss   xmm6, xmm10
000000014004A8D1  add     rcx, 0Ch
000000014004A8D5  mulss   xmm8, dword ptr [r9+8]
000000014004A8DB  movaps  xmm4, xmm9
000000014004A8DF  mulss   xmm9, dword ptr [r9+14h]
000000014004A8E5  movaps  xmm3, xmm7
000000014004A8E8  mulss   xmm4, xmm13
000000014004A8ED  movaps  xmm1, xmm7
000000014004A8F0  mulss   xmm7, dword ptr [r9+20h]
000000014004A8F6  mulss   xmm5, xmm11
000000014004A8FB  mulss   xmm3, xmm12
000000014004A900  movaps  xmm0, xmm5
000000014004A903  mulss   xmm2, xmm14
000000014004A908  addss   xmm0, xmm6
000000014004A90C  mulss   xmm1, xmm15
000000014004A911  addss   xmm6, dword ptr [r15]
000000014004A916  addss   xmm5, xmm3
000000014004A91A  addss   xmm0, xmm3
000000014004A91E  addss   xmm6, xmm5
000000014004A922  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004A928  movaps  xmm0, xmm2
000000014004A92B  addss   xmm0, xmm4
000000014004A92F  addss   xmm4, dword ptr [r15+4]
000000014004A935  addss   xmm2, xmm1
000000014004A939  movss   dword ptr [rax-8], xmm6
000000014004A93E  addss   xmm0, xmm1
000000014004A942  addss   xmm4, xmm2
000000014004A946  movss   dword ptr [rsp+20h+arg_30+4], xmm0
000000014004A94C  movaps  xmm0, xmm8
000000014004A950  addss   xmm0, xmm9
000000014004A955  addss   xmm9, dword ptr [r15+8]
000000014004A95B  addss   xmm8, xmm7
000000014004A960  movss   dword ptr [rax-4], xmm4
000000014004A965  addss   xmm0, xmm7
000000014004A969  addss   xmm9, xmm8
000000014004A96E  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004A974  movss   dword ptr [rax], xmm9
000000014004A979  add     rax, 0Ch
000000014004A97D  sub     rdx, 1
000000014004A981  jnz     loc_14004A8B0
000000014004A987  movsxd  rdx, dword ptr [r11]
000000014004A98A  mov     [rsp+20h+arg_3A70], r12
000000014004A992  mov     r12, [rbp+39D0h+arg_30]
000000014004A999  test    rdx, rdx
000000014004A99C  jle     loc_14004AABA
000000014004A9A2  mov     r8, [r11+8]
000000014004A9A6  lea     rbx, [rbp+39D0h+var_20D8]
000000014004A9AD  movss   xmm10, dword ptr [r10+0Ch]
000000014004A9B3  lea     rax, [rbp+39D0h+var_20D8]
000000014004A9BA  movss   xmm11, dword ptr [r10]
000000014004A9BF  movss   xmm12, dword ptr [r10+18h]
000000014004A9C5  movss   xmm13, dword ptr [r10+10h]
000000014004A9CB  lea     rcx, [r8+8]
000000014004A9CF  movss   xmm14, dword ptr [r10+4]
000000014004A9D5  sub     r8, rbx
000000014004A9D8  movss   xmm15, dword ptr [r10+1Ch]
000000014004A9DE  xchg    ax, ax
000000014004A9E0  movss   xmm9, dword ptr [r8+rax]
000000014004A9E6  movss   xmm7, dword ptr [rcx-4]
000000014004A9EB  movaps  xmm6, xmm9
000000014004A9EF  movss   xmm8, dword ptr [rcx]
000000014004A9F4  movaps  xmm3, xmm9
000000014004A9F8  mulss   xmm9, dword ptr [r10+8]
000000014004A9FE  movaps  xmm4, xmm8
000000014004AA02  add     rcx, 0Ch
000000014004AA06  mulss   xmm6, xmm11
000000014004AA0B  movaps  xmm1, xmm8
000000014004AA0F  mulss   xmm8, dword ptr [r10+20h]
000000014004AA15  movaps  xmm5, xmm7
000000014004AA18  mulss   xmm3, xmm14
000000014004AA1D  movaps  xmm2, xmm7
000000014004AA20  mulss   xmm7, dword ptr [r10+14h]
000000014004AA26  movaps  xmm0, xmm6
000000014004AA29  mulss   xmm5, xmm10
000000014004AA2E  mulss   xmm4, xmm12
000000014004AA33  addss   xmm0, xmm5
000000014004AA37  mulss   xmm2, xmm13
000000014004AA3C  mulss   xmm1, xmm15
000000014004AA41  addss   xmm6, xmm5
000000014004AA45  addss   xmm0, xmm4
000000014004AA49  addss   xmm4, dword ptr [r12]
000000014004AA4F  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004AA55  movaps  xmm0, xmm3
000000014004AA58  addss   xmm0, xmm2
000000014004AA5C  addss   xmm3, xmm2
000000014004AA60  addss   xmm6, xmm4
000000014004AA64  addss   xmm0, xmm1
000000014004AA68  addss   xmm1, dword ptr [r12+4]
000000014004AA6F  movss   dword ptr [rax-8], xmm6
000000014004AA74  movss   dword ptr [rsp+20h+arg_30+4], xmm0
000000014004AA7A  movaps  xmm0, xmm9
000000014004AA7E  addss   xmm0, xmm7
000000014004AA82  addss   xmm9, xmm7
000000014004AA87  addss   xmm3, xmm1
000000014004AA8B  addss   xmm0, xmm8
000000014004AA90  addss   xmm8, dword ptr [r12+8]
000000014004AA97  movss   dword ptr [rax-4], xmm3
000000014004AA9C  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004AAA2  addss   xmm9, xmm8
000000014004AAA7  movss   dword ptr [rax], xmm9
000000014004AAAC  add     rax, 0Ch
000000014004AAB0  sub     rdx, 1
000000014004AAB4  jnz     loc_14004A9E0
000000014004AABA  mov     rdx, [rbp+39D0h+var_3A18]
000000014004AABE  xor     r14d, r14d
000000014004AAC1  movss   xmm10, cs:dword_140278178
000000014004AACA  movss   xmm11, cs:dword_140278148
000000014004AAD3  movss   xmm12, cs:dword_140278304
000000014004AADC  mov     eax, [rdx+10h]
000000014004AADF  mov     [rsp+20h+arg_3AB0], rsi
000000014004AAE7  mov     [rsp+20h+arg_3A78], rdi
000000014004AAEF  mov     [rsp+20h+arg_40], r14d
000000014004AAF4  test    eax, eax
000000014004AAF6  jle     loc_14004AD56
000000014004AAFC  lea     rdi, [rdx+28h]
000000014004AB00  movss   xmm7, dword ptr [rdi-10h]
000000014004AB05  xor     esi, esi
000000014004AB07  movaps  xmm3, xmm7
000000014004AB0A  movss   xmm8, dword ptr [rdi-0Ch]
000000014004AB10  movaps  xmm6, xmm8
000000014004AB14  movss   xmm9, dword ptr [rdi-8]
000000014004AB1A  movaps  xmm5, xmm9
000000014004AB1E  mulss   xmm3, dword ptr [r9]
000000014004AB23  movaps  xmm2, xmm9
000000014004AB27  mulss   xmm5, dword ptr [r9+18h]
000000014004AB2D  movaps  xmm1, xmm7
000000014004AB30  mulss   xmm2, dword ptr [r9+1Ch]
000000014004AB36  movaps  xmm4, xmm8
000000014004AB3A  mulss   xmm6, dword ptr [r9+0Ch]
000000014004AB40  movaps  xmm0, xmm3
000000014004AB43  mulss   xmm9, dword ptr [r9+20h]
000000014004AB49  addss   xmm0, xmm6
000000014004AB4D  mulss   xmm1, dword ptr [r9+4]
000000014004AB53  mulss   xmm4, dword ptr [r9+10h]
000000014004AB59  mulss   xmm7, dword ptr [r9+8]
000000014004AB5F  addss   xmm0, xmm5
000000014004AB63  mulss   xmm8, dword ptr [r9+14h]
000000014004AB69  addss   xmm5, xmm3
000000014004AB6D  addss   xmm6, dword ptr [r15]
000000014004AB72  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004AB78  movaps  xmm0, xmm1
000000014004AB7B  addss   xmm0, xmm4
000000014004AB7F  addss   xmm4, dword ptr [r15+4]
000000014004AB85  addss   xmm5, xmm6
000000014004AB89  addss   xmm0, xmm2
000000014004AB8D  addss   xmm2, xmm1
000000014004AB91  movss   [rbp+39D0h+var_3A48], xmm5
000000014004AB96  movss   dword ptr [rsp+20h+arg_30+4], xmm0
000000014004AB9C  movaps  xmm0, xmm7
000000014004AB9F  addss   xmm0, xmm8
000000014004ABA4  addss   xmm2, xmm4
000000014004ABA8  addss   xmm8, dword ptr [r15+8]
000000014004ABAE  addss   xmm0, xmm9
000000014004ABB3  addss   xmm9, xmm7
000000014004ABB8  movss   [rbp+39D0h+var_3A44], xmm2
000000014004ABBD  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004ABC3  addss   xmm9, xmm8
000000014004ABC8  movss   [rbp+39D0h+var_3A40], xmm9
000000014004ABCE  cmp     [rdi-4], esi
000000014004ABD1  jle     loc_14004AD3E
000000014004ABD7  mov     r14d, [rsp+20h+arg_4C]
000000014004ABDC  xor     ebx, ebx
000000014004ABDE  xchg    ax, ax
000000014004ABE0  mov     rax, [rdi]
000000014004ABE3  lea     r8, [rbp+39D0h+var_20E0]
000000014004ABEA  mov     r9, r12
000000014004ABED  mov     rdx, r11
000000014004ABF0  mov     ecx, [rbx+rax]
000000014004ABF3  lea     eax, [rcx+rcx*2]
000000014004ABF6  movsxd  rcx, eax
000000014004ABF9  lea     rax, [rbp+39D0h+var_38E0]
000000014004AC00  lea     rax, [rax+rcx*4]
000000014004AC04  mov     [rsp+20h+arg_0], rax
000000014004AC09  lea     rcx, [rbp+39D0h+var_39A0]
000000014004AC0D  lea     rax, [rbp+39D0h+var_3A48]
000000014004AC11  mov     [rsp+28h], rax
000000014004AC16  mov     [rsp+20h+var_s0], r10
000000014004AC1B  call    sub_1400DAD20
000000014004AC20  test    eax, eax
000000014004AC22  jz      loc_14004AD15
000000014004AC28  mov     rax, [rdi]
000000014004AC2B  lea     r9, [rsp+20h+arg_20]
000000014004AC30  movss   xmm4, [rbp+39D0h+var_399C]
000000014004AC35  lea     r8, [rsp+20h+arg_30]
000000014004AC3A  movss   xmm3, [rbp+39D0h+var_39A0]
000000014004AC3F  movaps  xmm5, xmm4
000000014004AC42  movss   xmm2, [rbp+39D0h+var_3998]
000000014004AC47  movaps  xmm0, xmm3
000000014004AC4A  mov     ecx, [rbx+rax]
000000014004AC4D  movaps  xmm1, xmm2
000000014004AC50  movss   [rsp+20h+arg_10], xmm10
000000014004AC57  mov     edx, r14d
000000014004AC5A  movss   [rsp+20h+arg_8], xmm11
000000014004AC61  movss   dword ptr [rsp+20h+arg_0], xmm12
000000014004AC68  lea     eax, [rcx+rcx*2]
000000014004AC6B  movsxd  rcx, eax
000000014004AC6E  lea     rax, [rbp+39D0h+var_3994]
000000014004AC72  subss   xmm0, [rbp+rcx*4+39D0h+var_38E0]
000000014004AC7B  subss   xmm5, [rbp+rcx*4+39D0h+var_38DC]
000000014004AC84  subss   xmm1, [rbp+rcx*4+39D0h+var_38D8]
000000014004AC8D  mov     ecx, [rbp+39D0h+var_3A50]
000000014004AC90  mulss   xmm0, [rbp+39D0h+var_3994]
000000014004AC95  mulss   xmm1, [rbp+39D0h+var_398C]
000000014004AC9A  mulss   xmm5, [rbp+39D0h+var_3990]
000000014004AC9F  addss   xmm5, xmm0
000000014004ACA3  movaps  xmm0, xmm3
000000014004ACA6  subss   xmm0, dword ptr [r15]
000000014004ACAB  subss   xmm3, dword ptr [r12]
000000014004ACB1  addss   xmm5, xmm1
000000014004ACB5  movaps  xmm1, xmm4
000000014004ACB8  subss   xmm1, dword ptr [r15+4]
000000014004ACBE  subss   xmm4, dword ptr [r12+4]
000000014004ACC5  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004ACCB  movaps  xmm0, xmm2
000000014004ACCE  subss   xmm0, dword ptr [r15+8]
000000014004ACD4  subss   xmm2, dword ptr [r12+8]
000000014004ACDB  movss   dword ptr [rsp+28h], xmm5
000000014004ACE1  movss   [rsp+20h+arg_48], xmm5
000000014004ACE7  movss   dword ptr [rsp+20h+arg_30+4], xmm1
000000014004ACED  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004ACF3  movss   dword ptr [rsp+20h+arg_20], xmm3
000000014004ACF9  movss   dword ptr [rsp+20h+arg_20+4], xmm4
000000014004ACFF  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004AD05  mov     [rsp+20h+var_s0], rax
000000014004AD0A  call    sub_1400052C0
000000014004AD0F  mov     r13d, 1
000000014004AD15  mov     r10, [rbp+39D0h+var_3A08]
000000014004AD19  inc     esi
000000014004AD1B  mov     r11, [rbp+39D0h+var_3A00]
000000014004AD1F  add     rbx, 4
000000014004AD23  cmp     esi, [rdi-4]
000000014004AD26  jl      loc_14004ABE0
000000014004AD2C  mov     r14d, [rsp+20h+arg_40]
000000014004AD31  mov     r9, [rbp+39D0h+var_3A20]
000000014004AD35  mov     rdx, [rbp+39D0h+var_3A18]
000000014004AD39  mov     [rsp+20h+arg_44], r13d
000000014004AD3E  mov     eax, [rdx+10h]
000000014004AD41  inc     r14d
000000014004AD44  add     rdi, 38h ; '8'
000000014004AD48  mov     [rsp+20h+arg_40], r14d
000000014004AD4D  cmp     r14d, eax
000000014004AD50  jl      loc_14004AB00
000000014004AD56  xor     r14d, r14d
000000014004AD59  mov     [rsp+20h+arg_40], r14d
000000014004AD5E  cmp     [r11+10h], r14d
000000014004AD62  jle     loc_14004AFD8
000000014004AD68  lea     rdi, [r11+28h]
000000014004AD6C  nop     dword ptr [rax+00h]
000000014004AD70  movss   xmm7, dword ptr [rdi-10h]
000000014004AD75  xor     esi, esi
000000014004AD77  movaps  xmm3, xmm7
000000014004AD7A  movss   xmm8, dword ptr [rdi-0Ch]
000000014004AD80  movaps  xmm6, xmm8
000000014004AD84  movss   xmm9, dword ptr [rdi-8]
000000014004AD8A  movaps  xmm5, xmm9
000000014004AD8E  mulss   xmm3, dword ptr [r10]
000000014004AD93  movaps  xmm1, xmm9
000000014004AD97  mulss   xmm5, dword ptr [r10+18h]
000000014004AD9D  movaps  xmm2, xmm7
000000014004ADA0  mulss   xmm6, dword ptr [r10+0Ch]
000000014004ADA6  movaps  xmm4, xmm8
000000014004ADAA  mulss   xmm9, dword ptr [r10+20h]
000000014004ADB0  movaps  xmm0, xmm3
000000014004ADB3  mulss   xmm4, dword ptr [r10+10h]
000000014004ADB9  addss   xmm0, xmm6
000000014004ADBD  mulss   xmm2, dword ptr [r10+4]
000000014004ADC3  mulss   xmm1, dword ptr [r10+1Ch]
000000014004ADC9  mulss   xmm7, dword ptr [r10+8]
000000014004ADCF  addss   xmm0, xmm5
000000014004ADD3  mulss   xmm8, dword ptr [r10+14h]
000000014004ADD9  addss   xmm5, xmm3
000000014004ADDD  addss   xmm6, dword ptr [r12]
000000014004ADE3  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004ADE9  movaps  xmm0, xmm2
000000014004ADEC  addss   xmm0, xmm4
000000014004ADF0  addss   xmm4, dword ptr [r12+4]
000000014004ADF7  addss   xmm5, xmm6
000000014004ADFB  addss   xmm0, xmm1
000000014004ADFF  addss   xmm1, xmm2
000000014004AE03  movss   [rbp+39D0h+var_3A48], xmm5
000000014004AE08  movss   dword ptr [rsp+20h+arg_30+4], xmm0
000000014004AE0E  movaps  xmm0, xmm7
000000014004AE11  addss   xmm0, xmm8
000000014004AE16  addss   xmm4, xmm1
000000014004AE1A  addss   xmm8, dword ptr [r12+8]
000000014004AE21  addss   xmm0, xmm9
000000014004AE26  addss   xmm9, xmm7
000000014004AE2B  movss   [rbp+39D0h+var_3A44], xmm4
000000014004AE30  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004AE36  addss   xmm9, xmm8
000000014004AE3B  movss   [rbp+39D0h+var_3A40], xmm9
000000014004AE41  cmp     [rdi-4], esi
000000014004AE44  jle     loc_14004AFBB
000000014004AE4A  mov     r14d, [rsp+20h+arg_4C]
000000014004AE4F  xor     ebx, ebx
000000014004AE51  nop     dword ptr [rax+00h]
000000014004AE55  nop     word ptr [rax+rax+00000000h]
000000014004AE60  mov     rax, [rdi]
000000014004AE63  lea     r8, [rbp+39D0h+var_38E0]
000000014004AE6A  mov     ecx, [rbx+rax]
000000014004AE6D  lea     eax, [rcx+rcx*2]
000000014004AE70  movsxd  rcx, eax
000000014004AE73  lea     rax, [rbp+39D0h+var_20E0]
000000014004AE7A  lea     rax, [rax+rcx*4]
000000014004AE7E  mov     [rsp+20h+arg_0], rax
000000014004AE83  lea     rcx, [rbp+39D0h+var_39A0]
000000014004AE87  lea     rax, [rbp+39D0h+var_3A48]
000000014004AE8B  mov     [rsp+28h], rax
000000014004AE90  mov     [rsp+20h+var_s0], r9
000000014004AE95  mov     r9, r15
000000014004AE98  call    sub_1400DAD20
000000014004AE9D  test    eax, eax
000000014004AE9F  jz      loc_14004AF92
000000014004AEA5  mov     rax, [rdi]
000000014004AEA8  lea     r9, [rsp+20h+arg_20]
000000014004AEAD  movss   xmm4, [rbp+39D0h+var_399C]
000000014004AEB2  lea     r8, [rsp+20h+arg_30]
000000014004AEB7  movss   xmm3, [rbp+39D0h+var_39A0]
000000014004AEBC  movaps  xmm5, xmm4
000000014004AEBF  movss   xmm2, [rbp+39D0h+var_3998]
000000014004AEC4  movaps  xmm0, xmm3
000000014004AEC7  mov     ecx, [rbx+rax]
000000014004AECA  movaps  xmm1, xmm2
000000014004AECD  mov     edx, [rbp+39D0h+var_3A50]
000000014004AED0  movss   [rsp+20h+arg_10], xmm10
000000014004AED7  movss   [rsp+20h+arg_8], xmm11
000000014004AEDE  lea     eax, [rcx+rcx*2]
000000014004AEE1  movss   dword ptr [rsp+20h+arg_0], xmm12
000000014004AEE8  movsxd  rcx, eax
000000014004AEEB  lea     rax, [rbp+39D0h+var_3994]
000000014004AEEF  subss   xmm0, [rbp+rcx*4+39D0h+var_20E0]
000000014004AEF8  subss   xmm5, [rbp+rcx*4+39D0h+var_20DC]
000000014004AF01  subss   xmm1, [rbp+rcx*4+39D0h+var_20D8]
000000014004AF0A  mov     ecx, r14d
000000014004AF0D  mulss   xmm0, [rbp+39D0h+var_3994]
000000014004AF12  mulss   xmm1, [rbp+39D0h+var_398C]
000000014004AF17  mulss   xmm5, [rbp+39D0h+var_3990]
000000014004AF1C  addss   xmm5, xmm0
000000014004AF20  movaps  xmm0, xmm3
000000014004AF23  subss   xmm0, dword ptr [r12]
000000014004AF29  subss   xmm3, dword ptr [r15]
000000014004AF2E  addss   xmm5, xmm1
000000014004AF32  movaps  xmm1, xmm4
000000014004AF35  subss   xmm1, dword ptr [r12+4]
000000014004AF3C  subss   xmm4, dword ptr [r15+4]
000000014004AF42  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004AF48  movaps  xmm0, xmm2
000000014004AF4B  subss   xmm0, dword ptr [r12+8]
000000014004AF52  subss   xmm2, dword ptr [r15+8]
000000014004AF58  movss   dword ptr [rsp+28h], xmm5
000000014004AF5E  movss   [rsp+20h+arg_48], xmm5
000000014004AF64  movss   dword ptr [rsp+20h+arg_30+4], xmm1
000000014004AF6A  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004AF70  movss   dword ptr [rsp+20h+arg_20], xmm3
000000014004AF76  movss   dword ptr [rsp+20h+arg_20+4], xmm4
000000014004AF7C  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004AF82  mov     [rsp+20h+var_s0], rax
000000014004AF87  call    sub_1400052C0
000000014004AF8C  mov     r13d, 1
000000014004AF92  mov     r9, [rbp+39D0h+var_3A20]
000000014004AF96  inc     esi
000000014004AF98  mov     rdx, [rbp+39D0h+var_3A18]
000000014004AF9C  add     rbx, 4
000000014004AFA0  cmp     esi, [rdi-4]
000000014004AFA3  jl      loc_14004AE60
000000014004AFA9  mov     r14d, [rsp+20h+arg_40]
000000014004AFAE  mov     r10, [rbp+39D0h+var_3A08]
000000014004AFB2  mov     r11, [rbp+39D0h+var_3A00]
000000014004AFB6  mov     [rsp+20h+arg_44], r13d
000000014004AFBB  mov     r9, [rbp+39D0h+var_3A20]
000000014004AFBF  inc     r14d
000000014004AFC2  add     rdi, 38h ; '8'
000000014004AFC6  mov     [rsp+20h+arg_40], r14d
000000014004AFCB  cmp     r14d, [r11+10h]
000000014004AFCF  jl      loc_14004AD70
000000014004AFD5  mov     eax, [rdx+10h]
000000014004AFD8  xor     r8d, r8d
000000014004AFDB  mov     [rbp+39D0h+var_3A24], r8d
000000014004AFDF  test    eax, eax
000000014004AFE1  jle     loc_14004BF40
000000014004AFE7  mov     rcx, [rbp+39D0h+var_3A20]
000000014004AFEB  lea     rax, [rdx+20h]
000000014004AFEF  mov     [rbp+39D0h+var_3A10], rax
000000014004AFF3  xorps   xmm12, xmm12
000000014004AFF7  nop     word ptr [rax+rax+00000000h]
000000014004B000  cmp     dword ptr [r11+10h], 0
000000014004B005  movss   xmm6, dword ptr [rax-8]
000000014004B00A  movss   xmm10, dword ptr [rax-4]
000000014004B010  movaps  xmm4, xmm6
000000014004B013  movss   xmm5, dword ptr [rax]
000000014004B017  movaps  xmm11, xmm10
000000014004B01B  mulss   xmm11, dword ptr [rcx+0Ch]
000000014004B021  movaps  xmm3, xmm6
000000014004B024  mov     [rbp+39D0h+var_3A28], 0
000000014004B02B  mulss   xmm4, dword ptr [rcx]
000000014004B02F  movaps  xmm13, xmm10
000000014004B033  mulss   xmm13, dword ptr [rcx+10h]
000000014004B039  movaps  xmm2, xmm5
000000014004B03C  mulss   xmm10, dword ptr [rcx+14h]
000000014004B042  movaps  xmm1, xmm5
000000014004B045  mulss   xmm2, dword ptr [rcx+18h]
000000014004B04A  movaps  xmm0, xmm4
000000014004B04D  mulss   xmm3, dword ptr [rcx+4]
000000014004B052  addss   xmm0, xmm11
000000014004B057  mulss   xmm1, dword ptr [rcx+1Ch]
000000014004B05C  addss   xmm4, xmm2
000000014004B060  mulss   xmm6, dword ptr [rcx+8]
000000014004B065  mulss   xmm5, dword ptr [rcx+20h]
000000014004B06A  addss   xmm0, xmm2
000000014004B06E  addss   xmm11, dword ptr [r15]
000000014004B073  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004B079  movaps  xmm0, xmm3
000000014004B07C  addss   xmm0, xmm13
000000014004B081  addss   xmm13, dword ptr [r15+4]
000000014004B087  addss   xmm11, xmm4
000000014004B08C  addss   xmm3, xmm1
000000014004B090  addss   xmm0, xmm1
000000014004B094  movss   [rbp+39D0h+var_39E8], xmm11
000000014004B09A  addss   xmm13, xmm3
000000014004B09F  movss   [rbp+39D0h+var_3A48], xmm11
000000014004B0A5  movss   dword ptr [rsp+20h+arg_30+4], xmm0
000000014004B0AB  movaps  xmm0, xmm6
000000014004B0AE  addss   xmm0, xmm10
000000014004B0B3  addss   xmm10, dword ptr [r15+8]
000000014004B0B9  addss   xmm6, xmm5
000000014004B0BD  movss   [rbp+39D0h+var_39E4], xmm13
000000014004B0C3  movss   [rbp+39D0h+var_3A44], xmm13
000000014004B0C9  addss   xmm0, xmm5
000000014004B0CD  addss   xmm10, xmm6
000000014004B0D2  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004B0D8  movss   [rbp+39D0h+var_39EC], xmm10
000000014004B0DE  movss   [rbp+39D0h+var_3A40], xmm10
000000014004B0E4  jle     loc_14004BF1D
000000014004B0EA  lea     r13, [r11+20h]
000000014004B0EE  xchg    ax, ax
000000014004B0F0  movss   xmm7, dword ptr [r13-8]
000000014004B0F6  xor     ebx, ebx
000000014004B0F8  movss   xmm6, dword ptr [r13-4]
000000014004B0FE  movaps  xmm4, xmm7
000000014004B101  mulss   xmm4, dword ptr [r10]
000000014004B106  movaps  xmm8, xmm6
000000014004B10A  mov     r14d, [rax+20h]
000000014004B10E  xor     edi, edi
000000014004B110  mulss   xmm8, dword ptr [r10+0Ch]
000000014004B116  movaps  xmm9, xmm7
000000014004B11A  mov     [rbp+39D0h+var_3960], 0
000000014004B122  movss   xmm5, dword ptr [r13+0]
000000014004B128  movaps  xmm0, xmm4
000000014004B12B  mulss   xmm9, dword ptr [r10+4]
000000014004B131  movaps  xmm3, xmm6
000000014004B134  mov     [rbp+39D0h+var_3920], 0
000000014004B13F  mulss   xmm7, dword ptr [r10+8]
000000014004B145  addss   xmm0, xmm8
000000014004B14A  mulss   xmm6, dword ptr [r10+14h]
000000014004B150  movaps  xmm2, xmm5
000000014004B153  mulss   xmm2, dword ptr [r10+18h]
000000014004B159  movaps  xmm1, xmm5
000000014004B15C  mulss   xmm5, dword ptr [r10+20h]
000000014004B162  mulss   xmm3, dword ptr [r10+10h]
000000014004B168  addss   xmm0, xmm2
000000014004B16C  mulss   xmm1, dword ptr [r10+1Ch]
000000014004B172  addss   xmm4, xmm2
000000014004B176  addss   xmm8, dword ptr [r12]
000000014004B17C  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004B182  movaps  xmm0, xmm9
000000014004B186  addss   xmm0, xmm3
000000014004B18A  addss   xmm9, xmm1
000000014004B18F  addss   xmm3, dword ptr [r12+4]
000000014004B196  addss   xmm8, xmm4
000000014004B19B  addss   xmm0, xmm1
000000014004B19F  addss   xmm9, xmm3
000000014004B1A4  movss   [rbp+39D0h+var_3978], xmm8
000000014004B1AA  movaps  xmm4, xmm8
000000014004B1AE  subss   xmm4, xmm11
000000014004B1B3  movss   dword ptr [rsp+20h+arg_30+4], xmm0
000000014004B1B9  movaps  xmm0, xmm7
000000014004B1BC  addss   xmm0, xmm6
000000014004B1C0  movss   [rbp+39D0h+var_3974], xmm9
000000014004B1C6  addss   xmm7, xmm5
000000014004B1CA  addss   xmm6, dword ptr [r12+8]
000000014004B1D1  movss   [rbp+39D0h+var_39F4], xmm4
000000014004B1D6  addss   xmm0, xmm5
000000014004B1DA  movaps  xmm5, xmm9
000000014004B1DE  subss   xmm5, xmm13
000000014004B1E3  addss   xmm7, xmm6
000000014004B1E7  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004B1ED  movss   [rbp+39D0h+var_39F8], xmm5
000000014004B1F2  movss   [rbp+39D0h+var_3970], xmm7
000000014004B1F7  movaps  xmm6, xmm7
000000014004B1FA  subss   xmm6, xmm10
000000014004B1FF  movss   [rbp+39D0h+var_39F0], xmm6
000000014004B204  cmp     r14d, 4
000000014004B208  jl      loc_14004B554
000000014004B20E  mov     r11, [rax+28h]
000000014004B212  lea     edx, [rbx+1]
000000014004B215  lea     eax, [r14-4]
000000014004B219  shr     eax, 2
000000014004B21C  lea     r9d, [rbx+2]
000000014004B220  inc     eax
000000014004B222  lea     r8, [r11+0Ch]
000000014004B226  mov     r10d, eax
000000014004B229  lea     ebx, ds:0[rax*4]
000000014004B230  lea     rdi, ds:0[rax*4]
000000014004B238  nop     dword ptr [rax+rax+00000000h]
000000014004B240  mov     eax, [r8-0Ch]
000000014004B244  lea     eax, [rax+rax*2]
000000014004B247  cdqe
000000014004B249  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B252  movss   xmm0, [rbp+rax*4+39D0h+var_38E0]
000000014004B25B  subss   xmm2, xmm13
000000014004B260  movss   xmm1, [rbp+rax*4+39D0h+var_38D8]
000000014004B269  subss   xmm0, xmm11
000000014004B26E  subss   xmm1, xmm10
000000014004B273  mulss   xmm2, xmm5
000000014004B277  mulss   xmm0, xmm4
000000014004B27B  mulss   xmm1, xmm6
000000014004B27F  addss   xmm2, xmm0
000000014004B283  addss   xmm2, xmm1
000000014004B287  comiss  xmm2, xmm12
000000014004B28B  jnb     short loc_14004B2F8
000000014004B28D  mov     eax, [r8-8]
000000014004B291  lea     eax, [rax+rax*2]
000000014004B294  cdqe
000000014004B296  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B29F  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B2A8  subss   xmm1, xmm11
000000014004B2AD  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B2B6  subss   xmm2, xmm13
000000014004B2BB  subss   xmm0, xmm10
000000014004B2C0  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B2C6  movss   dword ptr [rsp+20h+arg_20+4], xmm2
000000014004B2CC  mulss   xmm2, xmm5
000000014004B2D0  mulss   xmm1, xmm4
000000014004B2D4  movss   dword ptr [rsp+20h+arg_28], xmm0
000000014004B2DA  mulss   xmm0, xmm6
000000014004B2DE  addss   xmm2, xmm1
000000014004B2E2  addss   xmm2, xmm0
000000014004B2E6  comiss  xmm2, xmm12
000000014004B2EA  jnb     short loc_14004B2F8
000000014004B2EC  lea     rax, [r9-2]
000000014004B2F0  sar     rax, 5
000000014004B2F4  or      dword ptr [rbp+rax*4+39D0h+var_3960], edx
000000014004B2F8  mov     eax, [r8]
000000014004B2FB  rol     edx, 1
000000014004B2FD  lea     eax, [rax+rax*2]
000000014004B300  cdqe
000000014004B302  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B30B  movss   xmm0, [rbp+rax*4+39D0h+var_38E0]
000000014004B314  subss   xmm2, xmm13
000000014004B319  movss   xmm1, [rbp+rax*4+39D0h+var_38D8]
000000014004B322  subss   xmm0, xmm11
000000014004B327  subss   xmm1, xmm10
000000014004B32C  mulss   xmm2, xmm5
000000014004B330  mulss   xmm0, xmm4
000000014004B334  mulss   xmm1, xmm6
000000014004B338  addss   xmm2, xmm0
000000014004B33C  addss   xmm2, xmm1
000000014004B340  comiss  xmm2, xmm12
000000014004B344  jnb     short loc_14004B3B1
000000014004B346  mov     eax, [r8+4]
000000014004B34A  lea     eax, [rax+rax*2]
000000014004B34D  cdqe
000000014004B34F  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B358  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B361  subss   xmm1, xmm11
000000014004B366  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B36F  subss   xmm2, xmm13
000000014004B374  subss   xmm0, xmm10
000000014004B379  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B37F  movss   dword ptr [rsp+20h+arg_20+4], xmm2
000000014004B385  mulss   xmm2, xmm5
000000014004B389  mulss   xmm1, xmm4
000000014004B38D  movss   dword ptr [rsp+20h+arg_28], xmm0
000000014004B393  mulss   xmm0, xmm6
000000014004B397  addss   xmm2, xmm1
000000014004B39B  addss   xmm2, xmm0
000000014004B39F  comiss  xmm2, xmm12
000000014004B3A3  jnb     short loc_14004B3B1
000000014004B3A5  lea     rax, [r9-1]
000000014004B3A9  sar     rax, 5
000000014004B3AD  or      dword ptr [rbp+rax*4+39D0h+var_3960], edx
000000014004B3B1  mov     eax, [r8+0Ch]
000000014004B3B5  rol     edx, 1
000000014004B3B7  lea     eax, [rax+rax*2]
000000014004B3BA  cdqe
000000014004B3BC  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B3C5  movss   xmm0, [rbp+rax*4+39D0h+var_38E0]
000000014004B3CE  subss   xmm2, xmm13
000000014004B3D3  movss   xmm1, [rbp+rax*4+39D0h+var_38D8]
000000014004B3DC  subss   xmm0, xmm11
000000014004B3E1  subss   xmm1, xmm10
000000014004B3E6  mulss   xmm2, xmm5
000000014004B3EA  mulss   xmm0, xmm4
000000014004B3EE  mulss   xmm1, xmm6
000000014004B3F2  addss   xmm2, xmm0
000000014004B3F6  addss   xmm2, xmm1
000000014004B3FA  comiss  xmm2, xmm12
000000014004B3FE  jnb     short loc_14004B46A
000000014004B400  mov     eax, [r8+10h]
000000014004B404  lea     eax, [rax+rax*2]
000000014004B407  cdqe
000000014004B409  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B412  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B41B  subss   xmm1, xmm11
000000014004B420  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B429  subss   xmm2, xmm13
000000014004B42E  subss   xmm0, xmm10
000000014004B433  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B439  movss   dword ptr [rsp+20h+arg_20+4], xmm2
000000014004B43F  mulss   xmm2, xmm5
000000014004B443  mulss   xmm1, xmm4
000000014004B447  movss   dword ptr [rsp+20h+arg_28], xmm0
000000014004B44D  mulss   xmm0, xmm6
000000014004B451  addss   xmm2, xmm1
000000014004B455  addss   xmm2, xmm0
000000014004B459  comiss  xmm2, xmm12
000000014004B45D  jnb     short loc_14004B46A
000000014004B45F  mov     rax, r9
000000014004B462  sar     rax, 5
000000014004B466  or      dword ptr [rbp+rax*4+39D0h+var_3960], edx
000000014004B46A  mov     eax, [r8+18h]
000000014004B46E  rol     edx, 1
000000014004B470  lea     eax, [rax+rax*2]
000000014004B473  cdqe
000000014004B475  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B47E  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B487  subss   xmm1, xmm11
000000014004B48C  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B495  subss   xmm2, xmm13
000000014004B49A  subss   xmm0, xmm10
000000014004B49F  movss   dword ptr [rsp+20h+arg_30], xmm1
000000014004B4A5  movss   dword ptr [rsp+20h+arg_30+4], xmm2
000000014004B4AB  mulss   xmm2, xmm5
000000014004B4AF  mulss   xmm1, xmm4
000000014004B4B3  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004B4B9  mulss   xmm0, xmm6
000000014004B4BD  addss   xmm2, xmm1
000000014004B4C1  addss   xmm2, xmm0
000000014004B4C5  comiss  xmm2, xmm12
000000014004B4C9  jnb     short loc_14004B536
000000014004B4CB  mov     eax, [r8+1Ch]
000000014004B4CF  lea     eax, [rax+rax*2]
000000014004B4D2  cdqe
000000014004B4D4  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B4DD  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B4E6  subss   xmm1, xmm11
000000014004B4EB  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B4F4  subss   xmm2, xmm13
000000014004B4F9  subss   xmm0, xmm10
000000014004B4FE  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B504  movss   dword ptr [rsp+20h+arg_20+4], xmm2
000000014004B50A  mulss   xmm2, xmm5
000000014004B50E  mulss   xmm1, xmm4
000000014004B512  movss   dword ptr [rsp+20h+arg_28], xmm0
000000014004B518  mulss   xmm0, xmm6
000000014004B51C  addss   xmm2, xmm1
000000014004B520  addss   xmm2, xmm0
000000014004B524  comiss  xmm2, xmm12
000000014004B528  jnb     short loc_14004B536
000000014004B52A  lea     rax, [r9+1]
000000014004B52E  sar     rax, 5
000000014004B532  or      dword ptr [rbp+rax*4+39D0h+var_3960], edx
000000014004B536  rol     edx, 1
000000014004B538  add     r8, 30h ; '0'
000000014004B53C  add     r9, 4
000000014004B540  sub     r10, 1
000000014004B544  jnz     loc_14004B240
000000014004B54A  cmp     ebx, r14d
000000014004B54D  jl      short loc_14004B566
000000014004B54F  jmp     loc_14004B652
000000014004B554  test    r14d, r14d
000000014004B557  jle     loc_14004B652
000000014004B55D  mov     r11, [rax+28h]
000000014004B561  mov     edx, 1
000000014004B566  lea     rax, [rdi+rdi*2]
000000014004B56A  movsxd  r9, ebx
000000014004B56D  mov     r10d, r14d
000000014004B570  lea     r8, [r11+rax*4]
000000014004B574  sub     r10d, ebx
000000014004B577  mov     eax, [r8]
000000014004B57A  lea     eax, [rax+rax*2]
000000014004B57D  cdqe
000000014004B57F  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B588  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B591  subss   xmm1, xmm11
000000014004B596  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B59F  subss   xmm2, xmm13
000000014004B5A4  subss   xmm0, xmm10
000000014004B5A9  movss   dword ptr [rsp+20h+arg_30], xmm1
000000014004B5AF  movss   dword ptr [rsp+20h+arg_30+4], xmm2
000000014004B5B5  mulss   xmm2, xmm5
000000014004B5B9  mulss   xmm1, xmm4
000000014004B5BD  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004B5C3  mulss   xmm0, xmm6
000000014004B5C7  addss   xmm2, xmm1
000000014004B5CB  addss   xmm2, xmm0
000000014004B5CF  comiss  xmm2, xmm12
000000014004B5D3  jnb     short loc_14004B63F
000000014004B5D5  mov     eax, [r8+4]
000000014004B5D9  lea     eax, [rax+rax*2]
000000014004B5DC  cdqe
000000014004B5DE  movss   xmm1, [rbp+rax*4+39D0h+var_38E0]
000000014004B5E7  movss   xmm2, [rbp+rax*4+39D0h+var_38DC]
000000014004B5F0  subss   xmm1, xmm11
000000014004B5F5  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004B5FE  subss   xmm2, xmm13
000000014004B603  subss   xmm0, xmm10
000000014004B608  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B60E  movss   dword ptr [rsp+20h+arg_20+4], xmm2
000000014004B614  mulss   xmm2, xmm5
000000014004B618  mulss   xmm1, xmm4
000000014004B61C  movss   dword ptr [rsp+20h+arg_28], xmm0
000000014004B622  mulss   xmm0, xmm6
000000014004B626  addss   xmm2, xmm1
000000014004B62A  addss   xmm2, xmm0
000000014004B62E  comiss  xmm2, xmm12
000000014004B632  jnb     short loc_14004B63F
000000014004B634  mov     rax, r9
000000014004B637  sar     rax, 5
000000014004B63B  or      dword ptr [rbp+rax*4+39D0h+var_3960], edx
000000014004B63F  rol     edx, 1
000000014004B641  add     r8, 0Ch
000000014004B645  inc     r9
000000014004B648  sub     r10, 1
000000014004B64C  jnz     loc_14004B577
000000014004B652  mov     r8d, [r13+20h]
000000014004B656  xor     ebx, ebx
000000014004B658  xor     esi, esi
000000014004B65A  cmp     r8d, 4
000000014004B65E  jl      loc_14004B9D5
000000014004B664  mov     rdi, [r13+28h]
000000014004B668  lea     eax, [r8-4]
000000014004B66C  shr     eax, 2
000000014004B66F  lea     edx, [rbx+1]
000000014004B672  inc     eax
000000014004B674  lea     r10d, [rbx+2]
000000014004B678  mov     r11d, eax
000000014004B67B  lea     r9, [rdi+0Ch]
000000014004B67F  lea     ebx, ds:0[rax*4]
000000014004B686  lea     rsi, ds:0[rax*4]
000000014004B68E  xchg    ax, ax
000000014004B690  mov     eax, [r9-0Ch]
000000014004B694  lea     eax, [rax+rax*2]
000000014004B697  cdqe
000000014004B699  movss   xmm2, [rbp+rax*4+39D0h+var_20DC]
000000014004B6A2  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004B6AB  subss   xmm2, xmm9
000000014004B6B0  movss   xmm1, [rbp+rax*4+39D0h+var_20D8]
000000014004B6B9  subss   xmm0, xmm8
000000014004B6BE  subss   xmm1, xmm7
000000014004B6C2  mulss   xmm2, xmm5
000000014004B6C6  mulss   xmm0, xmm4
000000014004B6CA  mulss   xmm1, xmm6
000000014004B6CE  addss   xmm2, xmm0
000000014004B6D2  addss   xmm2, xmm1
000000014004B6D6  comiss  xmm2, xmm12
000000014004B6DA  jbe     short loc_14004B752
000000014004B6DC  mov     eax, [r9-8]
000000014004B6E0  movaps  xmm3, xmm5
000000014004B6E3  lea     eax, [rax+rax*2]
000000014004B6E6  cdqe
000000014004B6E8  movss   xmm0, [rbp+rax*4+39D0h+var_20DC]
000000014004B6F1  movss   xmm1, [rbp+rax*4+39D0h+var_20E0]
000000014004B6FA  subss   xmm0, xmm9
000000014004B6FF  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004B708  subss   xmm1, xmm8
000000014004B70D  subss   xmm2, xmm7
000000014004B711  mulss   xmm3, xmm0
000000014004B715  movss   dword ptr [rsp+20h+arg_20+4], xmm0
000000014004B71B  movaps  xmm0, xmm4
000000014004B71E  mulss   xmm0, xmm1
000000014004B722  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B728  movaps  xmm1, xmm6
000000014004B72B  mulss   xmm1, xmm2
000000014004B72F  addss   xmm3, xmm0
000000014004B733  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004B739  addss   xmm3, xmm1
000000014004B73D  comiss  xmm3, xmm12
000000014004B741  jbe     short loc_14004B752
000000014004B743  lea     rax, [r10-2]
000000014004B747  sar     rax, 5
000000014004B74B  or      dword ptr [rbp+rax*4+39D0h+var_3920], edx
000000014004B752  mov     eax, [r9]
000000014004B755  rol     edx, 1
000000014004B757  lea     eax, [rax+rax*2]
000000014004B75A  cdqe
000000014004B75C  movss   xmm2, [rbp+rax*4+39D0h+var_20DC]
000000014004B765  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004B76E  subss   xmm2, xmm9
000000014004B773  movss   xmm1, [rbp+rax*4+39D0h+var_20D8]
000000014004B77C  subss   xmm0, xmm8
000000014004B781  subss   xmm1, xmm7
000000014004B785  mulss   xmm2, xmm5
000000014004B789  mulss   xmm0, xmm4
000000014004B78D  mulss   xmm1, xmm6
000000014004B791  addss   xmm2, xmm0
000000014004B795  addss   xmm2, xmm1
000000014004B799  comiss  xmm2, xmm12
000000014004B79D  jbe     short loc_14004B815
000000014004B79F  mov     eax, [r9+4]
000000014004B7A3  movaps  xmm3, xmm5
000000014004B7A6  lea     eax, [rax+rax*2]
000000014004B7A9  cdqe
000000014004B7AB  movss   xmm0, [rbp+rax*4+39D0h+var_20DC]
000000014004B7B4  movss   xmm1, [rbp+rax*4+39D0h+var_20E0]
000000014004B7BD  subss   xmm0, xmm9
000000014004B7C2  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004B7CB  subss   xmm1, xmm8
000000014004B7D0  subss   xmm2, xmm7
000000014004B7D4  mulss   xmm3, xmm0
000000014004B7D8  movss   dword ptr [rsp+20h+arg_20+4], xmm0
000000014004B7DE  movaps  xmm0, xmm4
000000014004B7E1  mulss   xmm0, xmm1
000000014004B7E5  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B7EB  movaps  xmm1, xmm6
000000014004B7EE  mulss   xmm1, xmm2
000000014004B7F2  addss   xmm3, xmm0
000000014004B7F6  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004B7FC  addss   xmm3, xmm1
000000014004B800  comiss  xmm3, xmm12
000000014004B804  jbe     short loc_14004B815
000000014004B806  lea     rax, [r10-1]
000000014004B80A  sar     rax, 5
000000014004B80E  or      dword ptr [rbp+rax*4+39D0h+var_3920], edx
000000014004B815  mov     eax, [r9+0Ch]
000000014004B819  rol     edx, 1
000000014004B81B  lea     eax, [rax+rax*2]
000000014004B81E  cdqe
000000014004B820  movss   xmm2, [rbp+rax*4+39D0h+var_20DC]
000000014004B829  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004B832  subss   xmm2, xmm9
000000014004B837  movss   xmm1, [rbp+rax*4+39D0h+var_20D8]
000000014004B840  subss   xmm0, xmm8
000000014004B845  subss   xmm1, xmm7
000000014004B849  mulss   xmm2, xmm5
000000014004B84D  mulss   xmm0, xmm4
000000014004B851  mulss   xmm1, xmm6
000000014004B855  addss   xmm2, xmm0
000000014004B859  addss   xmm2, xmm1
000000014004B85D  comiss  xmm2, xmm12
000000014004B861  jbe     short loc_14004B8D8
000000014004B863  mov     eax, [r9+10h]
000000014004B867  movaps  xmm3, xmm5
000000014004B86A  lea     eax, [rax+rax*2]
000000014004B86D  cdqe
000000014004B86F  movss   xmm0, [rbp+rax*4+39D0h+var_20DC]
000000014004B878  movss   xmm1, [rbp+rax*4+39D0h+var_20E0]
000000014004B881  subss   xmm0, xmm9
000000014004B886  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004B88F  subss   xmm1, xmm8
000000014004B894  subss   xmm2, xmm7
000000014004B898  mulss   xmm3, xmm0
000000014004B89C  movss   dword ptr [rsp+20h+arg_20+4], xmm0
000000014004B8A2  movaps  xmm0, xmm4
000000014004B8A5  mulss   xmm0, xmm1
000000014004B8A9  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B8AF  movaps  xmm1, xmm6
000000014004B8B2  mulss   xmm1, xmm2
000000014004B8B6  addss   xmm3, xmm0
000000014004B8BA  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004B8C0  addss   xmm3, xmm1
000000014004B8C4  comiss  xmm3, xmm12
000000014004B8C8  jbe     short loc_14004B8D8
000000014004B8CA  mov     rax, r10
000000014004B8CD  sar     rax, 5
000000014004B8D1  or      dword ptr [rbp+rax*4+39D0h+var_3920], edx
000000014004B8D8  mov     eax, [r9+18h]
000000014004B8DC  movaps  xmm3, xmm4
000000014004B8DF  rol     edx, 1
000000014004B8E1  lea     eax, [rax+rax*2]
000000014004B8E4  cdqe
000000014004B8E6  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004B8EF  movss   xmm1, [rbp+rax*4+39D0h+var_20DC]
000000014004B8F8  subss   xmm0, xmm8
000000014004B8FD  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004B906  subss   xmm1, xmm9
000000014004B90B  subss   xmm2, xmm7
000000014004B90F  mulss   xmm3, xmm0
000000014004B913  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004B919  movaps  xmm0, xmm5
000000014004B91C  mulss   xmm0, xmm1
000000014004B920  movss   dword ptr [rsp+20h+arg_30+4], xmm1
000000014004B926  movaps  xmm1, xmm6
000000014004B929  mulss   xmm1, xmm2
000000014004B92D  addss   xmm3, xmm0
000000014004B931  movss   dword ptr [rsp+20h+arg_38], xmm2
000000014004B937  addss   xmm3, xmm1
000000014004B93B  comiss  xmm3, xmm12
000000014004B93F  jbe     short loc_14004B9B7
000000014004B941  mov     eax, [r9+1Ch]
000000014004B945  movaps  xmm3, xmm5
000000014004B948  lea     eax, [rax+rax*2]
000000014004B94B  cdqe
000000014004B94D  movss   xmm0, [rbp+rax*4+39D0h+var_20DC]
000000014004B956  movss   xmm1, [rbp+rax*4+39D0h+var_20E0]
000000014004B95F  subss   xmm0, xmm9
000000014004B964  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004B96D  subss   xmm1, xmm8
000000014004B972  subss   xmm2, xmm7
000000014004B976  mulss   xmm3, xmm0
000000014004B97A  movss   dword ptr [rsp+20h+arg_20+4], xmm0
000000014004B980  movaps  xmm0, xmm4
000000014004B983  mulss   xmm0, xmm1
000000014004B987  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004B98D  movaps  xmm1, xmm6
000000014004B990  mulss   xmm1, xmm2
000000014004B994  addss   xmm3, xmm0
000000014004B998  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004B99E  addss   xmm3, xmm1
000000014004B9A2  comiss  xmm3, xmm12
000000014004B9A6  jbe     short loc_14004B9B7
000000014004B9A8  lea     rax, [r10+1]
000000014004B9AC  sar     rax, 5
000000014004B9B0  or      dword ptr [rbp+rax*4+39D0h+var_3920], edx
000000014004B9B7  rol     edx, 1
000000014004B9B9  add     r9, 30h ; '0'
000000014004B9BD  add     r10, 4
000000014004B9C1  sub     r11, 1
000000014004B9C5  jnz     loc_14004B690
000000014004B9CB  cmp     ebx, r8d
000000014004B9CE  jl      short loc_14004B9E7
000000014004B9D0  jmp     loc_14004BAE6
000000014004B9D5  test    r8d, r8d
000000014004B9D8  jle     loc_14004BAE6
000000014004B9DE  mov     rdi, [r13+28h]
000000014004B9E2  mov     edx, 1
000000014004B9E7  lea     rax, [rsi+rsi*2]
000000014004B9EB  movsxd  r10, ebx
000000014004B9EE  mov     r11d, r8d
000000014004B9F1  lea     r9, [rdi+rax*4]
000000014004B9F5  sub     r11d, ebx
000000014004B9F8  mov     eax, [r9]
000000014004B9FB  movaps  xmm3, xmm4
000000014004B9FE  lea     eax, [rax+rax*2]
000000014004BA01  cdqe
000000014004BA03  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004BA0C  movss   xmm1, [rbp+rax*4+39D0h+var_20DC]
000000014004BA15  subss   xmm0, xmm8
000000014004BA1A  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004BA23  subss   xmm1, xmm9
000000014004BA28  subss   xmm2, xmm7
000000014004BA2C  mulss   xmm3, xmm0
000000014004BA30  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004BA36  movaps  xmm0, xmm5
000000014004BA39  mulss   xmm0, xmm1
000000014004BA3D  movss   dword ptr [rsp+20h+arg_30+4], xmm1
000000014004BA43  movaps  xmm1, xmm6
000000014004BA46  mulss   xmm1, xmm2
000000014004BA4A  addss   xmm3, xmm0
000000014004BA4E  movss   dword ptr [rsp+20h+arg_38], xmm2
000000014004BA54  addss   xmm3, xmm1
000000014004BA58  comiss  xmm3, xmm12
000000014004BA5C  jbe     short loc_14004BAD3
000000014004BA5E  mov     eax, [r9+4]
000000014004BA62  movaps  xmm3, xmm5
000000014004BA65  lea     eax, [rax+rax*2]
000000014004BA68  cdqe
000000014004BA6A  movss   xmm0, [rbp+rax*4+39D0h+var_20DC]
000000014004BA73  movss   xmm1, [rbp+rax*4+39D0h+var_20E0]
000000014004BA7C  subss   xmm0, xmm9
000000014004BA81  movss   xmm2, [rbp+rax*4+39D0h+var_20D8]
000000014004BA8A  subss   xmm1, xmm8
000000014004BA8F  subss   xmm2, xmm7
000000014004BA93  mulss   xmm3, xmm0
000000014004BA97  movss   dword ptr [rsp+20h+arg_20+4], xmm0
000000014004BA9D  movaps  xmm0, xmm4
000000014004BAA0  mulss   xmm0, xmm1
000000014004BAA4  movss   dword ptr [rsp+20h+arg_20], xmm1
000000014004BAAA  movaps  xmm1, xmm6
000000014004BAAD  mulss   xmm1, xmm2
000000014004BAB1  addss   xmm3, xmm0
000000014004BAB5  movss   dword ptr [rsp+20h+arg_28], xmm2
000000014004BABB  addss   xmm3, xmm1
000000014004BABF  comiss  xmm3, xmm12
000000014004BAC3  jbe     short loc_14004BAD3
000000014004BAC5  mov     rax, r10
000000014004BAC8  sar     rax, 5
000000014004BACC  or      dword ptr [rbp+rax*4+39D0h+var_3920], edx
000000014004BAD3  rol     edx, 1
000000014004BAD5  add     r9, 0Ch
000000014004BAD9  inc     r10
000000014004BADC  sub     r11, 1
000000014004BAE0  jnz     loc_14004B9F8
000000014004BAE6  mov     rax, [rbp+39D0h+var_3A10]
000000014004BAEA  xor     r15d, r15d
000000014004BAED  mov     [rsp+20h+arg_40], r15d
000000014004BAF2  test    r14d, r14d
000000014004BAF5  jle     loc_14004BEEC
000000014004BAFB  xor     r12d, r12d
000000014004BAFE  xchg    ax, ax
000000014004BB00  xor     edi, edi
000000014004BB02  test    r8d, r8d
000000014004BB05  jle     loc_14004BEBD
000000014004BB0B  movsxd  rax, r15d
000000014004BB0E  lea     ebx, [rdi+1]
000000014004BB11  sar     rax, 5
000000014004BB15  mov     ecx, r15d
000000014004BB18  mov     r15, [rbp+39D0h+arg_30]
000000014004BB1F  mov     edx, 1
000000014004BB24  rol     edx, cl
000000014004BB26  mov     r14d, dword ptr [rbp+rax*4+39D0h+var_3960]
000000014004BB2B  and     r14d, edx
000000014004BB2E  xor     esi, esi
000000014004BB30  test    r14d, r14d
000000014004BB33  jz      short loc_14004BB49
000000014004BB35  movsxd  rax, edi
000000014004BB38  sar     rax, 5
000000014004BB3C  test    dword ptr [rbp+rax*4+39D0h+var_3920], ebx
000000014004BB43  jnz     loc_14004BE9F
000000014004BB49  mov     rax, [rbp+39D0h+var_3A10]
000000014004BB4D  lea     r9, [rsp+20h+arg_30]
000000014004BB52  lea     r8, [rsp+20h+arg_48]
000000014004BB57  lea     rcx, [rbp+39D0h+var_39C0]
000000014004BB5B  mov     rdx, [rax+28h]
000000014004BB5F  mov     eax, [rdx+r12]
000000014004BB63  lea     eax, [rax+rax*2]
000000014004BB66  cdqe
000000014004BB68  movss   xmm0, [rbp+rax*4+39D0h+var_38E0]
000000014004BB71  movss   xmm1, [rbp+rax*4+39D0h+var_38DC]
000000014004BB7A  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004BB80  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004BB89  mov     eax, [rdx+r12+4]
000000014004BB8E  mov     rdx, [r13+28h]
000000014004BB92  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004BB98  movss   dword ptr [rsp+20h+arg_30+4], xmm1
000000014004BB9E  lea     eax, [rax+rax*2]
000000014004BBA1  cdqe
000000014004BBA3  movss   xmm0, [rbp+rax*4+39D0h+var_38E0]
000000014004BBAC  movss   xmm1, [rbp+rax*4+39D0h+var_38DC]
000000014004BBB5  movss   dword ptr [rsp+20h+arg_20], xmm0
000000014004BBBB  movss   xmm0, [rbp+rax*4+39D0h+var_38D8]
000000014004BBC4  mov     eax, [rdx+rsi]
000000014004BBC7  movss   dword ptr [rsp+20h+arg_28], xmm0
000000014004BBCD  movss   dword ptr [rsp+20h+arg_20+4], xmm1
000000014004BBD3  lea     eax, [rax+rax*2]
000000014004BBD6  cdqe
000000014004BBD8  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004BBE1  movss   xmm1, [rbp+rax*4+39D0h+var_20DC]
000000014004BBEA  movss   [rbp+39D0h+var_39D0], xmm0
000000014004BBEF  movss   xmm0, [rbp+rax*4+39D0h+var_20D8]
000000014004BBF8  mov     eax, [rdx+rsi+4]
000000014004BBFC  lea     rdx, [rbp+39D0h+var_39B0]
000000014004BC00  movss   [rbp+39D0h+var_39C8], xmm0
000000014004BC05  movss   [rbp+39D0h+var_39CC], xmm1
000000014004BC0A  lea     eax, [rax+rax*2]
000000014004BC0D  cdqe
000000014004BC0F  movss   xmm0, [rbp+rax*4+39D0h+var_20E0]
000000014004BC18  movss   xmm1, [rbp+rax*4+39D0h+var_20DC]
000000014004BC21  movss   [rbp+39D0h+var_39E0], xmm0
000000014004BC26  movss   xmm0, [rbp+rax*4+39D0h+var_20D8]
000000014004BC2F  lea     rax, [rbp+39D0h+var_39E0]
000000014004BC33  mov     [rsp+20h+arg_0], rax
000000014004BC38  lea     rax, [rbp+39D0h+var_39D0]
000000014004BC3C  mov     [rsp+28h], rax
000000014004BC41  lea     rax, [rsp+20h+arg_20]
000000014004BC46  mov     [rsp+20h+var_s0], rax
000000014004BC4B  movss   [rbp+39D0h+var_39DC], xmm1
000000014004BC50  movss   [rbp+39D0h+var_39D8], xmm0
000000014004BC55  call    sub_14008CEB0
000000014004BC5A  test    eax, eax
000000014004BC5C  jz      loc_14004BE9F
000000014004BC62  movss   xmm13, dword ptr [rbp+39D0h+var_39B0]
000000014004BC68  movss   xmm14, dword ptr [rbp+39D0h+var_39B0+4]
000000014004BC6E  movaps  xmm6, xmm13
000000014004BC72  movss   xmm10, dword ptr [rbp+39D0h+var_39C0]
000000014004BC78  movaps  xmm7, xmm14
000000014004BC7C  movss   xmm11, dword ptr [rbp+39D0h+var_39C0+4]
000000014004BC82  subss   xmm6, xmm10
000000014004BC87  movss   xmm15, [rbp+39D0h+var_39A8]
000000014004BC8D  subss   xmm7, xmm11
000000014004BC92  movss   xmm9, [rbp+39D0h+var_39B8]
000000014004BC98  movaps  xmm8, xmm15
000000014004BC9C  movss   xmm2, [rbp+39D0h+var_39F8]
000000014004BCA1  subss   xmm8, xmm9
000000014004BCA6  movss   xmm0, [rbp+39D0h+var_39F4]
000000014004BCAB  movss   xmm1, [rbp+39D0h+var_39F0]
000000014004BCB0  mulss   xmm2, xmm7
000000014004BCB4  mulss   xmm0, xmm6
000000014004BCB8  mulss   xmm1, xmm8
000000014004BCBD  addss   xmm2, xmm0
000000014004BCC1  movss   dword ptr [rbp+39D0h+var_3A38], xmm6
000000014004BCC6  movss   dword ptr [rbp+39D0h+var_3A38+4], xmm7
000000014004BCCB  movss   [rbp+39D0h+var_3A30], xmm8
000000014004BCD1  addss   xmm2, xmm1
000000014004BCD5  comiss  xmm2, xmm12
000000014004BCD9  ja      loc_14004BE9F
000000014004BCDF  lea     rax, [rsp+20h+arg_20]
000000014004BCE4  lea     r9, [rsp+20h+arg_30]
000000014004BCE9  mov     [rsp+20h+var_s0], rax
000000014004BCEE  lea     r8, [rbp+39D0h+var_3A48]
000000014004BCF2  lea     rdx, [rbp+39D0h+var_39E0]
000000014004BCF6  lea     rcx, [rbp+39D0h+var_39D0]
000000014004BCFA  call    sub_140187410
000000014004BCFF  test    eax, eax
000000014004BD01  jz      loc_14004BE9F
000000014004BD07  lea     rax, [rbp+39D0h+var_39E0]
000000014004BD0B  lea     r9, [rbp+39D0h+var_39D0]
000000014004BD0F  mov     [rsp+20h+var_s0], rax
000000014004BD14  lea     r8, [rbp+39D0h+var_3978]
000000014004BD18  lea     rdx, [rsp+20h+arg_20]
000000014004BD1D  lea     rcx, [rsp+20h+arg_30]
000000014004BD22  call    sub_140187410
000000014004BD27  test    eax, eax
000000014004BD29  jz      loc_14004BE9F
000000014004BD2F  movaps  xmm0, xmm6
000000014004BD32  movaps  xmm2, xmm7
000000014004BD35  mulss   xmm0, xmm6
000000014004BD39  movaps  xmm1, xmm8
000000014004BD3D  mulss   xmm2, xmm7
000000014004BD41  mulss   xmm1, xmm8
000000014004BD46  addss   xmm2, xmm0
000000014004BD4A  xorps   xmm0, xmm0
000000014004BD4D  addss   xmm2, xmm1
000000014004BD51  sqrtss  xmm0, xmm2
000000014004BD55  ucomiss xmm0, xmm12
000000014004BD59  jz      short loc_14004BD8B
000000014004BD5B  movss   xmm2, cs:dword_1402783F4
000000014004BD63  divss   xmm2, xmm0
000000014004BD67  movaps  xmm0, xmm2
000000014004BD6A  movaps  xmm1, xmm2
000000014004BD6D  mulss   xmm0, xmm6
000000014004BD71  mulss   xmm1, xmm7
000000014004BD75  mulss   xmm2, xmm8
000000014004BD7A  movss   dword ptr [rbp+39D0h+var_3A38], xmm0
000000014004BD7F  movss   dword ptr [rbp+39D0h+var_3A38+4], xmm1
000000014004BD84  movss   [rbp+39D0h+var_3A30], xmm2
000000014004BD89  jmp     short loc_14004BD9A
000000014004BD8B  mov     [rbp+39D0h+var_3A38], 0
000000014004BD93  mov     [rbp+39D0h+var_3A30], 0
000000014004BD9A  movss   xmm0, cs:dword_140278338
000000014004BDA2  addss   xmm10, xmm13
000000014004BDA7  mov     edx, [rsp+20h+arg_4C]
000000014004BDAB  addss   xmm9, xmm15
000000014004BDB0  mov     ecx, [rbp+39D0h+var_3A50]
000000014004BDB3  addss   xmm11, xmm14
000000014004BDB8  lea     r9, [rsp+20h+arg_20]
000000014004BDBD  lea     r8, [rsp+20h+arg_30]
000000014004BDC2  mulss   xmm10, xmm0
000000014004BDC7  mulss   xmm9, xmm0
000000014004BDCC  mulss   xmm11, xmm0
000000014004BDD1  movaps  xmm0, xmm10
000000014004BDD5  movss   dword ptr [rsp+20h+arg_28], xmm9
000000014004BDDC  mov     eax, dword ptr [rsp+20h+arg_28]
000000014004BDE0  unpcklps xmm0, xmm11
000000014004BDE4  movaps  xmm1, xmm11
000000014004BDE8  subss   xmm11, dword ptr [r15+4]
000000014004BDEE  movsd   [rsp+20h+arg_20], xmm0
000000014004BDF4  movsd   [rbp+39D0h+var_39C0], xmm0
000000014004BDF9  movsd   [rbp+39D0h+var_39B0], xmm0
000000014004BDFE  movaps  xmm0, xmm10
000000014004BE02  subss   xmm10, dword ptr [r15]
000000014004BE07  mov     [rbp+39D0h+var_39B8], eax
000000014004BE0A  mov     [rbp+39D0h+var_39A8], eax
000000014004BE0D  mov     rax, [rbp+39D0h+arg_20]
000000014004BE14  movss   dword ptr [rsp+20h+arg_20+4], xmm11
000000014004BE1B  movss   dword ptr [rsp+20h+arg_20], xmm10
000000014004BE22  subss   xmm0, dword ptr [rax]
000000014004BE26  subss   xmm1, dword ptr [rax+4]
000000014004BE2B  movss   dword ptr [rsp+20h+arg_30], xmm0
000000014004BE31  movaps  xmm0, xmm9
000000014004BE35  subss   xmm0, dword ptr [rax+8]
000000014004BE3A  subss   xmm9, dword ptr [r15+8]
000000014004BE40  lea     rax, [rbp+39D0h+var_3A38]
000000014004BE44  movss   dword ptr [rsp+20h+arg_30+4], xmm1
000000014004BE4A  movss   dword ptr [rsp+20h+arg_38], xmm0
000000014004BE50  movss   xmm0, cs:dword_140278178
000000014004BE58  movss   [rsp+20h+arg_10], xmm0
000000014004BE5E  movss   xmm0, cs:dword_140278148
000000014004BE66  movss   [rsp+20h+arg_8], xmm0
000000014004BE6C  movss   xmm0, cs:dword_140278304
000000014004BE74  movss   dword ptr [rsp+20h+arg_0], xmm0
000000014004BE7A  movss   xmm0, [rsp+20h+arg_48]
000000014004BE80  movss   dword ptr [rsp+28h], xmm0
000000014004BE86  mov     [rsp+20h+var_s0], rax
000000014004BE8B  movss   dword ptr [rsp+20h+arg_28], xmm9
000000014004BE92  call    sub_1400052C0
000000014004BE97  mov     [rsp+20h+arg_44], 1
000000014004BE9F  mov     r8d, [r13+20h]
000000014004BEA3  inc     edi
000000014004BEA5  rol     ebx, 1
000000014004BEA7  add     rsi, 0Ch
000000014004BEAB  cmp     edi, r8d
000000014004BEAE  jl      loc_14004BB30
000000014004BEB4  mov     r15d, [rsp+20h+arg_40]
000000014004BEB9  mov     rax, [rbp+39D0h+var_3A10]
000000014004BEBD  inc     r15d
000000014004BEC0  add     r12, 0Ch
000000014004BEC4  mov     [rsp+20h+arg_40], r15d
000000014004BEC9  cmp     r15d, [rax+20h]
000000014004BECD  jl      loc_14004BB00
000000014004BED3  movss   xmm10, [rbp+39D0h+var_39EC]
000000014004BED9  movss   xmm11, [rbp+39D0h+var_39E8]
000000014004BEDF  movss   xmm13, [rbp+39D0h+var_39E4]
000000014004BEE5  mov     r12, [rbp+39D0h+arg_30]
000000014004BEEC  mov     edx, [rbp+39D0h+var_3A28]
000000014004BEEF  add     r13, 38h ; '8'
000000014004BEF3  mov     r11, [rbp+39D0h+var_3A00]
000000014004BEF7  inc     edx
000000014004BEF9  mov     r10, [rbp+39D0h+var_3A08]
000000014004BEFD  mov     [rbp+39D0h+var_3A28], edx
000000014004BF00  cmp     edx, [r11+10h]
000000014004BF04  jl      loc_14004B0F0
000000014004BF0A  mov     r15, [rbp+39D0h+arg_20]
000000014004BF11  mov     rcx, [rbp+39D0h+var_3A20]
000000014004BF15  mov     rdx, [rbp+39D0h+var_3A18]
000000014004BF19  mov     r8d, [rbp+39D0h+var_3A24]
000000014004BF1D  mov     r10, [rbp+39D0h+var_3A08]
000000014004BF21  inc     r8d
000000014004BF24  add     rax, 38h ; '8'
000000014004BF28  mov     [rbp+39D0h+var_3A24], r8d
000000014004BF2C  mov     [rbp+39D0h+var_3A10], rax
000000014004BF30  cmp     r8d, [rdx+10h]
000000014004BF34  jl      loc_14004B000
000000014004BF3A  mov     eax, [rsp+20h+arg_44]
000000014004BF3E  jmp     short loc_14004BF43
000000014004BF40  mov     eax, r13d
000000014004BF43  mov     r12, [rsp+20h+arg_3A70]
000000014004BF4B  mov     rdi, [rsp+20h+arg_3A78]
000000014004BF53  mov     rsi, [rsp+20h+arg_3AB0]
000000014004BF5B  mov     rcx, [rbp+39D0h+var_E0]
000000014004BF62  xor     rcx, rsp
000000014004BF65  call    1401F8B20h
000000014004BF6A  lea     r11, [rsp+20h+arg_3A80]
000000014004BF72  movaps  xmm6, xmmword ptr [r11-20h]
000000014004BF77  movaps  xmm7, xmmword ptr [r11-30h]
000000014004BF7C  movaps  xmm8, xmmword ptr [r11-40h]
000000014004BF81  movaps  xmm9, xmmword ptr [r11-50h]
000000014004BF86  movaps  xmm10, xmmword ptr [r11-60h]
000000014004BF8B  movaps  xmm11, xmmword ptr [r11-70h]
000000014004BF90  movaps  xmm12, xmmword ptr [r11-80h]
000000014004BF95  movaps  xmm13, xmmword ptr [r11-90h]
000000014004BF9D  movaps  xmm14, xmmword ptr [r11-0A0h]
000000014004BFA5  movaps  xmm15, xmmword ptr [r11-0B0h]
000000014004BFAD  mov     rsp, r11
000000014004BFB0  pop     r15
000000014004BFB2  pop     r14
000000014004BFB4  pop     r13
000000014004BFB6  pop     rbx
000000014004BFB7  pop     rbp
000000014004BFB8  retn
