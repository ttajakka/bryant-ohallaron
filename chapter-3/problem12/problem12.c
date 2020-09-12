/* Problem 3.12 from page 200
 *
 * The C code below can be implemented in assembly as follows
 *
x in %rdi, y in %rsi, qp in %rdx, rp in %rcx
uremdiv:
    movq    %rdx, %r8       // save qp to %r8
    movq    %rdi, %rax      // move x to lower 8 bytes of dividend
    movq    $0, %edx        // zero-extend dividend
    divq    %rsi            // 129-bit divide by y
    movq    %rax, (%r8)     // store quotient in qp
    movq    %rdx, (%rcx)    // store remainder in rp
 * 
 * Comment: movq    $0, %edx automatically fills the upper bytes of %rdx
 *          with 0's
 * */

void uremdiv(unsigned long x, unsigned long y,
                unsigned long *qp, unsigned long *rp) {
    unsigned long q = x/y;
    unsigned long r = x%y;
    *qp = q;
    *rp = r;
}
