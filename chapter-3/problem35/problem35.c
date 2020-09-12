/* Problem 3.35 from page 254-255
 *
 * The following C code is supposed to generate the
 * assembly code below. */

long rfun(unsigned long x) {
    if (x == 0)
        return 0;
    unsigned long nx = x >> 2;
    long rv = rfun(nx);
    return x + rv;
}

/* long rfun(unsigned long x)
 * x in %rdi
 *  rfun:
 *      pushq   %rbx                save contents of %rbx to stack
 *      movq    %rdi, %rbx          A. store x in %rbx
 *      movl    $0, %eax            set return value to 0
 *      testq   %rdi, %rdi          
 *      je      .L2                 if x = 0, jump to .L2
 *      shrq    $2, $rdi            x = x >> 2 logical shift
 *      call    rfun                call rfun(x)
 *      addq    %rbx, %rax          %rax = x + rfun(x >> 2)
 *  .L2:
 *      popq    %rbx                
 *      ret
 * */
