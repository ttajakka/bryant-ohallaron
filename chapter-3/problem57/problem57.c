/* Problem 3.57 from page 308 */

double funct3(int *ap, double b, long c, float *dp)
{
    int a = *ap;
    float d = *dp;
    if (b - a <= 0)
        return (double) c + 2*d;
    else
        return (double) c*d;
}

/* double funct3(int *ap, double b, long c, float *dp);
 * ap in %rdi, b in %xmm0, c in %rsi, dp in %rdx
 *  funct3:
 *      vmovss      (%rdx), %xmm1           move d = *dp to %xmm1
 *      vcvtsi2sd   (%rdi), %xmm2, %xmm2    convert a = *ap to double
 *      vocomisd    %xmm2, %xmm0            compare b - a
 *      jbe         .L8                     if b - a <= 0, goto .L8
 *      vcvtsi2ssq  %rsi, %xmm0, %xmm0      convert c to float
 *      vmulss      %xmm1, %xmm0, %xmm1     compute c * d
 *      vunpcklps   %xmm1, %xmm1, %xmm1
 *      vcvtps2pd   %xmm1, %xmm0            convert c*d to double
 *      ret
 *    .L8:
 *      vadds       %xmm1, %xmm1, %xmm1     compute 2*d to %xmm1
 *      vcvtsi2ssq  %rsi, %xmm0, %xmm0      convert c to float to %xmm0
 *      vadds       %xmm1, %xmm0, %xmm0     compute c + 2*d to %xmm0
 *      vunpcklps   %xmm0, %xmm0, %xmm0
 *      vcvtps3pd   %xmm0, %xmm0            convert c + 2*d to double
 *
 *
 * */
