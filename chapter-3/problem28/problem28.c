/* Problem 3.28 from page 231
 * 
 * The following C code should produce the assembly code below. 
 *
 * The code reverses the bits of x. 
 *
 * There is no initial test or initial jump because the test
 * condition cannot fail at the first iteration. */

long fun_b(unsigned long x) {
    long val = 0;
    long i;
    for (i = 64; i != 0; i--) {
        val = (x & 0x1) | 2*val;
        x = x >> 1;
    }
    return val;
}

/* long fun_b(unsigned long x)
 * x in %rdi
 *  fun_b:
 *      movl    $64, %edx           i = 64?
 *      movl    $0, %eax            val = 0
 *  .L10:
 *      movq    %rdi, %rcx                    
 *      andl    $1, %ecx            %rcx = (last bit of x)
 *      addq    %rax, %rax          
 *      orq     %rcx, %rax          val = (last bit of x) | 2*val 
 *      shrq    %rdi                x >> 1
 *      subq    $1, %rdx            i--
 *      jne     .L10                if i != 0 goto .L10            
 *      rep; ret        
 *
 * */
