/* Problem 3.29 from page 232 */

// Example of for loop containing a continue statement
// Sum even numbers between 0 and 9
void sum_odds() {
    long sum = 0;
    long i;
    for (i = 0; i < 10; i++) {
        if (i & 1)
            continue;
        sum += i;
    }
}

// Translate sum_odds() naively into a while loop
void sum_odds_while_naive() {
    long sum = 0;
    long i = 0;
    while (i < 10) {
        if (i & 1)
            continue;       // when i = 1, i++ never happens
        sum += i;
        i++;           
    }
}

// Translate sum_odds() into a while loop more cleverly
void sum_odds_while() {
    long sum = 0;
    long i = 0;
    while (i < 10) {
        if (i & 1) {
            i++;
            continue;
        }
        sum += 1;
        i++;
    }
}

// Book solution, works more generally:
void sum_odds_while_official() {
    long sum = 0;
    long i = 0;
    while (i < 10) {
        if (i & 1)
            goto update;
        sum += 1;
    update:
        i++;
    }
}
