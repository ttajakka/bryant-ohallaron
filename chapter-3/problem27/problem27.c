/* Problem 3.27 form page 231 
 *
 * init-expr:       i = 2;
 * test-exrp:       i <= n;
 * update-expr:     i++;
 * body-statement:  result *= i;
 *
 *
 * */



long fact_for_while_gd_goto(long n) // gd = guarded do
{
    long result = 1;
    long i = 2;
    if (i > n)      // equivalently if (n <= 1)
        goto done;
loop:
    result *= i;
    i++;
    if (i <= n)
        goto loop;
done:
    return result;
}
