/* Problem 3.25 from page 226-227
 *
 * The following C code produces the assembly code below
 * when compiled with GCC using the optimization switch -O1. */

long loop_while2(long a, long b)
{
    long result = b;
    while (b > 0) {
        result = a*result;
        b = b-a;
    }
    return result;
}

/* a in %rdi, b in %rsi
 *  loop_while2:
 *      testq       %rsi, %rsi
 *      jle         .L8
 *      movq        %rsi, %rax
 *  .L7:
 *      imulq       %rdi, %rax
 *      subq        %rdi, %rsi
 *      testq       %rsi, %rsi
 *      jg          .L7
 *      rep; ret
 *  .L8:
 *      movq        %rsi, %rax
 *      ret
 * 
 * */
