/* Problem 3.48 from page 288 
 *
 * Condsider the following functions. */

#include <stdio.h>
#include <string.h>

int len(char *s) {
    return strlen(s);
}

void iptoa(char *s, long *p) {
    long val = *p;
    sprintf(s, "%ld", val);
}

int intlen(long x) {
    long v;
    char buf[12];
    v = x;
    iptoa(buf, &v);
    return len(buf);
}

/* GCC generates the following portion of assembly code for
 * intlen, first without stack protection, second with stack
 * protection. 
 *
 * (a) without protection
 *
 * int intlen(long x)
 * x in %rdi
 *  intlen:
 *      subq    $40, %rsp
 *      movq    %rdi, 24(%rsp)
 *      leaq    24(%rsp), %rsi
 *      movq    %rsp, %rdi
 *      call    iptoa
 *
 *
 * (b) with protection
 *
 * int intlen(long x)
 * x in %rdi
 *  intlen:
 *      subq    $56, %rsp
 *      movq    %fs:40, %rax
 *      movq    %rax, 40(%rsp)
 *      xorl    %eax, %eax
 *      movq    %rdi, 8(%rsp)
 *      leaq    8(%rsp), %rsi
 *      leaq    16(%rsp), %rdi
 *      call    iptoa
 *
 *
 * A. In version (a), buf is at the top of the stack, v is 24 bytes
 *    below the top.
 *
 *    In version (b), buf is 16 bytes from the top, v is 8 bytes
 *    from the top, and the canary value is 40 bytes from the top.
 *
 * B. Since the value of v is before buf in the stack, a potential
 *    buffer overwrite in iptoa won't corrupt v.
 *
 * */
