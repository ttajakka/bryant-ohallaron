/* Problem 3.41 from page 268
 *
 * Consider the following C code. */

//define a structure
struct prob {
    int *p;
    struct {
        int x;
        int y;
    } s;
    struct prob *next;
};

//does something to structure prob
void sp_init(struct prob *sp) {
    sp->s.x = sp->s.y;
    sp->p = &(sp->s.x);
    sp->next = sp;
}

/* A. The byte offsets in structure prob are:
 *
 *     p:   0
 *   s.x:   8
 *   s.y:   12
 *  next:   16
 *
 * B. Struct requires 24 bytes in total.
 *
 * C. The code for sp_init produces the following assembly code
 *  void sp_init(struct prob *sp)
 *  sp in %rdi
 *  sp_init:
 *      movl    12(%rdi), %eax      copy sp->s.y to %eax
 *      movl    %eax, 8(%rdi)       copy sp->s.y to sp->s.x
 *      leaq    8(%rdi), %rax       copy &(sp->s.x) to %rax
 *      movq    %rax, (%rdi)        copy &(sp->s.y) to sp->p
 *      movq    %rdi, 16(%rdi)      copy sp to sp->next
 *      ret
 *
 * */
