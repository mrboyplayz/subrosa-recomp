; 0x14003ed30: sub_14003ED30
; Decompilation failed: call analysis failed
000000014003ED30  mov     r11, rsp
000000014003ED33  mov     [r11+10h], rbx
000000014003ED37  mov     [r11+18h], rsi
000000014003ED3B  push    rbp
000000014003ED3C  push    rdi
000000014003ED3D  push    r12
000000014003ED3F  push    r13
000000014003ED41  push    r14
000000014003ED43  lea     rbp, [r11-3Fh]
000000014003ED47  sub     rsp, 100h
000000014003ED4E  movss   xmm0, dword ptr [r9]
000000014003ED53  mov     rsi, rcx
000000014003ED56  movsxd  rcx, dword ptr [rbp+37h+arg_18_2]
000000014003ED5A  mov     r14, r8
000000014003ED5D  movss   xmm1, dword ptr cs:xmmword_140279840
000000014003ED65  lea     r8, dword_140404A6C+556CBE74h
000000014003ED6C  movss   xmm2, cs:dword_140278814
000000014003ED74  mov     r13, r9
000000014003ED77  imul    rax, rcx, 0F120h
000000014003ED7E  mov     rdi, rdx
000000014003ED81  subss   xmm0, dword ptr [rax+r8+8]
000000014003ED88  andps   xmm0, xmm1
000000014003ED8B  comiss  xmm0, xmm2
000000014003ED8E  ja      loc_14003F092
000000014003ED94  movss   xmm0, dword ptr [r9+8]
000000014003ED9A  subss   xmm0, dword ptr [rax+r8+10h]
000000014003EDA1  andps   xmm0, xmm1
000000014003EDA4  comiss  xmm0, xmm2
000000014003EDA7  ja      loc_14003F092
000000014003EDAD  movss   xmm0, dword ptr [r9+4]
000000014003EDB3  subss   xmm0, dword ptr [rax+r8+0Ch]
000000014003EDBA  andps   xmm0, xmm1
000000014003EDBD  comiss  xmm0, xmm2
000000014003EDC0  ja      loc_14003F092
000000014003EDC6  movsxd  rax, dword ptr [rbp+37h+arg_18_1]
000000014003EDCA  imul    r12, rcx, 3C48h
000000014003EDD1  mov     dword ptr [r14], 47800000h
000000014003EDD8  add     r12, rax
000000014003EDDB  movsxd  rbx, dword ptr [r8+r12*4+301Ch]
000000014003EDE3  cmp     ebx, [r8+r12*4+302Ch]
000000014003EDEB  jge     loc_14003F092
000000014003EDF1  mov     [r11+8], r15
000000014003EDF5  movaps  xmmword ptr [r11-38h], xmm6
000000014003EDFA  movaps  xmmword ptr [r11-48h], xmm7
000000014003EDFF  movaps  xmmword ptr [r11-58h], xmm8
000000014003EE04  movaps  xmmword ptr [r11-68h], xmm9
000000014003EE09  movss   xmm9, dword ptr [rbp+37h+arg_18_3]
000000014003EE0F  imul    rdx, rcx, 1418h
000000014003EE16  movaps  xmmword ptr [r11-78h], xmm10
000000014003EE1B  movss   xmm10, cs:dword_1402783F4
000000014003EE24  movaps  xmmword ptr [r11-88h], xmm11
000000014003EE2C  xorps   xmm11, xmm11
000000014003EE30  mov     [rbp+37h+arg_18], rdx
000000014003EE34  lea     rax, [rdx+rbx]
000000014003EE38  lea     r15, [rax+608h]
000000014003EE3F  lea     r15, [rax+r15*2]
000000014003EE43  lea     r15, [r8+r15*4]
000000014003EE47  nop     word ptr [rax+rax+00000000h]
000000014003EE50  movsxd  rax, dword ptr [r15-4]
000000014003EE54  add     rax, rdx
000000014003EE57  lea     rcx, [rax+rax*2]
000000014003EE5B  movsxd  rax, dword ptr [r15]
000000014003EE5E  movss   xmm0, dword ptr [r8+rcx*4+18h]
000000014003EE65  add     rax, rdx
000000014003EE68  movss   xmm2, dword ptr [r8+rcx*4+1Ch]
000000014003EE6F  movss   xmm4, dword ptr [r8+rcx*4+20h]
000000014003EE76  movss   [rbp+37h+var_A0], xmm0
000000014003EE7B  lea     rcx, [rax+rax*2]
000000014003EE7F  movss   [rbp+37h+var_9C], xmm2
000000014003EE84  movss   xmm3, dword ptr [r8+rcx*4+20h]
000000014003EE8B  movss   xmm6, dword ptr [r8+rcx*4+18h]
000000014003EE92  movss   xmm5, dword ptr [r8+rcx*4+1Ch]
000000014003EE99  movsxd  rax, dword ptr [r15+4]
000000014003EE9D  movss   [rbp+37h+var_A8], xmm3
000000014003EEA2  add     rax, rdx
000000014003EEA5  subss   xmm3, xmm4
000000014003EEA9  movss   [rbp+37h+var_98], xmm4
000000014003EEAE  movss   [rbp+37h+var_AC], xmm5
000000014003EEB3  subss   xmm5, xmm2
000000014003EEB7  movss   [rbp+37h+var_B0], xmm6
000000014003EEBC  subss   xmm6, xmm0
000000014003EEC0  lea     rcx, [rax+rax*2]
000000014003EEC4  movss   xmm1, dword ptr [r8+rcx*4+1Ch]
000000014003EECB  movss   xmm7, dword ptr [r8+rcx*4+20h]
000000014003EED2  movss   xmm8, dword ptr [r8+rcx*4+18h]
000000014003EED9  movss   [rsp+120h+var_BC], xmm1
000000014003EEDF  subss   xmm1, xmm2
000000014003EEE3  movss   [rsp+120h+var_B8], xmm7
000000014003EEE9  subss   xmm7, xmm4
000000014003EEED  movss   [rsp+120h+var_C0], xmm8
000000014003EEF4  subss   xmm8, xmm0
000000014003EEF9  movaps  xmm4, xmm1
000000014003EEFC  mulss   xmm1, xmm6
000000014003EF00  movaps  xmm0, xmm7
000000014003EF03  mulss   xmm4, xmm3
000000014003EF07  mulss   xmm0, xmm5
000000014003EF0B  mulss   xmm7, xmm6
000000014003EF0F  subss   xmm4, xmm0
000000014003EF13  movaps  xmm0, xmm8
000000014003EF17  mulss   xmm0, xmm3
000000014003EF1B  xorps   xmm3, xmm3
000000014003EF1E  mulss   xmm8, xmm5
000000014003EF23  subss   xmm7, xmm0
000000014003EF27  movaps  xmm0, xmm4
000000014003EF2A  mulss   xmm0, xmm4
000000014003EF2E  subss   xmm8, xmm1
000000014003EF33  movaps  xmm2, xmm7
000000014003EF36  mulss   xmm2, xmm7
000000014003EF3A  movaps  xmm1, xmm8
000000014003EF3E  mulss   xmm1, xmm8
000000014003EF43  addss   xmm2, xmm0
000000014003EF47  addss   xmm2, xmm1
000000014003EF4B  sqrtss  xmm3, xmm2
000000014003EF4F  ucomiss xmm3, xmm11
000000014003EF53  jz      short loc_14003EF7F
000000014003EF55  movaps  xmm0, xmm10
000000014003EF59  divss   xmm0, xmm3
000000014003EF5D  mulss   xmm4, xmm0
000000014003EF61  mulss   xmm7, xmm0
000000014003EF65  mulss   xmm8, xmm0
000000014003EF6A  movss   [rsp+120h+var_D0], xmm4
000000014003EF70  movss   [rsp+120h+var_CC], xmm7
000000014003EF76  movss   [rsp+120h+var_C8], xmm8
000000014003EF7D  jmp     short loc_14003EF90
000000014003EF7F  mov     qword ptr [rsp+120h+var_D0], 0
000000014003EF88  mov     [rsp+120h+var_C8], 0
000000014003EF90  lea     rax, [rsp+120h+var_C0]
000000014003EF95  mov     r9, r13
000000014003EF98  mov     [rsp+120h+var_E0], rax
000000014003EF9D  lea     r8, [rbp+37h+arg_18_2]
000000014003EFA1  lea     rax, [rbp+37h+var_B0]
000000014003EFA5  mov     [rsp+120h+var_E8], rax
000000014003EFAA  lea     rdx, [rsp+120h+var_D0]
000000014003EFAF  lea     rax, [rbp+37h+var_A0]
000000014003EFB3  mov     [rsp+120h+var_F0], rax
000000014003EFB8  lea     rcx, [rbp+37h+var_90]
000000014003EFBC  mov     rax, [rbp+37h+arg_18_4]
000000014003EFC0  movss   dword ptr [rsp+120h+var_F8], xmm9
000000014003EFC7  mov     qword ptr [rsp+120h+var_100], rax
000000014003EFCC  call    sub_14003F0B0
000000014003EFD1  test    eax, eax
000000014003EFD3  jz      short loc_14003F022
000000014003EFD5  movss   xmm2, dword ptr [rbp+37h+arg_18_2]
000000014003EFDA  comiss  xmm2, dword ptr [r14]
000000014003EFDE  jnb     short loc_14003F022
000000014003EFE0  movss   xmm0, [rbp+37h+var_90]
000000014003EFE5  movss   xmm1, [rbp+37h+var_8C]
000000014003EFEA  movss   dword ptr [rsi], xmm0
000000014003EFEE  movss   xmm0, dword ptr [rbp+37h+var_88]
000000014003EFF3  movss   dword ptr [rsi+4], xmm1
000000014003EFF8  movss   xmm1, [rsp+120h+var_D0]
000000014003EFFE  movss   dword ptr [rsi+8], xmm0
000000014003F003  movss   xmm0, [rsp+120h+var_CC]
000000014003F009  movss   dword ptr [rdi], xmm1
000000014003F00D  movss   xmm1, [rsp+120h+var_C8]
000000014003F013  movss   dword ptr [rdi+8], xmm1
000000014003F018  movss   dword ptr [rdi+4], xmm0
000000014003F01D  movss   dword ptr [r14], xmm2
000000014003F022  mov     rdx, [rbp+37h+arg_18]
000000014003F026  lea     r8, dword_140404A6C+556CBE74h
000000014003F02D  inc     ebx
000000014003F02F  add     r15, 0Ch
000000014003F033  cmp     ebx, [r8+r12*4+302Ch]
000000014003F03B  jl      loc_14003EE50
000000014003F041  movss   xmm0, dword ptr [r14]
000000014003F046  comiss  xmm0, cs:dword_140278ADC
000000014003F04D  mov     r15, [rsp+120h+arg_0]
000000014003F055  movaps  xmm11, [rsp+120h+var_88+8]
000000014003F05E  movaps  xmm10, [rsp+120h+var_78+8]
000000014003F067  movaps  xmm9, [rsp+120h+var_68+8]
000000014003F070  movaps  xmm8, [rsp+120h+var_58+8]
000000014003F079  movaps  xmm7, [rsp+120h+var_48+8]
000000014003F081  movaps  xmm6, [rsp+120h+var_38+8]
000000014003F089  jnb     short loc_14003F092
000000014003F08B  mov     eax, 1
000000014003F090  jmp     short loc_14003F094
000000014003F092  xor     eax, eax
000000014003F094  lea     r11, [rsp+120h+var_20]
000000014003F09C  mov     rbx, [r11+38h]
000000014003F0A0  mov     rsi, [r11+40h]
000000014003F0A4  mov     rsp, r11
000000014003F0A7  pop     r14
000000014003F0A9  pop     r13
000000014003F0AB  pop     r12
000000014003F0AD  pop     rdi
000000014003F0AE  pop     rbp
000000014003F0AF  retn
