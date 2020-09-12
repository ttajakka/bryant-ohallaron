void decode1(long *xp, long *yp, long *zp) {
    // My version, slightly different assembly code than in the book
    // but same effect
    //long temp = *yp;
    //*yp = *xp;
    //*xp = *zp;
    //*zp = temp;
    //
    // Book version
    long x = *xp;
    long y = *yp;
    long z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;
}
