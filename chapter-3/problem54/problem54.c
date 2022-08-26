/* Problem 3.54 from page 303  */

double funct2(double w, int x, float y, long z)
{
    return x*y - w/z;
}


/* double funct2(double w, int x, float y, long z)
 * w in %xmm0, x in %edi, y in %xmm1, z in %rsi 
 *  funct2:
 *      vcvtsi2ss   %edi, %xmm2, %xmm2      cast x to float, save in %xmm2
 *      vmulss      %xmm1, %xmm2, %xmm1     compute x*y, save in %xmm1
 *      vunpck1ps   %xmm1, %xmm1, %xmm1
 *      vcvtps2pd   %xmm1, %xmm2            cast x*y to double, save in %xmm2
 *      vcvtsi2sdq  %rsi, %xmm1, %xmm1      cast z to double, save in %xmm1
 *      vdivsd      %xmm1, %xmm0, %xmm0     compute w/z, save in %xmm0
 *      vsubsd      %xmm0, %xmm2, %xmm0     compute x*y - w/z
 *      ret
 *
 *  */
