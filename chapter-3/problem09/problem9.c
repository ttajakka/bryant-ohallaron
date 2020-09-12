/* Problem 3.9 from page 195
 * 
 * The C code below should produce the following assembly code
 * run
 *      gcc -O0 -S problem9.c
 * to generate the assembly code
 *
x stored in %rdi, n in %rsi
shift_left4_rightn:
    movq    %rdi, %rax
    salq    $4, %rax
    movl    %esi, %ecx     
    sarq    %cl, %rax
 *
 * Notes: 1) writing to %ecx makes the 4 most significant bytes of %rcx all 0
 *        2) the first argument of shift operators is either an immediate 
 *           value or the value of the single-byte register %cl.
 * */

long shift_left4_rightn(long x, long n)
{
    x <<= 4;
    x >>= n;
    return x;
}
