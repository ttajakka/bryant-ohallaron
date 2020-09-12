#include "bitops.h"
#include "../../bytes/bytes.h"

void replace_last_byte_test() {
    unsigned x, y;
    for (int i = 0; i < 20; i++) {
        x = 0xABC + i*543219;
        y = 0xe7f2a110 - i*428519;
        printf("x = %x, y = %x, combined = %x\n", x, y, replace_last_byte(x,y));
    }
}

void any_odd_one_test() {
    unsigned y;
    for (unsigned x = 0x74fc; x < 2000000000; x += 100040567) {
        y = 0xaaeeaaaa & x;
        printf("\ny = %u, any odd one? %i\n", y, any_odd_one(y));
        show_int_bits(y);
    }
}

void odd_ones_test() {
    for (unsigned x = 0xABC; x < 100000; x += 5000) {
        printf("\nx = %u, odd ones? %i\n", x, odd_ones(x));
        show_int_bits(x);
    }
}

void leftmost_one_test() {
    int mask = 0;
    for (unsigned x = 0x1; x < 65000; x += 12345){
        mask = leftmost_one(x);
        printf("\nx = %u, mask = %d\n", x, mask);
        show_int_bits(x);
        show_int_bits(mask);
    }
    for (unsigned x = 0x000148ec; x < 4000000000; x += 800000000){
        mask = leftmost_one(x);
        printf("\nx = %u, mask = %d\n", x, mask);
        show_int_bits(x);
        show_int_bits(mask);
    }

}

int main() {
    //replace_last_byte_test();
    //any_odd_one_test();
    //odd_ones_test();
    leftmost_one_test();
}
