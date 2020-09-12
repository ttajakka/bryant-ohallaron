/* This is part of problem 3.31 on page 237

void switcher(long a, long b, long c, long *dest)
a in %rdi, b in %rsi, c in %rdx, d in %rcx */

switcher:
    cmpq    $7, %rdi                
    ja      .L2                         /* if a > 7 goto L2 */
    jmp     *.L4(,%rdi,8)
    .section    .rodata
.L7:
    xorq    $15, %rsi
    movq    %rsi, %rdx
.L3:
    leaq    112(%rdx), %rdi
    jmp     .L6
.L5:
    leaq    (%rdx,%rsi), %rdi
    salq    $2, %rdi
    jmp     .L6
.L2:                                    /* default case */
    movq    %rsi, %rdi
.L6:
    movq    %rdi, (%rcx)
    ret

.L4:                            /* index   */ 
    .quad   .L3                 /* 0       */
    .quad   .L2                 /* default */
    .quad   .L5                 /* 2       */
    .quad   .L2                 /* default */
    .quad   .L6                 /* 4       */
    .quad   .L7                 /* 5       */
    .quad   .L2                 /* default */
    .quad   .L5                 /* 7       */
