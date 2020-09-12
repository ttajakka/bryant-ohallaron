/* Problem 3.20 from page 219 */

// Consider the C function
//

#define OP /

long arith(long x) {
    return x OP 8;
}

/* When compiled, GCC generates the following
 * assembly code:
 *  
 *  x in %rdi
 *  arith:
 *      leaq    7(%rdi), %rax       move x + 7 to %rax
 *      testq   %rdi, %rdi          
 *      cmovns  %rdi, %rax          if x >= 0, move x to %rax
 *      sarq    $3, %rax            divide value in %rax by 8
 *      ret
 *
 * NOTE: adding 7 when x is negative makes sure that when the
 * remainder comes out nonnegative when using the shift
 * */
