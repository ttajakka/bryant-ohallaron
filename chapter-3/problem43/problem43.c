/* Problem 3.43 form page 272 
 *
 * In the following C code, we vary "expr" and "type", 
 * and list below the generated assembly code for the
 * function get. */

typedef union {
    struct {
        long   u;
        short  v;
        char   w;
    } t1;
    struct {
        int a[2];
        char  *p;
    } t2;
} u_type;

void get(u_type *up, char *dest) {
    *dest = *up->t2.p;
}

int main() {}

/* Suppose up is in %rdi, dest is in %rsi
 * 
 * EXPR                 type    Assembly code
 * -----------------------------------------------
 * up->t1.u             long    movq (%rdi), %rax
 *                              movq %rax, (%rsi)
 *
 * up->t1.v             short   movw 8(%rdi), %ax
 *                              movw %ax, (%rsi)
 *
 * &up->t1.w            char*   addq $10, %rdi        
 *                              movq %rdi, (%rsi)
 *
 * up->t2.a             int*    movq %rdi, (%rsi)
 *
 * up->t2.a[up->t1.u]   int     movq (%rdi), %rax           both arguments
 *                              movl (%rdi,%rax,4), %eax    of mov cannot be
 *                              movl %eax, (%rsi)           memory addresses   
 *                                                          
 * *up->t2.p            char    movq 8(%rdi), %rax
 *                              movb (%rax), %al
 *                              movb %al, (%rsi)
 *
 * */
