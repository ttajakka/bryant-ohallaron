/* Problem 3.24 from page 225-226
 *
 * The following C code produces the assembly code below. */

long loop_while(long a, long b)
{
    long result = 1;
    while (a < b) {
        result = (a+b)*result;
        a = a+1;
    }
    return result;
}

/* a in %rdi, b in %rsi
 *  loop_while:
 *      movl        $1, %eax
 *      jmp         .L2
 *  .L3:
 *      leaq        (%rdi, %rsi), %rdx
 *      imullq      %rdx, %rax
 *      addq        $1, %rdi
 *  .L2:
 *      cmpq        %rsi, %rdi
 *      jl          .L3
 *      rep; ret
 *
 * */

