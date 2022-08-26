/* Problem 3.56 from page 305 */

#define EXPR

double simplefun(double x) {
    return EXPR(x);
}

/* A.
 *      vmovsd  .LC1(%rip), %xmm1
 *      vandpd  %xmm1, %xmm0, %xmm0
 *    .LC1:
 *      .long 4294967295        = 0xffffffff
 *      .long 2147483647        = 0x7fffffff
 *      .long 0
 *      .long 0
 *
 * The bit pattern in .LC1 has 0 followed by 63 1's. Taking 'and' with this
 * preserves all other bits but turns the sign bit to 0. This amounts
 * to taking the absolute value of x.
 *
 * EXPR = abs
 *
 *
 * B.
 *      vxorpd  %xmm0, %xmm0, %xmm0
 *
 * This returns 0.
 *
 * EXPR = 0*
 *
 * C.
 *      vmovsd  .LC2(%rip), %xmm1
 *      vxorpd  %xmm1, %xmm0, %xmm0
 *    .LC2:
 *      .long 0
 *      .long -2147483648       = INT32_MIN = 0x80000000
 *      .long 0
 *      .long 0
 *
 *  
 *  The bit pattern in .LC2 is 
 *
 *  1 00000000000 00000000000000000000
 *  00000000000000000000000000000000
 *
 *  Flips the sign bit.
 *
 *  EXPR = (-1)*
 *
 *
 *
 *  
 *
 * */
