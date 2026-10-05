; 0x1400d6b60: sub_1400D6B60
; Decompilation failed: call analysis failed
00000001400D6B60  push    rbp
00000001400D6B62  push    rbx
00000001400D6B63  push    rsi
00000001400D6B64  push    rdi
00000001400D6B65  push    r12
00000001400D6B67  push    r13
00000001400D6B69  push    r14
00000001400D6B6B  push    r15
00000001400D6B6D  lea     rbp, [rsp-1958h]
00000001400D6B75  mov     eax, 1A58h
00000001400D6B7A  call    sub_1401F89D0
00000001400D6B7F  sub     rsp, rax
00000001400D6B82  movaps  [rsp+38h+arg_19F8], xmm6
00000001400D6B8A  movaps  [rsp+38h+arg_19E8], xmm7
00000001400D6B92  movaps  [rsp+38h+arg_19D8], xmm8
00000001400D6B9B  movaps  [rsp+38h+arg_19C8], xmm9
00000001400D6BA4  movaps  [rsp+38h+arg_19B8], xmm10
00000001400D6BAD  movaps  [rsp+38h+arg_19A8], xmm11
00000001400D6BB6  movaps  [rsp+38h+arg_1998], xmm12
00000001400D6BBF  movaps  [rsp+38h+arg_1988], xmm13
00000001400D6BC8  movaps  [rsp+38h+arg_1978], xmm14
00000001400D6BD1  movaps  [rsp+38h+arg_1968], xmm15
00000001400D6BDA  mov     rax, cs:__security_cookie
00000001400D6BE1  xor     rax, rsp
00000001400D6BE4  mov     [rbp+1990h+var_F0], rax
00000001400D6BEB  movsxd  rax, r9d
00000001400D6BEE  mov     r14, rcx
00000001400D6BF1  mov     rcx, [rbp+1990h+arg_20]
00000001400D6BF8  mov     r12, rdx
00000001400D6BFB  imul    rdi, rax, 100D70h
00000001400D6C02  movss   xmm3, dword ptr [rcx]
00000001400D6C06  lea     rdx, cs:140000000h
00000001400D6C0D  mov     [rsp+44h], eax
00000001400D6C11  mov     r9, rax
00000001400D6C14  mov     [rbp+1990h+var_19B8], rax
00000001400D6C18  mov     rax, [rbp+1990h+arg_28]
00000001400D6C1F  mov     rsi, r8
00000001400D6C22  mov     [rbp+1990h+var_19C0], r8
00000001400D6C26  movss   xmm0, dword ptr [rdi+rdx+1ADA9290h]
00000001400D6C2F  comiss  xmm3, xmm0
00000001400D6C32  mov     [rbp+1990h+var_19A0], rdi
00000001400D6C36  jnb     short loc_1400D6C41
00000001400D6C38  comiss  xmm0, dword ptr [rax]
00000001400D6C3B  ja      loc_1400D8723
00000001400D6C41  movss   xmm1, dword ptr [rcx+4]
00000001400D6C46  movss   xmm0, dword ptr [rdi+rdx+1ADA9294h]
00000001400D6C4F  comiss  xmm1, xmm0
00000001400D6C52  jnb     short loc_1400D6C5E
00000001400D6C54  comiss  xmm0, dword ptr [rax+4]
00000001400D6C58  ja      loc_1400D8723
00000001400D6C5E  movss   xmm2, dword ptr [rcx+8]
00000001400D6C63  movss   xmm0, dword ptr [rdi+rdx+1ADA9298h]
00000001400D6C6C  comiss  xmm2, xmm0
00000001400D6C6F  jnb     short loc_1400D6C7B
00000001400D6C71  comiss  xmm0, dword ptr [rax+8]
00000001400D6C75  ja      loc_1400D8723
00000001400D6C7B  movss   xmm0, dword ptr [rdi+rdx+1ADA929Ch]
00000001400D6C84  comiss  xmm3, xmm0
00000001400D6C87  jbe     short loc_1400D6C92
00000001400D6C89  comiss  xmm0, dword ptr [rax]
00000001400D6C8C  jb      loc_1400D8723
00000001400D6C92  movss   xmm0, dword ptr [rdi+rdx+1ADA92A0h]
00000001400D6C9B  comiss  xmm1, xmm0
00000001400D6C9E  jbe     short loc_1400D6CAA
00000001400D6CA0  comiss  xmm0, dword ptr [rax+4]
00000001400D6CA4  jb      loc_1400D8723
00000001400D6CAA  movss   xmm0, dword ptr [rdi+rdx+1ADA92A4h]
00000001400D6CB3  comiss  xmm2, xmm0
00000001400D6CB6  jbe     short loc_1400D6CC2
00000001400D6CB8  comiss  xmm0, dword ptr [rax+8]
00000001400D6CBC  jb      loc_1400D8723
00000001400D6CC2  mov     dword ptr [r8], 3F800000h
00000001400D6CC9  movss   xmm9, dword ptr [rdi+rdx+1ADA9250h]
00000001400D6CD3  movss   xmm14, dword ptr [rdi+rdx+1ADA9254h]
00000001400D6CDD  movaps  xmm0, xmm9
00000001400D6CE1  movss   xmm7, dword ptr [rdi+rdx+1ADA925Ch]
00000001400D6CEA  movss   xmm10, dword ptr [rdi+rdx+1ADA9244h]
00000001400D6CF4  movss   xmm6, dword ptr [rcx]
00000001400D6CF8  movss   xmm11, dword ptr [rdi+rdx+1ADA9248h]
00000001400D6D02  subss   xmm6, xmm10
00000001400D6D07  movss   xmm2, dword ptr [rcx+4]
00000001400D6D0C  movss   xmm5, dword ptr [rdi+rdx+1ADA9270h]
00000001400D6D15  subss   xmm2, xmm11
00000001400D6D1A  movss   xmm15, dword ptr [rdi+rdx+1ADA9260h]
00000001400D6D24  movss   xmm12, dword ptr [rdi+rdx+1ADA924Ch]
00000001400D6D2E  movss   xmm3, dword ptr [rcx+8]
00000001400D6D33  movss   xmm13, dword ptr [rdi+rdx+1ADA9258h]
00000001400D6D3D  subss   xmm3, xmm12
00000001400D6D42  movss   xmm4, dword ptr [rdi+rdx+1ADA9268h]
00000001400D6D4B  movaps  xmm1, xmm13
00000001400D6D4F  movss   xmm8, dword ptr [rdi+rdx+1ADA9264h]
00000001400D6D59  mulss   xmm0, xmm6
00000001400D6D5D  mulss   xmm1, xmm3
00000001400D6D61  movss   [rsp+38h+arg_30], xmm14
00000001400D6D68  mulss   xmm14, xmm2
00000001400D6D6D  movss   [rsp+38h+arg_34], xmm15
00000001400D6D74  mulss   xmm15, xmm2
00000001400D6D79  addss   xmm14, xmm0
00000001400D6D7E  movaps  xmm0, xmm7
00000001400D6D81  mulss   xmm0, xmm6
00000001400D6D85  addss   xmm15, xmm0
00000001400D6D8A  movss   xmm0, dword ptr [rdi+rdx+1ADA926Ch]
00000001400D6D93  movss   dword ptr [rbp+1990h+var_1A10], xmm0
00000001400D6D98  addss   xmm14, xmm1
00000001400D6D9D  mulss   xmm0, xmm2
00000001400D6DA1  movaps  xmm1, xmm8
00000001400D6DA5  movss   xmm2, dword ptr [rax]
00000001400D6DA9  mulss   xmm1, xmm3
00000001400D6DAD  subss   xmm2, xmm10
00000001400D6DB2  movss   [rbp+1990h+var_19F0], xmm0
00000001400D6DB7  movaps  xmm0, xmm4
00000001400D6DBA  mulss   xmm0, xmm6
00000001400D6DBE  movss   xmm6, [rbp+1990h+var_19F0]
00000001400D6DC3  addss   xmm15, xmm1
00000001400D6DC8  mulss   xmm9, xmm2
00000001400D6DCD  movaps  xmm1, xmm5
00000001400D6DD0  mulss   xmm1, xmm3
00000001400D6DD4  addss   xmm6, xmm0
00000001400D6DD8  movss   xmm0, dword ptr [rax+4]
00000001400D6DDD  movss   xmm3, [rsp+38h+arg_30]
00000001400D6DE3  subss   xmm0, xmm11
00000001400D6DE8  mulss   xmm7, xmm2
00000001400D6DEC  addss   xmm6, xmm1
00000001400D6DF0  mulss   xmm4, xmm2
00000001400D6DF4  movss   xmm1, dword ptr [rax+8]
00000001400D6DF9  mulss   xmm3, xmm0
00000001400D6DFD  subss   xmm1, xmm12
00000001400D6E02  movss   [rbp+1990h+var_19FC], xmm0
00000001400D6E07  movss   [rbp+1990h+var_1948], xmm14
00000001400D6E0D  addss   xmm3, xmm9
00000001400D6E12  movss   [rbp+1990h+var_1944], xmm15
00000001400D6E18  movss   xmm9, [rsp+38h+arg_34]
00000001400D6E1F  mulss   xmm9, xmm0
00000001400D6E24  mulss   xmm5, xmm1
00000001400D6E28  addss   xmm9, xmm7
00000001400D6E2D  mulss   xmm13, xmm1
00000001400D6E32  movss   xmm7, dword ptr [rbp+1990h+var_1A10]
00000001400D6E37  mulss   xmm7, xmm0
00000001400D6E3B  movaps  xmm0, xmm14
00000001400D6E3F  mulss   xmm8, xmm1
00000001400D6E44  addss   xmm3, xmm13
00000001400D6E49  addss   xmm7, xmm4
00000001400D6E4D  movss   [rbp+1990h+var_1940], xmm6
00000001400D6E52  movss   [rbp+1990h+var_1A00], xmm2
00000001400D6E57  addss   xmm9, xmm8
00000001400D6E5C  movss   [rbp+1990h+var_19F8], xmm1
00000001400D6E61  movss   [rbp+1990h+var_1938], xmm3
00000001400D6E66  addss   xmm7, xmm5
00000001400D6E6A  movss   xmm5, dword ptr [rdi+rdx+1ADA9284h]
00000001400D6E73  mulss   xmm0, xmm5
00000001400D6E77  movss   [rbp+1990h+var_1934], xmm9
00000001400D6E7D  movss   [rbp+1990h+var_1930], xmm7
00000001400D6E82  movss   xmm1, dword ptr cs:xmmword_140279840
00000001400D6E8A  xorps   xmm2, xmm2
00000001400D6E8D  cvttss2si r15d, xmm0
00000001400D6E92  mov     edx, 0FFFFFFFFh
00000001400D6E97  mov     r8d, 1
00000001400D6E9D  mov     eax, edx
00000001400D6E9F  movaps  xmm0, xmm5
00000001400D6EA2  mulss   xmm0, xmm3
00000001400D6EA6  subss   xmm3, xmm14
00000001400D6EAB  mov     [rbp+1990h+var_1970], r15d
00000001400D6EAF  cvttss2si ecx, xmm0
00000001400D6EB3  movaps  xmm0, xmm15
00000001400D6EB7  mulss   xmm3, xmm5
00000001400D6EBB  mov     [rbp+1990h+var_19F0], ecx
00000001400D6EBE  mulss   xmm0, xmm5
00000001400D6EC2  comiss  xmm3, xmm2
00000001400D6EC5  cvttss2si r13d, xmm0
00000001400D6ECA  cmova   eax, r8d
00000001400D6ECE  mov     [rbp+1990h+var_1900], eax
00000001400D6ED4  mov     eax, r8d
00000001400D6ED7  movaps  xmm0, xmm9
00000001400D6EDB  andps   xmm3, xmm1
00000001400D6EDE  mulss   xmm0, xmm5
00000001400D6EE2  subss   xmm9, xmm15
00000001400D6EE7  mov     [rbp+1990h+var_196C], r13d
00000001400D6EEB  movss   [rsp+38h+arg_30], xmm3
00000001400D6EF1  movaps  xmm13, xmm3
00000001400D6EF5  movss   [rbp+1990h+var_1960], xmm3
00000001400D6EFA  cvttss2si r11d, xmm0
00000001400D6EFF  mulss   xmm9, xmm5
00000001400D6F04  movaps  xmm0, xmm6
00000001400D6F07  mov     [rbp+1990h+var_19B0], r11d
00000001400D6F0B  mulss   xmm0, xmm5
00000001400D6F0F  comiss  xmm9, xmm2
00000001400D6F13  andps   xmm9, xmm1
00000001400D6F17  movss   dword ptr [rbp+1990h+var_1A10+4], xmm3
00000001400D6F1C  cvttss2si ebx, xmm0
00000001400D6F20  cmovbe  eax, edx
00000001400D6F23  mov     [rbp+1990h+var_19AC], eax
00000001400D6F26  mov     [rbp+1990h+var_18FC], eax
00000001400D6F2C  mov     eax, r8d
00000001400D6F2F  movaps  xmm0, xmm7
00000001400D6F32  movss   dword ptr [rbp+1990h+var_1958+4], xmm3
00000001400D6F37  subss   xmm7, xmm6
00000001400D6F3B  mulss   xmm0, xmm5
00000001400D6F3F  mov     [rbp+1990h+var_1968], ebx
00000001400D6F42  movss   [rsp+38h+arg_34], xmm9
00000001400D6F49  movaps  xmm14, xmm9
00000001400D6F4D  movss   [rbp+1990h+var_195C], xmm9
00000001400D6F53  movaps  xmm10, xmm9
00000001400D6F57  cvttss2si r10d, xmm0
00000001400D6F5C  mulss   xmm7, xmm5
00000001400D6F60  mov     [rbp+1990h+var_19A4], r10d
00000001400D6F64  movss   [rbp+1990h+var_1950], xmm9
00000001400D6F6A  comiss  xmm7, xmm2
00000001400D6F6D  andps   xmm7, xmm1
00000001400D6F70  movss   dword ptr [rbp+1990h+var_1A10], xmm7
00000001400D6F75  movaps  xmm15, xmm7
00000001400D6F79  cmovbe  eax, edx
00000001400D6F7C  movss   dword ptr [rbp+1990h+var_1958], xmm7
00000001400D6F81  mov     [rbp+1990h+var_19A8], eax
00000001400D6F84  movaps  xmm12, xmm7
00000001400D6F88  mov     [rbp+1990h+var_18F8], eax
00000001400D6F8E  movss   [rbp+1990h+var_194C], xmm7
00000001400D6F93  cmp     r15d, ecx
00000001400D6F96  jnz     short loc_1400D6FAC
00000001400D6F98  cmp     r13d, r11d
00000001400D6F9B  jnz     short loc_1400D6FAC
00000001400D6F9D  cmp     ebx, r10d
00000001400D6FA0  jnz     short loc_1400D6FAC
00000001400D6FA2  xor     eax, eax
00000001400D6FA4  mov     [rbp+1990h+var_19D8], eax
00000001400D6FA7  jmp     loc_1400D727D
00000001400D6FAC  movss   xmm3, dword ptr cs:xmmword_140279870
00000001400D6FB4  xor     r8d, r8d
00000001400D6FB7  movsd   xmm4, cs:qword_140278508
00000001400D6FBF  xor     ecx, ecx
00000001400D6FC1  mov     rsi, 8000000000000000h
00000001400D6FCB  nop     dword ptr [rax+rax+00h]
00000001400D6FD0  movaps  xmm0, xmm5
00000001400D6FD3  xorps   xmm2, xmm2
00000001400D6FD6  mulss   xmm0, [rbp+rcx*4+1990h+var_1948]
00000001400D6FDC  cvtss2sd xmm2, xmm0
00000001400D6FE0  xorps   xmm0, xmm0
00000001400D6FE3  cvttsd2si rdx, xmm2
00000001400D6FE8  movaps  xmm1, xmm2
00000001400D6FEB  cmp     rdx, rsi
00000001400D6FEE  jz      short loc_1400D7015
00000001400D6FF0  xorps   xmm0, xmm0
00000001400D6FF3  cvtsi2sd xmm0, rdx
00000001400D6FF8  ucomisd xmm0, xmm2
00000001400D6FFC  jz      short loc_1400D7015
00000001400D6FFE  unpcklpd xmm1, xmm1
00000001400D7002  movmskpd rax, xmm1
00000001400D7007  xorps   xmm1, xmm1
00000001400D700A  and     eax, 1
00000001400D700D  sub     rdx, rax
00000001400D7010  cvtsi2sd xmm1, rdx
00000001400D7015  cmp     [rbp+rcx*4+1990h+var_1900], 0
00000001400D701D  addsd   xmm1, xmm4
00000001400D7021  subsd   xmm2, xmm1
00000001400D7025  cvtpd2ps xmm1, xmm2
00000001400D7029  jle     short loc_1400D702E
00000001400D702B  xorps   xmm1, xmm3
00000001400D702E  addss   xmm1, xmm1
00000001400D7032  movaps  xmm0, xmm1
00000001400D7035  test    rcx, rcx
00000001400D7038  jnz     short loc_1400D7051
00000001400D703A  mulss   xmm0, xmm10
00000001400D703F  subss   xmm0, [rbp+rcx*4+1990h+var_1960]
00000001400D7045  movss   [rbp+rcx*4+1990h+var_1960], xmm0
00000001400D704B  movaps  xmm0, xmm12
00000001400D704F  jmp     short loc_1400D7072
00000001400D7051  mulss   xmm0, xmm13
00000001400D7056  subss   xmm0, [rbp+rcx*4+1990h+var_1960]
00000001400D705C  movss   [rbp+rcx*4+1990h+var_1960], xmm0
00000001400D7062  cmp     rcx, 2
00000001400D7066  jz      short loc_1400D706E
00000001400D7068  movaps  xmm0, xmm12
00000001400D706C  jmp     short loc_1400D7072
00000001400D706E  movaps  xmm0, xmm10
00000001400D7072  mulss   xmm1, xmm0
00000001400D7076  lea     r9, [rcx+3]
00000001400D707A  movaps  xmm0, xmm5
00000001400D707D  xorps   xmm2, xmm2
00000001400D7080  mulss   xmm0, [rbp+rcx*4+1990h+var_1944]
00000001400D7086  subss   xmm1, [rbp+r9*4+1990h+var_1960]
00000001400D708D  cvtss2sd xmm2, xmm0
00000001400D7091  movss   [rbp+r9*4+1990h+var_1960], xmm1
00000001400D7098  xorps   xmm0, xmm0
00000001400D709B  cvttsd2si rdx, xmm2
00000001400D70A0  movaps  xmm1, xmm2
00000001400D70A3  cmp     rdx, rsi
00000001400D70A6  jz      short loc_1400D70CD
00000001400D70A8  xorps   xmm0, xmm0
00000001400D70AB  cvtsi2sd xmm0, rdx
00000001400D70B0  ucomisd xmm0, xmm2
00000001400D70B4  jz      short loc_1400D70CD
00000001400D70B6  unpcklpd xmm1, xmm1
00000001400D70BA  movmskpd rax, xmm1
00000001400D70BF  xorps   xmm1, xmm1
00000001400D70C2  and     eax, 1
00000001400D70C5  sub     rdx, rax
00000001400D70C8  cvtsi2sd xmm1, rdx
00000001400D70CD  cmp     [rbp+rcx*4+1990h+var_18FC], 0
00000001400D70D5  addsd   xmm1, xmm4
00000001400D70D9  subsd   xmm2, xmm1
00000001400D70DD  cvtpd2ps xmm1, xmm2
00000001400D70E1  jle     short loc_1400D70E6
00000001400D70E3  xorps   xmm1, xmm3
00000001400D70E6  lea     eax, [r8+1]
00000001400D70EA  addss   xmm1, xmm1
00000001400D70EE  test    eax, eax
00000001400D70F0  jnz     short loc_1400D70F8
00000001400D70F2  movaps  xmm2, xmm10
00000001400D70F6  jmp     short loc_1400D70FC
00000001400D70F8  movaps  xmm2, xmm13
00000001400D70FC  movaps  xmm0, xmm1
00000001400D70FF  mulss   xmm0, xmm2
00000001400D7103  subss   xmm0, [rbp+rcx*4+1990h+var_195C]
00000001400D7109  movss   [rbp+rcx*4+1990h+var_195C], xmm0
00000001400D710F  cmp     r8d, 1
00000001400D7113  jz      short loc_1400D711B
00000001400D7115  movaps  xmm0, xmm12
00000001400D7119  jmp     short loc_1400D711F
00000001400D711B  movaps  xmm0, xmm10
00000001400D711F  mulss   xmm1, xmm0
00000001400D7123  xorps   xmm2, xmm2
00000001400D7126  movaps  xmm0, xmm5
00000001400D7129  mulss   xmm0, [rbp+rcx*4+1990h+var_1940]
00000001400D712F  subss   xmm1, [rbp+rcx*4+1990h+var_1950]
00000001400D7135  cvtss2sd xmm2, xmm0
00000001400D7139  movss   [rbp+rcx*4+1990h+var_1950], xmm1
00000001400D713F  xorps   xmm0, xmm0
00000001400D7142  cvttsd2si rdx, xmm2
00000001400D7147  movaps  xmm1, xmm2
00000001400D714A  cmp     rdx, rsi
00000001400D714D  jz      short loc_1400D7174
00000001400D714F  xorps   xmm0, xmm0
00000001400D7152  cvtsi2sd xmm0, rdx
00000001400D7157  ucomisd xmm0, xmm2
00000001400D715B  jz      short loc_1400D7174
00000001400D715D  unpcklpd xmm1, xmm1
00000001400D7161  movmskpd rax, xmm1
00000001400D7166  xorps   xmm1, xmm1
00000001400D7169  and     eax, 1
00000001400D716C  sub     rdx, rax
00000001400D716F  cvtsi2sd xmm1, rdx
00000001400D7174  cmp     [rbp+rcx*4+1990h+var_18F8], 0
00000001400D717C  addsd   xmm1, xmm4
00000001400D7180  subsd   xmm2, xmm1
00000001400D7184  cvtpd2ps xmm2, xmm2
00000001400D7188  jle     short loc_1400D718D
00000001400D718A  xorps   xmm2, xmm3
00000001400D718D  lea     eax, [r8+2]
00000001400D7191  addss   xmm2, xmm2
00000001400D7195  test    eax, eax
00000001400D7197  jnz     short loc_1400D719F
00000001400D7199  movaps  xmm1, xmm10
00000001400D719D  jmp     short loc_1400D71A3
00000001400D719F  movaps  xmm1, xmm13
00000001400D71A3  movaps  xmm0, xmm2
00000001400D71A6  mulss   xmm0, xmm1
00000001400D71AA  subss   xmm0, dword ptr [rbp+rcx*4+1990h+var_1958]
00000001400D71B0  movss   dword ptr [rbp+rcx*4+1990h+var_1958], xmm0
00000001400D71B6  test    r8d, r8d
00000001400D71B9  jz      short loc_1400D71C1
00000001400D71BB  movaps  xmm0, xmm12
00000001400D71BF  jmp     short loc_1400D71C5
00000001400D71C1  movaps  xmm0, xmm10
00000001400D71C5  mulss   xmm0, xmm2
00000001400D71C9  add     r8d, 3
00000001400D71CD  subss   xmm0, [rbp+rcx*4+1990h+var_194C]
00000001400D71D3  movss   [rbp+rcx*4+1990h+var_194C], xmm0
00000001400D71D9  mov     rcx, r9
00000001400D71DC  cmp     r9, 3
00000001400D71E0  jl      loc_1400D6FD0
00000001400D71E6  mov     eax, [rbp+1990h+var_19F0]
00000001400D71E9  mov     rsi, [rbp+1990h+var_19C0]
00000001400D71ED  sub     eax, r15d
00000001400D71F0  cdq
00000001400D71F1  mov     ecx, eax
00000001400D71F3  mov     eax, r10d
00000001400D71F6  sub     eax, ebx
00000001400D71F8  xor     ecx, edx
00000001400D71FA  sub     ecx, edx
00000001400D71FC  cdq
00000001400D71FD  xor     eax, edx
00000001400D71FF  sub     eax, edx
00000001400D7201  add     ecx, eax
00000001400D7203  mov     eax, r11d
00000001400D7206  sub     eax, r13d
00000001400D7209  cdq
00000001400D720A  xor     eax, edx
00000001400D720C  sub     eax, edx
00000001400D720E  add     ecx, eax
00000001400D7210  mov     eax, 4000h
00000001400D7215  mov     [rbp+1990h+var_19D8], eax
00000001400D7218  cmp     ecx, eax
00000001400D721A  jg      short loc_1400D7227
00000001400D721C  mov     [rbp+1990h+var_19D8], ecx
00000001400D721F  test    ecx, ecx
00000001400D7221  js      loc_1400D8723
00000001400D7227  movss   xmm0, [rbp+1990h+var_194C]
00000001400D722C  movss   xmm15, [rbp+1990h+var_195C]
00000001400D7232  movss   xmm14, [rbp+1990h+var_1960]
00000001400D7238  mov     r9, [rbp+1990h+var_19B8]
00000001400D723C  movss   [rsp+38h+arg_8], xmm0
00000001400D7242  movss   xmm0, [rbp+1990h+var_1950]
00000001400D7247  movss   dword ptr [rsp+40h], xmm0
00000001400D724D  movss   xmm0, dword ptr [rbp+1990h+var_1958+4]
00000001400D7252  movss   dword ptr [rbp+1990h+var_1A10+4], xmm0
00000001400D7257  movss   xmm0, dword ptr [rbp+1990h+var_1958]
00000001400D725C  movss   [rsp+38h+arg_34], xmm15
00000001400D7263  movss   xmm15, [rsp+38h+arg_8]
00000001400D726A  movss   [rsp+38h+arg_30], xmm14
00000001400D7271  movss   xmm14, dword ptr [rsp+40h]
00000001400D7278  movss   dword ptr [rbp+1990h+var_1A10], xmm0
00000001400D727D  movss   xmm6, cs:dword_140278338
00000001400D7285  xor     edx, edx
00000001400D7287  movss   xmm8, cs:dword_140278654
00000001400D7290  mov     [rsp+38h+arg_8], edx
00000001400D7294  movss   xmm9, cs:dword_1402786B8
00000001400D729D  movss   xmm7, cs:dword_1402784B0
00000001400D72A5  test    r15d, r15d
00000001400D72A8  js      loc_1400D8632
00000001400D72AE  lea     rcx, cs:140000000h
00000001400D72B5  mov     r8d, [rdi+rcx+1ADA9274h]
00000001400D72BD  mov     eax, r8d
00000001400D72C0  shl     eax, 6
00000001400D72C3  cmp     r15d, eax
00000001400D72C6  jge     loc_1400D8632
00000001400D72CC  test    r13d, r13d
00000001400D72CF  js      loc_1400D8632
00000001400D72D5  mov     eax, [rdi+rcx+1ADA9278h]
00000001400D72DC  shl     eax, 6
00000001400D72DF  cmp     r13d, eax
00000001400D72E2  jge     loc_1400D8632
00000001400D72E8  test    ebx, ebx
00000001400D72EA  js      loc_1400D8632
00000001400D72F0  mov     edx, [rdi+rcx+1ADA927Ch]
00000001400D72F7  mov     eax, edx
00000001400D72F9  shl     eax, 6
00000001400D72FC  cmp     ebx, eax
00000001400D72FE  jge     loc_1400D862E
00000001400D7304  mov     ecx, r13d
00000001400D7307  mov     eax, ebx
00000001400D7309  sar     ecx, 6
00000001400D730C  sar     eax, 6
00000001400D730F  imul    ecx, edx
00000001400D7312  add     ecx, eax
00000001400D7314  mov     eax, r15d
00000001400D7317  imul    ecx, r8d
00000001400D731B  sar     eax, 6
00000001400D731E  add     ecx, eax
00000001400D7320  lea     rax, cs:140000000h
00000001400D7327  mov     rax, [rdi+rax+1ADA9288h]
00000001400D732F  movsxd  rcx, ecx
00000001400D7332  movsxd  r8, dword ptr [rax+rcx*4]
00000001400D7336  cmp     r8d, 0FFFFFFFFh
00000001400D733A  jz      loc_1400D862E
00000001400D7340  mov     ecx, r13d
00000001400D7343  mov     eax, ebx
00000001400D7345  sar     eax, 3
00000001400D7348  and     eax, 7
00000001400D734B  sar     ecx, 3
00000001400D734E  and     ecx, 7
00000001400D7351  lea     ecx, [rax+rcx*8]
00000001400D7354  mov     eax, r15d
00000001400D7357  sar     eax, 3
00000001400D735A  and     eax, 7
00000001400D735D  lea     eax, [rax+rcx*8]
00000001400D7360  imul    rcx, r8, 201h
00000001400D7367  movsxd  rdx, eax
00000001400D736A  imul    rax, r9, 4035Ch
00000001400D7371  add     rdx, rcx
00000001400D7374  add     rdx, rax
00000001400D7377  lea     rax, cs:140000000h
00000001400D737E  movsxd  r8, (rva dword_140404A6C+1A9A4D44h)[rax+rdx*4]
00000001400D7386  cmp     r8d, 0FFFFFFFFh
00000001400D738A  jz      loc_1400D862E
00000001400D7390  mov     ecx, r13d
00000001400D7393  mov     [rsp+38h+arg_0], 3F800000h
00000001400D739B  and     ecx, 7
00000001400D739E  mov     eax, ebx
00000001400D73A0  and     eax, 7
00000001400D73A3  lea     ecx, [rax+rcx*8]
00000001400D73A6  mov     eax, r15d
00000001400D73A9  and     eax, 7
00000001400D73AC  lea     edx, [rax+rcx*8]
00000001400D73AF  imul    rcx, r8, 1B12h
00000001400D73B6  add     rdx, rcx
00000001400D73B9  lea     rcx, cs:140000000h
00000001400D73C0  mov     [rbp+1990h+var_19E0], rdx
00000001400D73C4  mov     eax, (rva dword_140404A6C+13D617DCh)[rcx+rdx*4]
00000001400D73CB  test    eax, eax
00000001400D73CD  jz      loc_1400D770B
00000001400D73D3  mov     ecx, eax
00000001400D73D5  movd    xmm8, r15d
00000001400D73DA  and     eax, 3FFh
00000001400D73DF  shr     ecx, 18h
00000001400D73E2  cvtdq2ps xmm8, xmm8
00000001400D73E6  lea     r8, cs:140000000h
00000001400D73ED  mov     [rbp+1990h+var_1A08], eax
00000001400D73F0  and     ecx, 3
00000001400D73F3  mov     [rsp+38h+arg_4], 0
00000001400D73FB  mov     [rsp+40h], ecx
00000001400D73FF  movss   xmm0, dword ptr [rdi+r8+1ADA9280h]
00000001400D7409  imul    rax, 0ED0h
00000001400D7410  movd    xmm9, ebx
00000001400D7415  addss   xmm8, xmm6
00000001400D741A  cvtdq2ps xmm9, xmm9
00000001400D741E  mov     [rbp+1990h+var_19E8], rax
00000001400D7422  movd    xmm11, r13d
00000001400D7427  cvtdq2ps xmm11, xmm11
00000001400D742B  cmp     dword ptr [rax+r8+412C20CCh], 0
00000001400D7434  addss   xmm9, xmm6
00000001400D7439  mulss   xmm8, xmm0
00000001400D743E  mulss   xmm11, xmm0
00000001400D7443  mulss   xmm9, xmm0
00000001400D7448  jle     loc_1400D76F2
00000001400D744E  mov     rdi, [rbp+1990h+var_19C0]
00000001400D7452  lea     rsi, (rva dword_140404A6C+40EBD6C8h)[r8]
00000001400D7459  mov     r8, [rbp+1990h+var_19E8]
00000001400D745D  lea     r9, cs:140000000h
00000001400D7464  add     rsi, rax
00000001400D7467  mov     r15d, 1
00000001400D746D  mov     eax, [rsp+38h+arg_4]
00000001400D7471  test    (rva dword_140404A6C+13D61FDCh)[r9+rdx*4], r15d
00000001400D7479  jnz     loc_1400D76BF
00000001400D747F  movaps  xmm0, cs:xmmword_140278D30
00000001400D7486  lea     rdx, dword_1402F6188
00000001400D748D  movsxd  rbx, dword ptr [rsi-24h]
00000001400D7491  movaps  xmm1, xmm0
00000001400D7494  movups  [rbp+1990h+var_1928], xmm0
00000001400D7498  mov     [rbp+1990h+var_1908], 3F800000h
00000001400D74A2  movups  [rbp+1990h+var_1918], xmm0
00000001400D74A6  movd    xmm0, ecx
00000001400D74AA  lea     rcx, [rbp+1990h+var_1928]
00000001400D74AE  cvtdq2ps xmm0, xmm0
00000001400D74B1  cvtps2pd xmm1, xmm0
00000001400D74B4  mulsd   xmm1, cs:qword_1402785A0
00000001400D74BC  cvtpd2ps xmm7, xmm1
00000001400D74C0  movaps  xmm2, xmm7
00000001400D74C3  call    sub_14007B2A0
00000001400D74C8  movss   xmm6, dword ptr [rsi-20h]
00000001400D74CD  lea     rdx, dword_1402F6188
00000001400D74D4  movss   xmm4, dword ptr [rsi-1Ch]
00000001400D74D9  lea     rcx, [rbp+1990h+var_1928]
00000001400D74DD  movss   xmm5, dword ptr [rsi-18h]
00000001400D74E2  movaps  xmm2, xmm6
00000001400D74E5  mulss   xmm2, dword ptr [rbp+1990h+var_1928]
00000001400D74EA  movaps  xmm3, xmm6
00000001400D74ED  mulss   xmm3, dword ptr [rbp+1990h+var_1928+4]
00000001400D74F2  movaps  xmm0, xmm4
00000001400D74F5  mulss   xmm0, dword ptr [rbp+1990h+var_1928+0Ch]
00000001400D74FA  addss   xmm2, xmm8
00000001400D74FF  mulss   xmm6, dword ptr [rbp+1990h+var_1928+8]
00000001400D7504  movaps  xmm1, xmm5
00000001400D7507  mulss   xmm1, dword ptr [rbp+1990h+var_1918+8]
00000001400D750F  addss   xmm3, xmm11
00000001400D7514  addss   xmm2, xmm0
00000001400D7518  movaps  xmm0, xmm4
00000001400D751B  mulss   xmm0, dword ptr [rbp+1990h+var_1918]
00000001400D7520  addss   xmm6, xmm9
00000001400D7525  mulss   xmm4, dword ptr [rbp+1990h+var_1918+4]
00000001400D752A  addss   xmm2, xmm1
00000001400D752E  movaps  xmm1, xmm5
00000001400D7531  mulss   xmm1, dword ptr [rbp+1990h+var_1918+0Ch]
00000001400D7539  addss   xmm3, xmm0
00000001400D753D  movups  xmm0, xmmword ptr [rsi-14h]
00000001400D7541  mulss   xmm5, [rbp+1990h+var_1908]
00000001400D7549  addss   xmm6, xmm4
00000001400D754D  movups  [rbp+1990h+var_1928], xmm0
00000001400D7551  movups  xmm0, xmmword ptr [rsi-4]
00000001400D7555  addss   xmm3, xmm1
00000001400D7559  movss   [rbp+1990h+var_1960], xmm2
00000001400D755E  addss   xmm6, xmm5
00000001400D7562  movaps  xmm2, xmm7
00000001400D7565  movups  [rbp+1990h+var_1918], xmm0
00000001400D7569  movss   xmm0, dword ptr [rsi+0Ch]
00000001400D756E  movss   [rbp+1990h+var_1908], xmm0
00000001400D7576  movss   [rbp+1990h+var_195C], xmm3
00000001400D757B  movss   dword ptr [rbp+1990h+var_1958], xmm6
00000001400D7580  call    sub_14007B2A0
00000001400D7585  imul    rcx, rbx, 13D0h
00000001400D758C  lea     rax, cs:140000000h
00000001400D7593  cmp     qword ptr (rva dword_140404A6C+4267A624h)[rax+rcx], 0
00000001400D759C  jz      loc_1400D76A5
00000001400D75A2  lea     rbx, dword_140404A6C+4267A61Ch
00000001400D75A9  add     rbx, rcx
00000001400D75AC  lea     r9, [rbp+1990h+var_1928]
00000001400D75B0  mov     rdx, rbx
00000001400D75B3  lea     r8, [rbp+1990h+var_1960]
00000001400D75B7  lea     rcx, [rbp+1990h+var_18F0]
00000001400D75BE  call    sub_14011BF40
00000001400D75C3  lea     rax, [rbp+1990h+var_1938]
00000001400D75C7  mov     rdx, rbx
00000001400D75CA  lea     r9, [rbp+1990h+var_1948]
00000001400D75CE  mov     [rsp+38h+var_18], rax
00000001400D75D3  lea     r8, [rbp+1990h+var_18F0]
00000001400D75DA  lea     rcx, [rbp+1990h+var_1998]
00000001400D75DE  call    sub_1400DA960
00000001400D75E3  mov     ebx, [rbp+1990h+var_1968]
00000001400D75E6  lea     r9, cs:140000000h
00000001400D75ED  mov     ecx, [rsp+40h]
00000001400D75F1  mov     rdx, [rbp+1990h+var_19E0]
00000001400D75F5  mov     r8, [rbp+1990h+var_19E8]
00000001400D75F9  test    eax, eax
00000001400D75FB  jz      loc_1400D76BB
00000001400D7601  movss   xmm2, [rbp+1990h+var_1980]
00000001400D7606  comiss  xmm2, dword ptr [rdi]
00000001400D7609  jnb     loc_1400D76BB
00000001400D760F  movss   xmm0, [rbp+1990h+var_1998]
00000001400D7614  movss   xmm1, [rbp+1990h+var_1994]
00000001400D7619  mov     eax, [rsp+44h]
00000001400D761D  movss   dword ptr [r14], xmm0
00000001400D7622  movss   xmm0, [rbp+1990h+var_1990]
00000001400D7627  movss   dword ptr [r14+4], xmm1
00000001400D762D  movss   xmm1, [rbp+1990h+var_198C]
00000001400D7632  movss   dword ptr [r14+8], xmm0
00000001400D7638  movss   xmm0, [rbp+1990h+var_1988]
00000001400D763D  movss   dword ptr [r12], xmm1
00000001400D7643  movss   xmm1, [rbp+1990h+var_1984]
00000001400D7648  movss   dword ptr [r12+8], xmm1
00000001400D764F  movss   dword ptr [r12+4], xmm0
00000001400D7656  mov     cs:dword_140404A6C+1167FE68h, eax
00000001400D765C  mov     eax, [rbp+1990h+var_1970]
00000001400D765F  mov     cs:dword_140404A6C+1167FE6Ch, eax
00000001400D7665  mov     eax, [rbp+1990h+var_1A08]
00000001400D7668  mov     cs:dword_140404A6C+1167FE94h, eax
00000001400D766E  mov     eax, [rsp+38h+arg_4]
00000001400D7672  mov     cs:dword_140404A6C+1167FE9Ch, eax
00000001400D7678  mov     cs:dword_140404A6C+1167FE84h, 0
00000001400D7682  mov     cs:dword_140404A6C+1167FE70h, r13d
00000001400D7689  mov     cs:dword_140404A6C+1167FE74h, ebx
00000001400D768F  mov     cs:dword_140404A6C+1167FE90h, 0FFFFFFFFh
00000001400D7699  mov     cs:dword_140404A6C+1167FE98h, ecx
00000001400D769F  movss   dword ptr [rdi], xmm2
00000001400D76A3  jmp     short loc_1400D76BF
00000001400D76A5  mov     ebx, [rbp+1990h+var_1968]
00000001400D76A8  lea     r9, cs:140000000h
00000001400D76AF  mov     ecx, [rsp+40h]
00000001400D76B3  mov     rdx, [rbp+1990h+var_19E0]
00000001400D76B7  mov     r8, [rbp+1990h+var_19E8]
00000001400D76BB  mov     eax, [rsp+38h+arg_4]
00000001400D76BF  inc     eax
00000001400D76C1  rol     r15d, 1
00000001400D76C4  add     rsi, 74h ; 't'
00000001400D76C8  mov     [rsp+38h+arg_4], eax
00000001400D76CC  cmp     eax, [r8+r9+412C20CCh]
00000001400D76D4  jl      loc_1400D7471
00000001400D76DA  movss   xmm6, cs:dword_140278338
00000001400D76E2  movss   xmm7, cs:dword_1402784B0
00000001400D76EA  mov     rdi, [rbp+1990h+var_19A0]
00000001400D76EE  mov     rsi, [rbp+1990h+var_19C0]
00000001400D76F2  movss   xmm9, cs:dword_1402786B8
00000001400D76FB  lea     rcx, cs:140000000h
00000001400D7702  movss   xmm8, cs:dword_140278654
00000001400D770B  mov     eax, (rva dword_140404A6C+13D60FDCh)[rcx+rdx*4]
00000001400D7712  mov     r8d, eax
00000001400D7715  mov     r15d, eax
00000001400D7718  test    eax, eax
00000001400D771A  jle     loc_1400D7A66
00000001400D7720  and     eax, 7Fh
00000001400D7723  and     r15d, 0C00h
00000001400D772A  imul    rcx, rax, 2418h
00000001400D7731  mov     [rsp+40h], eax
00000001400D7735  and     r8d, 0C00h
00000001400D773C  lea     rax, dword_140404A6C+671FC120h
00000001400D7743  movss   xmm0, dword ptr [rcx+rax]
00000001400D7748  movss   xmm1, dword ptr [rcx+rax+4]
00000001400D774E  movss   [rbp+1990h+var_1A00], xmm0
00000001400D7753  movss   xmm0, dword ptr [rcx+rax+8]
00000001400D7759  movss   [rbp+1990h+var_19F8], xmm0
00000001400D775E  movss   [rbp+1990h+var_19FC], xmm1
00000001400D7763  cmp     r8d, 400h
00000001400D776A  jnz     short loc_1400D7771
00000001400D776C  movaps  xmm2, xmm7
00000001400D776F  jmp     short loc_1400D778D
00000001400D7771  cmp     r15d, 800h
00000001400D7778  jnz     short loc_1400D7780
00000001400D777A  movaps  xmm2, xmm8
00000001400D777E  jmp     short loc_1400D778D
00000001400D7780  cmp     r15d, 0C00h
00000001400D7787  jnz     short loc_1400D779D
00000001400D7789  movaps  xmm2, xmm9
00000001400D778D  lea     rdx, dword_1402F6188
00000001400D7794  lea     rcx, [rbp+1990h+var_1A00]
00000001400D7798  call    sub_14007B4D0
00000001400D779D  movss   xmm0, [rbp+1990h+var_1A00]
00000001400D77A2  lea     rax, cs:140000000h
00000001400D77A9  movss   xmm2, dword ptr [rdi+rax+1ADA9280h]
00000001400D77B2  movd    xmm1, [rbp+1990h+var_1970]
00000001400D77B7  mov     [rbp+1990h+var_1908], 3F800000h
00000001400D77C1  cvtdq2ps xmm1, xmm1
00000001400D77C4  addss   xmm1, xmm6
00000001400D77C8  mulss   xmm1, xmm2
00000001400D77CC  addss   xmm0, xmm1
00000001400D77D0  movd    xmm1, r13d
00000001400D77D5  cvtdq2ps xmm1, xmm1
00000001400D77D8  movss   [rbp+1990h+var_1A00], xmm0
00000001400D77DD  movss   xmm0, [rbp+1990h+var_19FC]
00000001400D77E2  mulss   xmm1, xmm2
00000001400D77E6  addss   xmm0, xmm1
00000001400D77EA  movd    xmm1, ebx
00000001400D77EE  cvtdq2ps xmm1, xmm1
00000001400D77F1  movss   [rbp+1990h+var_19FC], xmm0
00000001400D77F6  movss   xmm0, [rbp+1990h+var_19F8]
00000001400D77FB  addss   xmm1, xmm6
00000001400D77FF  mulss   xmm1, xmm2
00000001400D7803  addss   xmm0, xmm1
00000001400D7807  movss   [rbp+1990h+var_19F8], xmm0
00000001400D780C  movaps  xmm0, cs:xmmword_140278D30
00000001400D7813  movaps  xmm1, xmm0
00000001400D7816  movups  [rbp+1990h+var_1928], xmm0
00000001400D781A  movups  [rbp+1990h+var_1918], xmm0
00000001400D781E  cmp     r15d, 400h
00000001400D7825  jnz     short loc_1400D782C
00000001400D7827  movaps  xmm2, xmm7
00000001400D782A  jmp     short loc_1400D7848
00000001400D782C  cmp     r15d, 800h
00000001400D7833  jnz     short loc_1400D783B
00000001400D7835  movaps  xmm2, xmm8
00000001400D7839  jmp     short loc_1400D7848
00000001400D783B  cmp     r15d, 0C00h
00000001400D7842  jnz     short loc_1400D7858
00000001400D7844  movaps  xmm2, xmm9
00000001400D7848  lea     rdx, dword_1402F6188
00000001400D784F  lea     rcx, [rbp+1990h+var_1928]
00000001400D7853  call    sub_14007B2A0
00000001400D7858  mov     r9d, [rsp+40h]
00000001400D785D  lea     rax, [rbp+1990h+var_1938]
00000001400D7861  mov     [rsp+38h+var_s0], rax
00000001400D7866  lea     r8, [rsp+38h+arg_0]
00000001400D786B  lea     rax, [rbp+1990h+var_1948]
00000001400D786F  mov     [rsp+38h+var_8], rax
00000001400D7874  lea     rdx, [rsp+38h+arg_20]
00000001400D7879  lea     rax, [rbp+1990h+var_1928]
00000001400D787D  mov     [rsp+38h+var_10], rax
00000001400D7882  lea     rcx, [rsp+38h+arg_10]
00000001400D7887  lea     rax, [rbp+1990h+var_1A00]
00000001400D788B  mov     [rsp+38h+var_18], rax
00000001400D7890  call    sub_1400D97A0
00000001400D7895  lea     rcx, cs:140000000h
00000001400D789C  test    eax, eax
00000001400D789E  jz      loc_1400D7A71
00000001400D78A4  movss   xmm7, [rsp+38h+arg_0]
00000001400D78AA  comiss  xmm7, dword ptr [rsi]
00000001400D78AD  jnb     loc_1400D7A71
00000001400D78B3  movss   xmm3, [rsp+38h+arg_10]
00000001400D78B9  movss   xmm2, [rsp+38h+arg_18]
00000001400D78BF  movaps  xmm0, xmm3
00000001400D78C2  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D78CB  movaps  xmm1, xmm2
00000001400D78CE  mov     r11d, [rsp+44h]
00000001400D78D3  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D78DC  mov     r15d, [rbp+1990h+var_1970]
00000001400D78E0  movss   xmm6, [rsp+38h+arg_14]
00000001400D78E6  mov     eax, [rsp+40h]
00000001400D78EA  movaps  xmm5, xmm6
00000001400D78ED  mulss   xmm5, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D78F6  movaps  xmm4, xmm6
00000001400D78F9  addss   xmm5, xmm0
00000001400D78FD  movaps  xmm0, xmm3
00000001400D7900  addss   xmm5, xmm1
00000001400D7904  movaps  xmm1, xmm2
00000001400D7907  movss   dword ptr [r14], xmm5
00000001400D790C  mulss   xmm4, dword ptr [rdi+rcx+1ADA9260h]
00000001400D7915  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D791E  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D7927  addss   xmm4, xmm0
00000001400D792B  addss   xmm4, xmm1
00000001400D792F  movss   dword ptr [r14+4], xmm4
00000001400D7935  mulss   xmm2, dword ptr [rdi+rcx+1ADA9270h]
00000001400D793E  mulss   xmm6, dword ptr [rdi+rcx+1ADA9264h]
00000001400D7947  mulss   xmm3, dword ptr [rdi+rcx+1ADA9258h]
00000001400D7950  addss   xmm6, xmm3
00000001400D7954  movss   xmm3, dword ptr [rsp+38h+arg_28]
00000001400D795A  movaps  xmm1, xmm3
00000001400D795D  addss   xmm6, xmm2
00000001400D7961  movss   dword ptr [r14+8], xmm6
00000001400D7967  addss   xmm5, dword ptr [rdi+rcx+1ADA9244h]
00000001400D7970  movss   dword ptr [r14], xmm5
00000001400D7975  addss   xmm4, dword ptr [rdi+rcx+1ADA9248h]
00000001400D797E  movss   xmm5, dword ptr [rsp+38h+arg_20+4]
00000001400D7984  movaps  xmm2, xmm5
00000001400D7987  movss   dword ptr [r14+4], xmm4
00000001400D798D  addss   xmm6, dword ptr [rdi+rcx+1ADA924Ch]
00000001400D7996  movss   xmm4, dword ptr [rsp+38h+arg_20]
00000001400D799C  movaps  xmm0, xmm4
00000001400D799F  movss   dword ptr [r14+8], xmm6
00000001400D79A5  mulss   xmm2, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D79AE  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D79B7  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D79C0  addss   xmm2, xmm0
00000001400D79C4  movaps  xmm0, xmm4
00000001400D79C7  addss   xmm2, xmm1
00000001400D79CB  movaps  xmm1, xmm3
00000001400D79CE  movss   dword ptr [r12], xmm2
00000001400D79D4  movaps  xmm2, xmm5
00000001400D79D7  mulss   xmm2, dword ptr [rdi+rcx+1ADA9260h]
00000001400D79E0  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D79E9  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D79F2  addss   xmm2, xmm0
00000001400D79F6  addss   xmm2, xmm1
00000001400D79FA  movss   dword ptr [r12+4], xmm2
00000001400D7A01  mulss   xmm5, dword ptr [rdi+rcx+1ADA9264h]
00000001400D7A0A  mulss   xmm4, dword ptr [rdi+rcx+1ADA9258h]
00000001400D7A13  mulss   xmm3, dword ptr [rdi+rcx+1ADA9270h]
00000001400D7A1C  addss   xmm5, xmm4
00000001400D7A20  addss   xmm5, xmm3
00000001400D7A24  movss   dword ptr [r12+8], xmm5
00000001400D7A2B  mov     cs:dword_140404A6C+1167FE84h, 0
00000001400D7A35  mov     cs:dword_140404A6C+1167FE68h, r11d
00000001400D7A3C  mov     cs:dword_140404A6C+1167FE6Ch, r15d
00000001400D7A43  mov     cs:dword_140404A6C+1167FE70h, r13d
00000001400D7A4A  mov     cs:dword_140404A6C+1167FE74h, ebx
00000001400D7A50  mov     cs:dword_140404A6C+1167FE90h, eax
00000001400D7A56  mov     cs:dword_140404A6C+1167FE9Ch, 0FFFFFFFFh
00000001400D7A60  movss   dword ptr [rsi], xmm7
00000001400D7A64  jmp     short loc_1400D7A7A
00000001400D7A66  mov     r15d, [rbp+1990h+var_1970]
00000001400D7A6A  mov     r11d, [rsp+44h]
00000001400D7A6F  jmp     short loc_1400D7A7E
00000001400D7A71  mov     r11d, [rsp+44h]
00000001400D7A76  mov     r15d, [rbp+1990h+var_1970]
00000001400D7A7A  mov     rdx, [rbp+1990h+var_19E0]
00000001400D7A7E  mov     edx, (rva dword_140404A6C+13D5C7DCh)[rcx+rdx*4]
00000001400D7A85  mov     [rsp+40h], edx
00000001400D7A89  test    edx, edx
00000001400D7A8B  jz      loc_1400D813B
00000001400D7A91  mov     eax, edx
00000001400D7A93  and     eax, 0E0000000h
00000001400D7A98  cmp     eax, 40000000h
00000001400D7A9D  jnz     loc_1400D7CB0
00000001400D7AA3  movss   xmm0, dword ptr [rdi+rcx+1ADA9280h]
00000001400D7AAC  lea     rax, [rbp+1990h+var_1970]
00000001400D7AB0  movss   dword ptr [rsp+38h+var_s0], xmm0
00000001400D7AB6  lea     r9, [rbp+1990h+var_1948]
00000001400D7ABA  mov     dword ptr [rsp+38h+var_8], edx
00000001400D7ABE  lea     r8, [rsp+38h+arg_0]
00000001400D7AC3  mov     [rsp+38h+var_10], rax
00000001400D7AC8  lea     rdx, [rsp+38h+arg_20]
00000001400D7ACD  lea     rax, [rbp+1990h+var_1938]
00000001400D7AD1  lea     rcx, [rsp+38h+arg_10]
00000001400D7AD6  mov     [rsp+38h+var_18], rax
00000001400D7ADB  call    sub_1400DC650
00000001400D7AE0  test    eax, eax
00000001400D7AE2  jz      loc_1400D8134
00000001400D7AE8  movss   xmm7, [rsp+38h+arg_0]
00000001400D7AEE  lea     rcx, cs:140000000h
00000001400D7AF5  comiss  xmm7, dword ptr [rsi]
00000001400D7AF8  jnb     loc_1400D813B
00000001400D7AFE  movss   xmm3, [rsp+38h+arg_10]
00000001400D7B04  mov     r8d, 0FFFFFFFFh
00000001400D7B0A  movss   xmm2, [rsp+38h+arg_18]
00000001400D7B10  movaps  xmm0, xmm3
00000001400D7B13  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D7B1C  movaps  xmm1, xmm2
00000001400D7B1F  mov     eax, [rsp+40h]
00000001400D7B23  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D7B2C  mov     r11d, [rsp+44h]
00000001400D7B31  movss   xmm6, [rsp+38h+arg_14]
00000001400D7B37  movaps  xmm5, xmm6
00000001400D7B3A  movaps  xmm4, xmm6
00000001400D7B3D  mulss   xmm5, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D7B46  addss   xmm5, xmm0
00000001400D7B4A  movaps  xmm0, xmm3
00000001400D7B4D  addss   xmm5, xmm1
00000001400D7B51  movaps  xmm1, xmm2
00000001400D7B54  movss   dword ptr [r14], xmm5
00000001400D7B59  mulss   xmm4, dword ptr [rdi+rcx+1ADA9260h]
00000001400D7B62  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D7B6B  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D7B74  addss   xmm4, xmm0
00000001400D7B78  addss   xmm4, xmm1
00000001400D7B7C  movss   dword ptr [r14+4], xmm4
00000001400D7B82  mulss   xmm2, dword ptr [rdi+rcx+1ADA9270h]
00000001400D7B8B  mulss   xmm6, dword ptr [rdi+rcx+1ADA9264h]
00000001400D7B94  mulss   xmm3, dword ptr [rdi+rcx+1ADA9258h]
00000001400D7B9D  addss   xmm6, xmm3
00000001400D7BA1  movss   xmm3, dword ptr [rsp+38h+arg_28]
00000001400D7BA7  movaps  xmm1, xmm3
00000001400D7BAA  addss   xmm6, xmm2
00000001400D7BAE  movss   dword ptr [r14+8], xmm6
00000001400D7BB4  addss   xmm5, dword ptr [rdi+rcx+1ADA9244h]
00000001400D7BBD  movss   dword ptr [r14], xmm5
00000001400D7BC2  addss   xmm4, dword ptr [rdi+rcx+1ADA9248h]
00000001400D7BCB  movss   xmm5, dword ptr [rsp+38h+arg_20+4]
00000001400D7BD1  movaps  xmm2, xmm5
00000001400D7BD4  movss   dword ptr [r14+4], xmm4
00000001400D7BDA  addss   xmm6, dword ptr [rdi+rcx+1ADA924Ch]
00000001400D7BE3  movss   xmm4, dword ptr [rsp+38h+arg_20]
00000001400D7BE9  movaps  xmm0, xmm4
00000001400D7BEC  movss   dword ptr [r14+8], xmm6
00000001400D7BF2  mulss   xmm2, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D7BFB  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D7C04  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D7C0D  addss   xmm2, xmm0
00000001400D7C11  movaps  xmm0, xmm4
00000001400D7C14  addss   xmm2, xmm1
00000001400D7C18  movaps  xmm1, xmm3
00000001400D7C1B  movss   dword ptr [r12], xmm2
00000001400D7C21  movaps  xmm2, xmm5
00000001400D7C24  mulss   xmm2, dword ptr [rdi+rcx+1ADA9260h]
00000001400D7C2D  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D7C36  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D7C3F  addss   xmm2, xmm0
00000001400D7C43  addss   xmm2, xmm1
00000001400D7C47  movss   dword ptr [r12+4], xmm2
00000001400D7C4E  mulss   xmm5, dword ptr [rdi+rcx+1ADA9264h]
00000001400D7C57  mulss   xmm4, dword ptr [rdi+rcx+1ADA9258h]
00000001400D7C60  mulss   xmm3, dword ptr [rdi+rcx+1ADA9270h]
00000001400D7C69  addss   xmm5, xmm4
00000001400D7C6D  addss   xmm5, xmm3
00000001400D7C71  movss   dword ptr [r12+8], xmm5
00000001400D7C78  mov     cs:dword_140404A6C+1167FE84h, eax
00000001400D7C7E  mov     cs:dword_140404A6C+1167FE68h, r11d
00000001400D7C85  mov     cs:dword_140404A6C+1167FE6Ch, r15d
00000001400D7C8C  mov     cs:dword_140404A6C+1167FE70h, r13d
00000001400D7C93  mov     cs:dword_140404A6C+1167FE74h, ebx
00000001400D7C99  mov     cs:dword_140404A6C+1167FE90h, r8d
00000001400D7CA0  mov     cs:dword_140404A6C+1167FE9Ch, r8d
00000001400D7CA7  movss   dword ptr [rsi], xmm7
00000001400D7CAB  jmp     loc_1400D8140
00000001400D7CB0  cmp     eax, 80000000h
00000001400D7CB5  jnz     loc_1400D7EC8
00000001400D7CBB  movss   xmm0, dword ptr [rdi+rcx+1ADA9280h]
00000001400D7CC4  lea     rax, [rbp+1990h+var_1970]
00000001400D7CC8  movss   dword ptr [rsp+38h+var_s0], xmm0
00000001400D7CCE  lea     r9, [rbp+1990h+var_1948]
00000001400D7CD2  mov     dword ptr [rsp+38h+var_8], edx
00000001400D7CD6  lea     r8, [rsp+38h+arg_0]
00000001400D7CDB  mov     [rsp+38h+var_10], rax
00000001400D7CE0  lea     rdx, [rsp+38h+arg_20]
00000001400D7CE5  lea     rax, [rbp+1990h+var_1938]
00000001400D7CE9  lea     rcx, [rsp+38h+arg_10]
00000001400D7CEE  mov     [rsp+38h+var_18], rax
00000001400D7CF3  call    sub_1400DE770
00000001400D7CF8  test    eax, eax
00000001400D7CFA  jz      loc_1400D8134
00000001400D7D00  movss   xmm7, [rsp+38h+arg_0]
00000001400D7D06  lea     rcx, cs:140000000h
00000001400D7D0D  comiss  xmm7, dword ptr [rsi]
00000001400D7D10  jnb     loc_1400D813B
00000001400D7D16  movss   xmm3, [rsp+38h+arg_10]
00000001400D7D1C  mov     r8d, 0FFFFFFFFh
00000001400D7D22  movss   xmm2, [rsp+38h+arg_18]
00000001400D7D28  movaps  xmm0, xmm3
00000001400D7D2B  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D7D34  movaps  xmm1, xmm2
00000001400D7D37  mov     eax, [rsp+40h]
00000001400D7D3B  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D7D44  mov     r11d, [rsp+44h]
00000001400D7D49  movss   xmm6, [rsp+38h+arg_14]
00000001400D7D4F  movaps  xmm5, xmm6
00000001400D7D52  movaps  xmm4, xmm6
00000001400D7D55  mulss   xmm5, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D7D5E  addss   xmm5, xmm0
00000001400D7D62  movaps  xmm0, xmm3
00000001400D7D65  addss   xmm5, xmm1
00000001400D7D69  movaps  xmm1, xmm2
00000001400D7D6C  movss   dword ptr [r14], xmm5
00000001400D7D71  mulss   xmm4, dword ptr [rdi+rcx+1ADA9260h]
00000001400D7D7A  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D7D83  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D7D8C  addss   xmm4, xmm0
00000001400D7D90  addss   xmm4, xmm1
00000001400D7D94  movss   dword ptr [r14+4], xmm4
00000001400D7D9A  mulss   xmm2, dword ptr [rdi+rcx+1ADA9270h]
00000001400D7DA3  mulss   xmm6, dword ptr [rdi+rcx+1ADA9264h]
00000001400D7DAC  mulss   xmm3, dword ptr [rdi+rcx+1ADA9258h]
00000001400D7DB5  addss   xmm6, xmm3
00000001400D7DB9  movss   xmm3, dword ptr [rsp+38h+arg_28]
00000001400D7DBF  movaps  xmm1, xmm3
00000001400D7DC2  addss   xmm6, xmm2
00000001400D7DC6  movss   dword ptr [r14+8], xmm6
00000001400D7DCC  addss   xmm5, dword ptr [rdi+rcx+1ADA9244h]
00000001400D7DD5  movss   dword ptr [r14], xmm5
00000001400D7DDA  addss   xmm4, dword ptr [rdi+rcx+1ADA9248h]
00000001400D7DE3  movss   xmm5, dword ptr [rsp+38h+arg_20+4]
00000001400D7DE9  movaps  xmm2, xmm5
00000001400D7DEC  movss   dword ptr [r14+4], xmm4
00000001400D7DF2  addss   xmm6, dword ptr [rdi+rcx+1ADA924Ch]
00000001400D7DFB  movss   xmm4, dword ptr [rsp+38h+arg_20]
00000001400D7E01  movaps  xmm0, xmm4
00000001400D7E04  movss   dword ptr [r14+8], xmm6
00000001400D7E0A  mulss   xmm2, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D7E13  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D7E1C  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D7E25  addss   xmm2, xmm0
00000001400D7E29  movaps  xmm0, xmm4
00000001400D7E2C  addss   xmm2, xmm1
00000001400D7E30  movaps  xmm1, xmm3
00000001400D7E33  movss   dword ptr [r12], xmm2
00000001400D7E39  movaps  xmm2, xmm5
00000001400D7E3C  mulss   xmm2, dword ptr [rdi+rcx+1ADA9260h]
00000001400D7E45  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D7E4E  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D7E57  addss   xmm2, xmm0
00000001400D7E5B  addss   xmm2, xmm1
00000001400D7E5F  movss   dword ptr [r12+4], xmm2
00000001400D7E66  mulss   xmm5, dword ptr [rdi+rcx+1ADA9264h]
00000001400D7E6F  mulss   xmm4, dword ptr [rdi+rcx+1ADA9258h]
00000001400D7E78  mulss   xmm3, dword ptr [rdi+rcx+1ADA9270h]
00000001400D7E81  addss   xmm5, xmm4
00000001400D7E85  addss   xmm5, xmm3
00000001400D7E89  movss   dword ptr [r12+8], xmm5
00000001400D7E90  mov     cs:dword_140404A6C+1167FE84h, eax
00000001400D7E96  mov     cs:dword_140404A6C+1167FE68h, r11d
00000001400D7E9D  mov     cs:dword_140404A6C+1167FE6Ch, r15d
00000001400D7EA4  mov     cs:dword_140404A6C+1167FE70h, r13d
00000001400D7EAB  mov     cs:dword_140404A6C+1167FE74h, ebx
00000001400D7EB1  mov     cs:dword_140404A6C+1167FE90h, r8d
00000001400D7EB8  mov     cs:dword_140404A6C+1167FE9Ch, r8d
00000001400D7EBF  movss   dword ptr [rsi], xmm7
00000001400D7EC3  jmp     loc_1400D8140
00000001400D7EC8  cmp     eax, 0C0000000h
00000001400D7ECD  jnz     loc_1400D813B
00000001400D7ED3  movzx   eax, dl
00000001400D7ED6  mov     r10d, r15d
00000001400D7ED9  sub     r10d, eax
00000001400D7EDC  mov     r8d, r13d
00000001400D7EDF  mov     eax, edx
00000001400D7EE1  mov     [rsp+40h], r10d
00000001400D7EE6  shr     eax, 10h
00000001400D7EE9  movzx   ecx, al
00000001400D7EEC  sub     r8d, ecx
00000001400D7EEF  shr     edx, 8
00000001400D7EF2  movzx   eax, dl
00000001400D7EF5  mov     ecx, ebx
00000001400D7EF7  sub     ecx, eax
00000001400D7EF9  mov     [rbp+1990h+var_19D0], r10d
00000001400D7EFD  mov     dword ptr [rbp+1990h+var_19E8], ecx
00000001400D7F00  mov     r9d, ecx
00000001400D7F03  mov     [rbp+1990h+var_19C8], ecx
00000001400D7F06  mov     edx, r10d
00000001400D7F09  mov     ecx, r11d
00000001400D7F0C  mov     [rsp+38h+arg_4], r8d
00000001400D7F11  mov     [rbp+1990h+var_19CC], r8d
00000001400D7F15  call    sub_1400129D0
00000001400D7F1A  mov     [rbp+1990h+var_1A08], eax
00000001400D7F1D  lea     r9, cs:140000000h
00000001400D7F24  movss   xmm0, dword ptr [rdi+r9+1ADA9280h]
00000001400D7F2E  lea     r8, [rsp+38h+arg_0]
00000001400D7F33  movss   dword ptr [rsp+38h+var_s0], xmm0
00000001400D7F39  lea     r9, [rbp+1990h+var_1948]
00000001400D7F3D  mov     dword ptr [rsp+38h+var_8], eax
00000001400D7F41  lea     rdx, [rsp+38h+arg_20]
00000001400D7F46  lea     rax, [rbp+1990h+var_19D0]
00000001400D7F4A  mov     [rsp+38h+var_10], rax
00000001400D7F4F  lea     rcx, [rsp+38h+arg_10]
00000001400D7F54  lea     rax, [rbp+1990h+var_1938]
00000001400D7F58  mov     [rsp+38h+var_18], rax
00000001400D7F5D  call    sub_1400DE770
00000001400D7F62  lea     rcx, cs:140000000h
00000001400D7F69  test    eax, eax
00000001400D7F6B  jz      loc_1400D813B
00000001400D7F71  movss   xmm7, [rsp+38h+arg_0]
00000001400D7F77  comiss  xmm7, dword ptr [rsi]
00000001400D7F7A  jnb     loc_1400D813B
00000001400D7F80  movss   xmm3, [rsp+38h+arg_10]
00000001400D7F86  movss   xmm2, [rsp+38h+arg_18]
00000001400D7F8C  movaps  xmm0, xmm3
00000001400D7F8F  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D7F98  movaps  xmm1, xmm2
00000001400D7F9B  mov     eax, [rbp+1990h+var_1A08]
00000001400D7F9E  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D7FA7  mov     r11d, [rsp+44h]
00000001400D7FAC  movss   xmm6, [rsp+38h+arg_14]
00000001400D7FB2  movaps  xmm5, xmm6
00000001400D7FB5  movaps  xmm4, xmm6
00000001400D7FB8  mulss   xmm5, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D7FC1  addss   xmm5, xmm0
00000001400D7FC5  movaps  xmm0, xmm3
00000001400D7FC8  addss   xmm5, xmm1
00000001400D7FCC  movaps  xmm1, xmm2
00000001400D7FCF  movss   dword ptr [r14], xmm5
00000001400D7FD4  mulss   xmm4, dword ptr [rdi+rcx+1ADA9260h]
00000001400D7FDD  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D7FE6  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D7FEF  addss   xmm4, xmm0
00000001400D7FF3  addss   xmm4, xmm1
00000001400D7FF7  movss   dword ptr [r14+4], xmm4
00000001400D7FFD  mulss   xmm2, dword ptr [rdi+rcx+1ADA9270h]
00000001400D8006  mulss   xmm6, dword ptr [rdi+rcx+1ADA9264h]
00000001400D800F  mulss   xmm3, dword ptr [rdi+rcx+1ADA9258h]
00000001400D8018  addss   xmm6, xmm3
00000001400D801C  movss   xmm3, dword ptr [rsp+38h+arg_28]
00000001400D8022  movaps  xmm1, xmm3
00000001400D8025  addss   xmm6, xmm2
00000001400D8029  movss   dword ptr [r14+8], xmm6
00000001400D802F  addss   xmm5, dword ptr [rdi+rcx+1ADA9244h]
00000001400D8038  movss   dword ptr [r14], xmm5
00000001400D803D  addss   xmm4, dword ptr [rdi+rcx+1ADA9248h]
00000001400D8046  movss   xmm5, dword ptr [rsp+38h+arg_20+4]
00000001400D804C  movaps  xmm2, xmm5
00000001400D804F  movss   dword ptr [r14+4], xmm4
00000001400D8055  addss   xmm6, dword ptr [rdi+rcx+1ADA924Ch]
00000001400D805E  movss   xmm4, dword ptr [rsp+38h+arg_20]
00000001400D8064  movaps  xmm0, xmm4
00000001400D8067  movss   dword ptr [r14+8], xmm6
00000001400D806D  mulss   xmm2, dword ptr [rdi+rcx+1ADA925Ch]
00000001400D8076  mulss   xmm0, dword ptr [rdi+rcx+1ADA9250h]
00000001400D807F  mulss   xmm1, dword ptr [rdi+rcx+1ADA9268h]
00000001400D8088  addss   xmm2, xmm0
00000001400D808C  movaps  xmm0, xmm4
00000001400D808F  addss   xmm2, xmm1
00000001400D8093  movaps  xmm1, xmm3
00000001400D8096  movss   dword ptr [r12], xmm2
00000001400D809C  movaps  xmm2, xmm5
00000001400D809F  mulss   xmm2, dword ptr [rdi+rcx+1ADA9260h]
00000001400D80A8  mulss   xmm0, dword ptr [rdi+rcx+1ADA9254h]
00000001400D80B1  mulss   xmm1, dword ptr [rdi+rcx+1ADA926Ch]
00000001400D80BA  addss   xmm2, xmm0
00000001400D80BE  addss   xmm2, xmm1
00000001400D80C2  movss   dword ptr [r12+4], xmm2
00000001400D80C9  mulss   xmm5, dword ptr [rdi+rcx+1ADA9264h]
00000001400D80D2  mulss   xmm4, dword ptr [rdi+rcx+1ADA9258h]
00000001400D80DB  mulss   xmm3, dword ptr [rdi+rcx+1ADA9270h]
00000001400D80E4  addss   xmm5, xmm4
00000001400D80E8  addss   xmm5, xmm3
00000001400D80EC  movss   dword ptr [r12+8], xmm5
00000001400D80F3  mov     cs:dword_140404A6C+1167FE84h, eax
00000001400D80F9  mov     eax, [rsp+40h]
00000001400D80FD  mov     cs:dword_140404A6C+1167FE6Ch, eax
00000001400D8103  mov     eax, [rsp+38h+arg_4]
00000001400D8107  mov     cs:dword_140404A6C+1167FE70h, eax
00000001400D810D  mov     eax, dword ptr [rbp+1990h+var_19E8]
00000001400D8110  mov     cs:dword_140404A6C+1167FE74h, eax
00000001400D8116  mov     eax, 0FFFFFFFFh
00000001400D811B  mov     cs:dword_140404A6C+1167FE90h, eax
00000001400D8121  mov     cs:dword_140404A6C+1167FE9Ch, eax
00000001400D8127  mov     cs:dword_140404A6C+1167FE68h, r11d
00000001400D812E  movss   dword ptr [rsi], xmm7
00000001400D8132  jmp     short loc_1400D8140
00000001400D8134  lea     rcx, cs:140000000h
00000001400D813B  mov     r11d, [rsp+44h]
00000001400D8140  mov     rax, [rbp+1990h+var_19E0]
00000001400D8144  mov     edx, (rva dword_140404A6C+13D5F7DCh)[rcx+rax*4]
00000001400D814B  mov     [rsp+40h], edx
00000001400D814F  test    edx, edx
00000001400D8151  jz      loc_1400D860D
00000001400D8157  mov     eax, edx
00000001400D8159  and     eax, 0E0000000h
00000001400D815E  cmp     eax, 40000000h
00000001400D8163  jnz     loc_1400D835C
00000001400D8169  movss   xmm0, dword ptr [rdi+rcx+1ADA9280h]
00000001400D8172  lea     rax, [rbp+1990h+var_1970]
00000001400D8176  movss   dword ptr [rsp+38h+var_s0], xmm0
00000001400D817C  lea     r9, [rbp+1990h+var_1948]
00000001400D8180  mov     dword ptr [rsp+38h+var_8], edx
00000001400D8184  lea     r8, [rsp+38h+arg_0]
00000001400D8189  mov     [rsp+38h+var_10], rax
00000001400D818E  lea     rdx, [rsp+38h+arg_20]
00000001400D8193  lea     rax, [rbp+1990h+var_1938]
00000001400D8197  lea     rcx, [rsp+38h+arg_10]
00000001400D819C  mov     [rsp+38h+var_18], rax
00000001400D81A1  call    sub_1400DC650
00000001400D81A6  test    eax, eax
00000001400D81A8  jz      loc_1400D860D
00000001400D81AE  movss   xmm7, [rsp+38h+arg_0]
00000001400D81B4  comiss  xmm7, dword ptr [rsi]
00000001400D81B7  jnb     loc_1400D860D
00000001400D81BD  movss   xmm3, [rsp+38h+arg_10]
00000001400D81C3  lea     rax, cs:140000000h
00000001400D81CA  movss   xmm2, [rsp+38h+arg_18]
00000001400D81D0  movaps  xmm0, xmm3
00000001400D81D3  mulss   xmm0, dword ptr [rdi+rax+1ADA9250h]
00000001400D81DC  movaps  xmm1, xmm2
00000001400D81DF  mulss   xmm1, dword ptr [rdi+rax+1ADA9268h]
00000001400D81E8  movss   xmm6, [rsp+38h+arg_14]
00000001400D81EE  movaps  xmm5, xmm6
00000001400D81F1  movaps  xmm4, xmm6
00000001400D81F4  mulss   xmm5, dword ptr [rdi+rax+1ADA925Ch]
00000001400D81FD  addss   xmm5, xmm0
00000001400D8201  movaps  xmm0, xmm3
00000001400D8204  addss   xmm5, xmm1
00000001400D8208  movaps  xmm1, xmm2
00000001400D820B  movss   dword ptr [r14], xmm5
00000001400D8210  mulss   xmm4, dword ptr [rdi+rax+1ADA9260h]
00000001400D8219  mulss   xmm0, dword ptr [rdi+rax+1ADA9254h]
00000001400D8222  mulss   xmm1, dword ptr [rdi+rax+1ADA926Ch]
00000001400D822B  addss   xmm4, xmm0
00000001400D822F  addss   xmm4, xmm1
00000001400D8233  movss   dword ptr [r14+4], xmm4
00000001400D8239  mulss   xmm2, dword ptr [rdi+rax+1ADA9270h]
00000001400D8242  mulss   xmm6, dword ptr [rdi+rax+1ADA9264h]
00000001400D824B  mulss   xmm3, dword ptr [rdi+rax+1ADA9258h]
00000001400D8254  addss   xmm6, xmm3
00000001400D8258  movss   xmm3, dword ptr [rsp+38h+arg_28]
00000001400D825E  movaps  xmm1, xmm3
00000001400D8261  addss   xmm6, xmm2
00000001400D8265  movss   dword ptr [r14+8], xmm6
00000001400D826B  addss   xmm5, dword ptr [rdi+rax+1ADA9244h]
00000001400D8274  movss   dword ptr [r14], xmm5
00000001400D8279  addss   xmm4, dword ptr [rdi+rax+1ADA9248h]
00000001400D8282  movss   xmm5, dword ptr [rsp+38h+arg_20+4]
00000001400D8288  movaps  xmm2, xmm5
00000001400D828B  movss   dword ptr [r14+4], xmm4
00000001400D8291  addss   xmm6, dword ptr [rdi+rax+1ADA924Ch]
00000001400D829A  movss   xmm4, dword ptr [rsp+38h+arg_20]
00000001400D82A0  movaps  xmm0, xmm4
00000001400D82A3  movss   dword ptr [r14+8], xmm6
00000001400D82A9  mulss   xmm2, dword ptr [rdi+rax+1ADA925Ch]
00000001400D82B2  mulss   xmm0, dword ptr [rdi+rax+1ADA9250h]
00000001400D82BB  mulss   xmm1, dword ptr [rdi+rax+1ADA9268h]
00000001400D82C4  addss   xmm2, xmm0
00000001400D82C8  movaps  xmm0, xmm4
00000001400D82CB  addss   xmm2, xmm1
00000001400D82CF  movaps  xmm1, xmm3
00000001400D82D2  movss   dword ptr [r12], xmm2
00000001400D82D8  movaps  xmm2, xmm5
00000001400D82DB  mulss   xmm2, dword ptr [rdi+rax+1ADA9260h]
00000001400D82E4  mulss   xmm0, dword ptr [rdi+rax+1ADA9254h]
00000001400D82ED  mulss   xmm1, dword ptr [rdi+rax+1ADA926Ch]
00000001400D82F6  addss   xmm2, xmm0
00000001400D82FA  addss   xmm2, xmm1
00000001400D82FE  movss   dword ptr [r12+4], xmm2
00000001400D8305  mulss   xmm5, dword ptr [rdi+rax+1ADA9264h]
00000001400D830E  mulss   xmm4, dword ptr [rdi+rax+1ADA9258h]
00000001400D8317  mulss   xmm3, dword ptr [rdi+rax+1ADA9270h]
00000001400D8320  mov     eax, [rsp+40h]
00000001400D8324  addss   xmm5, xmm4
00000001400D8328  addss   xmm5, xmm3
00000001400D832C  movss   dword ptr [r12+8], xmm5
00000001400D8333  mov     cs:dword_140404A6C+1167FE84h, eax
00000001400D8339  mov     eax, [rsp+44h]
00000001400D833D  mov     cs:dword_140404A6C+1167FE68h, eax
00000001400D8343  mov     cs:dword_140404A6C+1167FE6Ch, r15d
00000001400D834A  mov     cs:dword_140404A6C+1167FE70h, r13d
00000001400D8351  mov     cs:dword_140404A6C+1167FE74h, ebx
00000001400D8357  jmp     loc_1400D85F8
00000001400D835C  cmp     eax, 80000000h
00000001400D8361  jnz     short loc_1400D83A5
00000001400D8363  movss   xmm0, dword ptr [rdi+rcx+1ADA9280h]
00000001400D836C  lea     rax, [rbp+1990h+var_1970]
00000001400D8370  movss   dword ptr [rsp+38h+var_s0], xmm0
00000001400D8376  lea     r9, [rbp+1990h+var_1948]
00000001400D837A  mov     dword ptr [rsp+38h+var_8], edx
00000001400D837E  lea     r8, [rsp+38h+arg_0]
00000001400D8383  mov     [rsp+38h+var_10], rax
00000001400D8388  lea     rdx, [rsp+38h+arg_20]
00000001400D838D  lea     rax, [rbp+1990h+var_1938]
00000001400D8391  lea     rcx, [rsp+38h+arg_10]
00000001400D8396  mov     [rsp+38h+var_18], rax
00000001400D839B  call    sub_1400DE770
00000001400D83A0  jmp     loc_1400D81A6
00000001400D83A5  cmp     eax, 0C0000000h
00000001400D83AA  jnz     loc_1400D860D
00000001400D83B0  movzx   eax, dl
00000001400D83B3  mov     r10d, r15d
00000001400D83B6  sub     r10d, eax
00000001400D83B9  mov     r8d, r13d
00000001400D83BC  mov     eax, edx
00000001400D83BE  mov     [rbp+1990h+var_1A08], r10d
00000001400D83C2  shr     eax, 10h
00000001400D83C5  movzx   ecx, al
00000001400D83C8  sub     r8d, ecx
00000001400D83CB  shr     edx, 8
00000001400D83CE  movzx   eax, dl
00000001400D83D1  mov     ecx, ebx
00000001400D83D3  sub     ecx, eax
00000001400D83D5  mov     [rbp+1990h+var_19D0], r10d
00000001400D83D9  mov     [rsp+38h+arg_4], ecx
00000001400D83DD  mov     r9d, ecx
00000001400D83E0  mov     [rbp+1990h+var_19C8], ecx
00000001400D83E3  mov     edx, r10d
00000001400D83E6  mov     ecx, r11d
00000001400D83E9  mov     [rsp+40h], r8d
00000001400D83EE  mov     [rbp+1990h+var_19CC], r8d
00000001400D83F2  call    sub_140016450
00000001400D83F7  mov     dword ptr [rbp+1990h+var_19E8], eax
00000001400D83FA  lea     r9, cs:140000000h
00000001400D8401  movss   xmm0, dword ptr [rdi+r9+1ADA9280h]
00000001400D840B  lea     r8, [rsp+38h+arg_0]
00000001400D8410  movss   dword ptr [rsp+38h+var_s0], xmm0
00000001400D8416  lea     r9, [rbp+1990h+var_1948]
00000001400D841A  mov     dword ptr [rsp+38h+var_8], eax
00000001400D841E  lea     rdx, [rsp+38h+arg_20]
00000001400D8423  lea     rax, [rbp+1990h+var_19D0]
00000001400D8427  mov     [rsp+38h+var_10], rax
00000001400D842C  lea     rcx, [rsp+38h+arg_10]
00000001400D8431  lea     rax, [rbp+1990h+var_1938]
00000001400D8435  mov     [rsp+38h+var_18], rax
00000001400D843A  call    sub_1400DE770
00000001400D843F  test    eax, eax
00000001400D8441  jz      loc_1400D860D
00000001400D8447  movss   xmm7, [rsp+38h+arg_0]
00000001400D844D  comiss  xmm7, dword ptr [rsi]
00000001400D8450  jnb     loc_1400D860D
00000001400D8456  movss   xmm3, [rsp+38h+arg_10]
00000001400D845C  lea     rax, cs:140000000h
00000001400D8463  movss   xmm2, [rsp+38h+arg_18]
00000001400D8469  movaps  xmm0, xmm3
00000001400D846C  mulss   xmm0, dword ptr [rdi+rax+1ADA9250h]
00000001400D8475  movaps  xmm1, xmm2
00000001400D8478  mulss   xmm1, dword ptr [rdi+rax+1ADA9268h]
00000001400D8481  movss   xmm6, [rsp+38h+arg_14]
00000001400D8487  movaps  xmm5, xmm6
00000001400D848A  movaps  xmm4, xmm6
00000001400D848D  mulss   xmm5, dword ptr [rdi+rax+1ADA925Ch]
00000001400D8496  addss   xmm5, xmm0
00000001400D849A  movaps  xmm0, xmm3
00000001400D849D  addss   xmm5, xmm1
00000001400D84A1  movaps  xmm1, xmm2
00000001400D84A4  movss   dword ptr [r14], xmm5
00000001400D84A9  mulss   xmm4, dword ptr [rdi+rax+1ADA9260h]
00000001400D84B2  mulss   xmm0, dword ptr [rdi+rax+1ADA9254h]
00000001400D84BB  mulss   xmm1, dword ptr [rdi+rax+1ADA926Ch]
00000001400D84C4  addss   xmm4, xmm0
00000001400D84C8  addss   xmm4, xmm1
00000001400D84CC  movss   dword ptr [r14+4], xmm4
00000001400D84D2  mulss   xmm2, dword ptr [rdi+rax+1ADA9270h]
00000001400D84DB  mulss   xmm6, dword ptr [rdi+rax+1ADA9264h]
00000001400D84E4  mulss   xmm3, dword ptr [rdi+rax+1ADA9258h]
00000001400D84ED  addss   xmm6, xmm3
00000001400D84F1  movss   xmm3, dword ptr [rsp+38h+arg_28]
00000001400D84F7  movaps  xmm1, xmm3
00000001400D84FA  addss   xmm6, xmm2
00000001400D84FE  movss   dword ptr [r14+8], xmm6
00000001400D8504  addss   xmm5, dword ptr [rdi+rax+1ADA9244h]
00000001400D850D  movss   dword ptr [r14], xmm5
00000001400D8512  addss   xmm4, dword ptr [rdi+rax+1ADA9248h]
00000001400D851B  movss   xmm5, dword ptr [rsp+38h+arg_20+4]
00000001400D8521  movaps  xmm2, xmm5
00000001400D8524  movss   dword ptr [r14+4], xmm4
00000001400D852A  addss   xmm6, dword ptr [rdi+rax+1ADA924Ch]
00000001400D8533  movss   xmm4, dword ptr [rsp+38h+arg_20]
00000001400D8539  movaps  xmm0, xmm4
00000001400D853C  movss   dword ptr [r14+8], xmm6
00000001400D8542  mulss   xmm2, dword ptr [rdi+rax+1ADA925Ch]
00000001400D854B  mulss   xmm0, dword ptr [rdi+rax+1ADA9250h]
00000001400D8554  mulss   xmm1, dword ptr [rdi+rax+1ADA9268h]
00000001400D855D  addss   xmm2, xmm0
00000001400D8561  movaps  xmm0, xmm4
00000001400D8564  addss   xmm2, xmm1
00000001400D8568  movaps  xmm1, xmm3
00000001400D856B  movss   dword ptr [r12], xmm2
00000001400D8571  movaps  xmm2, xmm5
00000001400D8574  mulss   xmm2, dword ptr [rdi+rax+1ADA9260h]
00000001400D857D  mulss   xmm0, dword ptr [rdi+rax+1ADA9254h]
00000001400D8586  mulss   xmm1, dword ptr [rdi+rax+1ADA926Ch]
00000001400D858F  addss   xmm2, xmm0
00000001400D8593  addss   xmm2, xmm1
00000001400D8597  movss   dword ptr [r12+4], xmm2
00000001400D859E  mulss   xmm5, dword ptr [rdi+rax+1ADA9264h]
00000001400D85A7  mulss   xmm4, dword ptr [rdi+rax+1ADA9258h]
00000001400D85B0  mulss   xmm3, dword ptr [rdi+rax+1ADA9270h]
00000001400D85B9  mov     eax, dword ptr [rbp+1990h+var_19E8]
00000001400D85BC  addss   xmm5, xmm4
00000001400D85C0  addss   xmm5, xmm3
00000001400D85C4  movss   dword ptr [r12+8], xmm5
00000001400D85CB  mov     cs:dword_140404A6C+1167FE84h, eax
00000001400D85D1  mov     eax, [rsp+44h]
00000001400D85D5  mov     cs:dword_140404A6C+1167FE68h, eax
00000001400D85DB  mov     eax, [rbp+1990h+var_1A08]
00000001400D85DE  mov     cs:dword_140404A6C+1167FE6Ch, eax
00000001400D85E4  mov     eax, [rsp+40h]
00000001400D85E8  mov     cs:dword_140404A6C+1167FE70h, eax
00000001400D85EE  mov     eax, [rsp+38h+arg_4]
00000001400D85F2  mov     cs:dword_140404A6C+1167FE74h, eax
00000001400D85F8  mov     eax, 0FFFFFFFFh
00000001400D85FD  mov     cs:dword_140404A6C+1167FE90h, eax
00000001400D8603  mov     cs:dword_140404A6C+1167FE9Ch, eax
00000001400D8609  movss   dword ptr [rsi], xmm7
00000001400D860D  movss   xmm0, cs:dword_1402783F4
00000001400D8615  comiss  xmm0, dword ptr [rsi]
00000001400D8618  ja      loc_1400D871C
00000001400D861E  movss   xmm6, cs:dword_140278338
00000001400D8626  mov     r10d, [rbp+1990h+var_19A4]
00000001400D862A  mov     r11d, [rbp+1990h+var_19B0]
00000001400D862E  mov     edx, [rsp+38h+arg_8]
00000001400D8632  cmp     r15d, [rbp+1990h+var_19F0]
00000001400D8636  jnz     short loc_1400D8646
00000001400D8638  cmp     r13d, r11d
00000001400D863B  jnz     short loc_1400D8646
00000001400D863D  cmp     ebx, r10d
00000001400D8640  jz      loc_1400D8723
00000001400D8646  movss   xmm3, [rsp+38h+arg_30]
00000001400D864C  xor     ecx, ecx
00000001400D864E  movss   xmm9, [rsp+38h+arg_34]
00000001400D8655  mov     eax, 1
00000001400D865A  movss   xmm7, dword ptr [rbp+1990h+var_1A10]
00000001400D865F  movss   xmm4, dword ptr [rbp+1990h+var_1A10+4]
00000001400D8664  comiss  xmm3, xmm9
00000001400D8668  cmovnb  ecx, eax
00000001400D866B  comiss  xmm7, xmm4
00000001400D866E  jbe     short loc_1400D86B0
00000001400D8670  cmp     rcx, rax
00000001400D8673  jz      short loc_1400D86B0
00000001400D8675  mov     eax, [rbp+rcx*4+1990h+var_1900]
00000001400D867C  add     [rbp+rcx*4+1990h+var_1970], eax
00000001400D8680  mov     r13d, [rbp+1990h+var_196C]
00000001400D8684  mov     r15d, [rbp+1990h+var_1970]
00000001400D8688  test    rcx, rcx
00000001400D868B  jnz     short loc_1400D8705
00000001400D868D  addss   xmm3, xmm10
00000001400D8692  subss   xmm9, xmm10
00000001400D8697  subss   xmm7, xmm12
00000001400D869C  addss   xmm4, xmm12
00000001400D86A1  movss   [rsp+38h+arg_30], xmm3
00000001400D86A7  movss   [rsp+38h+arg_34], xmm9
00000001400D86AE  jmp     short loc_1400D86FB
00000001400D86B0  comiss  xmm14, xmm15
00000001400D86B4  ja      short loc_1400D86E1
00000001400D86B6  add     r13d, [rbp+1990h+var_19AC]
00000001400D86BA  subss   xmm3, xmm13
00000001400D86BF  addss   xmm9, xmm13
00000001400D86C4  mov     [rbp+1990h+var_196C], r13d
00000001400D86C8  addss   xmm14, xmm12
00000001400D86CD  subss   xmm15, xmm12
00000001400D86D2  movss   [rsp+38h+arg_30], xmm3
00000001400D86D8  movss   [rsp+38h+arg_34], xmm9
00000001400D86DF  jmp     short loc_1400D8705
00000001400D86E1  add     ebx, [rbp+1990h+var_19A8]
00000001400D86E4  addss   xmm7, xmm13
00000001400D86E9  mov     [rbp+1990h+var_1968], ebx
00000001400D86EC  subss   xmm4, xmm13
00000001400D86F1  subss   xmm14, xmm10
00000001400D86F6  addss   xmm15, xmm10
00000001400D86FB  movss   dword ptr [rbp+1990h+var_1A10+4], xmm4
00000001400D8700  movss   dword ptr [rbp+1990h+var_1A10], xmm7
00000001400D8705  inc     edx
00000001400D8707  mov     [rsp+38h+arg_8], edx
00000001400D870B  cmp     edx, [rbp+1990h+var_19D8]
00000001400D870E  jg      short loc_1400D8723
00000001400D8710  mov     ebx, [rbp+1990h+var_1968]
00000001400D8713  mov     r9, [rbp+1990h+var_19B8]
00000001400D8717  jmp     loc_1400D7294
00000001400D871C  mov     eax, 1
00000001400D8721  jmp     short loc_1400D8725
00000001400D8723  xor     eax, eax
00000001400D8725  mov     rcx, [rbp+1990h+var_F0]
00000001400D872C  xor     rcx, rsp
00000001400D872F  call    1401F8B20h
00000001400D8734  lea     r11, [rsp+38h+arg_1A10]
00000001400D873C  movaps  xmm6, xmmword ptr [r11-18h]
00000001400D8741  movaps  xmm7, xmmword ptr [r11-28h]
00000001400D8746  movaps  xmm8, xmmword ptr [r11-38h]
00000001400D874B  movaps  xmm9, xmmword ptr [r11-48h]
00000001400D8750  movaps  xmm10, xmmword ptr [r11-58h]
00000001400D8755  movaps  xmm11, xmmword ptr [r11-68h]
00000001400D875A  movaps  xmm12, xmmword ptr [r11-78h]
00000001400D875F  movaps  xmm13, xmmword ptr [r11-88h]
00000001400D8767  movaps  xmm14, xmmword ptr [r11-98h]
00000001400D876F  movaps  xmm15, xmmword ptr [r11-0A8h]
00000001400D8777  mov     rsp, r11
00000001400D877A  pop     r15
00000001400D877C  pop     r14
00000001400D877E  pop     r13
00000001400D8780  pop     r12
00000001400D8782  pop     rdi
00000001400D8783  pop     rsi
00000001400D8784  pop     rbx
00000001400D8785  pop     rbp
00000001400D8786  retn
