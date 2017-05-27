#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void print_32b_code(uint32_t code) {
    for (uint32_t i = 0; i < 32; i++) {
        bool bit = code & (0x80000000 >> i);
        printf("%d", bit);
    }
    printf("\n");
}

uint32_t ip_to_bin(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint32_t binary_ip = 0;
    binary_ip = binary_ip | d;
    binary_ip = binary_ip | (c << 8);
    binary_ip = binary_ip | (b << 16);
    binary_ip = binary_ip | (a << 24);
    return binary_ip;
}

void print_binary_ip(uint32_t binary_ip) {
    for (uint32_t i = 0; i < 32; i++) {
        bool bit = binary_ip & (0x80000000 >> i);
        printf("%d", bit);
        if (i%8 == 7 && i < 31)
            printf(".");
    }
    printf("\n");
}
