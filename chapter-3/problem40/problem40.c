/* Problem 3.40 from page 262 
 *
 * The following two C functions should produce the 
 * assembly code below. */

#define N 16
typedef int fix_matrix[N][N];

/* Set all diagonal elements to val */
void fix_set_diag(fix_matrix A, int val) {
    long i;
    for (i = 0; i < N; i++)
        A[i][i] = val;
}


void fix_set_diag_opt(fix_matrix A, int val) {
    int *Aptr = &A[0][0];
    long i = 0;
    long iend = N*(N+1);
    do {
        *(Aptr + i) = val;
        i += (N+1);
    } while (i != iend);
}





/* fix_set_diag:
 * void fix_set_diag(fix_matrix A, int val)
 * A in %rdi, val in %rsi
 *   movl     $0, $eax
 * .L13:
 *   movl     %esi, (%rdi,%rax)
 *   addq     $68, %rax
 *   cmpq     $1088, %rax               don't compare pointers but indices
 *   jne      .L13
 *   rep; ret
 *
 * */
