/* Problem 3.53 from page 303 
 *
 * The following C code produces the assembly code below. */

typedef int arg1_t;
typedef long arg2_t;    //or float
typedef float arg3_t;   //or long
typedef double arg4_t;


double funct1(arg1_t p, arg2_t q, arg3_t r, arg4_t s)
{
    return p/(q+r) - s;
}


/* funct1:
 *  vcvtsi2ssq  %rsi, %xmm2, %xmm2      convert q or r from long to float
 *  vaddss      %xmm0, %xmm2, %xmm0     add q and r
 *  vcvtsi2ss   %edi, %xmm2, %xmm2      convert p from int to float
 *  vdivss      %xmm0, %xmm2, %xmm0     compute p/(q+r)
 *  vunpcklps   %xmm0, %xmm0, %xmm0     convert p/(q+t) from float to double
 *  vcvtps2pd   %xmm0, %xmm0
 *  vsubsd      %xmm1, %xmm0, %xmm0     compute p/(q+r) - s
 *  ret
 *
 * */
