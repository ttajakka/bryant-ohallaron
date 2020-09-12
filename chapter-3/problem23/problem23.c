/* Problem 3.23 from page 222
 *
 * The following C code produces the assembly code below.
 *
 * A. %rax holds x, %rcx holds y, %rdx holds n
 * B. GCC combines x += y and (*p)++ into x += y + 1
 *
 * */

long dw_loop(long x) {
    long y = x*x;
    long *p = &x;
    long n = 2*x;
    do {
        x += y;
        (*p)++;
        n--;
    } while (n > 0);
    return x;
}

/* x initially in %rdi
 * dw_loop:
 *  movq    %rdi, %rax              make x return value
 *  movq    %rdi, %rcx              set y = x
 *  imulq   %rdi, %rcx              set y = x*y (= x*x)
 *  leaq    (%rdi,%rdi), %rdx       set n = 2*x
 * .L2:
 *  leaq    1(%rcx,%rax), %rax      set x = x + y + 1
 *  subq    $1, %rdx                set n = n-1
 *  testq   %rdx, %rdx              
 *  jg  .L2                         if n > 0, goto .L2
 *  rep; ret
 *
 * */
