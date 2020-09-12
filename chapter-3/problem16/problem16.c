/* Problem 3.16 from page 212
 *
 * When given the C code for cond below, gcc generates the
 * assembly code
 *
    void cond(long a, long *p)
    a in %rdi, p in %rsi
cond:
    testq   %rsi, %rsi
    je      .L1
    cmpq    %rdi, (%rsi)
    jge     .L1
    movq    %rdi, (%rsi)
.L1
    rep; ret
 *
 * The C code for cond_goto implements the same functionality
 * in a way that follows the structure of this assembly code
 * 
 * */

void cond(long a, long *p)
{
    if (p && a > *p)
        *p = a;
}


void cond_goto(long a, long *p)
{
    if (p == 0)
        goto ret;
    if (*p >= a)
        goto ret;
    *p = a;
    return;
ret:
    return;
}
