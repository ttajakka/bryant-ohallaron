/* Problem 3.58 */

long decode2(long x, long y, long z)
{
    long p = (y-z)%2; // 0 if y-z is even, 1 if odd
    long q = 1 - 2*p; // 1 if y-z is even, -1 if odd
    return q*x*(y-z) - p;
}

/* x in %rdi, y in %rsi, z in %rdx
 * decode2:
 *  subq    %rdx, %rsi      y - z to %rsi
 *  imulq   %rsi, %rdi      x*(y-z) to %rdi
 *  movq    %rsi, %rax      move y - z to %rax
 *  salq    $63, %rax       left shift y-z by 63
 *  sarq    $63, %rax       arithmetic right shift y-z by 63
 *  xorq    %rdi, %rax      compute x*(y-z) | ((y-z) << 63) >> 63
 *
 * 
 * if y-z is even, the shifts give the mask 0,
 * so the function returns x*(y-z)
 *
 * if y-z is even, the shifts give the mask 0xffffffffffffffff,
 * so the xor gives !(x*(y-z)), which is -1 - x*(y-z)
 *
 *
 *
 * */
