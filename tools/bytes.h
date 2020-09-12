#ifndef BYTES_H
#define BYTES_H

#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t);

void byte_to_bits(unsigned char);

void show_bits(byte_pointer, size_t);

void show_short(short);

void show_short_bits(short);

void show_int(int);

void show_char_bits(char);

void show_int_bits(int);

void show_float(float);

void show_pointer(void*);

#endif
