/* Problem 3.10 from page 197
 *
 * The C code below should generate the following assembly code.
 * Run
 *      gcc -O0 -S problem10.c
 * to generate the assembly code.
 *
 x in rdi, y in %rsi, z in %rdx

arith2:
    orq     %rsi, %rdi      // %rdi contains t1 = x|y
    sarq    $3, $rdi        // %rdi contains t2 = t1 >> 3
    notq    %rdi            // %rdi contains t3 = ~t2
    movq    %rdx, %rax      // %rax contains z
    subq    %rdi, %rax      // %rax contains t4 = z - t3
    ret
 * */

long arith2(long x, long y, long z)
{
    long t1 = x|y;
    long t2 = t1 >> 3;
    long t3 = ~t2;
    long t4 = z - t3;
    return t4;
}
