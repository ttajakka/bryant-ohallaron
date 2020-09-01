#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void byte_to_bits(unsigned char byte) {
    char out[8];
    strcpy(out, "");
    for (int i = 0; i < 8; i++) {
        if ((byte >> i) & 1) {
            char tmp[8];
            strcpy(tmp, "1");
            strcat(tmp, out);
            strcpy(out, tmp);
        } else {
            char tmp[8];
            strcpy(tmp, "0");
            strcat(tmp, out);
            strcpy(out, tmp);
        }
    }
    printf("%s ", out);
}

void show_bits(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++) {
        byte_to_bits(start[i]);
    }
    printf("\n");
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_short_bits(short x) {
    show_bits((byte_pointer) &x, sizeof(short));
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_char_bits(char x) {
    show_bits((byte_pointer) &x, sizeof(char));
}

void show_int_bits(int x) {
    show_bits((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

