/* Problem 3.38 from page 259 
 *
 * The following C code should produce the assembly 
 * code below. */
#define M 5            
#define N 7

long P[M][N];           // Each little array in P has size 7
long Q[N][M];           // Each little array in Q has size 5

long sum_element(long i, long j) {
    return P[i][j] + Q[j][i];
}

/* long sum_element(long i, long j)
 * i in %rdi, j in %rsi
 *  sum_element:
 *      leaq  0(,%rdi,8), %rdx       %rdx = 8i
 *      subq  %rdi, %rdx             %rdx = 7i
 *      addq  %rsi, %rdx             %rdx = 7i + j
 *      leaq  (%rsi,%rsi,4), %rax    %rax = 5j
 *      addq  %rax, %rdi             %rdi = i + 5j
 *      movq  Q(,%rdi,8), %rax       %rax = *(Q + 8(5j+i))
 *      addq  P(,%rdx,8), %rax       %rax = *(P + 8(7i+j)) + *(Q + 8(5j+i))
 *      ret
 * */

