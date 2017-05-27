#include <stdlib.h>
#include <stdio.h>

#include "binary.h"

int main(int argc, char* argv[]) {
    printf("Argument number: %d\n", argc);
    printf("Program name: %s\n", argv[0]);
    printf("First byte: %s\n", argv[1]);
    printf("Second byte: %s\n", argv[2]);
    printf("Third byte: %s\n", argv[3]);
    printf("Forth byte: %s\n", argv[4]);

    uint32_t first = atoi(argv[1]);
    uint32_t second = atoi(argv[2]);
    uint32_t third = atoi(argv[3]);
    uint32_t forth = atoi(argv[4]);

    uint32_t binary_ip = ip_to_bin(first, second, third, forth);
    print_binary_ip(binary_ip);

    return 0;
}