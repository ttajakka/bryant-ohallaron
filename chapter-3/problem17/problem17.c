/* Problem 3.17 from page 212
 *
 * We want to write a goto version of the following
 * piece of C code using the template
 *
 *      t = test-expr;
 *      if (t)
 *          goto true;
 *      else-statement
 *      goto done;
 *  true:
 *      then-statement
 *  done:
 *
 * A reason to choose one version over the other is if testing for t
 * is slower or faster than for !t.
 * */

long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y)
{
    long result;
    if (x < y) {
        lt_cnt++;
        result = y - x;
    }
    else {
        ge_cnt++;
        result = x - y;
    }
    return result;
}

// Here's the goto version

long gotodiff_se_alt(long x, long y)
{
    long result;
    if (x < y)
        goto x_l_y;
    ge_cnt++;
    result = x - y;
    goto done;
x_l_y:
    lt_cnt++;
    result = y - x;
done:
    return result;
}
