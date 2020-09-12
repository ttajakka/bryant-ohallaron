#ifndef INT_TOOLS_H
#define INT_TOOLS_H

// Returns 0 if the multiplication x*y overflows, 1 if it doesn't
int tmult_ok(int, int);

// Returns 0 if the multiplication x*y overflows, 1 if it doesn't
int ltmult_ok(long, long);

#endif
