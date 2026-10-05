; 0x14020b23c: sub_14020B23C
; Decompilation failed: call analysis failed
000000014020B23C  mov     rax, rsp
000000014020B23F  mov     [rax+10h], rbx
000000014020B243  mov     [rax+20h], rsi
000000014020B247  movsd   qword ptr [rax+8], xmm0
000000014020B24C  push    rdi
000000014020B24D  sub     rsp, 40h
000000014020B251  mov     ebx, edx
000000014020B253  movaps  xmmword ptr [rax-18h], xmm6
000000014020B257  mov     esi, 0FFC0h
000000014020B25C  mov     ecx, 1F80h
000000014020B261  mov     edx, esi
000000014020B263  movaps  xmm6, xmm0
000000014020B266  call    _ctrlfp
000000014020B26B  movzx   ecx, [rsp+48h+arg_6]
000000014020B270  mov     rdi, rax
000000014020B273  mov     eax, 7FF0h
000000014020B278  and     cx, ax
000000014020B27B  cmp     cx, ax
000000014020B27E  jnz     short loc_14020B2D1
000000014020B280  movaps  xmm0, xmm6
000000014020B283  call    _sptype
000000014020B288  test    eax, eax
000000014020B28A  jle     short loc_14020B2BC
000000014020B28C  cmp     eax, 2
000000014020B28F  jle     short loc_14020B2A9
000000014020B291  cmp     eax, 3
000000014020B294  jnz     short loc_14020B2BC
000000014020B296  movd    xmm1, ebx
000000014020B29A  movaps  xmm0, xmm6
000000014020B29D  cvtdq2pd xmm1, xmm1
000000014020B2A1  call    _handle_qnan2
000000014020B2A6  movaps  xmm6, xmm0
000000014020B2A9  mov     rdx, rsi
000000014020B2AC  mov     rcx, rdi
000000014020B2AF  call    _ctrlfp
000000014020B2B4  movaps  xmm0, xmm6
000000014020B2B7  jmp     loc_14020B395
000000014020B2BC  movaps  xmm0, xmm6
000000014020B2BF  mov     ecx, 8
000000014020B2C4  addsd   xmm0, cs:Y
000000014020B2CC  jmp     loc_14020B375
000000014020B2D1  ucomisd xmm6, cs:qword_1402831A8
000000014020B2D9  jp      short loc_14020B2DD
000000014020B2DB  jz      short loc_14020B2A9
000000014020B2DD  lea     rdx, [rsp+48h+arg_10]
000000014020B2E2  movaps  xmm0, xmm6
000000014020B2E5  call    _decomp
000000014020B2EA  mov     ecx, [rsp+48h+arg_10]
000000014020B2EE  test    ebx, ebx
000000014020B2F0  jns     short loc_14020B2FF
000000014020B2F2  mov     eax, 80000000h
000000014020B2F7  sub     eax, ebx
000000014020B2F9  cmp     ecx, eax
000000014020B2FB  jl      short loc_14020B332
000000014020B2FD  jmp     short loc_14020B30A
000000014020B2FF  mov     eax, 7FFFFFFFh
000000014020B304  sub     eax, ebx
000000014020B306  cmp     ecx, eax
000000014020B308  jg      short loc_14020B360
000000014020B30A  lea     edx, [rcx+rbx]
000000014020B30D  cmp     edx, 0A00h
000000014020B313  jg      short loc_14020B360
000000014020B315  cmp     edx, 400h
000000014020B31B  jle     short loc_14020B32A
000000014020B31D  add     edx, 0FFFFFA00h
000000014020B323  call    _set_exp
000000014020B328  jmp     short loc_14020B370
000000014020B32A  cmp     edx, 0FFFFF603h
000000014020B330  jge     short loc_14020B341
000000014020B332  mulsd   xmm0, cs:qword_1402831A8
000000014020B33A  mov     ecx, 12h
000000014020B33F  jmp     short loc_14020B375
000000014020B341  cmp     edx, 0FFFFFC03h
000000014020B347  jge     short loc_14020B356
000000014020B349  add     edx, 600h
000000014020B34F  call    _set_exp
000000014020B354  jmp     short loc_14020B33A
000000014020B356  call    _set_exp
000000014020B35B  jmp     loc_14020B2A6
000000014020B360  movaps  xmm1, xmm0; Sign
000000014020B363  movsd   xmm0, cs:Number; Number
000000014020B36B  call    _copysign
000000014020B370  mov     ecx, 11h
000000014020B375  movd    xmm3, ebx
000000014020B379  movaps  xmm2, xmm6
000000014020B37C  cvtdq2pd xmm3, xmm3
000000014020B380  mov     [rsp+48h+var_20], rdi
000000014020B385  mov     edx, 19h
000000014020B38A  movsd   [rsp+48h+var_28], xmm0
000000014020B390  call    _except2
000000014020B395  mov     rbx, [rsp+48h+arg_8]
000000014020B39A  mov     rsi, [rsp+48h+arg_18]
000000014020B39F  movaps  xmm6, [rsp+48h+var_18]
000000014020B3A4  add     rsp, 40h
000000014020B3A8  pop     rdi
000000014020B3A9  retn
