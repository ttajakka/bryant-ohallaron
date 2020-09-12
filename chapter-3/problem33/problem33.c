/* Problem 3.33 on page 246 
 *
 * The following C code produces the assembly code below. */

unsigned procprob(int a, short b, long* u, char* v) {
    *u += a;
    *v += b;
    return sizeof(a) + sizeof(b);
}

/* procprob:
 *  movslq  %edi, %rdi          sign extend double to quad
 *  addq    %rdi, (%rdx)        add 1st arg to value of 3rd arg
 *  addb    %sil, (%rcx)        add 2nd arg to value of 4th arg
 *  movl    $6, %eax            sizeof(a) + sizeof(b) = 6             
 *
 * */


 


