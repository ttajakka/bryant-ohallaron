/* Problem 3.21 on page 219 */

// The following C code produces the assembly code below

long test(long x, long y) {
    long val = 8*x;
    if (y > 0) {
        if (x >= y)
            val = x & y;
        else
            val = y - x;
    } else if (y <= -2)
        val = x + y;
    return val;
}

/* The assembly code produced is
 *  
 *  x in %rdi, y in %rsi
 *  test:
 *      leaq    0(,%rdi,8), %rax        %rax contains 8*x 
 *      testq   %rsi, %rsi              
 *      jle     .L2                     if y <= 0, goto L2
 *      movq    %rsi, %rax              %rax contains y
 *      subq    %rdi, %rax              %rax contains y - x
 *      movq    %rdi, %rdx              %rdx contains x
 *      andq    %rsi, %rdx              %rdx contains x & y
 *      cmpq    %rsi, %rdi              
 *      cmovge  %rdx, %rax              if x >= y, return x & y
 *      ret                             else return y - x
 *  .L2:
 *      addq    %rsi, %rdi              %rdi contains x + y
 *      cmpq    $-2, %rsi               
 *      cmovle  %rdi, %rax              if y <= -2, return x + y
 *      ret                             else return 8*x
 *
 * */
