/* This program let's the user calculate 
 * different quantities involved in
 * Amdahl's Law.
 *
 * It is inspired by the practice problems
 * at the end of Chapter 1 of
 * Bryant & O'Hallaron.
 *
 */

#include <stdio.h>

int main() {
    int choice;
    float S, F, k;

    printf("\n  Amdahl's law states the following. Suppose\n  executing a process requires time T_out.\n  Suppose a part of the process requires a\n  fraction F of this time, and that we improve\n  its performance by a factor of k. The overall\n  execution time is now\n\n");
    printf("    T_new = T_old * [(1 - F) + F/k],\n\n");
    printf("  and so the speedup is\n\n");
    printf("         T_old           1\n");
    printf("    S = -------- = -------------\n");
    printf("         T_new      (1-F) + F/k\n");
    printf("\n  Choose one of the following.");
    printf("\n  1: Find S in terms of F and k.");
    printf("\n  2: Find k in terms of S and F.");
    printf("\n  3: Find F in terms of S and k.\n");

    printf("\n  Enter your choice: ");
    scanf("%i", &choice);

    if (choice == 1) {
        printf("  Enter F: ");
        scanf("%f", &F);
        printf("  Enter k: ");
        scanf("%f", &k);
        S = 1/((1-F) + F/k);
        printf("\n  The speedup is S = %.2f\n", S);
    }
    
    else if (choice == 2) {
        printf("  Enter S: ");
        scanf("%f", &S);
        printf("  Enter F: ");
        scanf("%f", &F);
        k = F/(F-1+1/S);
        printf("\n  The factor is k = %.2f\n", k);
    } 
    
    else if (choice == 3) {
        printf("  Enter S: ");
        scanf("%f", &S);
        printf("  Enter k: ");
        scanf("%f", &k);
        F = k*(1-S)/(S*(1-k));
        printf("\n  The fraction is F = %.2f\n", F);
    }


}
