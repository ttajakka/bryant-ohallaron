/* Problem 3.42 from page 269 */

//declare structure ELE
struct ELE {
    long v;
    struct ELE *p;
};

//define function fun
long fun(struct ELE *ptr) {
    long val = 0;
    while (ptr != 0) {
        val += ptr->v;
        ptr = ptr->p;
    }
    return val;
}

/* Function fun generates the following assembly code.
 *  long fun(struct ELE *ptr)
 *  ptr in %rdi
 *  fun:
 *      movl      $0, %eax          %rax = 0
 *      jmp       .L2
 *  .L3:
 *      addq      (%rdi), %rax      %rax += ptr->v
 *      movq      8(%rdi), %rdi     *ptr = ptr->p
 *  .L2:
 *      testq     %rdi, %rdi        
 *      jne       .L3               if ptr != , goto .L3
 *      rep; ret
 *
 *
 * B. The data structure implements a linked list where
 *    each node contains a long and the pointer to the next node.
 *    the function fun takes as input a node in the linked list,
 *    and outputs the sum of the values of the integers in each node
 *    from the node to the end of the list.
 * */
