/* Problem 3.26 from page 228
 *
 * The following C code should produce the assembly code below
 * */

long fun_a(unsigned long x) {
    long val = 0;
    while (x != 0) {
        val = val^x;
        x = x>>1;
    }
    return val&1;
}



/* long fun_a(unsigned long x)
 * x in %rdi
 *  fun_a:
 *      movl    $0, %eax        val = 0
 *      jmp     .L5             jump-to-middle
 *  .L6:
 *      xorq    %rdi, %rax      val = val ^ x
 *      shrq    %rdi            x >> 1 logical (x is unsigned)
 *  .L5:
 *      test1   %rdi, %rdi      test x
 *      jne     .L6             if x != 0 goto .L6
 *      andl    $1, %eax        return & 0x1
 *      ret
 * 
 * */
