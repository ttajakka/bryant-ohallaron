/* Problem 3.50 from page 347 
 *
 * For the following C code, the expressions val1 - val4
 * all map to program values i, f, d, and l. */


double fcvt2(int *ip, float *fp, double *dp, long l)
{
    int i = *ip; float f = *fp; double d = *dp;
    *ip = (int)     d;
    *fp = (float)   i;
    *dp = (double)  l;
    return (double) f;
}

/* The compiler generates the following assembly. 
 *
 * ip in %rdi, fp in %rsi, dp in %rdx, l in %rcx
 * Result returned in %xmm0
 * fcvt2:
 *  movl        (%rdi), %eax        move i = *ip to %eax
 *  vmovss      (%rsi), %xmm0       move f = *fp to %xmm0
 *  vcvttsd2si  (%rdx), %r8d        convert d = *dp to int, move to %rd8
 *  movl        %r8d, (%rdi)        move (int) d to *ip
 *  vcvtsi2ss   %eax, %xmm1, %xmm1  convert i to float, move to %xmm1
 *  vmovss      %xmm1, (%rsi)       move (float) i to *fp
 *  vcvtsi2sdq  %rcx, %xmm1, %xmm1  convert l to double
 *  vmovsd      %xmm1, (%rdx)       move (double) l to dp
 *  vunpcklps   %xmm0, %xmm0, %xmm0 
 *  vcvtps2pd   %xmm0, %xmm0, %xmm0 convert f to double, store to return
 *  ret
 *
 * */


