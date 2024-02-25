// Bitwise Operators
#include <stdio.h>

int print_binary(unsigned int inp) {

    // Traverse from 31st bit to the 0th bit (MSB to LSB)
    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0 ; i--) {
        printf("%u", (inp >> i) & 1);
    }
    printf("\n");
    return 0;
}

int main() {
    unsigned int a, b;
    printf("Enter two non-negative integers: ");
    scanf("%u %u", &a, &b);

    printf("Binary representation of %u is: ", a);
    print_binary(a);

    printf("Binary representation of %u is: ", b);
    print_binary(b);

    printf("\nBitwise AND (%u & %u) is: %u\n", a, b, a & b);
    print_binary(a & b);

    printf("Bitwise OR (%u | %u) is: %u\n", a, b, a | b);
    print_binary(a | b);

    printf("Bitwise XOR (%u ^ %u) is: %u\n", a, b, a ^ b);
    print_binary(a ^ b);

    printf("Bitwise NOT (~%u) is: %u\n", a, ~a);
    print_binary(~a);

    printf("Left Shift (%u << 1) is: %u\n", a, a << 1);
    print_binary(a << 1);

    printf("Right Shift (%u >> 1) is: %u\n", a, a >> 1);
    print_binary(a >> 1);

    return 0;
}