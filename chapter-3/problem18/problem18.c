/* Problem 3.18 from page 213
 *
 * The following C code will produce the assembly
 * code below. */

long test(long x, long y, long z) {
    long val = x + y + z;
    if (x < -3) {
        if (y < z)
            val = x*y;
        else
            val = y*z;
    } else if (x > 2)
        val = x*z;
    return val;
}



/* 
    long test(long x, long y, long z)
    x in %rdi, y in %rsi, z in %rdx
test:
    leaq    (%rdi,%rsi), %rax           %rax contains x + y
    addq    %rdx, %rax                  %rax contains x + y + z
    cmpq    $-3, %rdi                   compare x and -3
    jge     .L2                         if x >= -3, goto L2
    cmpq    %rdx, %rsi                  compare y and z
    jge     .L3                         if y >= z, goto 
    movq    %rdi, %rax                  %rax contains x
    imulq   %rsi, %rax                  %rax contains x*y
    ret                                 return x*y
.L3
    movq    %rsi, %rax                  %rax contains y
    imulq   %rdx, %rax                  %rax contains y*z
    ret                                 return y*z
.L2:
    cmpq    $2, %rdi                    compare x and 2
    jle     .L4                         if x <= 2 goto L4
    movq    %rdi, %rax                  %rax contains x
    imulq   %rdx, %rax                  %rax contains x*z 
.L4
    rep; ret                            return x + y + z


*/
