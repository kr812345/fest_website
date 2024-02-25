#include <stdio.h>

void swap_with_temp(int *a, int *b);
void swap_with_add_sub(int *a, int *b);
void swap_with_mult_div(int *a, int *b);
void swap_with_xor(int *a, int *b);
void swap_with_pointers(int *a, int *b);

int main() {
    int x = 10, y = 20;

    printf("Original values: x = %d, y = %d\n", x, y);

    swap_with_temp(&x, &y);
    printf("After swap_with_temp: x = %d, y = %d\n", x, y);

    swap_with_add_sub(&x, &y);
    printf("After swap_with_add_sub: x = %d, y = %d\n", x, y);

    swap_with_mult_div(&x, &y);
    printf("After swap_with_mult_div: x = %d, y = %d\n", x, y);

    swap_with_xor(&x, &y);
    printf("After swap_with_xor: x = %d, y = %d\n", x, y);

    swap_with_pointers(&x, &y);
    printf("After swap_with_pointers: x = %d, y = %d\n", x, y);

    return 0;
}

void swap_with_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_with_add_sub(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_with_mult_div(int *a, int *b) {
    if (*a != 0 && *b != 0) {
        *a = *a * *b;
        *b = *a / *b;
        *a = *a / *b;
    }
}

void swap_with_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_with_pointers(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}
